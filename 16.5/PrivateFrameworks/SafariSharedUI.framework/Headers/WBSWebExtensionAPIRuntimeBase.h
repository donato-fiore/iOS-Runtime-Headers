// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSWEBEXTENSIONAPIRUNTIMEBASE_H
#define WBSWEBEXTENSIONAPIRUNTIMEBASE_H

@class JSValue, NSString;
@protocol WBSJSCallbackHandlerErrorReporter;


#import "WBSWebExtensionAPIObject.h"

@interface WBSWebExtensionAPIRuntimeBase : WBSWebExtensionAPIObject <WBSJSCallbackHandlerErrorReporter>

 {
    JSValue *_lastError;
    BOOL _lastErrorAccessed;
    BOOL _processingUserGesture;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)reportErrorForCallbackHandler:(id)arg0 withMessage:(id)arg1 context:(struct OpaqueJSContext *)arg2 ;


@end


#endif