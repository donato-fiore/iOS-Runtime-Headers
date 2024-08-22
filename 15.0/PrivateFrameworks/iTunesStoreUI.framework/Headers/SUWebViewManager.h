// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUWEBVIEWMANAGER_H
#define SUWEBVIEWMANAGER_H

@class NSLock, NSMutableSet, NSMapTable, NSSet, ACAccount, SSAuthenticationContext, NSString, ISURLRequestPerformance, NSDictionary, UIWebView;
@protocol SUScriptInterfaceDelegate, WebFrameLoadDelegate, WebPolicyDelegate, WebResourceLoadDelegate, WebUIDelegate, UIWebViewDelegate, SUWebViewManagerDelegate;

#import <Foundation/Foundation.h>

#import "SUClientInterface.h"
#import "SUWebScriptReloadContext.h"
#import "SUScriptWindowContext.h"

@interface SUWebViewManager : NSObject <SUScriptInterfaceDelegate, WebFrameLoadDelegate, WebPolicyDelegate, WebResourceLoadDelegate, WebUIDelegate, UIWebViewDelegate>

 {
    BOOL _initialLoadReported;
    SUClientInterface *_clientInterface;
    NSLock *_lock;
    SUWebScriptReloadContext *_pendingWebScriptReloadContext;
    NSMutableSet *_requireCellularURLs;
    NSMapTable *_scriptInterfaces;
    NSSet *_suppressCookiesHosts;
    NSInteger _usingNetworkCount;
    *__CFSet _webFramesPendingInitialRequest;
}


@property (copy, nonatomic) ACAccount *account; // ivar: _account
@property (copy, nonatomic) SSAuthenticationContext *authenticationContext; // ivar: _authenticationContext
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<SUWebViewManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) ISURLRequestPerformance *initialRequestPerformance; // ivar: _initialRequestPerformance
@property (retain, nonatomic) id *originalFrameLoadDelegate; // ivar: _originalFrameLoadDelegate
@property (retain, nonatomic) id *originalPolicyDelegate; // ivar: _originalPolicyDelegate
@property (retain, nonatomic) id *originalResourceLoadDelegate; // ivar: _originalResourceLoadDelegate
@property (retain, nonatomic) id *originalUIDelegate; // ivar: _originalUIDelegate
@property (retain, nonatomic) SUScriptWindowContext *scriptWindowContext; // ivar: _scriptWindowContext
@property (nonatomic) BOOL shouldSignRequests; // ivar: _shouldSignRequests
@property (readonly) Class superclass;
@property (retain, nonatomic) NSDictionary *tidHeaders; // ivar: _tidHeaders
@property (readonly, weak, nonatomic) UIWebView *webView; // ivar: _webView


+(id)defaultLocalStoragePath;
-(BOOL)_presentModalAlertWithMessage:(id)arg0 includingCancelButton:(BOOL)arg1 configurationHandler:(id)arg2 ;
-(BOOL)respondsToSelector:(SEL)arg0 ;
-(BOOL)webView:(id)arg0 runJavaScriptConfirmPanelWithMessage:(id)arg1 initiatedByFrame:(id)arg2 ;
-(id)DOMElementForScriptInterface:(id)arg0 element:(id)arg1 ;
-(id)_locateStorePageViewController;
-(id)_userIdentifier;
-(id)init;
-(id)initWithClientInterface:(id)arg0 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(id)parentViewControllerForScriptInterface:(id)arg0 ;
-(id)performanceMetricsForScriptInterface:(id)arg0 ;
-(id)uiWebView:(id)arg0 connectionPropertiesForResource:(id)arg1 dataSource:(id)arg2 ;
-(id)uiWebView:(id)arg0 identifierForInitialRequest:(id)arg1 fromDataSource:(id)arg2 ;
-(id)webThreadWebView:(id)arg0 resource:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3 fromDataSource:(id)arg4 ;
-(id)webView:(id)arg0 runJavaScriptTextInputPanelWithPrompt:(id)arg1 defaultText:(id)arg2 initiatedByFrame:(id)arg3 ;
-(void)_beginUsingNetwork;
-(void)_cancelUsingNetwork;
-(void)_endUsingNetwork;
-(void)_enumerateScriptInterfacesWithBlock:(id)arg0 ;
-(void)_requestWebScriptReloadWithContext:(id)arg0 ;
-(void)connectToWebView:(id)arg0 ;
-(void)dealloc;
-(void)disconnectFromWebView;
-(void)dispatchEvent:(id)arg0 forName:(id)arg1 ;
-(void)dispatchEvent:(id)arg0 forName:(id)arg1 synchronously:(BOOL)arg2 ;
-(void)forwardInvocation:(id)arg0 ;
-(void)scriptInterface:(id)arg0 requireCellularForResourceWithURL:(id)arg1 ;
-(void)uiWebView:(id)arg0 decidePolicyForMIMEType:(id)arg1 request:(id)arg2 frame:(id)arg3 decisionListener:(id)arg4 ;
-(void)uiWebView:(id)arg0 resource:(id)arg1 didFailLoadingWithError:(id)arg2 fromDataSource:(id)arg3 ;
-(void)uiWebView:(id)arg0 resource:(id)arg1 didFinishLoadingFromDataSource:(id)arg2 ;
-(void)webView:(id)arg0 decidePolicyForNavigationAction:(id)arg1 request:(id)arg2 frame:(id)arg3 decisionListener:(id)arg4 ;
-(void)webView:(id)arg0 didClearWindowObject:(id)arg1 forFrame:(id)arg2 ;
-(void)webView:(id)arg0 didFailLoadWithError:(id)arg1 ;
-(void)webView:(id)arg0 didFirstLayoutInFrame:(id)arg1 ;
-(void)webView:(id)arg0 didParseSource:(id)arg1 fromURL:(id)arg2 sourceId:(NSInteger)arg3 forWebFrame:(id)arg4 ;
-(void)webView:(id)arg0 didReceiveTitle:(id)arg1 forFrame:(id)arg2 ;
-(void)webView:(id)arg0 didStartProvisionalLoadForFrame:(id)arg1 ;
-(void)webView:(id)arg0 documentViewDidSetFrame:(struct CGRect )arg1 ;
-(void)webView:(id)arg0 exceptionWasRaised:(id)arg1 sourceId:(NSInteger)arg2 line:(int)arg3 forWebFrame:(id)arg4 ;
-(void)webView:(id)arg0 failedToParseSource:(id)arg1 baseLineNumber:(NSUInteger)arg2 fromURL:(id)arg3 withError:(id)arg4 forWebFrame:(id)arg5 ;
-(void)webView:(id)arg0 resource:(id)arg1 didReceiveResponse:(id)arg2 fromDataSource:(id)arg3 ;
-(void)webView:(id)arg0 runJavaScriptAlertPanelWithMessage:(id)arg1 initiatedByFrame:(id)arg2 ;
-(void)webViewDidFinishLoad:(id)arg0 ;
-(void)webViewDidStartLoad:(id)arg0 ;


@end


#endif