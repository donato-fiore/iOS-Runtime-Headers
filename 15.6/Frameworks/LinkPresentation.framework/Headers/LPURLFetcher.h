// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LPURLFETCHER_H
#define LPURLFETCHER_H

@class WKWebView, NSURL, NSString;
@protocol WKNavigationDelegate;


#import "LPFetcher.h"

@interface LPURLFetcher : LPFetcher <WKNavigationDelegate>

 {
    id *_completionHandler;
    WKWebView *_webView;
}


@property (retain, nonatomic) NSURL *URL; // ivar: _URL
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) Class responseClass; // ivar: _responseClass
@property (readonly) Class superclass;


-(void)_completedWithData:(id)arg0 MIMEType:(id)arg1 error:(id)arg2 ;
-(void)_failedWithErrorCode:(NSInteger)arg0 underlyingError:(id)arg1 ;
-(void)cancel;
-(void)fetchWithConfiguration:(id)arg0 completionHandler:(id)arg1 ;
-(void)webView:(id)arg0 decidePolicyForNavigationAction:(id)arg1 decisionHandler:(id)arg2 ;
-(void)webView:(id)arg0 decidePolicyForNavigationResponse:(id)arg1 decisionHandler:(id)arg2 ;
-(void)webView:(id)arg0 didFailNavigation:(id)arg1 withError:(id)arg2 ;
-(void)webView:(id)arg0 didFailProvisionalNavigation:(id)arg1 withError:(id)arg2 ;
-(void)webView:(id)arg0 didFinishNavigation:(id)arg1 ;
-(void)webViewWebContentProcessDidTerminate:(id)arg0 ;


@end


#endif