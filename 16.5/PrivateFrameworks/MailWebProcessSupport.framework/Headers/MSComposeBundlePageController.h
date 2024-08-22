// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSCOMPOSEBUNDLEPAGECONTROLLER_H
#define MSCOMPOSEBUNDLEPAGECONTROLLER_H

@class NSMutableArray, EFProcessTransaction, WKWebProcessPlugInBrowserContextController, NSString, JSValue, JSContext;
@protocol WKWebProcessPlugInLoadDelegate, MSBundlePageController, MSComposeBodyFieldController, MSRichLinkGeneration, MSComposeBodyFieldObserver, WKWebProcessPlugIn;

#import <Foundation/Foundation.h>


@interface MSComposeBundlePageController : NSObject <WKWebProcessPlugInLoadDelegate, MSBundlePageController, MSComposeBodyFieldController>

 {
    NSUInteger _performOnPageSuspendCount;
    NSMutableArray *_blocksToPerformOnPage;
    id<MSRichLinkGeneration> *_linkGeneratorProxy;
    EFProcessTransaction *_webContentProcessTransaction;
}


@property (readonly, nonatomic) WKWebProcessPlugInBrowserContextController *controller; // ivar: _controller
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) JSValue *jsBodyField; // ivar: _jsBodyField
@property (readonly, nonatomic) JSContext *jsContext; // ivar: _jsContext
@property (readonly, nonatomic) NSObject<MSComposeBodyFieldObserver> *observerProxy;
@property (readonly, weak, nonatomic) NSObject<WKWebProcessPlugIn> *plugIn; // ivar: _plugIn
@property (readonly) Class superclass;


-(id)_linkGeneratorProxy;
-(id)createRichLink:(id)arg0 ;
-(id)initWithPlugIn:(id)arg0 contextController:(id)arg1 ;
-(id)webProcessPlugInBrowserContextController:(id)arg0 frame:(id)arg1 willSendRequestForResource:(NSUInteger)arg2 request:(id)arg3 redirectResponse:(id)arg4 ;
-(id)willSendRequest:(id)arg0 ;
-(void)changeQuoteLevelBy:(NSInteger)arg0 withUndoActionName:(id)arg1 ;
-(void)initializeBodyField:(id)arg0 ;
-(void)initializeGlobalObject;
-(void)insertRichLinkWithURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)invalidate;
-(void)makeRichLinkFromSelection;
-(void)performBodyFieldMethodOnPage:(id)arg0 withArguments:(id)arg1 ;
-(void)performOnPage:(id)arg0 ;
-(void)removeRichLinkFromSelection;
-(void)resumePerformOnPage;
-(void)stripCustomBodyIdentifiers;
-(void)suspendPerformOnPage;
-(void)webProcessPlugInBrowserContextController:(id)arg0 didFinishDocumentLoadForFrame:(id)arg1 ;
-(void)webProcessPlugInBrowserContextController:(id)arg0 globalObjectIsAvailableForFrame:(id)arg1 inScriptWorld:(id)arg2 ;


@end


#endif