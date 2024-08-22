// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIWEBVIEWWEBVIEWDELEGATE_H
#define UIWEBVIEWWEBVIEWDELEGATE_H

@class NSString;
@protocol WebFrameLoadDelegate, WebPolicyDelegate, WebResourceLoadDelegate, WebUIDelegate;

#import <Foundation/Foundation.h>

#import "UIWebView.h"

@interface UIWebViewWebViewDelegate : NSObject <WebFrameLoadDelegate, WebPolicyDelegate, WebResourceLoadDelegate, WebUIDelegate>

 {
    UIWebView *uiWebView;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)webView:(id)arg0 resource:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2 forDataSource:(id)arg3 ;
-(BOOL)webView:(id)arg0 runJavaScriptConfirmPanelWithMessage:(id)arg1 initiatedByFrame:(id)arg2 ;
-(id)initWithUIWebView:(id)arg0 ;
-(id)webThreadWebView:(id)arg0 resource:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3 fromDataSource:(id)arg4 ;
-(id)webView:(id)arg0 connectionPropertiesForResource:(id)arg1 dataSource:(id)arg2 ;
-(id)webView:(id)arg0 createWebViewWithRequest:(id)arg1 ;
-(id)webView:(id)arg0 identifierForInitialRequest:(id)arg1 fromDataSource:(id)arg2 ;
-(id)webView:(id)arg0 runJavaScriptTextInputPanelWithPrompt:(id)arg1 defaultText:(id)arg2 initiatedByFrame:(id)arg3 ;
-(void)_clearUIWebView;
-(void)webView:(id)arg0 decidePolicyForGeolocationRequestFromOrigin:(id)arg1 frame:(id)arg2 listener:(id)arg3 ;
-(void)webView:(id)arg0 decidePolicyForMIMEType:(id)arg1 request:(id)arg2 frame:(id)arg3 decisionListener:(id)arg4 ;
-(void)webView:(id)arg0 decidePolicyForNavigationAction:(id)arg1 request:(id)arg2 frame:(id)arg3 decisionListener:(id)arg4 ;
-(void)webView:(id)arg0 decidePolicyForNewWindowAction:(id)arg1 request:(id)arg2 newFrameName:(id)arg3 decisionListener:(id)arg4 ;
-(void)webView:(id)arg0 didChangeLocationWithinPageForFrame:(id)arg1 ;
-(void)webView:(id)arg0 didClearWindowObject:(id)arg1 forFrame:(id)arg2 ;
-(void)webView:(id)arg0 didCommitLoadForFrame:(id)arg1 ;
-(void)webView:(id)arg0 didFailLoadWithError:(id)arg1 forFrame:(id)arg2 ;
-(void)webView:(id)arg0 didFailProvisionalLoadWithError:(id)arg1 forFrame:(id)arg2 ;
-(void)webView:(id)arg0 didFinishLoadForFrame:(id)arg1 ;
-(void)webView:(id)arg0 didFirstLayoutInFrame:(id)arg1 ;
-(void)webView:(id)arg0 didReceiveServerRedirectForProvisionalLoadForFrame:(id)arg1 ;
-(void)webView:(id)arg0 didReceiveTitle:(id)arg1 forFrame:(id)arg2 ;
-(void)webView:(id)arg0 didStartProvisionalLoadForFrame:(id)arg1 ;
-(void)webView:(id)arg0 exceededApplicationCacheOriginQuotaForSecurityOrigin:(id)arg1 totalSpaceNeeded:(NSUInteger)arg2 ;
-(void)webView:(id)arg0 frame:(id)arg1 exceededDatabaseQuotaForSecurityOrigin:(id)arg2 database:(id)arg3 ;
-(void)webView:(id)arg0 printFrameView:(id)arg1 ;
-(void)webView:(id)arg0 resource:(id)arg1 didCancelAuthenticationChallenge:(id)arg2 fromDataSource:(id)arg3 ;
-(void)webView:(id)arg0 resource:(id)arg1 didFailLoadingWithError:(id)arg2 fromDataSource:(id)arg3 ;
-(void)webView:(id)arg0 resource:(id)arg1 didFinishLoadingFromDataSource:(id)arg2 ;
-(void)webView:(id)arg0 resource:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 fromDataSource:(id)arg3 ;
-(void)webView:(id)arg0 runJavaScriptAlertPanelWithMessage:(id)arg1 initiatedByFrame:(id)arg2 ;
-(void)webView:(id)arg0 unableToImplementPolicyWithError:(id)arg1 frame:(id)arg2 ;
-(void)webViewClose:(id)arg0 ;
-(void)webViewSupportedOrientationsUpdated:(id)arg0 ;


@end


#endif