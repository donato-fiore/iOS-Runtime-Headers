// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFWKWEBVIEWCAPTURER_H
#define WFWKWEBVIEWCAPTURER_H

@class NSString, WKNavigation, WKWebView;
@protocol WKNavigationDelegate;

#import <Foundation/Foundation.h>

#import "WFCoercionOptions.h"
#import "WFWebResource.h"

@interface WFWKWebViewCapturer : NSObject <WKNavigationDelegate>



@property (retain, nonatomic) WFCoercionOptions *coercionOptions; // ivar: _coercionOptions
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property BOOL didAttemptToLoadRemoteResources; // ivar: _didAttemptToLoadRemoteResources
@property BOOL didPresentSmartPrompt; // ivar: _didPresentSmartPrompt
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) WKNavigation *pageNavigation; // ivar: _pageNavigation
@property (readonly) Class superclass;
@property BOOL userDidAllowLoadingExternalResources; // ivar: _userDidAllowLoadingExternalResources
@property (retain, nonatomic) WFWebResource *webResource; // ivar: _webResource
@property (retain, nonatomic) WKWebView *webView; // ivar: _webView


+(id)deniedExternalResourcesLoadError;
+(void)loadWebResource:(id)arg0 withSize:(struct CGSize )arg1 configuration:(id)arg2 coercionOptions:(id)arg3 completionHandler:(id)arg4 ;
-(id)errorWithErrorCode:(NSInteger)arg0 ;
-(id)initWithSize:(struct CGSize )arg0 configuration:(id)arg1 coercionOptions:(id)arg2 ;
-(void)_webView:(id)arg0 contentRuleListWithIdentifier:(id)arg1 performedAction:(id)arg2 forURL:(id)arg3 ;
-(void)generateBlockingContentRuleListWithCompletionHandler:(id)arg0 ;
-(void)loadWebResource:(id)arg0 completionHandler:(id)arg1 ;
-(void)webView:(id)arg0 didFailNavigation:(id)arg1 withError:(id)arg2 ;
-(void)webView:(id)arg0 didFailProvisionalNavigation:(id)arg1 withError:(id)arg2 ;
-(void)webView:(id)arg0 didFinishNavigation:(id)arg1 ;


@end


#endif