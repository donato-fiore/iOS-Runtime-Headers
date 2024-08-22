// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUSCRIPTOBJECT_H
#define SUSCRIPTOBJECT_H

@class NSMutableArray, NSLock, NSMutableSet, NSString, WebFrame;

#import <Foundation/Foundation.h>

#import "SUScriptObjectInvocationBatch.h"
#import "SUScriptNativeObject.h"
#import "SUScriptObject.h"
#import "SUClientInterface.h"

@interface SUScriptObject : NSObject {
    NSMutableArray *_eventListeners;
    SUScriptObjectInvocationBatch *_invocationBatch;
    NSLock *_lock;
    SUScriptNativeObject *_nativeObject;
    SUScriptObject *_parentScriptObject;
    NSMutableSet *_scriptObjects;
    BOOL _checkOutWhenHidden;
    BOOL _isVisible;
    NSString *_className;
}


@property (readonly, getter=_className) NSString *className;
@property (readonly, retain) SUClientInterface *clientInterface;
@property (readonly) *OpaqueJSContext copyJavaScriptContext;
@property (retain) SUScriptNativeObject *nativeObject;
@property SUScriptObject *parentScriptObject;
@property (readonly) NSMutableArray *scriptAttributeKeys;
@property (readonly) BOOL sourceIsTrusted;
@property (readonly, retain) WebFrame *webFrame;


+(BOOL)isKeyExcludedFromWebScript:(char *)arg0 ;
+(BOOL)isSelectorExcludedFromWebScript:(SEL)arg0 ;
+(id)webScriptNameForKey:(char *)arg0 ;
+(id)webScriptNameForKeyName:(id)arg0 ;
+(id)webScriptNameForSelector:(SEL)arg0 ;
+(void)initialize;
-(BOOL)equals:(id)arg0 ;
-(BOOL)isVisible;
-(BOOL)scriptObjectIsCheckedIn:(id)arg0 ;
-(id)DOMElementWithElement:(id)arg0 ;
-(id)_copyListenersForName:(id)arg0 ;
-(id)copyObjectForScriptFromPoolWithClass:(Class)arg0 ;
-(id)init;
-(id)invocationBatch:(BOOL)arg0 ;
-(id)newImageWithURL:(id)arg0 ;
-(id)newImageWithURL:(id)arg0 scale:(CGFloat)arg1 ;
-(id)parentViewController;
-(id)stringRepresentation;
-(id)viewControllerFactory;
-(id)webThreadMainThreadBatchProxy;
-(void)_checkOutAfterVisibilityChange;
-(void)addListenerForEventWithName:(id)arg0 callback:(id)arg1 useCapture:(BOOL)arg2 ;
-(void)checkInScriptObject:(id)arg0 ;
-(void)checkInScriptObjects:(id)arg0 ;
-(void)checkOutBatchTarget:(id)arg0 ;
-(void)checkOutScriptObject:(id)arg0 ;
-(void)checkOutScriptObjects:(id)arg0 ;
-(void)dealloc;
-(void)didPerformBatchedInvocations;
-(void)dispatchEvent:(id)arg0 forName:(id)arg1 ;
-(void)dispatchEvent:(id)arg0 forName:(id)arg1 synchronously:(BOOL)arg2 ;
-(void)finalizeForWebScript;
-(void)loadImageWithURL:(id)arg0 completionBlock:(id)arg1 ;
-(void)lock;
-(void)removeListenerForEventWithName:(id)arg0 callback:(id)arg1 useCapture:(BOOL)arg2 ;
-(void)setVisible:(BOOL)arg0 ;
-(void)tearDownUserInterface;
-(void)unlock;
-(void)willPerformBatchedInvocations;


@end


#endif