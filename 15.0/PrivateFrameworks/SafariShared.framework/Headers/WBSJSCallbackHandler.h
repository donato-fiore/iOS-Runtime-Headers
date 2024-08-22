// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSJSCALLBACKHANDLER_H
#define WBSJSCALLBACKHANDLER_H

@class JSValue;
@protocol WBSJSCallbackHandlerErrorReporter;

#import <Foundation/Foundation.h>


@interface WBSJSCallbackHandler : NSObject {
    *OpaqueJSValue _callbackFunction;
    *OpaqueJSValue _rejectFunction;
    id<WBSJSCallbackHandlerErrorReporter> *_errorReporter;
    JSRetainPtr<OpaqueJSContext *> _globalContext;
}


@property (readonly, nonatomic) *OpaqueJSContext globalContext;
@property (readonly, nonatomic) JSValue *jsValue;


-(id)call;
-(id)callWithArgument:(id)arg0 ;
-(id)callWithArgument:(id)arg0 argument:(id)arg1 ;
-(id)callWithArgument:(id)arg0 argument:(id)arg1 argument:(id)arg2 ;
-(id)initWithCallbackFunction:(struct OpaqueJSValue *)arg0 errorReporter:(id)arg1 context:(struct OpaqueJSContext *)arg2 ;
-(id)initWithErrorReporter:(id)arg0 context:(struct OpaqueJSContext *)arg1 ;
-(id)initWithPromiseResolveFunction:(struct OpaqueJSValue *)arg0 rejectFunction:(struct OpaqueJSValue *)arg1 context:(struct OpaqueJSContext *)arg2 ;
-(void)dealloc;
-(void)reportErrorWithMessage:(id)arg0 ;


@end


#endif