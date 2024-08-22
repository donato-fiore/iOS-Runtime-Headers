// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SFBROWSERCONTENTVIEWCONTROLLER_H
#define _SFBROWSERCONTENTVIEWCONTROLLER_H

@class UIViewController, WBSDigitalHealthManager, NSURL, WKWebView, NSTimer, WKBackForwardListItem, _WKUserInitiatedAction, SFNavigationBarItem, WBSURLSpoofingMitigator, WBSFluidProgressState, WBSFluidProgressController, _SFFluidProgressView, UITapGestureRecognizer, _SFPinnableBanner<_SFAppSuggestionBanner>, NSString, NSMutableArray, UIPanGestureRecognizer, NSError, WBSAllowedLegacyTLSHostManager, WBSAutoFillQuirksManager, WBSWellKnownURLResponseCodeReliabilityChecker, _WKActivatedElementInfo, NSDictionary, NSArray, UIColor, WBSTranslationContext, WKPreferences;
@protocol SFBrowserViewDelegate, SFReaderEnabledWebViewControllerDelegate, SFReaderViewControllerDelegate, _SFBarManagerDelegate, _SFDownloadDelegate, _SFDynamicBarAnimatorDelegate, _SFFindOnPageViewDelegate, _SFMailContentProviderDataSource, _SFNavigationBarDelegate, _SFPageLoadErrorControllerDelegate, _SFPrintControllerDelegate, _SFSingleBookmarkNavigationControllerDelegate, UIGestureRecognizerDelegate, UIScrollViewDelegate, WBSFluidProgressControllerWindowDelegate, WBSFluidProgressStateSource, _SFOverlayProviderDelegate, _SFAppSuggestionBannerDelegate, WBSDigitalHealthManagerDelegate, PKAddPassesViewControllerDelegate, _SFLinkPreviewHandler, WBSWebExtensionCommandHandling, WBSTranslationConsentAlertHelperDelegate, WBSTranslationContextDelegate, _SFActivityItemCustomizationDelegate, _SFActivityViewControllerDelegate, _SFQuickLookDocumentSource, _SFSaveToFilesOperationDelegate, WBSWebExtensionTab, _SFBrowserContentController, _SFBrowserDocument, _SFBrowserKeyCommandSafariViewControllerMethods, _SFBrowserContentViewControllerDelegate, SFReaderContext, WBSWebExtensionWindow;


#import "_SFDigitalHealthViewController.h"
#import "_SFBrowserView.h"
#import "SFReaderViewController.h"
#import "_SFNavigationBar.h"
#import "_SFToolbar.h"
#import "_SFMailContentProvider.h"
#import "_SFBarManager.h"
#import "SFNanoDomainContainerView.h"
#import "_SFDynamicBarAnimator.h"
#import "_SFPageLoadErrorController.h"
#import "_SFCalendarEventDetector.h"
#import "_SFDownload.h"
#import "_SFSafariSharingExtensionController.h"
#import "_SFTelephonyNavigationMitigationPolicy.h"
#import "_SFPrintController.h"
#import "_SFSecIdentityPreferencesController.h"
#import "_SFPerSitePreferencesVendor.h"
#import "_SFQuickLookDocument.h"
#import "_SFQuickLookDocumentController.h"
#import "_SFQuickLookDocumentWriter.h"
#import "_SFApplicationExtensionActivity.h"
#import "_SFSaveToFilesOperation.h"
#import "_SFActivityViewController.h"
#import "_SFPageFormatMenuController.h"
#import "SFBrowserPersonaAnalyticsHelper.h"
#import "_SFNavigationUtilitiesManager.h"
#import "_SFWebView.h"
#import "SFSafariViewControllerConfiguration.h"
#import "_SFFindOnPageView.h"
#import "_SFPageZoomPreferenceManager.h"
#import "_SFReloadOptionsController.h"
#import "SFReaderEnabledWebViewController.h"
#import "SFBrowserDocumentTrackerInfo.h"

@interface _SFBrowserContentViewController : UIViewController <SFBrowserViewDelegate, SFReaderEnabledWebViewControllerDelegate, SFReaderViewControllerDelegate, _SFBarManagerDelegate, _SFDownloadDelegate, _SFDynamicBarAnimatorDelegate, _SFFindOnPageViewDelegate, _SFMailContentProviderDataSource, _SFNavigationBarDelegate, _SFPageLoadErrorControllerDelegate, _SFPrintControllerDelegate, _SFSingleBookmarkNavigationControllerDelegate, UIGestureRecognizerDelegate, UIScrollViewDelegate, WBSFluidProgressControllerWindowDelegate, WBSFluidProgressStateSource, _SFOverlayProviderDelegate, _SFAppSuggestionBannerDelegate, WBSDigitalHealthManagerDelegate, PKAddPassesViewControllerDelegate, _SFLinkPreviewHandler, WBSWebExtensionCommandHandling, WBSTranslationConsentAlertHelperDelegate, WBSTranslationContextDelegate, _SFActivityItemCustomizationDelegate, _SFActivityViewControllerDelegate, _SFQuickLookDocumentSource, _SFSaveToFilesOperationDelegate, WBSWebExtensionTab, _SFBrowserContentController, _SFBrowserDocument, _SFBrowserKeyCommandSafariViewControllerMethods>

 {
    WBSDigitalHealthManager *_cachedDigitalHealthManager;
    _SFDigitalHealthViewController *_digitalHealthViewController;
    NSURL *_currentUsageTrackingURL;
    WKWebView *_previewWebView;
    NSTimer *_previewCloseTimer;
    _SFBrowserView *_browserView;
    SFReaderViewController *_readerViewController;
    BOOL _showingReader;
    WKBackForwardListItem *_lastBackFowardListItemOnWhichReaderWasActivated;
    NSUInteger _lastReaderDeactivationMode;
    _SFNavigationBar *_navigationBar;
    _SFToolbar *_bottomToolbar;
    _SFMailContentProvider *_cachedMailContentProvider;
    _WKUserInitiatedAction *_lastUserInitiatedAction;
    BOOL _canOpenDownloadForInitialLoad;
    NSUInteger _externalAppRedirectState;
    _SFBarManager *_barManager;
    SFNanoDomainContainerView *_nanoDomainContainerView;
    NSTimer *_updateContinuityTimer;
    _SFDynamicBarAnimator *_dynamicBarAnimator;
    BOOL _scrollViewIsDragging;
    NSUInteger _cachedMediaStateIcon;
    BOOL _didSetUpInterface;
    SFNavigationBarItem *_navigationBarItem;
    WBSURLSpoofingMitigator *_URLSpoofingMitigator;
    WBSFluidProgressState *_fluidProgressState;
    WBSFluidProgressController *_fluidProgressController;
    _SFFluidProgressView *_cachedFluidProgressView;
    UITapGestureRecognizer *_showBarsFromBottomBarRecognizer;
    BOOL _pageScrollsWithBottomBar;
    BOOL _interfaceFillsScreen;
    BOOL _usesNarrowLayout;
    _SFPageLoadErrorController *_pageLoadErrorController;
    _SFCalendarEventDetector *_calendarEventDetector;
    _SFDownload *_activeDownload;
    BOOL _showingCrashBanner;
    CGFloat _crashBannerDraggingOffset;
    BOOL _showingPinnableBanner;
    CGFloat _pinnableBannerDraggingOffset;
    _SFPinnableBanner<_SFAppSuggestionBanner> *_pinnableBannerPendingFirstPaint;
    BOOL _shouldDismissReaderInReponseToSameDocumentNavigation;
    BOOL _EVOrganizationNameIsValid;
    NSString *_EVOrganizationName;
    BOOL _isShowingHTTPAuthenticationDialog;
    BOOL _isSuppressingPreviewProgressAnimation;
    _SFSafariSharingExtensionController *_sharingExtensionController;
    BOOL _didReceivePolicyForInitialLoad;
    NSInteger _customPreferredStatusBarStyle;
    BOOL _isDisplayingTelephonyPrompt;
    _SFTelephonyNavigationMitigationPolicy *_telephonyNavigationPolicy;
    _SFPrintController *_printController;
    _SFSecIdentityPreferencesController *_secIdentityPreferencesController;
    _SFPerSitePreferencesVendor *_perSitePreferencesVendor;
    BOOL _wasLoadedWithContentBlockersEnabled;
    NSURL *_urlToReloadForcingContentBlockers;
    BOOL _enableContentBlockersWhenReloading;
    NSMutableArray *_webViewControllers;
    UIEdgeInsets _verticalScrollIndicatorBaseInsets;
    UIEdgeInsets _horizontalScrollIndicatorBaseInsets;
    BOOL _autoHidingHomeIndicatorPermitted;
    BOOL _prefersHomeIndicatorAutoHidden;
    BOOL _shouldAutoHideHomeIndicator;
    NSURL *_originalRequestURL;
    _SFQuickLookDocument *_quickLookDocument;
    _SFQuickLookDocumentController *_quickLookDocumentController;
    _SFQuickLookDocumentWriter *_quickLookDocumentWriter;
    _SFDownload *_downloadToShowInQuickLook;
    NSString *_suggestedFilenameForNextCommit;
    BOOL _quickLookDocumentCheckCompleted;
    _SFApplicationExtensionActivity *_customButtonUIActivity;
    BOOL _customActivityButtonIsValid;
    _SFSaveToFilesOperation *_saveToFilesOperation;
    _SFActivityViewController *_activityViewController;
    _SFPageFormatMenuController *_pageFormatMenuController;
    BOOL _keepBarsMinimized;
    UIPanGestureRecognizer *_hideNavigationBarGestureRecognizer;
    NSError *_lastLoadErrorForFormatMenu;
    NSInteger _concurrentNavigationActionPolicyDecisions;
    BOOL _loadWasUserDriven;
    BOOL _webViewIsInFullScreen;
    id *_pendingNavigationActionDueToExternalSchemePromptHandler;
    BOOL _gestureRequiresGoingBackToOwnerWebView;
    BOOL _shouldReflectTranslationAsFluidProgress;
    WKBackForwardListItem *_backForwardListItemForCurrentAppLinkBannerCheck;
    WBSAllowedLegacyTLSHostManager *_cachedLegacyTLSHostManager;
    WBSAutoFillQuirksManager *_autoFillQuirksManager;
    WBSWellKnownURLResponseCodeReliabilityChecker *_wellKnownURLResponseCodeReliabilityChecker;
    CGSize _lastSizeUsedForBrowserViewLayout;
    NSUInteger _sizeTransitionCount;
    CGFloat _idForWebExtensions;
}


@property (readonly, nonatomic) NSURL *URLForPerSitePreferences;
@property (readonly, nonatomic) SFBrowserPersonaAnalyticsHelper *_analyticsHelper; // ivar: __analyticsHelper
@property (readonly, nonatomic) NSString *_hostAppBundleId;
@property (readonly, nonatomic) BOOL _isUsedForAuthentication; // ivar: __isUsedForAuthentication
@property (retain, nonatomic) _SFNavigationUtilitiesManager *_navigationUtilitiesManager; // ivar: __navigationUtilitiesManager
@property (readonly, nonatomic) NSUInteger _persona; // ivar: __persona
@property (readonly, nonatomic) BOOL _shouldReloadImmediatelyAfterPageLoadError;
@property (readonly, nonatomic) BOOL _usesScrollToTopView;
@property (retain, nonatomic) _WKActivatedElementInfo *activatedElementInfo; // ivar: _activatedElementInfo
@property (readonly, nonatomic) NSObject<_SFBrowserDocument> *activeDocument;
@property (readonly, nonatomic) NSObject<WBSWebExtensionTab> *activeTabForExtensions;
@property (readonly, nonatomic) _SFWebView *activeWebView;
@property (readonly, nonatomic) _SFBrowserView *browserView;
@property (readonly, nonatomic) NSString *bundleIdentifierForProfileInstallation; // ivar: _bundleIdentifierForProfileInstallation
@property (readonly, nonatomic) BOOL canChangeSearchFieldPosition;
@property (readonly, nonatomic) BOOL canHideToolbar;
@property (readonly, nonatomic) BOOL canPrint;
@property (readonly, nonatomic) NSUInteger changedPropertiesForOnUpdatedWebExtensionEvent;
@property (copy, nonatomic) SFSafariViewControllerConfiguration *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_SFBrowserContentViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL didNotifyInitialLoadFinish; // ivar: _didNotifyInitialLoadFinish
@property (nonatomic) NSInteger dismissButtonStyle; // ivar: _dismissButtonStyle
@property (nonatomic) NSInteger displayMode; // ivar: _displayMode
@property (readonly, nonatomic) NSUInteger downloadsCount;
@property (readonly, nonatomic) NSURL *expectedOrCurrentURL;
@property (readonly, nonatomic) NSURL *expectedOrCurrentURLOrLastActiveURLIfCrashed;
@property (retain, nonatomic) NSDictionary *extensionIdentifierToDynamicallyInjectedStyleSheets; // ivar: _extensionIdentifierToDynamicallyInjectedStyleSheets
@property (retain, nonatomic) _SFFindOnPageView *findOnPageView; // ivar: _findOnPageView
@property (readonly, nonatomic) BOOL hasDedicatedDownloadsToolbarItem;
@property (readonly, nonatomic) BOOL hasDedicatedMediaStateButton;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger hostAppModalPresentationStyle; // ivar: _hostAppModalPresentationStyle
@property (readonly, nonatomic) CGFloat idForWebExtensions;
@property (readonly, nonatomic) BOOL isAudible;
@property (readonly, nonatomic) BOOL isBlockedByScreenTime;
@property (readonly, nonatomic) BOOL isFrontmost;
@property (readonly, nonatomic) BOOL isLoadingComplete;
@property (readonly, nonatomic) BOOL isMuted;
@property (readonly, nonatomic) BOOL isPinnedTab;
@property (readonly, nonatomic) BOOL isPrivate;
@property (readonly, nonatomic) BOOL isShowingErrorPage;
@property (nonatomic) BOOL keepBarsMinimized;
@property (copy, nonatomic) NSArray *linkActions; // ivar: _linkActions
@property (readonly, nonatomic) NSUInteger mediaStateIcon;
@property (readonly, nonatomic) _SFPageZoomPreferenceManager *pageZoomManager;
@property (readonly, nonatomic) CGFloat parentTabIDForWebExtensions;
@property (readonly, nonatomic) NSURL *pendingURLForWebExtensions;
@property (readonly, nonatomic) _SFPerSitePreferencesVendor *perSitePreferencesVendor;
@property (retain, nonatomic) UIColor *preferredBarTintColor; // ivar: _preferredBarTintColor
@property (retain, nonatomic) UIColor *preferredControlTintColor; // ivar: _preferredControlTintColor
@property (readonly, nonatomic) NSObject<SFReaderContext> *readerContext;
@property (retain, nonatomic) _SFReloadOptionsController *reloadOptionsController; // ivar: _reloadOptionsController
@property (nonatomic) BOOL remoteSwipeGestureEnabled; // ivar: _remoteSwipeGestureEnabled
@property (readonly, nonatomic) SFReaderEnabledWebViewController *rootWebViewController;
@property (nonatomic) NSInteger safariDataSharingMode; // ivar: _safariDataSharingMode
@property (readonly, nonatomic, getter=isShowingReader) BOOL showingReader;
@property (nonatomic) BOOL storeBannersAreDisabled; // ivar: _storeBannersAreDisabled
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsPrivacyReport;
@property (readonly, copy, nonatomic) NSString *tabTitle;
@property (readonly, nonatomic) CGSize tabViewSize;
@property (readonly, nonatomic) SFBrowserDocumentTrackerInfo *trackerInfo;
@property (retain, nonatomic) WBSTranslationContext *translationContext; // ivar: _translationContext
@property (readonly, nonatomic) NSURL *urlForExtensions;
@property (nonatomic) BOOL viewDidAppearInHostApp; // ivar: _viewDidAppearInHostApp
@property (readonly, nonatomic) BOOL wasLoadedWithContentBlockersEnabled;
@property (readonly, nonatomic) NSObject<WBSWebExtensionWindow> *webExtensionWindow;
@property (readonly, nonatomic) WKWebView *webView;
@property (readonly, nonatomic) SFReaderEnabledWebViewController *webViewController;
@property (readonly, nonatomic) WKWebView *webViewForExtensions;
@property (nonatomic) BOOL webViewLayoutUnderlapsStatusBar; // ivar: _webViewLayoutUnderlapsStatusBar
@property (readonly, copy, nonatomic) NSArray *webViewsThatCanReceiveMessages;
@property (readonly, nonatomic) WKPreferences *wkPreferences; // ivar: _wkPreferences
@property (nonatomic) CGFloat zoomFactor;


+(void)createDefaultWebsiteDataStore;
-(BOOL)_canSaveWebpage;
-(BOOL)_canSaveWebpageForURL:(id)arg0 ;
-(BOOL)_canScrollToTopInView:(id)arg0 ;
-(BOOL)_canShowDownloadWithoutPrompting:(id)arg0 ;
-(BOOL)_canShowPageFormatMenu;
-(BOOL)_canTranslateWebpages;
-(BOOL)_currentlyEditingText;
-(BOOL)_dismissTransientUIAnimated:(BOOL)arg0 ;
-(BOOL)_effectiveBarCollapsingEnabled;
-(BOOL)_isPreviewing;
-(BOOL)_isSecure;
-(BOOL)_isSplitScreen;
-(BOOL)_notifyInitialLoadDidFinish:(BOOL)arg0 ;
-(BOOL)_readerViewControllerNeedsSetUp;
-(BOOL)_redirectToHostAppWithExpectedCallbackSchemeIfPossible:(id)arg0 ;
-(BOOL)_redirectToHostAppWithNavigationResult:(id)arg0 options:(id)arg1 ;
-(BOOL)_safeAreaShouldAffectWebViewObscuredInsets;
-(BOOL)_shouldAllowAutomaticReader;
-(BOOL)_shouldGoBackToOwnerWebView;
-(BOOL)_showICSControllerForPath:(id)arg0 sourceURL:(id)arg1 ;
-(BOOL)_updateAppInfoOverlayForBanner:(id)arg0 ;
-(BOOL)addBookmarkNavControllerCanSaveBookmarkChanges:(id)arg0 ;
-(BOOL)becomeFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(BOOL)createFluidProgressState;
-(BOOL)dynamicBarAnimator:(id)arg0 canTransitionToState:(NSInteger)arg1 byDraggingWithOffset:(CGFloat)arg2 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldBeRequiredToFailByGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)hasFailedURL;
-(BOOL)isContentObscuredByDigitalHealthForCustomizationController:(id)arg0 ;
-(BOOL)isDisplayingQuickLookDocumentForCustomizationController:(id)arg0 ;
-(BOOL)isPageEligibileToShowNotSecureWarning;
-(BOOL)isReaderAvailableForCustomizationController:(id)arg0 ;
-(BOOL)isSafariRestricted;
-(BOOL)isShowingReaderForCustomizationController:(id)arg0 ;
-(BOOL)linkPreviewHelper:(id)arg0 supportsAction:(NSInteger)arg1 forURL:(id)arg2 ;
-(BOOL)pageLoadErrorControllerIsInPreviewMode:(id)arg0 ;
-(BOOL)pageLoadErrorControllerShouldHandleCertificateError:(id)arg0 ;
-(BOOL)pageLoadErrorControllerShouldPermanentlyAcceptCertificate:(id)arg0 ;
-(BOOL)pageLoadErrorControllerShouldReloadAfterError:(id)arg0 ;
-(BOOL)prefersHomeIndicatorAutoHidden;
-(BOOL)printControllerCanPresentPrintUI:(id)arg0 ;
-(BOOL)printControllerPageIsLoading:(id)arg0 ;
-(BOOL)printControllerShouldPrintReader:(id)arg0 ;
-(BOOL)readerViewIsVisibleForMailContentProvider:(id)arg0 ;
-(BOOL)scrollViewShouldScrollToTop:(id)arg0 ;
-(BOOL)shouldBlockAppSuggestionBanner:(id)arg0 ;
-(BOOL)translationContextIsUsingPrivateBrowsing:(id)arg0 ;
-(BOOL)webViewControllerCanPromptForAccountSecurityRecommendation:(id)arg0 ;
-(CGFloat)_crashBannerDraggingOffsetForContentOffset:(struct CGPoint )arg0 ;
-(CGFloat)_maximumHeightObscuredByBottomBar;
-(CGFloat)_offsetForDynamicBarAnimator;
-(CGFloat)dynamicBarAnimator:(id)arg0 minimumTopBarHeightForOffset:(CGFloat)arg1 ;
-(CGFloat)estimatedProgress;
-(NSInteger)preferredStatusBarStyle;
-(NSInteger)webViewController:(id)arg0 presentationPolicyForDialog:(id)arg1 ;
-(NSUInteger)browserPersonaForActivityViewController:(id)arg0 ;
-(NSUInteger)browserPersonaForWebViewController:(id)arg0 ;
-(id)_EVOrganizationName;
-(id)_applicationPayloadForOpeningInSafari;
-(id)_committedDomainForPreferences;
-(id)_contextMenuConfigurationForWebView:(id)arg0 element:(id)arg1 ;
-(id)_contextMenuContentPreviewForWebView:(id)arg0 element:(id)arg1 ;
-(id)_currentWebView;
-(id)_digitalHealthManager;
-(id)_fallbackURLForWellKnownChangePasswordURL:(id)arg0 ;
-(id)_itemProviderCollectionForSharingURL:(id)arg0 title:(id)arg1 ;
-(id)_mailContentProvider;
-(id)_openNewWebViewIfNeededWithConfiguration:(id)arg0 forNavigationAction:(id)arg1 ;
-(id)_quickLookDocumentForDownload:(id)arg0 ;
-(id)currentFluidProgressStateSource;
-(id)dataForQuickLookDocument:(id)arg0 ;
-(id)handoffURL;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)keyCommands;
-(id)legacyTLSHostManager;
-(id)linkPreviewHelper:(id)arg0 previewViewControllerForURL:(id)arg1 ;
-(id)linkPreviewHelper:(id)arg0 resultOfLoadingURL:(id)arg1 ;
-(id)navigationBarURLForSharing:(id)arg0 ;
-(id)newProcessPool;
-(id)overrideTraitCollectionForChildViewController:(id)arg0 ;
-(id)pageLoadErrorControllerGetSecIdentityPreferencesController:(id)arg0 ;
-(id)presentingViewControllerForPrintController:(id)arg0 ;
-(id)presentingViewControllerForWebViewController:(id)arg0 ;
-(id)printControllerForContentProvider:(id)arg0 ;
-(id)processPool;
-(id)processPoolConfiguration;
-(id)progressState;
-(id)quickLookDocument;
-(id)quickLookDocumentForCurrentBackForwardListItem;
-(id)readerControllerForMailContentProvider:(id)arg0 ;
-(id)resultOfLoadingRequest:(id)arg0 inMainFrame:(BOOL)arg1 disallowRedirectToExternalApps:(BOOL)arg2 ;
-(id)safariApplicationVersionForTranslationContext:(id)arg0 ;
-(id)suggestedFileExtensionForQuickLookDocument:(id)arg0 ;
-(id)suggestedFileNameForQuickLookDocument:(id)arg0 ;
-(id)translationConsentAlertHelperViewControllerToPresentDetailsFrom:(id)arg0 ;
-(id)webViewController:(id)arg0 contextMenuContentPreviewForElement:(id)arg1 ;
-(id)webViewController:(id)arg0 didStartDownload:(id)arg1 ;
-(id)webViewForCustomizationController:(id)arg0 ;
-(id)webViewForFindOnPageView:(id)arg0 ;
-(id)webViewForMailContentProvider:(id)arg0 ;
-(id)websiteDataStore;
-(id)websiteDataStoreConfiguration;
-(struct UIEdgeInsets )_effectiveWebViewSafeAreaInsets;
-(void)_cancelPendingUpdateUserActivityTimer;
-(void)_cleanUpAfterRedirectToExternalApp;
-(void)_cleanUpWebViewController:(id)arg0 ;
-(void)_closePreviewDocumentTimerFired:(id)arg0 ;
-(void)_completeRedirectToExternalNavigationResult:(id)arg0 fromOriginalRequest:(id)arg1 dialogResult:(NSInteger)arg2 ;
-(void)_decreasePageZoomSetting;
-(void)_determineResultOfLoadingRequest:(id)arg0 inMainFrame:(BOOL)arg1 disallowRedirectToExternalApps:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)_didCompleteScrolling;
-(void)_didCompleteViewSizeTransition;
-(void)_didDecideNavigationPolicy:(NSInteger)arg0 forNavigationAction:(id)arg1 ;
-(void)_didDecideNavigationPolicy:(NSInteger)arg0 forNavigationResponse:(id)arg1 ;
-(void)_didLoadWebView;
-(void)_didResolveDestinationURL:(id)arg0 pendingAppLinkCheck:(BOOL)arg1 ;
-(void)_dismiss;
-(void)_emailCurrentPageWithPreferredContentType:(NSInteger)arg0 ;
-(void)_fetchActivityViewControllerInfoForURL:(id)arg0 title:(id)arg1 completion:(id)arg2 ;
-(void)_fetchSharingURLWithCompletionHandler:(id)arg0 ;
-(void)_getSafariDataSharingModeWithCompletion:(id)arg0 ;
-(void)_goBack;
-(void)_goBackToOwnerWebView;
-(void)_goForward;
-(void)_hideCrashBanner;
-(void)_hideDigitalHealthOverlay;
-(void)_hideNavigationBarGestureRecognized:(id)arg0 ;
-(void)_hideQuickLookDocumentView;
-(void)_hideReaderAnimated:(BOOL)arg0 deactivationMode:(NSUInteger)arg1 ;
-(void)_increasePageZoomSetting;
-(void)_initialLoadFinishedWithSuccess:(BOOL)arg0 ;
-(void)_internalWebViewController:(id)arg0 decidePolicyForNavigationAction:(id)arg1 decisionHandler:(id)arg2 ;
-(void)_internalWebViewController:(id)arg0 decidePolicyForNavigationAction:(id)arg1 withResult:(id)arg2 decisionHandler:(id)arg3 ;
-(void)_invalidateEVOrganizationName;
-(void)_invalidatePreviewCloseTimer;
-(void)_invalidateUserActivity;
-(void)_invalidateWebViewControllers;
-(void)_invokeCustomActivity;
-(void)_keyboardWillHide:(id)arg0 ;
-(void)_layOutBrowserViewForSizeTransition;
-(void)_openCurrentURLInSafari;
-(void)_perSiteAutomaticReaderActivationPreferenceDidChange:(id)arg0 ;
-(void)_perSitePageZoomPreferenceDidChange:(id)arg0 ;
-(void)_performClickActionForExtension:(id)arg0 ;
-(void)_popWebViewController;
-(void)_presentActivityViewController;
-(void)_presentSaveWebpageViewController;
-(void)_presentTranslationConsentAlertWithType:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(void)_pushWebViewController:(id)arg0 ;
-(void)_queueAlertForRedirectToExternalNavigationResult:(id)arg0 fromOriginalRequest:(id)arg1 isMainFrame:(BOOL)arg2 promptPolicy:(NSInteger)arg3 userAction:(id)arg4 ;
-(void)_redirectToExternalNavigationResult:(id)arg0 fromOriginalRequest:(id)arg1 promptPolicy:(NSInteger)arg2 isMainFrame:(BOOL)arg3 userAction:(id)arg4 ;
-(void)_redirectToNewsIfNeededForRequest:(id)arg0 isMainFrame:(BOOL)arg1 userAction:(id)arg2 decisionHandler:(id)arg3 ;
-(void)_reloadFromOrigin:(BOOL)arg0 ;
-(void)_resetPageZoomSetting;
-(void)_scrollToTopFromScrollToTopView;
-(void)_setCurrentWebViewController:(id)arg0 ;
-(void)_setShowingCrashBanner:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)_setShowingPinnableBanner:(id)arg0 animated:(BOOL)arg1 ;
-(void)_setSuppressingPreviewProgressAnimation:(BOOL)arg0 ;
-(void)_setUpAnalyticsPersona;
-(void)_setUpCalendarEventDetectorIfNeeded;
-(void)_setUpFindOnPageViewIfNeeded;
-(void)_setUpInterfaceIfNeeded;
-(void)_setUpMenu;
-(void)_setUpReaderViewController;
-(void)_setUpReloadOptionsControllerIfNeeded;
-(void)_setUpToolbar;
-(void)_setUpTopBarAndBottomBar;
-(void)_setUpWebViewControllerIfNeeded;
-(void)_showBars;
-(void)_showBarsFromBottomBarTap:(id)arg0 ;
-(void)_showCrashBanner:(id)arg0 animated:(BOOL)arg1 ;
-(void)_showDigitalHealthOverlayWithPolicy:(NSInteger)arg0 ;
-(void)_showDownload:(id)arg0 ;
-(void)_showGenericDownloadAlert;
-(void)_showPassBookControllerForPasses:(id)arg0 ;
-(void)_showQuickLookDocumentView;
-(void)_showReaderAnimated:(BOOL)arg0 ;
-(void)_translationAvailabilityDidChange:(id)arg0 ;
-(void)_translationContextStateDidChange:(id)arg0 ;
-(void)_updateBarItems;
-(void)_updateBarTheme;
-(void)_updateCrashBannerOffset;
-(void)_updateCurrentScrollViewInsets;
-(void)_updateDigitalHealthTracking;
-(void)_updateDynamicBarGeometry;
-(void)_updateHomeIndicatorAutoHideState;
-(void)_updateInterfaceFillsScreen;
-(void)_updateMaxVisibleHeightPercentageUserDriven:(BOOL)arg0 ;
-(void)_updateNavigationBar;
-(void)_updatePageZoomWithPreference;
-(void)_updatePinnableBannerFrame;
-(void)_updatePinnableBannerOffset;
-(void)_updatePreviewLoadingUI;
-(void)_updateRemoteSwipeGestureState;
-(void)_updateScrollIndicatorVerticalInsets:(struct UIEdgeInsets )arg0 horizontalInsets:(struct UIEdgeInsets )arg1 ;
-(void)_updateScrollToTopView;
-(void)_updateStatusBarStyleForced:(BOOL)arg0 ;
-(void)_updateTrackerProtectionPreferences;
-(void)_updateUI;
-(void)_updateUserActivity;
-(void)_updateUserActivitySoon;
-(void)_updateUserActivityTimerFired;
-(void)_updateUsesNarrowLayout;
-(void)_updateWebKitExperimentalFeatures;
-(void)_updateWebViewLayoutSize;
-(void)_updateWebViewShrinkToFit;
-(void)_willBeginUserInitiatedNavigation;
-(void)_willCommitContextMenuForWebView:(id)arg0 withAnimator:(id)arg1 ;
-(void)_willPresentContextMenu;
-(void)activityViewController:(id)arg0 prepareActivity:(id)arg1 completion:(id)arg2 ;
-(void)addBookmarkNavController:(id)arg0 didFinishWithResult:(BOOL)arg1 bookmark:(id)arg2 ;
-(void)addPassesViewControllerDidFinish:(id)arg0 ;
-(void)authenticationChallengeDidNegotiateModernTLS:(id)arg0 ;
-(void)autoFillFormKeyPressed;
-(void)barManager:(id)arg0 didReceiveTapForBarItem:(NSInteger)arg1 ;
-(void)beginDigitalHealthTracking;
-(void)cancelKeyPressed;
-(void)clearBadgeOnPageFormatMenu;
-(void)clearFluidProgressState;
-(void)close;
-(void)compressedNavigationBarWasTapped:(id)arg0 ;
-(void)contextMenuConfigurationForReaderViewController:(id)arg0 element:(id)arg1 completionHandler:(id)arg2 ;
-(void)createReaderWebViewForWebViewController:(id)arg0 ;
-(void)customizationControllerCustomizationsDidChange:(id)arg0 ;
-(void)dealloc;
-(void)decideDataSharingModeAndSetUpWebViewWithCompletionHandler:(id)arg0 ;
-(void)decreaseSize:(id)arg0 ;
-(void)didMoveToParentViewController:(id)arg0 ;
-(void)didUpdateNavigationBarItem:(id)arg0 ;
-(void)dismissAppSuggestionBanner:(id)arg0 ;
-(void)dismissSFSafariViewControllerKeyPressed;
-(void)downloadDidFail:(id)arg0 ;
-(void)downloadDidFinish:(id)arg0 ;
-(void)downloadDidReceiveResponse:(id)arg0 ;
-(void)downloadDidStart:(id)arg0 ;
-(void)dynamicBarAnimatorOutputsDidChange:(id)arg0 ;
-(void)dynamicBarAnimatorStateDidChange:(id)arg0 ;
-(void)dynamicBarAnimatorWillEnterSteadyState:(id)arg0 ;
-(void)dynamicBarAnimatorWillLeaveSteadyState:(id)arg0 ;
-(void)emailCurrentPage;
-(void)findKeyPressed;
-(void)fluidProgressRocketAnimationDidComplete;
-(void)goBack;
-(void)goForward;
-(void)increaseSize:(id)arg0 ;
-(void)linkPreviewHelper:(id)arg0 commitPreviewViewControllerForAction:(NSInteger)arg1 withTabOrder:(NSInteger)arg2 ;
-(void)linkPreviewHelper:(id)arg0 didProduceNavigationIntent:(id)arg1 forAction:(NSInteger)arg2 ;
-(void)linkPreviewHelper:(id)arg0 redirectToExternalNavigationResult:(id)arg1 ;
-(void)linkPreviewHelperWillDisableLinkPreview;
-(void)loadRequest:(id)arg0 ;
-(void)loadURL:(id)arg0 ;
-(void)loadView;
-(void)mute;
-(void)navigateBackKeyPressed;
-(void)navigateForwardKeyPressed;
-(void)navigationBar:(id)arg0 didCreateLeadingToolbar:(id)arg1 trailingToolbar:(id)arg2 ;
-(void)navigationBarCancelButtonWasTapped:(id)arg0 ;
-(void)navigationBarDoneButtonWasTapped:(id)arg0 ;
-(void)navigationBarFormatMenuButtonBecameUnavailable:(id)arg0 ;
-(void)navigationBarFormatMenuButtonStartedInteraction:(id)arg0 ;
-(void)navigationBarFormatMenuButtonWasTapped:(id)arg0 ;
-(void)navigationBarMediaStateMuteButtonWasTapped:(id)arg0 ;
-(void)navigationBarMetricsDidChange:(id)arg0 ;
-(void)navigationBarReaderButtonWasTapped:(id)arg0 ;
-(void)navigationBarReloadButtonWasTapped:(id)arg0 ;
-(void)navigationBarStopLoadingButtonWasTapped:(id)arg0 ;
-(void)navigationBarTranslateButtonWasTapped:(id)arg0 ;
-(void)nextFindResultKeyPressed;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)overlayDidHide:(id)arg0 ;
-(void)pageLoadErrorController:(id)arg0 allowLegacyTLSConnectionForURL:(id)arg1 navigateToURL:(id)arg2 ;
-(void)pageLoadErrorController:(id)arg0 loadFailedRequestAfterError:(id)arg1 ;
-(void)pageLoadErrorController:(id)arg0 presentViewController:(id)arg1 ;
-(void)pageLoadErrorController:(id)arg0 setAllowsSpecificHTTPSCertificate:(id)arg1 forHost:(id)arg2 ;
-(void)pageLoadErrorControllerClosePage:(id)arg0 ;
-(void)perSiteSettingsUIPresentSettings;
-(void)policyDidChangeForDigitalHealthManager:(id)arg0 ;
-(void)presentDownloadsViewController;
-(void)presentModalViewController:(id)arg0 completion:(id)arg1 ;
-(void)presentViewController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)previousFindResultKeyPressed;
-(void)printController:(id)arg0 didCreatePrintInfo:(id)arg1 ;
-(void)readerViewController:(id)arg0 contextMenuDidEndForElement:(id)arg1 ;
-(void)readerViewController:(id)arg0 contextMenuForElement:(id)arg1 willCommitWithAnimator:(id)arg2 ;
-(void)readerViewController:(id)arg0 contextMenuWillPresentForElement:(id)arg1 ;
-(void)reload;
-(void)reloadEnablingContentBlockers:(BOOL)arg0 ;
-(void)reloadFromOrigin;
-(void)reloadFromOriginKeyPressed;
-(void)reloadKeyPressed;
-(void)resetPageZoomLevelAndFontSize;
-(void)saveKeyPressed;
-(void)saveToFilesOperation:(id)arg0 didFinishWithSuccess:(BOOL)arg1 ;
-(void)saveToFilesOperation:(id)arg0 presentViewController:(id)arg1 ;
-(void)saveWebpageAlternativeKeyPressed;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewDidScrollToTop:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;
-(void)select;
-(void)setAppSuggestionBanner:(id)arg0 isPinned:(BOOL)arg1 ;
-(void)setQuickLookDocumentForCurrentBackForwardListItem:(id)arg0 ;
-(void)stopDigitalHealthTracking;
-(void)stopLoading;
-(void)takeFindStringKeyPressed;
-(void)toggleMediaStateMuted;
-(void)toggleReaderKeyPressed;
-(void)toggleShowingReaderForUserAction;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)translationContext:(id)arg0 shouldReportProgressInUnifiedField:(BOOL)arg1 ;
-(void)translationContext:(id)arg0 showFeedbackConsentAlertWithCompletionHandler:(id)arg1 ;
-(void)translationContext:(id)arg0 showFirstTimeConsentAlertWithCompletionHandler:(id)arg1 ;
-(void)translationContext:(id)arg0 showTranslationErrorAlertWithTitle:(id)arg1 message:(id)arg2 ;
-(void)translationContext:(id)arg0 urlForCurrentPageWithCompletionHandler:(id)arg1 ;
-(void)translationContextNeedsScrollHeightVisibilityUpdate:(id)arg0 ;
-(void)translationContextReloadPageInOriginalLanguage:(id)arg0 ;
-(void)translationContextWillRequestTranslatingWebpage:(id)arg0 ;
-(void)unmute;
-(void)updateBottombarOffset:(CGFloat)arg0 topBarHeight:(CGFloat)arg1 ;
-(void)validateCommand:(id)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)visibilityWillChangeForFindOnPageView:(id)arg0 ;
-(void)webExtensionKeyCommandPressed:(id)arg0 ;
-(void)webViewController:(id)arg0 authenticationChallenge:(id)arg1 shouldAllowLegacyTLS:(id)arg2 ;
-(void)webViewController:(id)arg0 contextMenuConfigurationForElement:(id)arg1 completionHandler:(id)arg2 ;
-(void)webViewController:(id)arg0 contextMenuDidEndForElement:(id)arg1 ;
-(void)webViewController:(id)arg0 contextMenuForElement:(id)arg1 willCommitWithAnimator:(id)arg2 ;
-(void)webViewController:(id)arg0 contextMenuWillPresentForElement:(id)arg1 ;
-(void)webViewController:(id)arg0 createWebViewWithConfiguration:(id)arg1 forNavigationAction:(id)arg2 completionHandler:(id)arg3 ;
-(void)webViewController:(id)arg0 decidePolicyForNavigationAction:(id)arg1 decisionHandler:(id)arg2 ;
-(void)webViewController:(id)arg0 decidePolicyForNavigationResponse:(id)arg1 decisionHandler:(id)arg2 ;
-(void)webViewController:(id)arg0 decidePolicyForSOAuthorizationLoadWithCurrentPolicy:(NSInteger)arg1 forExtension:(id)arg2 completionHandler:(id)arg3 ;
-(void)webViewController:(id)arg0 didChangeFullScreen:(BOOL)arg1 ;
-(void)webViewController:(id)arg0 didClickLinkInReaderWithRequest:(id)arg1 ;
-(void)webViewController:(id)arg0 didCommitNavigation:(id)arg1 ;
-(void)webViewController:(id)arg0 didEndNavigationGestureToBackForwardListItem:(id)arg1 ;
-(void)webViewController:(id)arg0 didExtractTextSamplesForTranslation:(id)arg1 ;
-(void)webViewController:(id)arg0 didFailNavigation:(id)arg1 withError:(id)arg2 ;
-(void)webViewController:(id)arg0 didFailProvisionalNavigation:(id)arg1 withError:(id)arg2 ;
-(void)webViewController:(id)arg0 didFindAppBannerWithContent:(id)arg1 ;
-(void)webViewController:(id)arg0 didFinishDocumentLoadForNavigation:(id)arg1 ;
-(void)webViewController:(id)arg0 didFinishLoadForQuickLookDocumentInMainFrame:(id)arg1 ;
-(void)webViewController:(id)arg0 didFinishNavigation:(id)arg1 ;
-(void)webViewController:(id)arg0 didReceiveAuthenticationChallenge:(id)arg1 completionHandler:(id)arg2 ;
-(void)webViewController:(id)arg0 didReceiveServerRedirectForProvisionalNavigation:(id)arg1 ;
-(void)webViewController:(id)arg0 didSameDocumentNavigation:(id)arg1 ofType:(NSInteger)arg2 ;
-(void)webViewController:(id)arg0 didStartLoadForQuickLookDocumentInMainFrameWithFileName:(id)arg1 uti:(id)arg2 ;
-(void)webViewController:(id)arg0 didStartProvisionalNavigation:(id)arg1 ;
-(void)webViewController:(id)arg0 mediaCaptureStateDidChange:(NSUInteger)arg1 ;
-(void)webViewController:(id)arg0 printFrame:(id)arg1 ;
-(void)webViewController:(id)arg0 webViewDidClose:(id)arg1 ;
-(void)webViewController:(id)arg0 willEndNavigationGestureToBackForwardListItem:(id)arg1 ;
-(void)webViewController:(id)arg0 willGoToBackForwardListItem:(id)arg1 inPageCache:(BOOL)arg2 ;
-(void)webViewController:(id)arg0 willPerformClientRedirectToURL:(id)arg1 withDelay:(CGFloat)arg2 ;
-(void)webViewControllerDidCancelClientRedirect:(id)arg0 ;
-(void)webViewControllerDidChangeEstimatedProgress:(id)arg0 ;
-(void)webViewControllerDidChangeHasOnlySecureContent:(id)arg0 ;
-(void)webViewControllerDidChangeLoadingState:(id)arg0 ;
-(void)webViewControllerDidChangeSafeAreaInsets:(id)arg0 ;
-(void)webViewControllerDidChangeSafeAreaShouldAffectObscuredInsets:(id)arg0 ;
-(void)webViewControllerDidChangeURL:(id)arg0 ;
-(void)webViewControllerDidDetermineReaderAvailability:(id)arg0 dueTo:(NSInteger)arg1 ;
-(void)webViewControllerDidFirstPaint:(id)arg0 ;
-(void)webViewControllerDidFirstVisuallyNonEmptyLayout:(id)arg0 ;
-(void)webViewControllerUpdateNavigationBar:(id)arg0 ;
-(void)webViewControllerWebProcessDidBecomeResponsive:(id)arg0 ;
-(void)webViewControllerWebProcessDidBecomeUnresponsive:(id)arg0 ;
-(void)webViewControllerWebProcessDidCrash:(id)arg0 ;
-(void)webViewControllerWillPresentJavaScriptDialog:(id)arg0 ;


@end


#endif