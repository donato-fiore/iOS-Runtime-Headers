// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFBROWSERSERVICEVIEWCONTROLLER_H
#define SFBROWSERSERVICEVIEWCONTROLLER_H

@class SFBrowserContentViewController, NSDate, WKProcessPool, NSTimer, NSString;
@protocol _SFActivityDelegate, _SFLinkPreviewHeaderDelegate, SFServiceViewControllerProtocol;


#import "_SFWebViewUsageMonitor.h"
#import "SFBrowserPersonaAnalyticsHelper.h"
#import "_SFSafariViewControllerPrewarmingRequestThrottler.h"
#import "SFSystemAlert.h"

@interface SFBrowserServiceViewController : SFBrowserContentViewController <_SFActivityDelegate, _SFLinkPreviewHeaderDelegate, SFServiceViewControllerProtocol>

 {
    id *_activityViewControllerInfoFetchCompletionHandler;
    _SFWebViewUsageMonitor *_usageMonitor;
    NSDate *_lastHostApplicationSuspendDate;
    WKProcessPool *_processPool;
    BOOL _canNotifyHostApplicationOfRedirects;
    BOOL _touchEventsShouldStopRedirectNotifications;
    BOOL _isExpectingClientRedirect;
    BOOL _hasBegunFirstNavigation;
    BOOL _hasConnectedToHostApplication;
    SFBrowserPersonaAnalyticsHelper *_cachedAnalyticsHelper;
    NSTimer *_redirectNotificationTimer;
    BOOL _hostApplicationIsForeground;
    _SFSafariViewControllerPrewarmingRequestThrottler *_prewarmingRequestThrottler;
}


@property (nonatomic) BOOL _isUsedForAuthentication; // ivar: _isUsedForAuthentication
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *hostApplicationCallbackURLScheme; // ivar: _hostApplicationCallbackURLScheme
@property (readonly) Class superclass;
@property (retain, nonatomic) SFSystemAlert *webAuthenticationDataSharingConfirmation; // ivar: _webAuthenticationDataSharingConfirmation


+(id)_exportedInterface;
+(id)_remoteViewControllerInterface;
-(BOOL)_ensureWebsiteDataStoreURL:(id)arg0 cookieStoreURL:(id)arg1 ;
-(BOOL)_notifyInitialLoadDidFinish:(BOOL)arg0 ;
-(BOOL)_redirectToHostAppWithExpectedCallbackSchemeIfPossible:(id)arg0 ;
-(BOOL)_redirectToHostAppWithNavigationResult:(id)arg0 options:(id)arg1 ;
-(BOOL)_shouldReloadImmediatelyAfterPageLoadError;
-(NSUInteger)_persona;
-(id)_analyticsHelper;
-(id)_applicationPayloadForOpeningInSafari;
-(id)_hostAppBundleId;
-(id)_webDataStoreRootURL;
-(id)_websiteDataStoreURL;
-(id)bundleIdentifierForProfileInstallation;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)processPool;
-(id)processPoolConfiguration;
-(id)websiteDataStoreConfiguration;
-(void)_didLoadWebView;
-(void)_didResolveDestinationURL:(id)arg0 pendingAppLinkCheck:(BOOL)arg1 ;
-(void)_dismiss;
-(void)_fetchActivityViewControllerInfoForURL:(id)arg0 title:(id)arg1 completion:(id)arg2 ;
-(void)_getSafariDataSharingModeWithCompletion:(id)arg0 ;
-(void)_hostApplicationDidEnterBackground;
-(void)_hostApplicationWillEnterForeground;
-(void)_openCurrentURLInSafari;
-(void)_prewarmConnectionsToURLs:(id)arg0 ;
-(void)_updateMaxVisibleHeightPercentageUserDriven:(BOOL)arg0 ;
-(void)_updateRemoteSwipeGestureState;
-(void)_willAppearInRemoteViewController;
-(void)browserViewDidReceiveTouchEvent:(id)arg0 ;
-(void)closeDatabasesOnBackgroundingOrDismissal;
-(void)dealloc;
-(void)decideCookieSharingForURL:(id)arg0 callbackURLScheme:(id)arg1 ;
-(void)didDetectRemoteViewControllerViewIsHidden;
-(void)didDetectUserInteractionFromHostApp;
-(void)didFetchCustomActivities:(id)arg0 excludedActivityTypes:(id)arg1 ;
-(void)didRequestShowLinkPreviews:(BOOL)arg0 ;
-(void)invalidatePrewarmingTokenWithID:(NSUInteger)arg0 ;
-(void)linkPreviewHeader:(id)arg0 didEnableLinkPreview:(BOOL)arg1 ;
-(void)loadURL:(id)arg0 ;
-(void)openCurrentURLInSafariFromPreviewAction;
-(void)prepareForDisplayWithCompletionHandler:(id)arg0 ;
-(void)repostNotificationInViewService:(id)arg0 ;
-(void)requestPrewarmingWithTokens:(id)arg0 ;
-(void)safariActivity:(id)arg0 didFinish:(BOOL)arg1 ;
-(void)setDismissButtonStyle:(NSInteger)arg0 ;
-(void)setDisplayMode:(NSInteger)arg0 ;
-(void)setIsRunningTransitionAnimation:(BOOL)arg0 ;
-(void)setPreferredBarTintColor:(id)arg0 controlTintColor:(id)arg1 ;
-(void)startResolveRedirectionForURL:(id)arg0 ;
-(void)updateScrollViewIndicatorVerticalInsets:(struct UIEdgeInsets )arg0 horizontalInsets:(struct UIEdgeInsets )arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)webViewController:(id)arg0 didChangeFullScreen:(BOOL)arg1 ;
-(void)webViewController:(id)arg0 didFinishDocumentLoadForNavigation:(id)arg1 ;
-(void)webViewController:(id)arg0 didReceiveServerRedirectForProvisionalNavigation:(id)arg1 ;
-(void)webViewController:(id)arg0 didStartProvisionalNavigation:(id)arg1 ;
-(void)webViewController:(id)arg0 willPerformClientRedirectToURL:(id)arg1 withDelay:(CGFloat)arg2 ;
-(void)webViewControllerDidCancelClientRedirect:(id)arg0 ;
-(void)webViewControllerWebProcessDidCrash:(id)arg0 ;


@end


#endif