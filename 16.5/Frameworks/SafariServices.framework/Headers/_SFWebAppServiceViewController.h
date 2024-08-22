// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SFWEBAPPSERVICEVIEWCONTROLLER_H
#define _SFWEBAPPSERVICEVIEWCONTROLLER_H

@class UIWebClip, UIView, WKProcessPool, WKWebsiteDataStore, NSMutableArray, BKSApplicationStateMonitor, WBSApplicationManifestFetcher, UIColor, NSString;
@protocol SFWebAppServiceViewControllerProtocol, _WKWebsiteDataStoreDelegate, SFMediaRecordingDocument;


#import "SFBrowserServiceViewController.h"
#import "_SFInjectedJavaScriptController.h"
#import "_SFWebClipMetadataFetcher.h"

@interface _SFWebAppServiceViewController : SFBrowserServiceViewController <SFWebAppServiceViewControllerProtocol, _WKWebsiteDataStoreDelegate, SFMediaRecordingDocument>

 {
    UIWebClip *_webClip;
    UIView *_statusBarBackgroundView;
    WKProcessPool *_processPool;
    WKWebsiteDataStore *_websiteDataStore;
    NSMutableArray *_fallbackURLs;
    BKSApplicationStateMonitor *_stateMonitor;
    unsigned int _hostState;
    NSUInteger _mediaStateIconBeforeSuspension;
    WBSApplicationManifestFetcher *_applicationManifestFetcher;
    _SFInjectedJavaScriptController *_activityJSController;
    _SFWebClipMetadataFetcher *_webClipMetadataFetcher;
    UIColor *_themeColor;
    BOOL _updatingThemeColor;
}


@property (readonly, copy, nonatomic) NSString *URLString;
@property (readonly, nonatomic) BOOL audioOnly;
@property (readonly, nonatomic) BOOL canOverrideStatusBar;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_exportedInterface;
+(id)_remoteViewControllerInterface;
+(id)serviceViewControllers;
-(BOOL)_clientIsWebApp;
-(BOOL)_isURLOutOfLegacyScope:(id)arg0 withLoginURLExempted:(BOOL)arg1 ;
-(BOOL)_isURLOutOfManifestScope:(id)arg0 ;
-(BOOL)_isURLOutOfScope:(id)arg0 withLoginURLExempted:(BOOL)arg1 ;
-(BOOL)_usesScrollToTopView;
-(BOOL)canPrint;
-(NSInteger)_persona;
-(NSInteger)preferredStatusBarStyle;
-(id)_canonicalPageURL;
-(id)createWebsiteDataStoreForWebClipIdentifier:(id)arg0 ;
-(id)notificationPermissionsForWebsiteDataStore:(id)arg0 ;
-(id)placeholderBundleIdentifierForDataStore:(id)arg0 ;
-(id)processPool;
-(id)webViewConfiguration;
-(id)websiteDataStore;
-(id)websiteDataStoreConfigurationWithWebClipIdentifier:(id)arg0 ;
-(void)_fetchApplicationManifestIfNeeded;
-(void)_handleHostStateUpdate:(id)arg0 ;
-(void)_hostApplicationDidEnterBackground;
-(void)_initialLoadFinishedWithSuccess:(BOOL)arg0 ;
-(void)_loadNextFallbackURL;
-(void)_loadWebClipPageURL:(id)arg0 ;
-(void)_setCurrentWebViewController:(id)arg0 ;
-(void)_setUpCookieStoragePolicyForDataStore:(id)arg0 ;
-(void)_updateDisplayMode;
-(void)_updateThemeColor;
-(void)clearWebViewAndWebsiteDataWithCompletion:(id)arg0 ;
-(void)clearWebsiteDataWithWebClipIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)dealloc;
-(void)handlePushNotificationActivation:(id)arg0 ;
-(void)loadWebAppWithIdentifier:(id)arg0 ;
-(void)muteMediaCapture;
-(void)navigationBarDoneButtonWasTapped:(id)arg0 ;
-(void)processWebPushForWebAppWithIdentifier:(id)arg0 ;
-(void)setMediaStateIcon:(NSUInteger)arg0 ;
-(void)setNeedsStatusBarAppearanceUpdate;
-(void)setupPreferences:(id)arg0 ;
-(void)statusBarIndicatorTappedWithCompletionHandler:(id)arg0 ;
-(void)viewDidLoad;
-(void)webAppDidBecomeActive;
-(void)webAppWillResignActive;
-(void)webViewController:(id)arg0 decidePolicyForNavigationAction:(id)arg1 decisionHandler:(id)arg2 ;
-(void)webViewController:(id)arg0 didFailProvisionalNavigation:(id)arg1 withError:(id)arg2 ;
-(void)webViewController:(id)arg0 didFinishNavigation:(id)arg1 ;
-(void)webViewController:(id)arg0 requestNotificationPermissionForSecurityOrigin:(id)arg1 decisionHandler:(id)arg2 ;
-(void)webViewController:(id)arg0 updatedAppBadge:(id)arg1 fromSecurityOrigin:(id)arg2 ;
-(void)webViewControllerDidChangeLoadingState:(id)arg0 ;
-(void)webViewControllerDidChangeURL:(id)arg0 ;
-(void)webViewControllerDidFirstVisuallyNonEmptyLayout:(id)arg0 ;
-(void)webViewControllerDidUpdateThemeColor:(id)arg0 ;
-(void)websiteDataStore:(id)arg0 openWindow:(id)arg1 fromServiceWorkerOrigin:(id)arg2 completionHandler:(id)arg3 ;
-(void)websiteDataStore:(id)arg0 showNotification:(id)arg1 ;
-(void)websiteDataStore:(id)arg0 workerOrigin:(id)arg1 updatedAppBadge:(id)arg2 ;


@end


#endif