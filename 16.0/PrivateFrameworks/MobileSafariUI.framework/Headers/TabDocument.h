// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TABDOCUMENT_H
#define TABDOCUMENT_H

@class NSString, NSError, WBSURLSpoofingMitigator, _WKSessionState, _WKRemoteObjectInterface, _SFSafariSharingExtensionController, _SFCalendarEventDetector, _SFInjectedJavaScriptController, _SFWebClipMetadataFetcher, NSMutableArray, _SFFormAutoFillController, WBSFluidProgressController, NSDictionary, NSURL, WKBackForwardListItem, SFApplicationManifestFetcher, _SFDownload, NSHashTable, _SFFluidProgressView, SFNavigationBarItem, _SFReaderController, WebBookmark, SLHighlight, SFPinnableBanner<SFAppSuggestionBanner>, SFPinnableBanner, NSTimer, _SFTelephonyNavigationMitigationPolicy, _WKUserInitiatedAction, _SFSecIdentityPreferencesController, _SFNavigationIntent, NSNumber, NSPointerArray, _SFNavigationUtilitiesManager, _WKActivatedElementInfo, _SFQuickLookDocumentWriter, WBSSafariExtensionStateObserver, WBSPermissionDialogThrottler, NSArray, _SFWebView, STBlockingViewController, _SFBrowserConfiguration, WBSHistoryContextController, SFDialogController, _UIFindInteraction, WBSHistoryVisit, NSUUID, _SFPageLoadErrorController, _SFPrintController, WBSFluidProgressState, _SFQuickLookDocument, _SFReloadOptionsController, _SFSafeBrowsingController, WBSSameDocumentNavigationToHistoryVisitCorrelator, CSSearchableItemAttributeSet, UIImage, WBTab, SFTabStateData, UIColor, SFBrowserDocumentTrackerInfo, WBSTranslationContext, NSUserActivity, WKWebView;
@protocol _WKAppHighlightDelegate, SFHighlightAttributionPresenter, SFAppBannerMetaTagContentObserver, SFAppSuggestionBannerDelegate, LoadingControllerDelegate, QuickWebsiteSearchEventListener, SFFormAutoFillControllerDelegate, WBSFluidProgressControllerWindowDelegate, WBSFluidProgressStateSource, WKNavigationDelegatePrivate, WKUIDelegatePrivate, SFDialogControllerDelegate, SFDialogViewControllerPresenting, _SFLinkPreviewHandler, _SFPageLoadErrorControllerDelegate, _SFPrintControllerDelegate, _SFReaderControllerDelegate, _SFWebViewDelegate, _WKDiagnosticLoggingDelegate, _WKFullscreenDelegate, _WKIconLoadingDelegate, _WKInputDelegate, _WKWebAuthenticationPanelDelegate, WBSTranslationConsentAlertHelperDelegate, WBSTranslationContextDelegate, _SFQuickLookDocumentSource, _WKFindDelegate, WBTabGroupSyncAgentSyncObserver, WBSWebExtensionTab, _SFAutoFillContextProviding, LoadableResource, ReadingListMetadataProvider, SFDialogPresenting, WBReusableTab, WBSOrderedTab, WBSTabItemSearchSupport, _SFBrowserDocument, _SFDownloadDelegate, _SFMediaRecordingDocument, _SFNavigationIntentHandling, UIDragSession, TabDocumentDelegate, LoadProgressObserver, SFReaderContext, WBSWebExtensionWindow;

#import <Foundation/Foundation.h>

#import "TouchIconFetcher.h"
#import "FindOnPageCompletionProvider.h"
#import "LoadingController.h"
#import "TabDocumentView.h"
#import "PageLoadTest.h"
#import "ActionPanelActivityItemProvider.h"
#import "BrowserController.h"
#import "UnifiedTabBarItem.h"
#import "LinkPreviewViewController.h"
#import "PageLoadTestStatistics.h"
#import "TabDocument.h"
#import "TabBarItem.h"
#import "TabOverviewItem.h"

@interface TabDocument : NSObject <_WKAppHighlightDelegate, SFHighlightAttributionPresenter, SFAppBannerMetaTagContentObserver, SFAppSuggestionBannerDelegate, LoadingControllerDelegate, QuickWebsiteSearchEventListener, SFFormAutoFillControllerDelegate, WBSFluidProgressControllerWindowDelegate, WBSFluidProgressStateSource, WKNavigationDelegatePrivate, WKUIDelegatePrivate, SFDialogControllerDelegate, SFDialogViewControllerPresenting, _SFLinkPreviewHandler, _SFPageLoadErrorControllerDelegate, _SFPrintControllerDelegate, _SFReaderControllerDelegate, _SFWebViewDelegate, _WKDiagnosticLoggingDelegate, _WKFullscreenDelegate, _WKIconLoadingDelegate, _WKInputDelegate, _WKWebAuthenticationPanelDelegate, WBSTranslationConsentAlertHelperDelegate, WBSTranslationContextDelegate, _SFQuickLookDocumentSource, _WKFindDelegate, WBTabGroupSyncAgentSyncObserver, WBSWebExtensionTab, _SFAutoFillContextProviding, LoadableResource, ReadingListMetadataProvider, SFDialogPresenting, WBReusableTab, WBSOrderedTab, WBSTabItemSearchSupport, _SFBrowserDocument, _SFDownloadDelegate, _SFMediaRecordingDocument, _SFNavigationIntentHandling>

 {
    NSInteger _retainCount;
    NSUInteger _progressAnimationSuppressedCount;
    NSString *_EVOrganizationName;
    NSError *_lastLoadError;
    NSError *_lastLoadErrorForFormatMenu;
    WBSURLSpoofingMitigator *_URLSpoofingMitigator;
    _WKSessionState *_savedSessionState;
    _WKRemoteObjectInterface *_siteSpecificSearchEventListenerInterface;
    _WKRemoteObjectInterface *_appBannerMetaTagContentObserverInterface;
    _SFSafariSharingExtensionController *_sharingExtensionController;
    _SFCalendarEventDetector *_calendarEventDetector;
    _SFInjectedJavaScriptController *_activityJSController;
    _SFWebClipMetadataFetcher *_webClipMetadataFetcher;
    TouchIconFetcher *_touchIconFetcher;
    NSMutableArray *_fallbackURLs;
    NSUInteger _lastReaderDeactivationMode;
    FindOnPageCompletionProvider *_findCompletionProvider;
    _SFFormAutoFillController *_autoFillController;
    id *_autoFillAuthenticationCompletionBlock;
    LoadingController *_loadingController;
    WBSFluidProgressController *_fluidProgressController;
    NSDictionary *_initialArticleScrollDictionaryForCloudTab;
    NSURL *_overrideURLForHTTPAuthenticationDialog;
    WKBackForwardListItem *_parentTabItem;
    SFApplicationManifestFetcher *_applicationManifestFetcher;
    _SFDownload *_activeDownload;
    TabDocumentView *_cachedView;
    NSUInteger _currentUsageState;
    NSURL *_lastURLForWhichUsageStateWasSet;
    NSInteger _concurrentNavigationActionPolicyDecisions;
    NSHashTable *_renderingProgressEventObservers;
    NSHashTable *_navigationObservers;
    _SFFluidProgressView *_progressView;
    SFNavigationBarItem *_navigationBarItem;
    _SFReaderController *_readerContext;
    WebBookmark *_bookmarkForIconFetching;
    WKBackForwardListItem *_backForwardListItemForCurrentAppLinkBannerCheck;
    WKBackForwardListItem *_backForwardListItemForCurrentHighlightBannerCheck;
    SLHighlight *_highlightFromNavigation;
    WKBackForwardListItem *_backForwardListItemForCurrentNoteTakingCheck;
    SFPinnableBanner<SFAppSuggestionBanner> *_storeBanner;
    SFPinnableBanner *_appBannerPendingFirstPaint;
    NSTimer *_appBannerRemovalTimer;
    _SFTelephonyNavigationMitigationPolicy *_telephonyNavigationPolicy;
    _WKUserInitiatedAction *_lastUserInitiatedAction;
    _SFSecIdentityPreferencesController *_secIdentityPreferencesController;
    PageLoadTest *_pageLoadTest;
    NSTimer *_donateTextTimer;
    NSTimer *_unresponsiveWebProcessTimer;
    id *_unresponsiveWebProcessBlock;
    _SFNavigationIntent *_deferredDropNavigationIntent;
    NSUInteger _deferredDropNavigationIntentGeneration;
    NSNumber *_deferredDropWasHandledByWebKit;
    id<UIDragSession> *_webKitDragSession;
    NSUInteger _cachedMediaStateIcon;
    NSPointerArray *_spawnedTabDocuments;
    NSURL *_cachedCanonicalURL;
    ActionPanelActivityItemProvider *_cachedActivityItemProvider;
    id *_pendingNavigationActionDueToExternalSchemePromptHandler;
    NSURL *_cachedURL;
    id *_faviconToken;
    NSURL *_originalURL;
    NSTimer *_updateFaviconTimer;
    NSURL *_urlToReloadForcingContentBlockers;
    BOOL _enableContentBlockersWhenReloading;
    BOOL _wasLoadedWithLockdownModeEnabled;
    BOOL _pendingNavigationWillLoadWithLockdownModeEnabled;
    _SFNavigationUtilitiesManager *_navigationUtilitiesManager;
    NSString *_domainWhereUserDeclinedAutomaticStrongPassword;
    _WKActivatedElementInfo *_elementInfoToAnimateForNextDownload;
    _SFDownload *_downloadReflectedInFluidProgress;
    BOOL _closeWhenNextDownloadStarts;
    BOOL _loadNextNavigationInline;
    BOOL _EVOrganizationNameIsValid;
    BOOL _forwardActivityToCoreSpotlight;
    BOOL _loadWasUserDriven;
    BOOL _userDrivenLoadWasConsumed;
    BOOL _lastLoadWasUserInitiated;
    BOOL _shouldDismissReaderInReponseToSameDocumentNavigation;
    BOOL _allowURLAsTitle;
    BOOL _wasOpenedFromHistory;
    BOOL _quickLookDocumentCheckCompleted;
    BOOL _didFirstPaint;
    BOOL _shouldSuppressDialogsThatBlockWebProcessForProvisionalNavigation;
    BOOL _shouldResetPrintSuppressionOnNextCommit;
    BOOL _sourceApplicationIsValid;
    BOOL _isDisplayingTelephonyPrompt;
    BOOL _isDecidingNavigationResponsePolicyForMainFrameDownload;
    NSURL *_urlForDisplayedContent;
    BOOL _hasFocusedInputFieldOnCurrentPage;
    BOOL _suppressCrashBanner;
    BOOL _needsSendTelemetryForProvisionalLoad;
    BOOL _webViewIsLoading;
    BOOL _gestureRequiresGoBackToParentTab;
    BOOL _didCommitCurrentNavigation;
    BOOL _didQuickStopWhileBlank;
    BOOL _allowsExternalRedirectWithoutPrompting;
    BOOL _allowsSwitchingToPinnedTabOnNavigation;
    _SFQuickLookDocumentWriter *_quickLookDocumentWriter;
    NSString *_suggestedFilenameForNextCommit;
    BOOL _shouldReflectTranslationAsFluidProgress;
    ? _flags;
    NSUInteger _phishingURLClassification;
    CGFloat _idForWebExtensions;
    WBSSafariExtensionStateObserver *_webExtensionsStateObserver;
    NSTimer *_fireOnUpdatedWebExtensionEventTimer;
    NSUInteger _numberOfFindMatches;
    NSString *_findString;
    WBSPermissionDialogThrottler *_permissionDialogThrottler;
    BOOL _hasDeferredNavigation;
    NSURL *_deferredNavigationURL;
    NSString *_deferredNavigationTitle;
    NSString *_cachedDebugTitle;
    NSURL *_cachedURLForDebugTitle;
}


@property (readonly, nonatomic) NSURL *URLForPerSitePreferences;
@property (retain, nonatomic) NSURL *URLFromExternalApplication; // ivar: _URLFromExternalApplication
@property (readonly, nonatomic) NSString *URLString;
@property (copy, nonatomic) NSArray *URLStringComponents; // ivar: _URLStringComponents
@property (copy, nonatomic) NSString *URLStringForLastSearch; // ivar: _URLStringForLastSearch
@property (nonatomic, getter=isActive) BOOL active; // ivar: _active
@property (readonly, nonatomic) _SFWebView *activeWebView;
@property (readonly, nonatomic) ActionPanelActivityItemProvider *activityItemProvider;
@property (readonly, nonatomic) _SFInjectedJavaScriptController *activityJSController;
@property (readonly, nonatomic, getter=isAlive) BOOL alive;
@property (nonatomic) BOOL allowsProgrammaticFocusToBeginInputSession; // ivar: _allowsProgrammaticFocusToBeginInputSession
@property (readonly, nonatomic) NSString *alphanumericStrongPassword;
@property (readonly, copy, nonatomic) NSArray *ancestorTabIdentifiers;
@property (readonly, nonatomic) NSArray *ancestorUUIDs; // ivar: _ancestorUUIDs
@property (retain, nonatomic) SFPinnableBanner *appBanner; // ivar: _appBanner
@property (nonatomic) BOOL appBannerRemovalWasDeferred; // ivar: _appBannerRemovalWasDeferred
@property (weak, nonatomic) STBlockingViewController *associatedBlockingViewController; // ivar: _associatedBlockingViewController
@property (readonly, nonatomic) NSURL *attributionPresenterURL;
@property (readonly, nonatomic) BOOL audioOnly;
@property (readonly, weak, nonatomic) BrowserController *browserController; // ivar: _browserController
@property (readonly, nonatomic) NSURL *cachedCanonicalURLOrURLForSharing;
@property (readonly, nonatomic) BOOL canChangeSearchFieldPosition;
@property (readonly, nonatomic) BOOL canGoBackToParentTab;
@property (readonly, nonatomic) BOOL canHideToolbar;
@property (readonly, nonatomic) BOOL canOverrideStatusBar;
@property (readonly, nonatomic) BOOL canShowPageFormatMenu;
@property (readonly, nonatomic) BOOL canStopLoading; // ivar: _canStopLoading
@property (nonatomic) NSUInteger changedPropertiesForOnUpdatedWebExtensionEvent; // ivar: _changedPropertiesForOnUpdatedWebExtensionEvent
@property (nonatomic, getter=isClosed) BOOL closed; // ivar: _closed
@property (readonly, nonatomic, getter=isClosing) BOOL closing;
@property (readonly, nonatomic) _SFBrowserConfiguration *configuration; // ivar: _configuration
@property (readonly, nonatomic) BOOL contentIsReadyForSnapshot; // ivar: _contentIsReadyForSnapshot
@property (readonly, nonatomic, getter=isContentReady) BOOL contentReady;
@property (readonly, nonatomic) WBSHistoryContextController *contextController; // ivar: _contextController
@property (readonly, nonatomic, getter=isControlledByAutomation) BOOL controlledByAutomation;
@property (readonly, nonatomic) WKBackForwardListItem *currentBackForwardListItem;
@property (readonly, nonatomic) NSString *currentStrongPassword;
@property (readonly, nonatomic) UnifiedTabBarItem *currentUnifiedTabBarItem;
@property (copy, nonatomic) NSString *customUserAgent;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *defaultStrongPassword;
@property (weak, nonatomic) NSObject<TabDocumentDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) SFDialogController *dialogController; // ivar: _dialogController
@property (readonly, nonatomic) BOOL didFinishDocumentLoad; // ivar: _didFinishDocumentLoad
@property (readonly, nonatomic) BOOL didFirstLayout; // ivar: _didFirstLayout
@property (readonly, nonatomic) BOOL didFirstMeaningfulPaint; // ivar: _didFirstMeaningfulPaint
@property (nonatomic, getter=isDisplayingStandaloneImage) BOOL displayingStandaloneImage; // ivar: _displayingStandaloneImage
@property (nonatomic, getter=isDisplayingStandaloneMedia) BOOL displayingStandaloneMedia; // ivar: _displayingStandaloneMedia
@property (readonly, nonatomic) CGFloat estimatedProgress;
@property (readonly, nonatomic, getter=isExitingElementFullscreen) BOOL exitingElementFullscreen; // ivar: _exitingElementFullscreen
@property (readonly, nonatomic) NSURL *expectedOrCurrentURL;
@property (readonly, nonatomic) NSURL *expectedOrCurrentURLOrLastActiveURLIfCrashed;
@property (copy, nonatomic) NSDictionary *extensionIdentifierToDynamicallyInjectedStyleSheets; // ivar: _extensionIdentifierToDynamicallyInjectedStyleSheets
@property (nonatomic) NSInteger externalAppRedirectState; // ivar: _externalAppRedirectState
@property (readonly, nonatomic) _UIFindInteraction *findInteraction;
@property (readonly, nonatomic) _SFWebView *frontWebView;
@property (nonatomic) BOOL hasBeenInserted; // ivar: _hasBeenInserted
@property (readonly, nonatomic) BOOL hasDoneReaderDetection; // ivar: _hasDoneReaderAvailabilityDetection
@property (readonly, nonatomic) BOOL hasFormControlInteraction; // ivar: _hasFormControlInteraction
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isHibernated) BOOL hibernated; // ivar: _hibernated
@property (nonatomic, getter=wasHibernatedDueToMemoryWarning) BOOL hibernatedDueToMemoryWarning; // ivar: _hibernatedDueToMemoryWarning
@property (readonly, nonatomic) CGFloat idForWebExtensions;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (nonatomic, getter=isInteractivelyInserted) BOOL interactivelyInserted; // ivar: _interactivelyInserted
@property (readonly, nonatomic) BOOL isAudible;
@property (nonatomic) BOOL isBlank; // ivar: _isBlank
@property (readonly, nonatomic) BOOL isFrontmost;
@property (readonly, nonatomic) BOOL isLoadingComplete;
@property (nonatomic) BOOL isMediaSuspendedForScreenTime; // ivar: _isMediaSuspendedForScreenTime
@property (readonly, nonatomic) BOOL isMuted;
@property (readonly, nonatomic) BOOL isPinnedTab;
@property (nonatomic) BOOL isPlaceholder; // ivar: _isPlaceholder
@property (readonly, nonatomic) BOOL isPrivate;
@property (readonly, nonatomic) BOOL isSecure;
@property (readonly, nonatomic) BOOL isShowingSearchQueryInNavigationBar; // ivar: _isShowingSearchQueryInNavigationBar
@property (readonly, nonatomic) CGFloat lastActivationTime;
@property (copy, nonatomic) NSString *lastSearchTerm; // ivar: _lastSearchTerm
@property (nonatomic) CGFloat lastViewedTime; // ivar: _lastViewedTime
@property (retain, nonatomic) WBSHistoryVisit *lastVisit; // ivar: _lastVisit
@property (copy, nonatomic) NSString *libraryType; // ivar: _libraryType
@property (copy, nonatomic) id *linkAddedToUserActivityCallback; // ivar: _linkAddedToUserActivityCallback
@property (retain, nonatomic) LinkPreviewViewController *linkPreviewViewController; // ivar: _linkPreviewViewController
@property (weak, nonatomic) NSObject<LoadProgressObserver> *loadProgressObserver; // ivar: _loadProgressObserver
@property (readonly, nonatomic, getter=isLoading) BOOL loading;
@property (nonatomic) BOOL matchedLastSearch; // ivar: _matchedLastSearch
@property (nonatomic) BOOL mediaCaptureEnabled; // ivar: _mediaCaptureEnabled
@property (readonly, nonatomic) NSUInteger mediaStateIcon;
@property (readonly, nonatomic) SFNavigationBarItem *navigationBarItem;
@property (retain, nonatomic) NSUUID *ownerUUID; // ivar: _ownerUUID
@property (readonly, nonatomic) _SFPageLoadErrorController *pageLoadErrorController; // ivar: _pageLoadErrorController
@property (retain, nonatomic) PageLoadTestStatistics *pageLoadStatistics; // ivar: _pageLoadStatistics
@property (nonatomic) CGFloat pageZoomFactor;
@property (weak, nonatomic) TabDocument *parentTabDocumentForBackClosesSpawnedTab; // ivar: _parentTabDocumentForBackClosesSpawnedTab
@property (readonly, nonatomic) CGFloat parentTabIDForWebExtensions;
@property (readonly, nonatomic) NSURL *pendingURLForWebExtensions;
@property (nonatomic, getter=isPerformingFirstLoadAfterOpenInBackground) BOOL performingFirstLoadAfterOpenInBackground; // ivar: _performingFirstLoadAfterOpenInBackground
@property (nonatomic, getter=isPerformingRedirectAfterOpenInBackground) BOOL performingRedirectAfterOpenInBackground; // ivar: _performingRedirectAfterOpenInBackground
@property (nonatomic) BOOL persistWhenHibernated; // ivar: _persistWhenHibernated
@property (readonly, nonatomic, getter=isPinnable) BOOL pinnable;
@property (nonatomic, getter=isPinned) BOOL pinned; // ivar: _pinned
@property (copy, nonatomic) NSString *pinnedTitle; // ivar: _pinnedTitle
@property (copy, nonatomic) NSURL *pinnedURL; // ivar: _pinnedURL
@property (nonatomic) NSInteger policy; // ivar: _policy
@property (nonatomic, getter=isPreparingForNewUserActivity) BOOL preparingForNewUserActivity; // ivar: _preparingForNewUserActivity
@property (readonly, nonatomic) BOOL previousLoadingCompleteStateForWebExtensionOnUpdatedEvent; // ivar: _previousLoadingCompleteStateForWebExtensionOnUpdatedEvent
@property (readonly, copy, nonatomic) NSString *previousTitleForWebExtensionOnUpdatedEvent; // ivar: _previousTitleForWebExtensionOnUpdatedEvent
@property (readonly, nonatomic) NSURL *previousURLForWebExtensionOnUpdatedEvent; // ivar: _previousURLForWebExtensionOnUpdatedEvent
@property (readonly, nonatomic) _SFPrintController *printController; // ivar: _printController
@property (readonly, nonatomic, getter=isPrivateBrowsingEnabled) BOOL privateBrowsingEnabled;
@property (readonly, nonatomic) WBSFluidProgressState *progressState; // ivar: _fluidProgressState
@property (retain, nonatomic) _SFQuickLookDocument *quickLookDocument; // ivar: _quickLookDocument
@property (readonly, nonatomic) NSObject<SFReaderContext> *readerContext;
@property (nonatomic) NSInteger readerViewTopScrollOffset; // ivar: _readerViewTopScrollOffset
@property (readonly, nonatomic) _SFWebView *readerWebView; // ivar: _readerWebView
@property (retain, nonatomic) WebBookmark *readingListBookmark; // ivar: _readingListBookmark
@property (readonly, nonatomic) _SFReloadOptionsController *reloadOptionsController; // ivar: _reloadOptionsController
@property (readonly, nonatomic) _SFSafeBrowsingController *safeBrowsingController; // ivar: _safeBrowsingController
@property (readonly, nonatomic) WBSSameDocumentNavigationToHistoryVisitCorrelator *sameDocumentNavigationToHistoryVisitCorrelator; // ivar: _sameDocumentNavigationToHistoryVisitCorrelator
@property (nonatomic) CGPoint scrollPoint; // ivar: _scrollPoint
@property (retain, nonatomic) CSSearchableItemAttributeSet *searchableItemAttributes; // ivar: _searchableItemAttributes
@property (readonly, nonatomic) _WKSessionState *sessionState;
@property (nonatomic) NSUInteger sessionStateRestorationSource; // ivar: _sessionStateRestorationSource
@property (copy, nonatomic) NSArray *shareParticipants; // ivar: _shareParticipants
@property (readonly, nonatomic) _SFSafariSharingExtensionController *sharingExtensionController;
@property (readonly, nonatomic) BOOL shouldObscureForDigitalHealth;
@property (readonly, nonatomic) BOOL shouldPersist;
@property (nonatomic) BOOL shouldRestoreReader; // ivar: _shouldRestoreReader
@property (nonatomic) BOOL shouldRevealAppLinkBannerForNextCommit; // ivar: _shouldRevealAppLinkBannerForNextCommit
@property (readonly, nonatomic) BOOL shouldSelectOriginatingTabWhenClosed;
@property (nonatomic, getter=isShowingContinuous) BOOL showingContinuous; // ivar: _showingContinuous
@property (readonly, nonatomic, getter=isShowingErrorPage) BOOL showingErrorPage;
@property (readonly, nonatomic, getter=isShowingFindOnPage) BOOL showingFindOnPage;
@property (readonly, nonatomic, getter=isShowingInlineDialog) BOOL showingInlineDialog; // ivar: _showingInlineDialog
@property (nonatomic, getter=isShowingReader) BOOL showingReader; // ivar: _showingReader
@property (readonly, nonatomic, getter=isShowingStartPageOverriddenByExtension) BOOL showingStartPageOverriddenByExtension;
@property (readonly, nonatomic, getter=isShowingSystemStartPage) BOOL showingSystemStartPage;
@property (retain, nonatomic) UIImage *siteCustomIcon; // ivar: _siteCustomIcon
@property (nonatomic) BOOL siteCustomIconPrecomposed; // ivar: _siteCustomIconPrecomposed
@property (copy, nonatomic) NSString *sourceApplicationBundleIdentifier; // ivar: _sourceApplicationBundleIdentifier
@property (copy, nonatomic) NSString *sourceApplicationBundleIdentifierForNextCommit; // ivar: _sourceApplicationBundleIdentifierForNextCommit
@property (nonatomic) BOOL storeBannersAreDisabled; // ivar: _storeBannersAreDisabled
@property (readonly, nonatomic) NSString *suggestedTitleForCurrentURL;
@property (readonly) Class superclass;
@property (nonatomic) BOOL supportsReuseForSpotlightSearch; // ivar: _supportsReuseForSpotlightSearch
@property (nonatomic) BOOL suppressWebExtensionEvents; // ivar: _suppressWebExtensionEvents
@property (nonatomic) BOOL suppressingProgressAnimationForNavigationGesture; // ivar: _suppressingProgressAnimationForNavigationGesture
@property (readonly, nonatomic) TabBarItem *tabBarItem; // ivar: _tabBarItem
@property (readonly, nonatomic) NSArray *tabCollectionItems;
@property (retain, nonatomic) WBTab *tabGroupTab; // ivar: _tabGroupTab
@property (readonly, nonatomic) TabOverviewItem *tabOverviewItem; // ivar: _tabOverviewItem
@property (copy, nonatomic) NSURL *tabReuseURL; // ivar: _tabReuseURL
@property (readonly, nonatomic) SFTabStateData *tabStateData;
@property (readonly, copy, nonatomic) NSString *tabTitle;
@property (readonly, copy, nonatomic) id *tabUpdateBlock;
@property (readonly, nonatomic) CGSize tabViewSize;
@property (readonly, nonatomic) UIColor *themeColor; // ivar: _themeColor
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *titleForCloudTab;
@property (copy, nonatomic) NSString *titleForLastSearch; // ivar: _titleForLastSearch
@property (copy, nonatomic) NSString *titleForLastUserInitiatedLoad; // ivar: _titleForLastUserInitiatedLoad
@property (copy, nonatomic) NSArray *titleWords; // ivar: _titleWords
@property (readonly, nonatomic) SFBrowserDocumentTrackerInfo *trackerInfo; // ivar: _trackerInfo
@property (readonly, nonatomic) WBSTranslationContext *translationContext; // ivar: _translationContext
@property (readonly, nonatomic) UnifiedTabBarItem *unifiedTabBarItem; // ivar: _unifiedTabBarItem
@property (nonatomic, getter=isUnread) BOOL unread; // ivar: _unread
@property (readonly, nonatomic) NSURL *urlForExtensions;
@property (copy, nonatomic) NSURL *urlForLastUserInitiatedLoad; // ivar: _urlForLastUserInitiatedLoad
@property (readonly, nonatomic) NSUserActivity *userActivity; // ivar: _userActivity
@property (retain, nonatomic) NSUserActivity *userActivityFromNotes; // ivar: _userActivityFromNotes
@property (copy, nonatomic) NSUUID *uuid; // ivar: _uuid
@property (readonly, nonatomic) TabDocumentView *view;
@property (nonatomic) BOOL wantsReaderWhenActivated; // ivar: _wantsReaderWhenActivated
@property (readonly, nonatomic) BOOL wasLoadedWithContentBlockersEnabled; // ivar: _wasLoadedWithContentBlockersEnabled
@property (nonatomic) BOOL wasOpenedFromLink; // ivar: _wasOpenedFromLink
@property (readonly, nonatomic) _SFWebClipMetadataFetcher *webClipMetadataFetcher;
@property (readonly, nonatomic) NSObject<WBSWebExtensionWindow> *webExtensionWindow;
@property (readonly, nonatomic) _SFWebView *webView; // ivar: _webView
@property (readonly, nonatomic) WKWebView *webViewForExtensions;
@property (readonly, nonatomic) BOOL webViewIsFullscreen; // ivar: _webViewIsFullscreen
@property (readonly, copy, nonatomic) NSArray *webViewsThatCanReceiveMessages;
@property (readonly, copy, nonatomic) NSString *windowIdentifier;
@property (nonatomic) CGFloat zoomFactor;


+(id)blankTabTitleWithLibraryType:(id)arg0 controlledByAutomation:(BOOL)arg1 ;
+(id)tabDocumentForWKWebView:(id)arg0 ;
+(id)urlForExternalURL:(id)arg0 ;
-(BOOL)_isDeallocating;
-(BOOL)_tryRetain;
-(BOOL)_webView:(id)arg0 fileUploadPanelContentIsManagedWithInitiatingFrame:(id)arg1 ;
-(BOOL)_webView:(id)arg0 focusRequiresStrongPasswordAssistance:(id)arg1 ;
-(BOOL)_webView:(id)arg0 gestureRecognizerCouldPinch:(id)arg1 ;
-(BOOL)_webView:(id)arg0 performDataInteractionOperationWithItemProviders:(id)arg1 ;
-(BOOL)_webView:(id)arg0 shouldIncludeAppLinkActionsForElement:(id)arg1 ;
-(BOOL)_webViewCanBecomeFocused:(id)arg0 ;
-(BOOL)canGoBack;
-(BOOL)canGoForward;
-(BOOL)createFluidProgressState;
-(BOOL)currentPageLoadedFromReadingList;
-(BOOL)formAutoFillControllerCanPrefillForm:(id)arg0 ;
-(BOOL)formAutoFillControllerDidUserDeclineAutomaticStrongPasswordForCurrentDomain:(id)arg0 ;
-(BOOL)formAutoFillControllerShouldDisableStreamlinedLogin:(id)arg0 ;
-(BOOL)formAutoFillControllerShouldShowIconsInPasswordPicker:(id)arg0 ;
-(BOOL)hasFailedURL;
-(BOOL)hasQuickLookContent;
-(BOOL)hideFindOnPage;
-(BOOL)isAutomationEnabledForLinkPreviewHelper:(id)arg0 ;
-(BOOL)isPDFDocument;
-(BOOL)isPrivateBrowsingEnabledForPreviewHelper:(id)arg0 ;
-(BOOL)isReaderAvailable;
-(BOOL)isShowingReadingListArchive;
-(BOOL)linkPreviewHelper:(id)arg0 supportsAction:(NSInteger)arg1 forURL:(id)arg2 ;
-(BOOL)mustShowBarsForBackForwardListItem:(id)arg0 ;
-(BOOL)pageLoadErrorControllerIsInPreviewMode:(id)arg0 ;
-(BOOL)pageLoadErrorControllerShouldHandleCertificateError:(id)arg0 ;
-(BOOL)pageLoadErrorControllerShouldPermanentlyAcceptCertificate:(id)arg0 ;
-(BOOL)pageLoadErrorControllerShouldReloadAfterError:(id)arg0 ;
-(BOOL)printControllerCanPresentPrintUI:(id)arg0 ;
-(BOOL)printControllerPageIsLoading:(id)arg0 ;
-(BOOL)printControllerShouldPrintReader:(id)arg0 ;
-(BOOL)sfWebViewCanFindNextOrPrevious:(id)arg0 ;
-(BOOL)sfWebViewShouldFillStringForFind:(id)arg0 ;
-(BOOL)shouldActivateReaderWhenAvailable;
-(BOOL)shouldBlockAppSuggestionBanner:(id)arg0 ;
-(BOOL)shouldShowReaderOnActivate;
-(BOOL)shouldSpawnNewTabOnNavigationFromPinnedTabWithDestinationURL:(id)arg0 ;
-(BOOL)translationContextIsUsingPrivateBrowsing:(id)arg0 ;
-(NSInteger)_webView:(id)arg0 dataOwnerForDragSession:(id)arg1 ;
-(NSInteger)_webView:(id)arg0 dataOwnerForDropSession:(id)arg1 ;
-(NSInteger)_webView:(id)arg0 decidePolicyForFocusedElement:(id)arg1 ;
-(NSInteger)dialogController:(id)arg0 presentationPolicyForDialog:(id)arg1 ;
-(NSUInteger)_webView:(id)arg0 willUpdateDataInteractionOperationToOperation:(NSUInteger)arg1 forSession:(id)arg2 ;
-(NSUInteger)retainCount;
-(id)URL;
-(id)URLForSharing;
-(id)URLForStatePersisting;
-(id)URLStringForPrintController:(id)arg0 ;
-(id)_backForwardList;
-(id)_initWithBrowserController:(id)arg0 configuration:(id)arg1 ;
-(id)_presentingViewControllerForWebView:(id)arg0 ;
-(id)_webCryptoMasterKeyForWebView:(id)arg0 ;
-(id)_webView:(id)arg0 adjustedDataInteractionItemProvidersForItemProvider:(id)arg1 representingObjects:(id)arg2 additionalData:(id)arg3 ;
-(id)_webView:(id)arg0 alternateURLFromImage:(id)arg1 userInfo:(*id)arg2 ;
-(id)_webView:(id)arg0 contextMenuContentPreviewForElement:(id)arg1 ;
-(id)_webViewAdditionalContextForStrongPasswordAssistance:(id)arg0 ;
-(id)backListMenuWithLimit:(int)arg0 ;
-(id)committedURL;
-(id)currentFluidProgressStateSource;
-(id)customUserVisibleStringForReadingListBookmarkURL:(id)arg0 ;
-(id)dataForDisplayedPDF;
-(id)dataForQuickLookDocument:(id)arg0 ;
-(id)formAutoFillControllerURLForFormAutoFill:(id)arg0 ;
-(id)forwardListMenuWithLimit:(int)arg0 ;
-(id)initForBackgroundLoadingWithBrowserController:(id)arg0 relatedWebView:(id)arg1 ;
-(id)initWithBrowserController:(id)arg0 ;
-(id)initWithTabGroupTab:(id)arg0 privateBrowsingEnabled:(BOOL)arg1 hibernated:(BOOL)arg2 bookmark:(id)arg3 browserController:(id)arg4 ;
-(id)initWithTabStateData:(id)arg0 hibernated:(BOOL)arg1 browserController:(id)arg2 ;
-(id)initWithTitle:(id)arg0 URL:(id)arg1 UUID:(id)arg2 privateBrowsingEnabled:(BOOL)arg3 controlledByAutomation:(BOOL)arg4 hibernated:(BOOL)arg5 bookmark:(id)arg6 browserController:(id)arg7 relatedWebView:(id)arg8 ;
-(id)initWithTitle:(id)arg0 URL:(id)arg1 UUID:(id)arg2 privateBrowsingEnabled:(BOOL)arg3 hibernated:(BOOL)arg4 bookmark:(id)arg5 browserController:(id)arg6 ;
-(id)itemForTabCollectionView:(id)arg0 ;
-(id)linkPreviewHelper:(id)arg0 previewViewControllerForURL:(id)arg1 ;
-(id)linkPreviewHelper:(id)arg0 resultOfLoadingURL:(id)arg1 ;
-(id)loadCloudTab:(id)arg0 ;
-(id)loadRequest:(id)arg0 userDriven:(BOOL)arg1 ;
-(id)loadURL:(id)arg0 userDriven:(BOOL)arg1 ;
-(id)loadingDialogPageTitleForPrintController:(id)arg0 ;
-(id)openInTabGroupMenuWithNewTabGroupName:(id)arg0 URL:(id)arg1 descendantCount:(NSInteger)arg2 handler:(id)arg3 ;
-(id)overrideUndoManagerForSFWebView:(id)arg0 ;
-(id)pageLoadErrorControllerGetSecIdentityPreferencesController:(id)arg0 ;
-(id)pageTitleForPrintController:(id)arg0 ;
-(id)pdfView;
-(id)permissionDialogThrottler;
-(id)presentingViewControllerForAction:(id)arg0 ;
-(id)presentingViewControllerForPrintController:(id)arg0 ;
-(id)previewViewControllerForURL:(id)arg0 ;
-(id)readerPageArchiveURL;
-(id)readerURLForReaderController:(id)arg0 ;
-(id)resultOfLoadingURL:(id)arg0 ;
-(id)retain;
-(id)safariApplicationVersionForTranslationContext:(id)arg0 ;
-(id)sfWebView:(id)arg0 didStartDownload:(id)arg1 ;
-(id)suggestedFileExtensionForQuickLookDocument:(id)arg0 ;
-(id)suggestedFileNameForQuickLookDocument:(id)arg0 ;
-(id)suggestedFilenameForDisplayedPDF;
-(id)translationConsentAlertHelperViewControllerToPresentDetailsFrom:(id)arg0 ;
-(struct CGRect )sourceRectForPopoverActionPicker:(id)arg0 ;
-(struct UIEdgeInsets )_webView:(id)arg0 finalObscuredInsetsForScrollView:(id)arg1 withVelocity:(struct CGPoint )arg2 targetContentOffset:(struct CGPoint *)arg3 ;
-(void)_closeTabDocumentAnimated:(BOOL)arg0 ;
-(void)_searchEngineControllerDidFinishPopulating:(id)arg0 ;
-(void)_translationAvailabilityDidChange:(id)arg0 ;
-(void)_translationContextStateDidChange:(id)arg0 ;
-(void)_unresponsiveWebProcessTimerFired:(id)arg0 ;
-(void)_voiceSearchAvailabilityDidChange:(id)arg0 ;
-(void)_webView:(id)arg0 accessoryViewCustomButtonTappedInFormInputSession:(id)arg1 ;
-(void)_webView:(id)arg0 authenticationChallenge:(id)arg1 shouldAllowLegacyTLS:(id)arg2 ;
-(void)_webView:(id)arg0 checkUserMediaPermissionForURL:(id)arg1 mainFrameURL:(id)arg2 frameIdentifier:(NSUInteger)arg3 decisionHandler:(id)arg4 ;
-(void)_webView:(id)arg0 contentRuleListWithIdentifier:(id)arg1 performedAction:(id)arg2 forURL:(id)arg3 ;
-(void)_webView:(id)arg0 contextMenuConfigurationForElement:(id)arg1 completionHandler:(id)arg2 ;
-(void)_webView:(id)arg0 contextMenuDidEndForElement:(id)arg1 ;
-(void)_webView:(id)arg0 contextMenuForElement:(id)arg1 willCommitWithAnimator:(id)arg2 ;
-(void)_webView:(id)arg0 contextMenuWillPresentForElement:(id)arg1 ;
-(void)_webView:(id)arg0 createWebViewWithConfiguration:(id)arg1 forNavigationAction:(id)arg2 windowFeatures:(id)arg3 completionHandler:(id)arg4 ;
-(void)_webView:(id)arg0 dataInteraction:(id)arg1 session:(id)arg2 didEndWithOperation:(NSUInteger)arg3 ;
-(void)_webView:(id)arg0 dataInteraction:(id)arg1 sessionWillBegin:(id)arg2 ;
-(void)_webView:(id)arg0 dataInteractionOperationWasHandled:(BOOL)arg1 forSession:(id)arg2 itemProviders:(id)arg3 ;
-(void)_webView:(id)arg0 decideDatabaseQuotaForSecurityOrigin:(id)arg1 currentQuota:(NSUInteger)arg2 currentOriginUsage:(NSUInteger)arg3 currentDatabaseUsage:(NSUInteger)arg4 expectedUsage:(NSUInteger)arg5 decisionHandler:(id)arg6 ;
-(void)_webView:(id)arg0 decidePolicyForSOAuthorizationLoadWithCurrentPolicy:(NSInteger)arg1 forExtension:(id)arg2 completionHandler:(id)arg3 ;
-(void)_webView:(id)arg0 decideWebApplicationCacheQuotaForSecurityOrigin:(id)arg1 currentQuota:(NSUInteger)arg2 totalBytesNeeded:(NSUInteger)arg3 decisionHandler:(id)arg4 ;
-(void)_webView:(id)arg0 didChangeSafeAreaShouldAffectObscuredInsets:(BOOL)arg1 ;
-(void)_webView:(id)arg0 didCommitLoadWithRequest:(id)arg1 inFrame:(id)arg2 ;
-(void)_webView:(id)arg0 didCountMatches:(NSUInteger)arg1 forString:(id)arg2 ;
-(void)_webView:(id)arg0 didFailLoadWithRequest:(id)arg1 inFrame:(id)arg2 withError:(id)arg3 ;
-(void)_webView:(id)arg0 didFailProvisionalLoadWithRequest:(id)arg1 inFrame:(id)arg2 withError:(id)arg3 ;
-(void)_webView:(id)arg0 didFinishLoadForQuickLookDocumentInMainFrame:(id)arg1 ;
-(void)_webView:(id)arg0 didFinishLoadWithRequest:(id)arg1 inFrame:(id)arg2 ;
-(void)_webView:(id)arg0 didNegotiateModernTLSForURL:(id)arg1 ;
-(void)_webView:(id)arg0 didResignInputElementStrongPasswordAppearanceWithUserInfo:(id)arg1 ;
-(void)_webView:(id)arg0 didStartInputSession:(id)arg1 ;
-(void)_webView:(id)arg0 didStartLoadForQuickLookDocumentInMainFrameWithFileName:(id)arg1 uti:(id)arg2 ;
-(void)_webView:(id)arg0 didStartProvisionalLoadWithRequest:(id)arg1 inFrame:(id)arg2 ;
-(void)_webView:(id)arg0 hasVideoInPictureInPictureDidChange:(BOOL)arg1 ;
-(void)_webView:(id)arg0 imageOrMediaDocumentSizeChanged:(struct CGSize )arg1 ;
-(void)_webView:(id)arg0 insertTextSuggestion:(id)arg1 inInputSession:(id)arg2 ;
-(void)_webView:(id)arg0 logDiagnosticMessage:(id)arg1 description:(id)arg2 ;
-(void)_webView:(id)arg0 logDiagnosticMessage:(id)arg1 description:(id)arg2 valueDictionary:(id)arg3 ;
-(void)_webView:(id)arg0 logDiagnosticMessageWithDomain:(id)arg1 domain:(NSInteger)arg2 ;
-(void)_webView:(id)arg0 logDiagnosticMessageWithEnhancedPrivacy:(id)arg1 description:(id)arg2 ;
-(void)_webView:(id)arg0 logDiagnosticMessageWithResult:(id)arg1 description:(id)arg2 result:(NSInteger)arg3 ;
-(void)_webView:(id)arg0 logDiagnosticMessageWithValue:(id)arg1 description:(id)arg2 value:(id)arg3 ;
-(void)_webView:(id)arg0 mediaCaptureStateDidChange:(NSUInteger)arg1 ;
-(void)_webView:(id)arg0 mouseDidMoveOverElement:(id)arg1 withFlags:(NSInteger)arg2 userInfo:(id)arg3 ;
-(void)_webView:(id)arg0 navigation:(id)arg1 didFailProvisionalLoadInSubframe:(id)arg2 withError:(id)arg3 ;
-(void)_webView:(id)arg0 navigation:(id)arg1 didSameDocumentNavigation:(NSInteger)arg2 ;
-(void)_webView:(id)arg0 navigationDidFinishDocumentLoad:(id)arg1 ;
-(void)_webView:(id)arg0 printFrame:(id)arg1 ;
-(void)_webView:(id)arg0 queryPermission:(id)arg1 forOrigin:(id)arg2 completionHandler:(id)arg3 ;
-(void)_webView:(id)arg0 renderingProgressDidChange:(NSUInteger)arg1 ;
-(void)_webView:(id)arg0 requestGeolocationAuthorizationForURL:(id)arg1 frame:(id)arg2 decisionHandler:(id)arg3 ;
-(void)_webView:(id)arg0 requestStorageAccessPanelForDomain:(id)arg1 underCurrentDomain:(id)arg2 completionHandler:(id)arg3 ;
-(void)_webView:(id)arg0 requestUserMediaAuthorizationForDevices:(NSUInteger)arg1 url:(id)arg2 mainFrameURL:(id)arg3 decisionHandler:(id)arg4 ;
-(void)_webView:(id)arg0 runWebAuthenticationPanel:(id)arg1 initiatedByFrame:(id)arg2 completionHandler:(id)arg3 ;
-(void)_webView:(id)arg0 storeAppHighlight:(id)arg1 inNewGroup:(BOOL)arg2 requestOriginatedInApp:(BOOL)arg3 ;
-(void)_webView:(id)arg0 takeFocus:(NSInteger)arg1 ;
-(void)_webView:(id)arg0 willGoToBackForwardListItem:(id)arg1 inPageCache:(BOOL)arg2 ;
-(void)_webView:(id)arg0 willSnapshotBackForwardListItem:(id)arg1 ;
-(void)_webView:(id)arg0 willStartInputSession:(id)arg1 ;
-(void)_webView:(id)arg0 willSubmitFormValues:(id)arg1 userObject:(id)arg2 submissionHandler:(id)arg3 ;
-(void)_webViewDidBeginNavigationGesture:(id)arg0 ;
-(void)_webViewDidDisableInspectorBrowserDomain:(id)arg0 ;
-(void)_webViewDidEnableInspectorBrowserDomain:(id)arg0 ;
-(void)_webViewDidEndNavigationGesture:(id)arg0 withNavigationToBackForwardListItem:(id)arg1 ;
-(void)_webViewDidEnterElementFullscreen:(id)arg0 ;
-(void)_webViewDidEnterFullscreen:(id)arg0 ;
-(void)_webViewDidExitElementFullscreen:(id)arg0 ;
-(void)_webViewDidExitFullscreen:(id)arg0 ;
-(void)_webViewFullscreenMayReturnToInline:(id)arg0 ;
-(void)_webViewWebProcessDidCrash:(id)arg0 ;
-(void)_webViewWillEndNavigationGesture:(id)arg0 withNavigationToBackForwardListItem:(id)arg1 ;
-(void)_webViewWillExitElementFullscreen:(id)arg0 ;
-(void)activeParticipantsDidUpdateInTabWithUUID:(id)arg0 ;
-(void)addAppHighlightCreatingLink:(BOOL)arg0 ;
-(void)addNavigationObserver:(id)arg0 ;
-(void)addRenderingProgressObserver:(id)arg0 ;
-(void)animateElement:(id)arg0 toBarItem:(NSInteger)arg1 ;
-(void)animateElementToDownloadsBarItemSoon:(id)arg0 ;
-(void)animateProgressForCompletedDocument;
-(void)applyHighlightFromNotesIfNeeded;
-(void)automaticPasswordSheetDismissed;
-(void)beginSuppressingProgressAnimation;
-(void)clearBackForwardList;
-(void)clearBackForwardListKeepingCurrentItem;
-(void)clearBrowserController;
-(void)clearFluidProgressState;
-(void)clearPageLoadStatistics;
-(void)clearReaderContext;
-(void)clearReaderScrollInformation;
-(void)clearReaderView;
-(void)clearTabReuseURL;
-(void)close;
-(void)collectReadingListItemInfo;
-(void)commitPreviewViewController:(id)arg0 ;
-(void)createBrowserReaderViewIfNeeded;
-(void)createReaderWebViewForReaderController:(id)arg0 ;
-(void)dealloc;
-(void)decreasePageZoomSetting;
-(void)dialogController:(id)arg0 didDismissDialog:(id)arg1 ;
-(void)dialogController:(id)arg0 dismissViewController:(id)arg1 withAdditionalAnimations:(id)arg2 ;
-(void)dialogController:(id)arg0 presentViewController:(id)arg1 withAdditionalAnimations:(id)arg2 ;
-(void)dialogController:(id)arg0 willPresentDialog:(id)arg1 ;
-(void)didActivateReader;
-(void)didAutoDetectSiteSpecificSearchProviderWithOriginatingURL:(id)arg0 searchURLTemplate:(id)arg1 ;
-(void)didFailToContinueUserActivity;
-(void)didFindAppBannerWithContent:(id)arg0 ;
-(void)didReplaceTabDocument:(id)arg0 ;
-(void)dismissAppSuggestionBanner:(id)arg0 ;
-(void)dispatchNavigationIntent:(id)arg0 ;
-(void)displayAttributionBannerForHighlightIfNeeded:(id)arg0 ;
-(void)displayNewTabOverridePageIfNecessary;
-(void)doneWaitingToContinueUserActivity;
-(void)downloadDidFail:(id)arg0 ;
-(void)downloadDidFinish:(id)arg0 ;
-(void)downloadDidStart:(id)arg0 ;
-(void)downloadShouldContinueAfterReceivingResponse:(id)arg0 decisionHandler:(id)arg1 ;
-(void)endSuppressingProgressAnimation;
-(void)endSuppressingProgressAnimationAnimated:(BOOL)arg0 ;
-(void)evictFromTabReuse;
-(void)fetchCanonicalURLWithCompletionHandler:(id)arg0 ;
-(void)fetchMetadataForBookmark:(id)arg0 completion:(id)arg1 ;
-(void)findOnPageCompletionProvider:(id)arg0 setStringToComplete:(id)arg1 ;
-(void)fluidProgressRocketAnimationDidComplete;
-(void)formAutoFillControllerDidFocusSensitiveFormField:(id)arg0 ;
-(void)formAutoFillControllerGetAuthenticationForAutoFill:(id)arg0 completion:(id)arg1 ;
-(void)formAutoFillControllerUserChoseToUseGeneratedPassword:(id)arg0 ;
-(void)freezeForNavigationGesture;
-(void)getApplicationManifestWithCompletionHandler:(id)arg0 ;
-(void)goBack;
-(void)goBackAllowingNewTabToSpawnIfNeeded:(BOOL)arg0 ;
-(void)goBackToParentTab;
-(void)goForward;
-(void)goForwardAllowingNewTabToSpawnIfNeeded:(BOOL)arg0 ;
-(void)goToBackForwardListItem:(id)arg0 ;
-(void)handleNavigationIntent:(id)arg0 completion:(id)arg1 ;
-(void)hibernate;
-(void)hideBannerForHighlightIdentifier:(id)arg0 ;
-(void)increasePageZoomSetting;
-(void)invalidateSourceApplication;
-(void)linkPreviewHelper:(id)arg0 addURLToReadingList:(id)arg1 ;
-(void)linkPreviewHelper:(id)arg0 commitPreviewViewControllerForAction:(NSInteger)arg1 withTabOrder:(NSInteger)arg2 ;
-(void)linkPreviewHelper:(id)arg0 didProduceNavigationIntent:(id)arg1 forAction:(NSInteger)arg2 ;
-(void)linkPreviewHelper:(id)arg0 redirectToExternalNavigationResult:(id)arg1 ;
-(void)linkPreviewHelperWillBeginDownload:(id)arg0 ;
-(void)linkPreviewHelperWillOpenUniversalLinkLocally:(id)arg0 ;
-(void)loadAlternateHTMLString:(id)arg0 baseURL:(id)arg1 forUnreachableURL:(id)arg2 ;
-(void)loadTestURL:(id)arg0 withCallback:(id)arg1 ;
// -(void)loadTestURL:(id)arg0 withCallback:(id)arg1 pagesNeedingMemoryWarningSent:(unk)arg2  ;
-(void)loadURL:(id)arg0 ;
-(void)loadURL:(id)arg0 title:(id)arg1 deferNavigationWhenNotActive:(BOOL)arg2 ;
-(void)loadURLForContinuousReadingList:(id)arg0 fromBookmark:(id)arg1 ;
-(void)loadWindowDotOpenExternalNavigationResult:(id)arg0 fromOriginalRequest:(id)arg1 ;
-(void)loadingController:(id)arg0 willLoadRequest:(id)arg1 userDriven:(BOOL)arg2 ;
-(void)loadingControllerWillStartUserDrivenLoad:(id)arg0 ;
-(void)makeStrongPasswordFieldViewableAndEditable:(BOOL)arg0 ;
-(void)mute;
-(void)muteMediaCapture;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)pageLoadErrorController:(id)arg0 allowLegacyTLSConnectionForURL:(id)arg1 navigateToURL:(id)arg2 ;
-(void)pageLoadErrorController:(id)arg0 loadFailedRequestAfterError:(id)arg1 ;
-(void)pageLoadErrorController:(id)arg0 presentViewController:(id)arg1 ;
-(void)pageLoadErrorController:(id)arg0 setAllowsSpecificHTTPSCertificate:(id)arg1 forHost:(id)arg2 ;
-(void)pageLoadErrorControllerClosePage:(id)arg0 ;
-(void)pageLoadErrorControllerDidAddAlert:(id)arg0 ;
-(void)panel:(id)arg0 decidePolicyForLocalAuthenticatorWithCompletionHandler:(id)arg1 ;
-(void)panel:(id)arg0 dismissWebAuthenticationPanelWithResult:(NSInteger)arg1 ;
-(void)panel:(id)arg0 requestPINWithRemainingRetries:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)panel:(id)arg0 selectAssertionResponse:(id)arg1 source:(NSInteger)arg2 completionHandler:(id)arg3 ;
-(void)panel:(id)arg0 updateWebAuthenticationPanel:(NSInteger)arg1 ;
-(void)perSiteSettingsUIPresentSettings;
-(void)performAutoFillAction;
-(void)performPageLevelAutoFill;
-(void)prepareToContinueUserActivity;
-(void)prepareToUseReader;
-(void)presentDialog:(id)arg0 sender:(id)arg1 ;
-(void)presentNextDialogIfNeeded;
-(void)printController:(id)arg0 didCreatePrintInfo:(id)arg1 ;
-(void)readerController:(id)arg0 didClickLinkInReaderWithRequest:(id)arg1 ;
-(void)readerController:(id)arg0 didClickLinkRequestingNewWindowInReaderWithRequest:(id)arg1 ;
-(void)readerController:(id)arg0 didDeactivateReaderWithMode:(NSUInteger)arg1 ;
-(void)readerController:(id)arg0 didDetermineAdditionalTextSamples:(id)arg1 dueTo:(NSInteger)arg2 ;
-(void)readerController:(id)arg0 didDetermineReaderAvailability:(id)arg1 dueTo:(NSInteger)arg2 ;
-(void)readerController:(id)arg0 didExtractArticleText:(id)arg1 withMetadata:(id)arg2 ;
-(void)readerController:(id)arg0 didTwoFingerTapLinkInReaderWithContext:(id)arg1 ;
-(void)release;
-(void)reload;
-(void)reloadEnablingContentBlockers:(BOOL)arg0 ;
-(void)reloadFromOrigin;
-(void)reloadFromOriginUserInitiated;
-(void)reloadUserInitiated;
-(void)removeAutomaticPasswordButton;
-(void)removeNavigationObserver:(id)arg0 ;
-(void)removeRenderingProgressObserver:(id)arg0 ;
-(void)replaceCurrentPasswordWithPassword:(id)arg0 ;
-(void)resetPageZoomSetting;
-(void)resetTabViewItems;
-(void)restoreAllHighlightsData;
-(void)restoreScrollPositionWithCloudTab:(id)arg0 ;
-(void)restoreSessionState:(id)arg0 andNavigate:(BOOL)arg1 ;
-(void)restoreSessionState:(id)arg0 andNavigate:(BOOL)arg1 fromSafariViewService:(BOOL)arg2 ;
-(void)restoreStateFromTab:(id)arg0 ;
-(void)saveWebArchiveToPath:(id)arg0 completion:(id)arg1 ;
-(void)select;
-(void)setAllowsRemoteInspection:(BOOL)arg0 ;
-(void)setAppSuggestionBanner:(id)arg0 isPinned:(BOOL)arg1 ;
-(void)setInitialURLForStatePersisting:(id)arg0 title:(id)arg1 ;
-(void)setNeedsNewTabSnapshot;
-(void)setNeedsSendTelemetryForProvisionalLoad;
-(void)setOverlaidAccessoryViewsInset:(struct CGSize )arg0 ;
-(void)setUpBackClosesSpawnedTabWithParent:(id)arg0 ;
-(void)sfWebViewDidBecomeFirstResponder:(id)arg0 ;
-(void)sfWebViewDidChangeSafeAreaInsets:(id)arg0 ;
-(void)sfWebViewDidEndFormControlInteraction:(id)arg0 ;
-(void)sfWebViewDidStartFormControlInteraction:(id)arg0 ;
-(void)showDownload:(id)arg0 ;
-(void)showFindOnPage;
-(void)snapshotForWebClipIcon:(id)arg0 ;
-(void)snapshotWithSize:(struct CGSize )arg0 options:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)snapshotWithSize:(struct CGSize )arg0 topBackdropHeight:(CGFloat)arg1 options:(NSUInteger)arg2 completion:(id)arg3 ;
-(void)statusBarIndicatorTappedWithCompletionHandler:(id)arg0 ;
-(void)stopAdvertisingProactiveActivityContent;
-(void)stopLoading;
-(void)stopLoadingUserInitiated;
-(void)toggleMediaStateMuted;
-(void)translationContext:(id)arg0 shouldReportProgressInUnifiedField:(BOOL)arg1 ;
-(void)translationContext:(id)arg0 showFeedbackConsentAlertWithCompletionHandler:(id)arg1 ;
-(void)translationContext:(id)arg0 showFirstTimeConsentAlertWithCompletionHandler:(id)arg1 ;
-(void)translationContext:(id)arg0 showTranslationErrorAlertWithTitle:(id)arg1 message:(id)arg2 ;
-(void)translationContext:(id)arg0 urlForCurrentPageWithCompletionHandler:(id)arg1 ;
-(void)translationContextNeedsScrollHeightVisibilityUpdate:(id)arg0 ;
-(void)translationContextReloadPageInOriginalLanguage:(id)arg0 ;
-(void)translationContextWillRequestTranslatingWebpage:(id)arg0 ;
-(void)unfreezeAfterNavigationGesture:(BOOL)arg0 ;
-(void)unhibernate;
-(void)unmute;
-(void)updateAccessibilityIdentifier;
-(void)updateAncestryToChildOfTopLevelAncestorRelatedTab:(id)arg0 ;
-(void)updateAncestryWithParentTab:(id)arg0 ;
-(void)updateMenuButtonShowsBadge;
-(void)updateReadingListItemPreviewText:(id)arg0 ;
-(void)updateTabIcon;
-(void)updateTabIconWithDelay:(CGFloat)arg0 ;
-(void)updateTabTitle;
-(void)updateThemeColorAndUnderPageBackground:(BOOL)arg0 ;
-(void)updateUsageTrackingInformationIfNecessaryGivenDocumentIsCurrent:(BOOL)arg0 ;
-(void)updateUserActivity;
-(void)updateUsesDarkTheme;
-(void)userDeclinedAutomaticStrongPasswordForCurrentDomainOnTabWithUUID:(id)arg0 ;
-(void)userDidManipulateVisibleRegion;
-(void)validateExtensionToolbarItems;
-(void)webView:(id)arg0 decidePolicyForNavigationAction:(id)arg1 preferences:(id)arg2 decisionHandler:(id)arg3 ;
-(void)webView:(id)arg0 decidePolicyForNavigationResponse:(id)arg1 decisionHandler:(id)arg2 ;
-(void)webView:(id)arg0 didCommitNavigation:(id)arg1 ;
-(void)webView:(id)arg0 didFailNavigation:(id)arg1 withError:(id)arg2 ;
-(void)webView:(id)arg0 didFailProvisionalNavigation:(id)arg1 withError:(id)arg2 ;
-(void)webView:(id)arg0 didFinishNavigation:(id)arg1 ;
-(void)webView:(id)arg0 didReceiveAuthenticationChallenge:(id)arg1 completionHandler:(id)arg2 ;
-(void)webView:(id)arg0 didReceiveServerRedirectForProvisionalNavigation:(id)arg1 ;
-(void)webView:(id)arg0 didStartProvisionalNavigation:(id)arg1 ;
-(void)webView:(id)arg0 runJavaScriptAlertPanelWithMessage:(id)arg1 initiatedByFrame:(id)arg2 completionHandler:(id)arg3 ;
-(void)webView:(id)arg0 runJavaScriptConfirmPanelWithMessage:(id)arg1 initiatedByFrame:(id)arg2 completionHandler:(id)arg3 ;
-(void)webView:(id)arg0 runJavaScriptTextInputPanelWithPrompt:(id)arg1 defaultText:(id)arg2 initiatedByFrame:(id)arg3 completionHandler:(id)arg4 ;
-(void)webView:(id)arg0 shouldLoadIconWithParameters:(id)arg1 completionHandler:(id)arg2 ;
-(void)webViewDidClose:(id)arg0 ;
-(void)willClose;


@end


#endif