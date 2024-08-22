// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef JSCONTEXT_H
#define JSCONTEXT_H

@class NSString;

#import <Foundation/Foundation.h>

#import "JSValue.h"
#import "JSVirtualMachine.h"

@interface JSContext : NSObject {
    RetainPtr<JSVirtualMachine> m_virtualMachine;
    *OpaqueJSContext m_context;
    Strong<JSC::JSObject, JSC::ShouldStrongDestructorGrabLock::No> m_exception;
    WeakObjCPtr<id<JSModuleLoaderDelegate>> m_moduleLoaderDelegate;
}


@property (retain) JSValue *exception;
@property (copy) id *exceptionHandler; // ivar: _exceptionHandler
@property (readonly) JSValue *globalObject;
@property (nonatomic, getter=isInspectable) BOOL inspectable;
@property (copy) NSString *name;
@property (readonly) JSVirtualMachine *virtualMachine;


+(id)contextWithJSGlobalContextRef:(struct OpaqueJSContext *)arg0 ;
+(id)currentArguments;
+(id)currentCallee;
+(id)currentContext;
+(id)currentThis;
-(?)beginCallbackWithData:(?)arg0 calleeValue:(?)arg1 thisValue:(?)arg2 argumentCountarguments;
-(BOOL)_includesNativeCallStackWhenReportingExceptions;
-(BOOL)_remoteInspectionEnabled;
-(BOOL)boolFromNotifyException:(struct OpaqueJSValue *)arg0 ;
-(id)dependencyIdentifiersForModuleJSScript:(id)arg0 ;
-(id)evaluateJSScript:(id)arg0 ;
-(id)evaluateScript:(id)arg0 ;
-(id)evaluateScript:(id)arg0 withSourceURL:(id)arg1 ;
-(id)init;
-(id)initWithGlobalContextRef:(struct OpaqueJSContext *)arg0 ;
-(id)initWithVirtualMachine:(id)arg0 ;
-(id)moduleLoaderDelegate;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(id)valueFromNotifyException:(struct OpaqueJSValue *)arg0 ;
-(id)wrapperForJSObject:(struct OpaqueJSValue *)arg0 ;
-(id)wrapperForObjCObject:(id)arg0 ;
-(id)wrapperMap;
-(struct OpaqueJSContext *)JSGlobalContextRef;
-(struct __CFRunLoop *)_debuggerRunLoop;
-(void)_setDebuggerRunLoop:(struct __CFRunLoop *)arg0 ;
-(void)_setITMLDebuggableType;
-(void)_setIncludesNativeCallStackWhenReportingExceptions:(BOOL)arg0 ;
-(void)_setRemoteInspectionEnabled:(BOOL)arg0 ;
-(void)dealloc;
-(void)endCallbackWithData:(*void)arg0 ;
-(void)ensureWrapperMap;
-(void)notifyException:(struct OpaqueJSValue *)arg0 ;
-(void)setModuleLoaderDelegate:(id)arg0 ;
-(void)setObject:(id)arg0 forKeyedSubscript:(id)arg1 ;


@end


#endif