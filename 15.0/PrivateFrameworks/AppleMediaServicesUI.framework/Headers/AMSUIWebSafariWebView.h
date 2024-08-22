// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSUIWEBSAFARIWEBVIEW_H
#define AMSUIWEBSAFARIWEBVIEW_H

@class WKWebView, NSString;
@protocol WKURLSchemeHandler, WKScriptMessageHandlerWithReply, WKNavigationDelegate><WKScriptMessageHandlerWithReply><WKURLSchemeHandler><AMSUIWebSafariWebDelegate;



@interface AMSUIWebSafariWebView : WKWebView <WKURLSchemeHandler, WKScriptMessageHandlerWithReply>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSString *logKey; // ivar: _logKey
@property (weak, nonatomic) NSObject<WKNavigationDelegate><WKScriptMessageHandlerWithReply><WKURLSchemeHandler><AMSUIWebSafariWebDelegate> *safariDelegate; // ivar: _safariDelegate
@property (weak, nonatomic) NSString *scheme; // ivar: _scheme
@property (readonly) Class superclass;
@property (nonatomic) CGFloat topInset;


+(id)_createContentControllerWithScheme:(id)arg0 data:(id)arg1 messageHandler:(id)arg2 ;
-(id)initWithAppearance:(id)arg0 scheme:(id)arg1 data:(id)arg2 delegate:(id)arg3 ;
-(void)userContentController:(id)arg0 didReceiveScriptMessage:(id)arg1 replyHandler:(id)arg2 ;
-(void)webView:(id)arg0 startURLSchemeTask:(id)arg1 ;
-(void)webView:(id)arg0 stopURLSchemeTask:(id)arg1 ;


@end


#endif