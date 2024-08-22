// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXEMBEDVIDEOCOMPONENTVIEW_H
#define SXEMBEDVIDEOCOMPONENTVIEW_H

@class UIActivityIndicatorView, WKWebsiteDataStore, NSString, SWCrashRetryThrottler, WKWebView;
@protocol WKNavigationDelegate, WKNavigationDelegatePrivate, WKUIDelegate, SXViewportChangeListener, _WKFullscreenDelegate, SXComponentActionHandler, SXProxyAuthenticationHandler, SXSceneStateMonitor;


#import "SXMediaComponentView.h"

@interface SXEmbedVideoComponentView : SXMediaComponentView <WKNavigationDelegate, WKNavigationDelegatePrivate, WKUIDelegate, SXViewportChangeListener, _WKFullscreenDelegate>



@property (readonly, nonatomic) NSObject<SXComponentActionHandler> *actionHandler; // ivar: _actionHandler
@property (readonly, nonatomic) UIActivityIndicatorView *activityIndicator; // ivar: _activityIndicator
@property (readonly, nonatomic) WKWebsiteDataStore *dataStore; // ivar: _dataStore
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isPresentingFullscreen; // ivar: _isPresentingFullscreen
@property (readonly, nonatomic) NSObject<SXProxyAuthenticationHandler> *proxyAuthenticationHandler; // ivar: _proxyAuthenticationHandler
@property (readonly, nonatomic) NSObject<SXSceneStateMonitor> *sceneStateMonitor; // ivar: _sceneStateMonitor
@property (readonly) Class superclass;
@property (retain, nonatomic) SWCrashRetryThrottler *webCrashRetryThrottler; // ivar: _webCrashRetryThrottler
@property (retain, nonatomic) WKWebView *webView; // ivar: _webView
@property (nonatomic) BOOL webViewIsLoaded; // ivar: _webViewIsLoaded


+(id)sharedConfiguration;
-(BOOL)allowHierarchyRemoval;
-(BOOL)shouldAllowRequestToURL:(id)arg0 ;
-(NSUInteger)analyticsMediaType;
-(NSUInteger)analyticsVideoType;
-(id)initWithDOMObjectProvider:(id)arg0 viewport:(id)arg1 presentationDelegate:(id)arg2 componentStyleRendererFactory:(id)arg3 analyticsReporting:(id)arg4 appStateMonitor:(id)arg5 sceneStateMonitor:(id)arg6 actionHandler:(id)arg7 websiteDataStore:(id)arg8 proxyAuthenticationHandler:(id)arg9 ;
-(id)webView:(id)arg0 createWebViewWithConfiguration:(id)arg1 forNavigationAction:(id)arg2 windowFeatures:(id)arg3 ;
-(struct CGRect )transitionContentFrame;
-(struct CGRect )visibleFrame;
-(void)_webViewDidEnterElementFullscreen:(id)arg0 ;
-(void)_webViewDidEnterFullscreen:(id)arg0 ;
-(void)_webViewDidExitElementFullscreen:(id)arg0 ;
-(void)_webViewDidExitFullscreen:(id)arg0 ;
-(void)_webViewWebProcessDidCrash:(id)arg0 ;
-(void)discardContents;
-(void)handleError:(id)arg0 ;
-(void)initializeWebViewWithURL:(id)arg0 ;
-(void)layoutSubviews;
-(void)presentComponentWithChanges:(struct ? )arg0 ;
-(void)renderContents;
-(void)updateWebViewToWidth:(CGFloat)arg0 ;
-(void)viewport:(id)arg0 appearStateChangedFromState:(NSUInteger)arg1 ;
-(void)webView:(id)arg0 decidePolicyForNavigationAction:(id)arg1 decisionHandler:(id)arg2 ;
-(void)webView:(id)arg0 didFailNavigation:(id)arg1 withError:(id)arg2 ;
-(void)webView:(id)arg0 didFailProvisionalNavigation:(id)arg1 withError:(id)arg2 ;
-(void)webView:(id)arg0 didFinishNavigation:(id)arg1 ;
-(void)webView:(id)arg0 didReceiveAuthenticationChallenge:(id)arg1 completionHandler:(id)arg2 ;
-(void)webViewEnteredFullscreen:(id)arg0 ;
-(void)webViewExitedFullscreen:(id)arg0 ;


@end


#endif