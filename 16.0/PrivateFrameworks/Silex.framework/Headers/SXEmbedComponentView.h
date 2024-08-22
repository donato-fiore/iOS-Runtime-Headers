// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXEMBEDCOMPONENTVIEW_H
#define SXEMBEDCOMPONENTVIEW_H

@class NSString, UIActivityIndicatorView, WKWebsiteDataStore, UILabel, NSMutableSet, WKNavigation, TFMultiDelegate, SWCrashRetryThrottler, WKWebView;
@protocol WKNavigationDelegate, WKUIDelegate, WKScriptMessageHandler, UIGestureRecognizerDelegate, UIScrollViewDelegate, SXViewportChangeListener, _WKFullscreenDelegate, SXComponentActionHandler, SXEmbedType, SXEmbedDataProvider, SXLayoutInvalidator, SXProxyAuthenticationHandler, SWReachabilityProvider, SXSceneStateMonitor;


#import "SXComponentView.h"
#import "SXEmbedResource.h"
#import "SXRelatedWebViewCache.h"

@interface SXEmbedComponentView : SXComponentView <WKNavigationDelegate, WKUIDelegate, WKScriptMessageHandler, UIGestureRecognizerDelegate, UIScrollViewDelegate, SXViewportChangeListener, _WKFullscreenDelegate>



@property (retain, nonatomic) NSString *HTML; // ivar: _HTML
@property (readonly, nonatomic) NSObject<SXComponentActionHandler> *actionHandler; // ivar: _actionHandler
@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator; // ivar: _activityIndicator
@property (nonatomic) CGSize currentLayoutSize; // ivar: _currentLayoutSize
@property (nonatomic) CGSize currentViewportSize; // ivar: _currentViewportSize
@property (nonatomic) CGSize currentlyLayoutingForSize; // ivar: _currentlyLayoutingForSize
@property (readonly, nonatomic) WKWebsiteDataStore *dataStore; // ivar: _dataStore
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<SXEmbedType> *embedConfiguration; // ivar: _embedConfiguration
@property (readonly, nonatomic) NSObject<SXEmbedDataProvider> *embedDataProvider; // ivar: _embedDataProvider
@property (retain, nonatomic) SXEmbedResource *embedResource; // ivar: _embedResource
@property (retain, nonatomic) UILabel *errorLabel; // ivar: _errorLabel
@property (retain, nonatomic) NSMutableSet *expectedMessages; // ivar: _expectedMessages
@property (nonatomic) BOOL failedLoading; // ivar: _failedLoading
@property (nonatomic) BOOL hasRegisteredScriptMessageHandlers; // ivar: _hasRegisteredScriptMessageHandlers
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) WKNavigation *initialNavigation; // ivar: _initialNavigation
@property (readonly, nonatomic) NSObject<SXLayoutInvalidator> *layoutInvalidator; // ivar: _layoutInvalidator
@property (readonly, nonatomic) NSObject<SXProxyAuthenticationHandler> *proxyAuthenticationHandler; // ivar: _proxyAuthenticationHandler
@property (readonly, nonatomic) NSObject<SWReachabilityProvider> *reachabilityProvider; // ivar: _reachabilityProvider
@property (readonly, nonatomic) SXRelatedWebViewCache *relatedWebViewCache; // ivar: _relatedWebViewCache
@property (readonly, nonatomic) NSObject<SXSceneStateMonitor> *sceneStateMonitor; // ivar: _sceneStateMonitor
@property (readonly, nonatomic) TFMultiDelegate *scriptMessageHandler; // ivar: _scriptMessageHandler
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *userScript; // ivar: _userScript
@property (nonatomic) BOOL usingElementFullscreen; // ivar: _usingElementFullscreen
@property (retain, nonatomic) SWCrashRetryThrottler *webCrashRetryThrottler; // ivar: _webCrashRetryThrottler
@property (retain, nonatomic) WKWebView *webView; // ivar: _webView
@property (retain, nonatomic) WKWebView *webViewPresentingInFullscreen; // ivar: _webViewPresentingInFullscreen


-(BOOL)allowHierarchyRemoval;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)hasLoadedEmbedData;
-(BOOL)shouldAllowRequestToURL:(id)arg0 ;
-(BOOL)shouldLayoutWebView;
-(BOOL)shouldShowWebView;
-(CGFloat)initialScale;
-(NSUInteger)userActionMediaTypes;
-(id)HTMLByEnclosingHTML:(id)arg0 withHTML:(id)arg1 ;
-(id)initWithDOMObjectProvider:(id)arg0 viewport:(id)arg1 presentationDelegate:(id)arg2 componentStyleRendererFactory:(id)arg3 reachabilityProvider:(id)arg4 embedDataProvider:(id)arg5 actionHandler:(id)arg6 layoutInvalidator:(id)arg7 websiteDataStore:(id)arg8 relatedWebViewCache:(id)arg9 proxyAuthenticationHandler:(id)arg10 sceneStateMonitor:(id)arg11 ;
-(id)unableToLoadMessage;
-(id)webView:(id)arg0 createWebViewWithConfiguration:(id)arg1 forNavigationAction:(id)arg2 windowFeatures:(id)arg3 ;
-(void)_webViewDidEnterElementFullscreen:(id)arg0 ;
-(void)_webViewDidEnterFullscreen:(id)arg0 ;
-(void)_webViewDidExitElementFullscreen:(id)arg0 ;
-(void)_webViewDidExitFullscreen:(id)arg0 ;
-(void)_webViewWebProcessDidCrash:(id)arg0 ;
-(void)addScriptMessageHandlers;
-(void)dealloc;
-(void)discardContents;
-(void)displayEmbedIfNeeded;
-(void)finalizeLayoutForSize:(struct CGSize )arg0 ;
-(void)handleError:(id)arg0 ;
-(void)layoutWebViewForSize:(struct CGSize )arg0 ;
-(void)loadComponent:(id)arg0 ;
-(void)loadEmbedData;
-(void)loadEmbedIfNeeded;
-(void)loadWebView;
-(void)loadWebViewIfNeeded;
-(void)presentComponentWithChanges:(struct ? )arg0 ;
-(void)prewarmWebView;
-(void)reloadEmbed;
-(void)removeScriptMessageHandlers;
-(void)renderContents;
-(void)scrollViewWillBeginZooming:(id)arg0 withView:(id)arg1 ;
-(void)showActivityIndicator:(BOOL)arg0 ;
-(void)userContentController:(id)arg0 didReceiveScriptMessage:(id)arg1 ;
-(void)viewport:(id)arg0 appearStateChangedFromState:(NSUInteger)arg1 ;
-(void)webView:(id)arg0 decidePolicyForNavigationAction:(id)arg1 decisionHandler:(id)arg2 ;
-(void)webView:(id)arg0 didFailNavigation:(id)arg1 withError:(id)arg2 ;
-(void)webView:(id)arg0 didFailProvisionalNavigation:(id)arg1 withError:(id)arg2 ;
-(void)webView:(id)arg0 didFinishNavigation:(id)arg1 ;
-(void)webView:(id)arg0 didReceiveAuthenticationChallenge:(id)arg1 completionHandler:(id)arg2 ;
-(void)webViewEnteredFullscreen:(id)arg0 ;
-(void)webViewExitedFullscreen:(id)arg0 ;
-(void)willPresentComponentWithChanges:(struct ? )arg0 ;


@end


#endif