// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFWKWEBVIEWCAPTURER_H
#define WFWKWEBVIEWCAPTURER_H

@class NSString, WKNavigation, WKWebView;
@protocol WKNavigationDelegate;

#import <Foundation/Foundation.h>

#import "WFWebResource.h"

@interface WFWKWebViewCapturer : NSObject <WKNavigationDelegate>



@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) WKNavigation *pageNavigation; // ivar: _pageNavigation
@property (readonly) Class superclass;
@property (retain, nonatomic) WFWebResource *webResource; // ivar: _webResource
@property (retain, nonatomic) WKWebView *webView; // ivar: _webView


+(void)loadWebResource:(id)arg0 withSize:(struct CGSize )arg1 configuration:(id)arg2 completionHandler:(id)arg3 ;
-(id)initWithSize:(struct CGSize )arg0 configuration:(id)arg1 ;
-(void)loadWebResource:(id)arg0 completionHandler:(id)arg1 ;
-(void)webView:(id)arg0 didFailNavigation:(id)arg1 withError:(id)arg2 ;
-(void)webView:(id)arg0 didFailProvisionalNavigation:(id)arg1 withError:(id)arg2 ;
-(void)webView:(id)arg0 didFinishNavigation:(id)arg1 ;


@end


#endif