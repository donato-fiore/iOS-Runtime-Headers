// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUSCRIPTEXECUTIONCONTEXT_H
#define SUSCRIPTEXECUTIONCONTEXT_H

@class ISStoreURLOperation, NSString, NSNumber;
@protocol ISStoreURLOperationDelegate, SUWebViewDelegate;

#import <Foundation/Foundation.h>

#import "SUWebView.h"

@interface SUScriptExecutionContext : NSObject <ISStoreURLOperationDelegate, SUWebViewDelegate>

 {
    ISStoreURLOperation *_loadOperation;
    SUWebView *_webView;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) *OpaqueJSContext globalExecutionContext;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentage;
@property (readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentageCachedResponses;
@property (readonly, nonatomic) NSNumber *metricsLoadURLSessionDuration;
@property (readonly) Class superclass;
@property (readonly, nonatomic) id *windowScriptObject;


-(BOOL)evaluateData:(id)arg0 MIMEType:(id)arg1 textEncodingName:(id)arg2 baseURL:(id)arg3 ;
-(id)_newLoadOperation;
-(id)_webView;
-(id)parentViewControllerForWebView:(id)arg0 ;
-(void)_cancelLoadOperation;
-(void)callWebScriptMethod:(id)arg0 withArguments:(id)arg1 ;
-(void)dealloc;
-(void)evaluateScriptAtURL:(id)arg0 ;
-(void)evaluateScriptWithURLBagKey:(id)arg0 ;
-(void)operation:(id)arg0 failedWithError:(id)arg1 ;
-(void)operation:(id)arg0 finishedWithOutput:(id)arg1 ;


@end


#endif