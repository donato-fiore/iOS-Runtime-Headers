// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BROWSERCONTROLLER_H
#define BROWSERCONTROLLER_H

@class SFBrowserController, SFSiriLinkCoordinator, WKBackForwardListItem, _SFBrowserConfiguration, _SFMailContentProvider, NSMutableSet, NSNumber, _SFPageFormatMenuController, NSTimer, _SFDownload, NSDate, _SFSaveToFilesOperation, UIScrollView, NSString, UIView, UIContextMenuInteraction, NSMapTable, WKWebpagePreferences, SFToastViewController, NSMutableArray, NSLayoutConstraint, NSUUID, WBSAppReviewPromptManager, _SFBarManager, WBSDigitalHealthManager, _SFPageZoomPreferenceManager, _SFPerSitePreferencesVendor, _SFActivityViewController, SKStoreProductViewController, WKProcessPool, _SFBrowserSavedState, UIWindowScene, UIAction, NSArray, WBTabGroupManager, UIPinchGestureRecognizer, UITextRange, UIViewController, _SFWebView, UIWindow, WBWindowState, _SFBrowserWindowStateData, WKPreferences;
@protocol ActionPanelDelegate, AddBookmarkActivityDelegate, BookmarksBarViewDelegate, BookmarksNavigationControllerDelegate, BrowserRootViewControllerDelegate, CatalogViewControllerDelegate, ContinuousReadingViewControllerDelegate, DownloadOpenHandler, LibraryItemOpenHandler, LinkPreviewProvider, QLPreviewControllerDelegate, SFBrowserControllerProxy, SFScreenTimeOverlayViewControllerDelegate, TabBarManagerObserving, TabControllerDocumentObserving, TabOverviewPresentationObserving, TabSnapshotGeneratorDelegate, UIAdaptivePresentationControllerDelegate, UIGestureRecognizerDelegatePrivate, UIScreenshotServiceDelegate, UIScrollViewDelegate, UITextFieldDelegate, WBSDigitalHealthManagerDelegate, _SFBarManagerDelegate, _SFDynamicBarAnimatorDelegate, _SFMailContentProviderDataSource, _SFSaveToFilesOperationDelegate, _SFSingleBookmarkNavigationControllerDelegate, SKStoreProductViewControllerDelegate, WBSAppReviewPromptPresenting, SFToastViewControllerDelegate, UIActivityItemsConfigurationProviding, WBTabGroupManagerObserver, WBTabGroupSyncAgentSyncObserver, CloudTabsViewControllerDelegate, SFOverlayProviderDelegate, UICloudSharingControllerDelegate, WBSWebExtensionCommandHandling, SFSiriLinkActionPerformer, WBSUnifiedBarAnalyticsProviding, CompletionDetailViewControllerDelegate, SFBrowserKeyCommandSafariMethods, SidebarUIProxyDelegate, StartPageDataSource, TabDocumentDelegate, UIWindowSceneDelegate, _SFBrowserContentController, _SFNavigationBarDelegate, _SFNavigationIntentHandling, SFMenuConfiguring, BrowserControllerUIDelegate, _SFBrowserDocument, WBSWebExtensionTab, WBSWebExtensionWindow, UIActivityItemsConfigurationReading, WBSCloudTabDeviceProvider, LoadProgressObserver, SidebarUIProxy, TabGroupProvider;


#import "ContinuousReadingController.h"
#import "ContinuousReadingViewController.h"
#import "DownloadsViewController.h"
#import "BookmarksNavigationController.h"
#import "TabDocument.h"
#import "ActionPanel.h"
#import "CatalogViewController.h"
#import "SearchStateCache.h"
#import "TabDragDropInteractionController.h"
#import "TabGroupPickerViewController.h"
#import "CatalogViewControllerState.h"
#import "WebExtensionWindow.h"
#import "BrowserWindowController.h"
#import "LibraryController.h"
#import "BrowserRootViewController.h"
#import "ApplicationShortcutController.h"
#import "TabBarManager.h"
#import "TabController.h"
#import "TabHoverPreview.h"
#import "UserActivityController.h"

@interface BrowserController : SFBrowserController <ActionPanelDelegate, AddBookmarkActivityDelegate, BookmarksBarViewDelegate, BookmarksNavigationControllerDelegate, BrowserRootViewControllerDelegate, CatalogViewControllerDelegate, ContinuousReadingViewControllerDelegate, DownloadOpenHandler, LibraryItemOpenHandler, LinkPreviewProvider, QLPreviewControllerDelegate, SFBrowserControllerProxy, SFScreenTimeOverlayViewControllerDelegate, TabBarManagerObserving, TabControllerDocumentObserving, TabOverviewPresentationObserving, TabSnapshotGeneratorDelegate, UIAdaptivePresentationControllerDelegate, UIGestureRecognizerDelegatePrivate, UIScreenshotServiceDelegate, UIScrollViewDelegate, UITextFieldDelegate, WBSDigitalHealthManagerDelegate, _SFBarManagerDelegate, _SFDynamicBarAnimatorDelegate, _SFMailContentProviderDataSource, _SFSaveToFilesOperationDelegate, _SFSingleBookmarkNavigationControllerDelegate, SKStoreProductViewControllerDelegate, WBSAppReviewPromptPresenting, SFToastViewControllerDelegate, UIActivityItemsConfigurationProviding, WBTabGroupManagerObserver, WBTabGroupSyncAgentSyncObserver, CloudTabsViewControllerDelegate, SFOverlayProviderDelegate, UICloudSharingControllerDelegate, WBSWebExtensionCommandHandling, SFSiriLinkActionPerformer, WBSUnifiedBarAnalyticsProviding, CompletionDetailViewControllerDelegate, SFBrowserKeyCommandSafariMethods, SidebarUIProxyDelegate, StartPageDataSource, TabDocumentDelegate, UIWindowSceneDelegate, _SFBrowserContentController, _SFNavigationBarDelegate, _SFNavigationIntentHandling, SFMenuConfiguring>

 {
    SFSiriLinkCoordinator *_siriLinkCoordinator;
    BOOL _antiPhishingServiceInitialized;
    BOOL _applicationIsOpaque;
    BOOL _backgrounded;
    WKBackForwardListItem *_backForwardListItemNeedingSnapshot;
    id *_blockRequestingScreenshotPDFData;
    _SFBrowserConfiguration *_cachedConfiguration;
    _SFMailContentProvider *_cachedMailContentProvider;
    BOOL _contentBorrowedForTab;
    ContinuousReadingController *_continuousReadingController;
    ContinuousReadingViewController *_continuousReadingViewController;
    BOOL _didConnectToScene;
    BOOL _didRestoreState;
    DownloadsViewController *_downloadsViewController;
    NSMutableSet *_dropSessionsForTabBarVisibility;
    BOOL _freezeWebViewUpdatesForSizeTransition;
    BOOL _hasTappedShare;
    BOOL _interactivelyChangingObscuredInsets;
    BOOL _isActionPanelReady;
    BOOL _isTrackingWebViewAnimatedResize;
    CGFloat _lastAdjustmentForKeyboard;
    NSInteger _lastTabSwitchKeyboardModifierFlags;
    NSNumber *_layoutToRestoreAfterOpeningNewTabs;
    BookmarksNavigationController *_modalBookmarksController;
    BOOL _needsImmediateLayoutForWebViewObscuredInsetsUpdate;
    BOOL _needsSnapshotUpdateForActiveTab;
    BOOL _needsSnapshotUpdateForBlankTabs;
    _SFPageFormatMenuController *_pageFormatMenuController;
    TabDocument *_previewDocument;
    NSTimer *_previewDocumentCloseTimer;
    _SFDownload *_previewedDownload;
    ActionPanel *_prewarmedActionPanel;
    BOOL _privateBrowsingAvailable;
    TabDocument *_progressSuppressingDocument;
    NSMutableSet *_reasonsForIgnoringUserInteraction;
    NSDate *_resignActiveDate;
    CatalogViewController *_cachedCatalogViewController;
    _SFSaveToFilesOperation *_saveToFilesOperation;
    UIScrollView *_scrollView;
    SearchStateCache *_searchStateCache;
    NSString *_sceneID;
    UIView *_scrollingStatusBar;
    BOOL _scrollViewIsDragging;
    BOOL _obscuredInsetsIncludeRefreshControlDuringBounce;
    BOOL _shouldMakeFavoritesStickyWhenReinsertingBorrowedContent;
    BOOL _showingDemoModeAlert;
    TabDragDropInteractionController *_tabDragDropController;
    UIContextMenuInteraction *_unifiedTabBarContextMenuInteraction;
    TabGroupPickerViewController *_tabGroupPickerViewController;
    BOOL _telemetryHasPresentedBookmarks;
    BOOL _trackingWebViewBackForwardNavigationGesture;
    id<BrowserControllerUIDelegate> *_uiDelegate;
    NSMapTable *_viewControllersPendingPresentation;
    BOOL _disableBarHiding;
    NSInteger _dynamicBarAnimatorStateBeforeNavigationGesture;
    BOOL _shouldShowBarsAfterDraggingDownward;
    BOOL _isSpeculativeLoadingEnabled;
    TabDocument *_speculativeLoadDocument;
    NSString *_speculativeLoadURL;
    CatalogViewControllerState *_catalogViewControllerStateForSizeChange;
    BOOL _isPerformingRootViewControllerSizeTransition;
    BOOL _statusBarHeightChangedWhilePerformingRootViewControllerSizeTransition;
    NSInteger _rootViewControllerVerticalSizeClassBeforeSizeTransition;
    NSInteger _bookmarksPresentationStyleBeforeSizeTransition;
    BOOL _isRestoringInterfaceAfterElementFullscreen;
    BOOL _rootViewWillChangeDimensions;
    NSString *_queryStringWhilePerformingRootViewControllerSizeTransition;
    WebExtensionWindow *_normalExtensionWindow;
    WebExtensionWindow *_privateExtensionWindow;
    ActionPanel *_extensionActionPanel;
    CGFloat _lastRefreshControlHeight;
    BOOL _shouldFillStringForFind;
    WKWebpagePreferences *_defaultWebpagePreferences;
    NSMapTable *_cachedParticipantLists;
    SFToastViewController *_currentlyPresentedToastViewController;
    NSMutableArray *_queuedToastViewControllers;
    NSLayoutConstraint *_activityNoticeTopConstraint;
    BOOL _isMakingFocusedTabDocumentActive;
    BOOL _isMakingFirstActiveTabDocumentActive;
    BOOL _allowsAutoDismissSidebar;
    NSDate *_dateReaderOpened;
}


@property (readonly, nonatomic) NSUUID *UUID; // ivar: _UUID
@property (readonly, nonatomic) NSObject<_SFBrowserDocument> *activeDocument;
@property (readonly, nonatomic) NSString *activeLibraryType;
@property (readonly, nonatomic) NSObject<WBSWebExtensionTab> *activeTabForExtensions;
@property (readonly, nonatomic) BOOL activeTabIsBlank;
@property (readonly, nonatomic) NSObject<WBSWebExtensionWindow> *activeWebExtensionWindow;
@property (readonly, nonatomic) BOOL activeWebExtensionWindowIsFocused;
@property (readonly, nonatomic) NSObject<UIActivityItemsConfigurationReading> *activityItemsConfiguration;
@property (readonly, nonatomic) NSInteger analyticsLayoutProvenance;
@property (copy, nonatomic) id *animationPendingDynamicBarAnimatorSteadyState; // ivar: _animationPendingDynamicBarAnimatorSteadyState
@property (retain, nonatomic) WBSAppReviewPromptManager *appReviewPromptManager; // ivar: _appReviewPromptManager
@property (readonly, nonatomic) BOOL avoidSnapshotOfActiveTabIfPossible;
@property (readonly, nonatomic) BOOL backgroundColorInTabBarEnabled;
@property (readonly, nonatomic) _SFBarManager *barManager; // ivar: _barManager
@property (readonly, nonatomic) BookmarksNavigationController *bookmarksNavigationController;
@property (readonly, weak, nonatomic) BrowserWindowController *browserWindowController; // ivar: _browserWindowController
@property (retain, nonatomic) TabDocument *cachedDocumentOnContinuousTransition; // ivar: _cachedDocumentOnContinuousTransition
@property (readonly, nonatomic) BOOL canCloseActiveTab;
@property (readonly, nonatomic) BOOL canCloseTab;
@property (readonly, nonatomic) BOOL canCreateNewBookmark;
@property (readonly, nonatomic) BOOL canCreateNewPrivateTab;
@property (readonly, nonatomic) BOOL canCreateNewTab;
@property (readonly, nonatomic) BOOL canCreateReadingListItem;
@property (nonatomic) BOOL canFocusNavigationBarURL; // ivar: _canFocusNavigationBarURL
@property (readonly, nonatomic) BOOL canPerformPostLaunchActions; // ivar: _canPerformPostLaunchActions
@property (readonly, nonatomic) BOOL canShowSidebar;
@property (readonly, nonatomic) BOOL catalogPopoverIsShowing;
@property (readonly, nonatomic) NSObject<WBSCloudTabDeviceProvider> *cloudTabStore;
@property (readonly, nonatomic) _SFBrowserConfiguration *configuration;
@property (readonly, nonatomic) ContinuousReadingController *continuousReadingController;
@property (readonly, nonatomic, getter=isControlledByAutomation) BOOL controlledByAutomation; // ivar: _controlledByAutomation
@property (retain, nonatomic) NSString *currentBookmarksCollection;
@property (readonly, nonatomic, getter=areCustomTabGroupsEnabled) BOOL customTabGroupsEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) WBSDigitalHealthManager *digitalHealthManager; // ivar: _digitalHealthManager
@property (readonly, nonatomic) NSUInteger downloadsCount;
@property (readonly, nonatomic) BOOL favoritesAreEmbedded;
@property (readonly, nonatomic) BOOL favoritesAreShowingInPopover;
@property (readonly, nonatomic, getter=isFavoritesFieldFocused) BOOL favoritesFieldFocused;
@property (readonly, nonatomic) BOOL favoritesFieldShouldBeExpanded;
@property (nonatomic) NSInteger favoritesState; // ivar: _favoritesState
@property (readonly, nonatomic) BOOL fullScreenInPortrait; // ivar: _fullScreenInPortrait
@property (readonly, nonatomic) BOOL hasDedicatedDownloadsToolbarItem;
@property (readonly, nonatomic) BOOL hasDedicatedExtensionsButton;
@property (readonly, nonatomic) BOOL hasDedicatedMediaStateButton;
@property (readonly, nonatomic) BOOL hasUnviewedDownloads;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger idOfParsecQueryOriginatingFromSearchSuggestion;
@property (copy, nonatomic) id *intentSceneConfigurationCompletion; // ivar: _intentSceneConfigurationCompletion
@property (readonly, nonatomic) BOOL interfaceFillsScreen;
@property (readonly, nonatomic) BOOL isShowingInOneThirdMode;
@property (nonatomic) BOOL keepBarsMinimized;
@property (nonatomic) CGFloat lastInteractionTime; // ivar: _lastInteractionTime
@property (readonly, nonatomic) LibraryController *libraryController; // ivar: _libraryController
@property (readonly, nonatomic) NSObject<LoadProgressObserver> *loadProgressObserver; // ivar: _spinnerController
@property (retain, nonatomic) TabDocument *nextContinuousItemDocument; // ivar: _nextContinuousItemDocument
@property (readonly, nonatomic) NSUInteger numberOfTabsInCurrentTabBar;
@property (readonly, nonatomic) NSInteger overrideBarTintStyleForUnifiedBar;
@property (nonatomic) BOOL overridesUndoManagerForClosedTabs; // ivar: _overridesUndoManagerForClosedTabs
@property (readonly, nonatomic) _SFPageZoomPreferenceManager *pageZoomManager;
@property (readonly, nonatomic) _SFPerSitePreferencesVendor *perSitePreferencesVendor;
@property (readonly, weak, nonatomic) _SFActivityViewController *presentedActivityViewController; // ivar: _presentedActivityViewController
@property (retain, nonatomic) SKStoreProductViewController *presentedStoreProductViewController; // ivar: _presentedStoreProductViewController
@property (readonly, nonatomic, getter=isPresentingModalBookmarksController) BOOL presentingModalBookmarksController;
@property (retain, nonatomic) TabDocument *previousContinuousItemDocument; // ivar: _previousContinuousItemDocument
@property (readonly, nonatomic, getter=isPrivateBrowsingAvailable) BOOL privateBrowsingAvailable;
@property (nonatomic, getter=isPrivateBrowsingEnabled) BOOL privateBrowsingEnabled; // ivar: _privateBrowsingEnabled
@property (readonly, nonatomic) WKProcessPool *processPool;
@property (readonly, nonatomic, getter=isReaderAvailable) BOOL readerAvailable;
@property (nonatomic) BOOL readerShouldBeShownIfPossible; // ivar: _readerShouldBeShownIfPossible
@property (nonatomic, getter=isReaderViewStale) BOOL readerViewStale; // ivar: _readerViewStale
@property (readonly, nonatomic) BrowserRootViewController *rootViewController; // ivar: _rootViewController
@property (readonly, nonatomic) _SFBrowserSavedState *savedState; // ivar: _savedState
@property (readonly, weak, nonatomic) UIWindowScene *scene; // ivar: _scene
@property (readonly, copy, nonatomic) NSString *searchCountKey; // ivar: _searchCountKey
@property (readonly, nonatomic) ApplicationShortcutController *shortcutController; // ivar: _shortcutController
@property (nonatomic) BOOL shouldKeepKeyboardFocused; // ivar: _shouldKeepKeyboardFocused
@property (readonly, nonatomic) BOOL shouldReportUnifiedTabBarAnalytics;
@property (readonly, nonatomic) BOOL shouldSnapshotActiveTab;
@property (readonly, nonatomic) BOOL shouldStayInFocusedTabGroupForExternalLinks;
@property (readonly, nonatomic, getter=isShowingAppInfoOverlay) BOOL showingAppInfoOverlay;
@property (readonly, nonatomic, getter=isShowingCompletionDetail) BOOL showingCompletionDetail;
@property (readonly, nonatomic, getter=isShowingCompletionListCompletions) BOOL showingCompletionListCompletions;
@property (readonly, nonatomic, getter=isShowingContinuousReadingList) BOOL showingContinuousReadingList;
@property (readonly, nonatomic, getter=isShowingFavorites) BOOL showingFavorites;
@property (readonly, nonatomic, getter=isShowingReader) BOOL showingReader;
@property (readonly, nonatomic) UIAction *sidebarAction;
@property (readonly, nonatomic) NSObject<SidebarUIProxy> *sidebarUIProxy; // ivar: _sidebarUIProxy
@property (readonly, nonatomic) SFSiriLinkCoordinator *siriLinkCoordinator;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsPrivacyReport;
@property (readonly, nonatomic, getter=isSuspendedOrSuspending) BOOL suspendedOrSuspending; // ivar: _suspendedOrSuspending
@property (readonly, nonatomic) NSInteger tabBarDisplayMode;
@property (readonly, nonatomic) BOOL tabBarIsCurrentlyScrollable;
@property (readonly, nonatomic) TabBarManager *tabBarManager;
@property (readonly, nonatomic) TabController *tabController; // ivar: _tabController
@property (retain, nonatomic) TabDocument *tabDocumentPlayingPIPVideo; // ivar: _tabDocumentPlayingPIPVideo
@property (readonly, copy, nonatomic) NSArray *tabDocumentsForActiveTabThatCanReceiveMessages;
@property (readonly, nonatomic) WBTabGroupManager *tabGroupManager; // ivar: _tabGroupManager
@property (readonly, nonatomic) NSObject<TabGroupProvider> *tabGroupProvider;
@property (readonly, nonatomic) TabHoverPreview *tabHoverPreview;
@property (readonly, nonatomic) BOOL tabViewPinchActive; // ivar: _tabViewPinchActive
@property (readonly, nonatomic) UIPinchGestureRecognizer *tabViewPinchRecognizer; // ivar: _tabViewPinchRecognizer
@property (readonly, nonatomic) BOOL tabsShowOnlyIcons;
@property (retain, nonatomic) UITextRange *textRangeToRestoreAfterParsecCardDismissal; // ivar: _textRangeToRestoreAfterParsecCardDismissal
@property (readonly, nonatomic) NSInteger unifiedTabBarLayoutStyle;
@property (readonly, nonatomic) UserActivityController *userActivityController; // ivar: _userActivityController
@property (nonatomic) BOOL usesNarrowLayout; // ivar: _usesNarrowLayout
@property (readonly, nonatomic) BOOL usesTabBar; // ivar: _usesTabBar
@property (readonly, nonatomic) UIViewController *viewControllerToPresentFrom;
@property (nonatomic) BOOL wantsUnifiedFieldFocused; // ivar: _wantsUnifiedFieldFocused
@property (readonly, nonatomic) CGSize webExtensionTabSize;
@property (readonly, nonatomic) CGRect webExtensionWindowGeometry;
@property (readonly, copy, nonatomic) NSArray *webExtensionWindows;
@property (readonly, nonatomic) _SFWebView *webView; // ivar: _webView
@property (retain, nonatomic) UIWindow *window;
@property (readonly, nonatomic) WBWindowState *windowState; // ivar: _windowState
@property (readonly, nonatomic) _SFBrowserWindowStateData *windowStateData;
@property (readonly, nonatomic) WKPreferences *wkPreferences; // ivar: _wkPreferences
@property (nonatomic) float zoomScale;


+(id)sharedProcessPool;
-(BOOL)_shouldUseNarrowLayout;
-(BOOL)_wantsPriorityOverFocusUpdates;
-(BOOL)activityViewControllerSupportsDownloads:(id)arg0 ;
-(BOOL)addBookmarkActivityCanSaveBookmarkChanges:(id)arg0 ;
-(BOOL)addBookmarkNavControllerCanSaveBookmarkChanges:(id)arg0 ;
-(BOOL)addReadingListBookmarkForCurrentTab;
-(BOOL)barManager:(id)arg0 canHandleLongPressForBarItem:(NSInteger)arg1 ;
-(BOOL)becomeFirstResponder;
-(BOOL)bookmarksNavigationController:(id)arg0 tabItem:(id)arg1 matchesSearchText:(id)arg2 ;
-(BOOL)bookmarksNavigationControllerIsPresentedInsideBlankTab:(id)arg0 ;
-(BOOL)browserViewControllerInterfaceFillsScreen:(id)arg0 ;
-(BOOL)browserViewControllerShouldFreezeWebViewUpdatesForSizeTransition:(id)arg0 ;
-(BOOL)browserViewControllerShouldTemporarilyHideBottomToolbar:(id)arg0 ;
-(BOOL)canBecomeFirstResponder;
-(BOOL)canHideBars;
-(BOOL)canNavigateContinuousReadingListInDirection:(NSUInteger)arg0 ;
-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(BOOL)canToggleVisibilityForView:(NSUInteger)arg0 ;
-(BOOL)catalogViewControllerPresentingInPortraitAspectRatio:(id)arg0 ;
-(BOOL)catalogViewControllerShouldRequestSuggestions:(id)arg0 ;
-(BOOL)catalogViewControllerShouldSuppressPopover:(id)arg0 ;
-(BOOL)cloudTabsViewController:(id)arg0 tabItem:(id)arg1 matchesSearchText:(id)arg2 ;
-(BOOL)dismissTransientUIAnimated:(BOOL)arg0 ;
-(BOOL)dismissTransientUIAnimated:(BOOL)arg0 preserveFavoritesState:(BOOL)arg1 ;
-(BOOL)dynamicBarAnimator:(id)arg0 canTransitionToState:(NSInteger)arg1 byDraggingWithOffset:(CGFloat)arg2 ;
-(BOOL)favoritesFieldShouldBeExpandedForFavoritesState:(NSInteger)arg0 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)getContextForCurrentPageWithCompletionHandler:(id)arg0 ;
-(BOOL)isAnyPageLoaded;
-(BOOL)isContinuousReadingDocument:(id)arg0 ;
-(BOOL)isViewVisible:(NSUInteger)arg0 ;
-(BOOL)previewController:(id)arg0 shouldOpenURL:(id)arg1 forPreviewItem:(id)arg2 ;
-(BOOL)readerViewIsVisibleForMailContentProvider:(id)arg0 ;
-(BOOL)saveToFilesOperationSupportsDownloads:(id)arg0 ;
-(BOOL)scrollViewShouldScrollToTop:(id)arg0 ;
-(BOOL)shouldDeferHistoryUpdatesForWKWebView:(id)arg0 ;
-(BOOL)shouldIncreaseTopSpacingForStartPageController:(id)arg0 ;
-(BOOL)showDemoModeFeatureDisabledAlert;
-(BOOL)tabDocument:(id)arg0 canShowDownload:(id)arg1 ;
-(BOOL)tabDocumentCanBecomeCurrentUserActivity:(id)arg0 ;
-(BOOL)tabDocumentCanBeginInputSessionForStreamlinedLogin:(id)arg0 ;
-(BOOL)tabDocumentCanCloseWindow:(id)arg0 ;
-(BOOL)tabDocumentCanDisplayModalUI:(id)arg0 ;
-(BOOL)tabDocumentCanDownloadFile:(id)arg0 ;
-(BOOL)tabDocumentCanFindNextOrPrevious:(id)arg0 ;
-(BOOL)tabDocumentCanRedirectToExternalApplication:(id)arg0 ;
-(BOOL)tabDocumentCanShowJavaScriptAlertConfirmOrTextInput:(id)arg0 ;
-(BOOL)tabDocumentIsBackgroundPreloading:(id)arg0 ;
-(BOOL)tabDocumentShouldDeferAppBannerRemoval:(id)arg0 ;
-(BOOL)tabDocumentShouldFillStringForFind:(id)arg0 ;
-(BOOL)tabDocumentShouldHandleAuthentication:(id)arg0 ;
-(BOOL)tabDocumentShouldHandleCertificateError:(id)arg0 ;
-(BOOL)tabItem:(id)arg0 matchesSearchText:(id)arg1 ;
-(CGFloat)browserViewController:(id)arg0 adjustedBottomContentInset:(CGFloat)arg1 ;
-(CGFloat)browserViewController:(id)arg0 adjustedBottomObscuredInset:(CGFloat)arg1 ;
-(CGFloat)browserViewController:(id)arg0 adjustedTopObscuredInsetForBanners:(CGFloat)arg1 ;
-(CGFloat)browserViewControllerAdditionalContentHeightForBanners:(id)arg0 ;
-(CGFloat)catalogViewControllerPopoverWidth:(id)arg0 ;
-(CGFloat)continuousReadingViewControllerNextWebViewLandingOffset:(id)arg0 includeBottomBar:(BOOL)arg1 ;
-(CGFloat)dynamicBarAnimator:(id)arg0 minimumTopBarHeightForOffset:(CGFloat)arg1 ;
-(CGFloat)topBarsHeightForSnapshotGenerator:(id)arg0 ;
-(CGFloat)verticalScrollOffsetForReaderViewInTabDocument:(id)arg0 ;
-(NSInteger)_bookmarksPresentationStyle;
-(NSInteger)bookmarksPresentationStyleForViewOfSize:(struct CGSize )arg0 ;
-(NSInteger)browserPersonaForActivityViewController:(id)arg0 ;
-(NSInteger)browserViewController:(id)arg0 sidebarStyleForViewSize:(struct CGSize )arg1 ;
-(NSInteger)browserViewController:(id)arg0 toolbarPlacementForViewSize:(struct CGSize )arg1 ;
-(NSInteger)dataOwnerForNavigationBar:(id)arg0 ;
-(NSInteger)previewController:(id)arg0 editingModeForPreviewItem:(id)arg1 ;
-(NSInteger)tabDocumentOrderIndex:(id)arg0 ;
-(NSInteger)updatePolicyForStartPageController:(id)arg0 ;
-(NSUInteger)popUpPolicyForTabDocument:(id)arg0 ;
-(id)addBookmarkActivityTabGroupProvider;
-(id)barManager:(id)arg0 visibleBarItemsForLayout:(NSInteger)arg1 availableItems:(id)arg2 ;
-(id)bookmarksNavigationControllerCurrentContinuousReadingItem:(id)arg0 ;
-(id)borrowContentViewForTab:(id)arg0 withTopBackdropView:(*id)arg1 ofHeight:(CGFloat)arg2 ;
-(id)catalogViewControllerStartPageVisualStyleProvider:(id)arg0 ;
-(id)continuousReadingViewControllerForBrowserViewController:(id)arg0 ;
-(id)createCatalogViewControllerIfNeeded;
-(id)currentContentUUIDForNavigationBar:(id)arg0 ;
-(id)detachFromScene;
-(id)downloadsViewControllerForActionPanel:(id)arg0 ;
-(id)initWithStateData:(id)arg0 browserWindowController:(id)arg1 savedState:(id)arg2 controlledByAutomation:(BOOL)arg3 ;
-(id)initWithUUID:(id)arg0 sceneID:(id)arg1 browserWindowController:(id)arg2 tabGroupManager:(id)arg3 controlledByAutomation:(BOOL)arg4 ;
-(id)initWithWindowState:(id)arg0 browserWindowController:(id)arg1 tabGroupManager:(id)arg2 ;
-(id)initWithWindowState:(id)arg0 browserWindowController:(id)arg1 tabGroupManager:(id)arg2 controlledByAutomation:(BOOL)arg3 ;
-(id)itemProviderForNavigationBar:(id)arg0 ;
-(id)itemTitleForCloudSharingController:(id)arg0 ;
-(id)linkPreviewViewControllerForNavigationIntent:(id)arg0 ;
-(id)linkPreviewViewControllerForURL:(id)arg0 ;
-(id)loadURLInNewTab:(id)arg0 inBackground:(BOOL)arg1 ;
-(id)loadURLInNewTab:(id)arg0 inBackground:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)loadURLInNewTab:(id)arg0 inBackground:(BOOL)arg1 animated:(BOOL)arg2 fromExternalApplication:(BOOL)arg3 ;
-(id)loadURLInNewTab:(id)arg0 title:(id)arg1 UUID:(id)arg2 inBackground:(BOOL)arg3 animated:(BOOL)arg4 fromExternalApplication:(BOOL)arg5 restoringCloudTab:(BOOL)arg6 ;
-(id)makeSidebarButton;
-(id)makeTabOverview;
-(id)navigationBarURLForSharing:(id)arg0 ;
-(id)newCollaborationButton;
-(id)newCollaborationButtonWithActiveTabGroup:(id)arg0 existingShare:(id)arg1 ;
-(id)nextResponder;
-(id)pageZoomPreferenceManagerForTabDocument:(id)arg0 ;
-(id)previewController:(id)arg0 transitionViewForPreviewItem:(id)arg1 ;
-(id)printControllerForContentProvider:(id)arg0 ;
-(id)readerControllerForMailContentProvider:(id)arg0 ;
-(id)sidebarContentViewControllerForSidebarUIProxy:(id)arg0 ;
-(id)tabDocumentSavedSessionStateData:(id)arg0 ;
-(id)undoManager;
-(id)webExtensionWindowForTabDocument:(id)arg0 ;
-(id)webExtensionWindowWithID:(CGFloat)arg0 ;
-(id)webViewForMailContentProvider:(id)arg0 ;
-(struct CGSize )contentSizeForSnapshotGenerator:(id)arg0 ;
-(struct UIEdgeInsets )finalObscuredInsetsForScrollView:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;
-(void)_automaticPasswordInputViewAutoFillContextProviderRequiredNotification:(id)arg0 ;
-(void)_automaticPasswordInputViewNotification:(id)arg0 ;
-(void)_backgroundImageFileModifiedRemotely:(id)arg0 ;
-(void)_backgroundImageNeedsCloudKitUpdate:(id)arg0 ;
-(void)_beganSharingTabGroup:(id)arg0 ;
-(void)_bookmarksDidReload:(id)arg0 ;
-(void)_closePreviewDocumentTimerFired:(id)arg0 ;
-(void)_contentBlockersPerSitePreferenceDidChange:(id)arg0 ;
-(void)_defaultSearchEngineDidChange:(id)arg0 ;
-(void)_didChangePowerState;
-(void)_didChangeToFirstResponder:(id)arg0 ;
-(void)_didDismissManageExtensionsViewController:(id)arg0 ;
-(void)_downloadManagerDidFinishLastDownload:(id)arg0 ;
-(void)_downloadsDidChange:(id)arg0 ;
-(void)_downloadsTotalProgressDidChange:(id)arg0 ;
-(void)_handleKeyUIEvent:(id)arg0 ;
-(void)_hasUnviewedDownloadsDidChange:(id)arg0 ;
-(void)_hideCrashBanner;
-(void)_initSubviews;
-(void)_keyboardWillHide:(id)arg0 ;
-(void)_keyboardWillShow:(id)arg0 ;
-(void)_parsecABGroupIdentifierDidChange:(id)arg0 ;
-(void)_parsecBagDidLoad:(id)arg0 ;
-(void)_perSiteAutomaticReaderActivationPreferenceDidChange:(id)arg0 ;
-(void)_perSiteLockdownModePreferenceDidChange:(id)arg0 ;
-(void)_perSitePageZoomPreferenceDidChange:(id)arg0 ;
-(void)_perSitePreferencesDidChange:(id)arg0 ;
-(void)_perSitePreferencesDidChangeRemotely:(id)arg0 ;
-(void)_presentModalViewController:(id)arg0 fromBarItem:(NSInteger)arg1 completion:(id)arg2 ;
-(void)_showTabGroupPicker:(id)arg0 ;
-(void)_tabViewPinch:(id)arg0 ;
-(void)_voiceSearchAvailabilityDidChange:(id)arg0 ;
-(void)actionPanel:(id)arg0 prepareForMailActivityWithMailController:(id)arg1 completionHandler:(id)arg2 ;
-(void)actionPanelAddTabDocumentToReadingList:(id)arg0 completion:(id)arg1 ;
-(void)addAllTabsToBookmarks:(id)arg0 ;
-(void)addBookmarkActivityFailedToAcquireBookmarkLock:(id)arg0 ;
-(void)addBookmarkFolderForCurrentTabs;
-(void)addBookmarkForCurrentTab;
-(void)addBookmarkNavController:(id)arg0 didFinishWithResult:(BOOL)arg1 bookmark:(id)arg2 ;
-(void)addToBookmarks:(id)arg0 ;
-(void)addToReadingList:(id)arg0 ;
-(void)adoptSceneID:(id)arg0 ;
-(void)animateLinkImage:(struct CGImage *)arg0 fromRect:(struct CGRect )arg1 inView:(id)arg2 toBarItem:(NSInteger)arg3 ;
-(void)attachToScene:(id)arg0 ;
-(void)autoFillFormKeyPressed;
-(void)autoFillStateChangedMessageReceived;
-(void)barManager:(id)arg0 didReceiveLongPressForBarItem:(NSInteger)arg1 ;
-(void)barManager:(id)arg0 didReceiveTapForBarItem:(NSInteger)arg1 ;
-(void)barManager:(id)arg0 didReceiveTouchDownForBarItem:(NSInteger)arg1 ;
-(void)barManager:(id)arg0 willRegisterBarWithToken:(id)arg1 ;
-(void)beginIgnoringUserInteraction:(id)arg0 ;
-(void)beginTrackingDropSessionForTabBarVisibility:(id)arg0 ;
-(void)bookmarksBarView:(id)arg0 bookmarksNavigationControllerViewDidAppear:(id)arg1 ;
-(void)bookmarksBarView:(id)arg0 bookmarksNavigationControllerViewDidDisappear:(id)arg1 ;
-(void)bookmarksNavigationController:(id)arg0 editFavoritesGridViewBookmark:(id)arg1 ;
-(void)bookmarksNavigationController:(id)arg0 provideContextResponseWithBlock:(id)arg1 ;
-(void)bookmarksNavigationController:(id)arg0 setBookmark:(id)arg1 asRead:(BOOL)arg2 ;
-(void)bookmarksNavigationController:(id)arg0 updateReadingListUnreadFilterShowingAllBookmarks:(BOOL)arg1 ;
-(void)bookmarksNavigationControllerContentDidBecomeDirty:(id)arg0 ;
-(void)bookmarksNavigationControllerDidPressDoneButton:(id)arg0 ;
-(void)bookmarksNavigationControllerDidTapOutsideFavorites:(id)arg0 ;
-(void)bookmarksNavigationControllerReloadDidFail:(id)arg0 ;
-(void)bookmarksNavigationControllerViewDidAppear:(id)arg0 ;
-(void)bookmarksNavigationControllerViewDidDisappear:(id)arg0 ;
-(void)browserViewController:(id)arg0 didChangeShowingSidebar:(BOOL)arg1 ;
-(void)browserViewController:(id)arg0 didChangeSidebarStyle:(NSInteger)arg1 ;
-(void)browserViewController:(id)arg0 didCreateNavigationBar:(id)arg1 ;
-(void)browserViewController:(id)arg0 didCreateToolbar:(id)arg1 ;
-(void)browserViewController:(id)arg0 didCreateUnifiedBar:(id)arg1 ;
-(void)browserViewController:(id)arg0 didUpdateBannerTheme:(id)arg1 ;
-(void)browserViewController:(id)arg0 traitCollectionDidChange:(id)arg1 ;
-(void)browserViewControllerDidChangeBarInsets:(id)arg0 ;
-(void)browserViewControllerDidChangeToolbarPlacement:(id)arg0 ;
-(void)browserViewControllerDidLayOutSubviews:(id)arg0 ;
-(void)cancelFavorites;
-(void)cancelFavoritesAnimated:(BOOL)arg0 ;
-(void)cancelKeyPressed;
-(void)cancelSpeculativeLoad;
-(void)carrierBundledChanged;
-(void)catalogViewController:(id)arg0 cacheSearchQueryID:(NSInteger)arg1 ;
-(void)catalogViewController:(id)arg0 completionItem:(id)arg1 wasAcceptedForString:(id)arg2 ;
-(void)catalogViewController:(id)arg0 didFinishVoiceSearchWithNavigation:(BOOL)arg1 ;
-(void)catalogViewController:(id)arg0 didPasteText:(id)arg1 ;
-(void)catalogViewController:(id)arg0 didSelectAddress:(id)arg1 ;
-(void)catalogViewController:(id)arg0 didSelectSearch:(id)arg1 ;
-(void)catalogViewController:(id)arg0 focusNextKeyView:(BOOL)arg1 ;
-(void)catalogViewController:(id)arg0 loadURL:(id)arg1 inExternalApplication:(BOOL)arg2 ;
-(void)catalogViewController:(id)arg0 mightSelectCompletionItem:(id)arg1 forString:(id)arg2 ;
-(void)catalogViewController:(id)arg0 presentViewControllerWithinPopover:(id)arg1 completionHandler:(id)arg2 ;
-(void)catalogViewController:(id)arg0 willPresentCustomizationViewController:(id)arg1 ;
-(void)catalogViewController:(id)arg0 willPresentDetailViewController:(id)arg1 ;
-(void)catalogViewController:(id)arg0 willRepositionPopoverToRect:(struct CGRect *)arg1 inView:(*id)arg2 ;
-(void)catalogViewControllerDidAppear:(id)arg0 ;
-(void)catalogViewControllerDidBeginEditing:(id)arg0 ;
-(void)catalogViewControllerDidEndEditing:(id)arg0 ;
-(void)catalogViewControllerDidScroll:(id)arg0 animated:(BOOL)arg1 ;
-(void)catalogViewControllerDidSelectFindOnPage:(id)arg0 ;
-(void)catalogViewControllerPopoverWillDismiss:(id)arg0 dismissalReason:(NSInteger)arg1 ;
-(void)catalogViewControllerWillUnfocusUnifiedField:(id)arg0 ;
-(void)clearBadgeOnPageFormatMenu;
-(void)clearCachedTabCompletionData;
-(void)clearContinuousItemDocuments;
-(void)clearDocumentForContinuousReading:(id)arg0 ;
-(void)clearHistoryMessageReceived;
-(void)clearParsecQueryOriginatingFromSearchSuggestion;
-(void)clearParticipantsList;
-(void)clearReaderViews;
-(void)clearSpeculativeLoadDocument;
-(void)closeActiveTab:(id)arg0 ;
-(void)closeAllTabs:(id)arg0 ;
-(void)closeAllTabsMatchingSearch:(id)arg0 ;
-(void)closeOtherTabsKeyPressed;
-(void)closePreviewDocument;
-(void)closeStartPage;
-(void)closeTabDocument:(id)arg0 animated:(BOOL)arg1 ;
-(void)closeTabGroupKeyPressed;
-(void)closeTabWithUUID:(id)arg0 ;
-(void)closeWindow;
-(void)cloudSharingController:(id)arg0 failedToSaveShareWithError:(id)arg1 ;
-(void)cloudSharingControllerDidStopSharing:(id)arg0 ;
-(void)cloudTabsEnabledDidChange;
-(void)commitLinkPreviewViewController:(id)arg0 ;
-(void)completionDetailViewControllerDidDismiss:(id)arg0 ;
-(void)compressedNavigationBarWasTapped:(id)arg0 ;
-(void)configureMenuAndAdoptButton:(id)arg0 ;
-(void)continuousReadingViewController:(id)arg0 didCommitToLoadItem:(id)arg1 ;
-(void)continuousReadingViewController:(id)arg0 scrollViewDidScroll:(id)arg1 ;
-(void)continuousReadingViewControllerCommitToLoadPreviousItem:(id)arg0 ;
-(void)continuousReadingViewControllerWillCommitToLoadNextItem:(id)arg0 ;
-(void)createNewBookmarkWithTitle:(id)arg0 ;
-(void)createNewPrivateTab;
-(void)createNewTab;
-(void)createNewTabGroupWithTitle:(id)arg0 ;
-(void)createReadingListItem;
-(void)dealloc;
-(void)decreaseSize:(id)arg0 ;
-(void)didAddTabWithUUID:(id)arg0 title:(id)arg1 inSharedTabGroupWithUUID:(id)arg2 byParticipantWithRecordID:(id)arg3 ;
-(void)didBecomeActive;
-(void)didCancelDismissingTabOverview;
-(void)didChangeBackgroundImageInSharedTabGroupWithUUID:(id)arg0 byParticipantWithRecordID:(id)arg1 ;
-(void)didChangeContinuousReadingItemInActiveDocument;
-(void)didChangeScopedFavoritesInSharedTabGroupWithUUID:(id)arg0 byParticipantWithRecordID:(id)arg1 ;
-(void)didCloseBrowserWindow;
-(void)didCompleteScrolling;
-(void)didEnterBackground;
-(void)didNavigateInTabWithUUID:(id)arg0 title:(id)arg1 inSharedTabGroupWithUUID:(id)arg2 byParticipantWithRecordID:(id)arg3 ;
-(void)didReceiveMemoryWarning;
-(void)didRemoveTabWithUUID:(id)arg0 title:(id)arg1 inSharedTabGroupWithUUID:(id)arg2 byParticipantWithRecordID:(id)arg3 ;
-(void)dismissCatalogViewController:(id)arg0 ;
-(void)dismissCompletionDetail;
-(void)dismissPageFormatMenu;
-(void)dismissToastViewController:(id)arg0 ;
-(void)dispatchNavigationIntent:(id)arg0 ;
-(void)document:(id)arg0 willMakeReaderVisible:(BOOL)arg1 ;
-(void)dynamicBarAnimatorOutputsDidChange:(id)arg0 ;
-(void)dynamicBarAnimatorStateDidChange:(id)arg0 ;
-(void)dynamicBarAnimatorWillEnterSteadyState:(id)arg0 ;
-(void)dynamicBarAnimatorWillLeaveSteadyState:(id)arg0 ;
-(void)editBookmark:(id)arg0 ;
-(void)editBookmarksKeyPressed;
-(void)emailCurrentPage;
-(void)emptySelectorForAddLinkToReadingListModifierLinkTap;
-(void)emptySelectorForDownloadModifierLinkTap;
-(void)emptySelectorForOpenInNewTabModifierLinkTap;
-(void)emptySelectorForOpenInNewTabOppositePreferenceModifierLinkTap;
-(void)endIgnoringUserInteraction:(id)arg0 ;
-(void)endTrackingDropSessionForTabBarVisibility:(id)arg0 ;
-(void)find:(id)arg0 ;
-(void)focusAddressFieldAlternativeKeyPressed;
-(void)focusAddressFieldKeyPressed;
-(void)fraudWarningsToggled;
-(void)goBack;
-(void)goForward;
-(void)handleNavigationIntent:(id)arg0 completion:(id)arg1 ;
-(void)handleTabViewPinch;
-(void)hideReaderForTabDocument:(id)arg0 animated:(BOOL)arg1 deactivationMode:(NSUInteger)arg2 ;
-(void)increaseSize:(id)arg0 ;
-(void)invalidateSourceApplication;
-(void)linkPreviewProviderWillDismissPreview;
-(void)loadBackgroundImageIfNeededForIdentifier:(id)arg0 ;
-(void)loadCloudTabsForDeviceRestoration:(id)arg0 ;
-(void)loadURL:(id)arg0 ;
-(void)makeSpaceForTabWithPrivateBrowsing:(BOOL)arg0 resultHandler:(id)arg1 ;
-(void)markReadingListBookmark:(id)arg0 asRead:(BOOL)arg1 postNotification:(BOOL)arg2 ;
-(void)mergeAllWindows:(id)arg0 ;
-(void)navigateBackKeyPressed;
-(void)navigateContinuousReadingListToDirection:(NSUInteger)arg0 ;
-(void)navigateForwardKeyPressed;
-(void)navigationBar:(id)arg0 didCreateLeadingToolbar:(id)arg1 trailingToolbar:(id)arg2 ;
-(void)navigationBar:(id)arg0 didFinishShowingAvailabilityLabelOfType:(NSInteger)arg1 ;
-(void)navigationBar:(id)arg0 didProduceNavigationIntent:(id)arg1 ;
-(void)navigationBar:(id)arg0 extensionButtonTapped:(id)arg1 extension:(id)arg2 ;
-(void)navigationBar:(id)arg0 multipleExtensionsButtonTapped:(id)arg1 ;
-(void)navigationBarCancelButtonWasTapped:(id)arg0 ;
-(void)navigationBarDidLayoutSubviews:(id)arg0 ;
-(void)navigationBarDidUpdateBackdropEffect:(id)arg0 ;
-(void)navigationBarFormatMenuButtonBecameUnavailable:(id)arg0 ;
-(void)navigationBarFormatMenuButtonStartedInteraction:(id)arg0 ;
-(void)navigationBarFormatMenuButtonWasTapped:(id)arg0 ;
-(void)navigationBarMediaStateMuteButtonWasTapped:(id)arg0 ;
-(void)navigationBarMetricsDidChange:(id)arg0 ;
-(void)navigationBarMinimizationChanged;
-(void)navigationBarReaderButtonWasTapped:(id)arg0 ;
-(void)navigationBarReloadButtonWasTapped:(id)arg0 ;
-(void)navigationBarStopLoadingButtonWasTapped:(id)arg0 ;
-(void)navigationBarTranslateButtonWasTapped:(id)arg0 ;
-(void)navigationBarTranslateButtonWasTappedWithSourceInfo:(id)arg0 ;
-(void)navigationBarURLWasTapped:(id)arg0 completionHandler:(id)arg1 ;
-(void)navigationBarVoiceSearchButtonWasTapped:(id)arg0 ;
-(void)newTabAlternativeKeyPressed;
-(void)newTabGroupKeyPressed;
-(void)newTabWithAlternativeOrderingKeyPressed;
-(void)nextReadingListItemKeyPressed;
-(void)nextTabGroupKeyPressed;
-(void)nextTabKeyPressed:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)openBookmarkWithUUIDString:(id)arg0 ;
-(void)openDownload:(id)arg0 ;
-(void)openLibrary:(id)arg0 ;
-(void)openNewPrivateTab:(id)arg0 ;
-(void)openNewPrivateWindow:(id)arg0 ;
-(void)openNewTab:(id)arg0 ;
-(void)openNewWindow:(id)arg0 ;
-(void)openStartPage;
-(void)openTabGroupOfKind:(NSInteger)arg0 uuidString:(id)arg1 ;
-(void)openTabWithUUID:(id)arg0 ;
-(void)overlayDidHide:(id)arg0 ;
-(void)participants:(id)arg0 didJoinSharedTabGroupWithUUID:(id)arg1 ;
-(void)participants:(id)arg0 didLeaveSharedTabGroupWithUUID:(id)arg1 ;
-(void)pasteAndGo:(id)arg0 ;
-(void)pasteAndSearch:(id)arg0 ;
-(void)performSearchUsingQuery:(id)arg0 ;
-(void)policyDidChangeForDigitalHealthManager:(id)arg0 ;
-(void)prepareForTabDocumentWebViewFullscreenMayReturnToInline:(id)arg0 ;
-(void)prepareIntentInteractionWithCompletionHandler:(id)arg0 ;
-(void)prepareToNavigateInTabDocument:(id)arg0 ;
-(void)presentAutomaticTabClosingAlertController;
-(void)presentCloudTabsPickerWithPrimaryDeviceUUID:(id)arg0 ;
-(void)presentDownloadsViewController;
-(void)presentModalViewController:(id)arg0 completion:(id)arg1 ;
-(void)presentModalViewController:(id)arg0 fromPopoverSource:(id)arg1 ;
-(void)presentPerTabGroupBookmarkPicker;
-(void)presentPrintControllerForTabDocument:(id)arg0 frame:(id)arg1 initiatedByWebContent:(BOOL)arg2 ;
-(void)presentPrivacyReport;
-(void)presentPromptForAppReviewPromptManager:(id)arg0 ;
-(void)presentationControllerDidDismiss:(id)arg0 ;
-(void)previewControllerDidDismiss:(id)arg0 ;
-(void)previousReadingListItemKeyPressed;
-(void)previousTabGroupKeyPressed;
-(void)previousTabKeyPressed:(id)arg0 ;
-(void)printKeyPressed;
-(void)productViewControllerDidFinish:(id)arg0 ;
-(void)reinsertBorrowedContentViewForTab:(id)arg0 ;
-(void)reloadFromOriginKeyPressed;
-(void)reloadKeyPressed;
-(void)reloadSidebarAnimated:(BOOL)arg0 ;
-(void)removeAppBannerFromTabDocument:(id)arg0 animated:(BOOL)arg1 ;
-(void)renameTabGroupKeyPressed;
-(void)reopenLastClosedTabPressed;
-(void)resetPageZoomLevelAndFontSize;
-(void)restoreInterfaceAfterElementFullscreen;
-(void)rootViewControllerViewDidTransitionFromSize:(struct CGSize )arg0 animated:(BOOL)arg1 ;
-(void)rootViewControllerViewTransitionFromSize:(struct CGSize )arg0 includingSidebar:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)rootViewControllerViewWillTransitionToSize:(struct CGSize )arg0 ;
-(void)saveKeyPressed;
-(void)saveToFilesOperation:(id)arg0 didFinishWithSuccess:(BOOL)arg1 ;
-(void)saveToFilesOperation:(id)arg0 presentViewController:(id)arg1 ;
-(void)saveWebpageAlternativeKeyPressed;
-(void)scene:(id)arg0 continueUserActivity:(id)arg1 ;
-(void)scene:(id)arg0 didFailToContinueUserActivityWithType:(id)arg1 error:(id)arg2 ;
-(void)scene:(id)arg0 openURLContexts:(id)arg1 ;
-(void)scene:(id)arg0 willConnectToSession:(id)arg1 options:(id)arg2 ;
-(void)scene:(id)arg0 willContinueUserActivityWithType:(id)arg1 ;
-(void)sceneDidBecomeActive:(id)arg0 ;
-(void)sceneDidDisconnect:(id)arg0 ;
-(void)sceneDidEnterBackground:(id)arg0 ;
-(void)sceneWillEnterForeground:(id)arg0 ;
-(void)sceneWillResignActive:(id)arg0 ;
-(void)screenTimeOverlayViewController:(id)arg0 didFinishDismissingBlockingViewController:(id)arg1 ;
-(void)screenshotService:(id)arg0 generatePDFRepresentationWithCompletion:(id)arg1 ;
-(void)scrollSidebarToTopAnimated:(BOOL)arg0 ;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg0 ;
-(void)scrollViewDidEndZooming:(id)arg0 withView:(id)arg1 atScale:(CGFloat)arg2 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewDidScrollToTop:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)scrollViewWillBeginZooming:(id)arg0 withView:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;
-(void)setAppBannerPinnedToTop:(BOOL)arg0 forTabDocument:(id)arg1 ;
-(void)setCookiePolicyMessageReceived;
-(void)setNeedsSnapshotUpdateForActiveTab;
-(void)setNeedsSnapshotUpdateForActiveTabIfTabIsBlank;
-(void)setProgressEnabled:(BOOL)arg0 ;
-(void)setReaderModeEnabled:(BOOL)arg0 ;
-(void)setScrollViewZoomEnabled:(BOOL)arg0 ;
-(void)setShowingCrashBanner:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setUpWithURL:(id)arg0 launchOptions:(id)arg1 ;
-(void)setView:(NSUInteger)arg0 visible:(BOOL)arg1 ;
-(void)share:(id)arg0 ;
-(void)showBars;
-(void)showBookmarksCollectionKeyPressed;
-(void)showBookmarksPanelWithNonAnimatedTransition;
-(void)showCloudTabsCollectionKeyPressed;
-(void)showCrashBanner:(id)arg0 animated:(BOOL)arg1 ;
-(void)showHistoryCollectionAlternativeKeyPressed;
-(void)showHistoryCollectionKeyPressed;
-(void)showPopupForWebExtension:(id)arg0 ;
-(void)showReaderForTabDocument:(id)arg0 animated:(BOOL)arg1 ;
-(void)showReadingListAutomaticArchiveAlertIfNeededWithCompletion:(id)arg0 ;
-(void)showReadingListCollectionKeyPressed;
-(void)showSharedWithYouCollectionKeyPressed;
-(void)showTabView;
-(void)showWebExtensionBanner:(id)arg0 ;
-(void)sidebarTrailingButtonWasTapped;
-(void)snapshotTabDocument:(id)arg0 size:(struct CGSize )arg1 topBackdropHeight:(CGFloat)arg2 options:(NSUInteger)arg3 completion:(id)arg4 ;
-(void)statusBarHeightChanged;
-(void)switchFromTabDocument:(id)arg0 toTabDocument:(id)arg1 ;
-(void)switchToTabKeyPressed:(id)arg0 ;
-(void)switchToTabWithUUID:(id)arg0 inWindowWithUUID:(id)arg1 forTabGroupWithUUID:(id)arg2 ;
-(void)tabBarManager:(id)arg0 didCreateTabBar:(id)arg1 ;
-(void)tabBarManagerDidUpdateDisplayMode:(id)arg0 ;
-(void)tabCollectionViewDidDismiss:(id)arg0 ;
-(void)tabCollectionViewWillDismiss:(id)arg0 ;
-(void)tabCollectionViewWillPresent:(id)arg0 ;
-(void)tabController:(id)arg0 didSwitchFromTabDocument:(id)arg1 toTabDocument:(id)arg2 ;
-(void)tabController:(id)arg0 didSwitchFromTabGroup:(id)arg1 ;
-(void)tabControllerDocumentCountDidChange:(id)arg0 ;
-(void)tabDocument:(id)arg0 didChangePIPState:(BOOL)arg1 ;
-(void)tabDocument:(id)arg0 didCreateNewTabDocument:(id)arg1 ;
-(void)tabDocument:(id)arg0 didCreatePreviewDocument:(id)arg1 ;
-(void)tabDocument:(id)arg0 didDetectReaderAvailability:(BOOL)arg1 ;
-(void)tabDocument:(id)arg0 didExtractArticleText:(id)arg1 withMetadata:(id)arg2 ;
-(void)tabDocument:(id)arg0 didFinishLoadingWithError:(BOOL)arg1 ;
-(void)tabDocument:(id)arg0 dismissViewControllerAnimated:(id)arg1 ;
-(void)tabDocument:(id)arg0 presentViewControllerAnimated:(id)arg1 ;
-(void)tabDocumentCommitPreviewedDocument:(id)arg0 ;
-(void)tabDocumentCommitPreviewedDocumentAsNewTab:(id)arg0 inBackground:(BOOL)arg1 ;
-(void)tabDocumentDidAddAlert:(id)arg0 ;
-(void)tabDocumentDidBeginNavigationGesture:(id)arg0 ;
-(void)tabDocumentDidCancelRedirectToExternalApplication:(id)arg0 ;
-(void)tabDocumentDidChangeCanStopLoadingState:(id)arg0 ;
-(void)tabDocumentDidChangeLocationWithinPageForMainFrame:(id)arg0 ;
-(void)tabDocumentDidChangeMediaState:(id)arg0 ;
-(void)tabDocumentDidChangeSafeAreaInsets:(id)arg0 ;
-(void)tabDocumentDidChangeSafeAreaShouldAffectObscuredInsets:(id)arg0 ;
-(void)tabDocumentDidClearLibraryType:(id)arg0 ;
-(void)tabDocumentDidCommitNavigation:(id)arg0 ;
-(void)tabDocumentDidCompleteCheckForAppBanner:(id)arg0 ;
-(void)tabDocumentDidDimissPreviewedDocument:(id)arg0 ;
-(void)tabDocumentDidEndNavigationGesture:(id)arg0 withNavigationToBackForwardListItem:(id)arg1 ;
-(void)tabDocumentDidStartLoading:(id)arg0 ;
-(void)tabDocumentDidUpdateBackForward:(id)arg0 ;
-(void)tabDocumentDidUpdatePersistentState:(id)arg0 ;
-(void)tabDocumentDidUpdatePinned:(id)arg0 ;
-(void)tabDocumentDidUpdateShowingContinuous:(id)arg0 ;
-(void)tabDocumentDidUpdateThemeColor:(id)arg0 ;
-(void)tabDocumentDidUpdateTitle:(id)arg0 ;
-(void)tabDocumentDidUpdateURL:(id)arg0 ;
-(void)tabDocumentFluidProgressRocketAnimationDidComplete:(id)arg0 ;
-(void)tabDocumentShouldBecomeActive:(id)arg0 ;
-(void)tabDocumentShouldCloseAndSwitchToParentTab:(id)arg0 ;
-(void)tabDocumentWillDisableLinkPreview;
-(void)tabDocumentWillDismissInlineDialog:(id)arg0 ;
-(void)tabDocumentWillEndNavigationGesture:(id)arg0 withNavigationToBackForwardListItem:(id)arg1 ;
-(void)tabDocumentWillShowInlineDialog:(id)arg0 ;
-(void)tabGroupManager:(id)arg0 activeParticipantsDidUpdateInTabGroupWithUUID:(id)arg1 ;
-(void)tabOverviewWillShiftScrollPositionForBoundsChange:(id)arg0 ;
-(void)takeFindStringKeyPressed;
-(void)toggleAlwaysShowBookmarksBarMessageReceived;
-(void)toggleBookmarksKeyPressed;
-(void)toggleBookmarksPresentation;
-(void)toggleDownloadsKeyPressed;
-(void)togglePrivateBrowsingEnabled;
-(void)toggleReaderKeyPressed;
-(void)toggleReaderMode;
-(void)toggleShowWebpageStatusBar;
-(void)toggleShowingFavoritesBarKeyPressed;
-(void)toggleShowingReaderForUserAction;
-(void)toggleTabView;
-(void)toggleTabViewKeyPressed;
-(void)toggleVoiceSearch;
-(void)unifiedTabBarActiveTabWasTapped;
-(void)updateApplePayPreferences;
-(void)updateCollaborationButton;
-(void)updateContinuousPreviewViewFrame;
-(void)updateDynamicBarGeometry;
-(void)updateExposedScrollViewRect;
-(void)updateFavoritesForNewDocument;
-(void)updateInsetsForBackgroundWebView:(id)arg0 ;
-(void)updateInterface;
-(void)updateInternalPreferences;
-(void)updateJavaScriptPreferences;
-(void)updatePopoverPositionAfterSizeTransition;
-(void)updatePresenceForActiveUser;
-(void)updatePrivateBrowsingAvailability;
-(void)updatePullToRefreshIsEnabled;
-(void)updateScrollToTopView;
-(void)updateSearchEngine;
-(void)updateSearchEngineIfNeeded;
-(void)updateShowingTabBarAnimated:(BOOL)arg0 ;
-(void)updateSpeculativeLoadingPreferences;
-(void)updateTabGroupButtonsVisibility;
-(void)updateTabGroupHeading;
-(void)updateTabOverviewButton;
-(void)updateTabViewPinchRecognizer;
-(void)updateUnifiedBarVisibility;
-(void)updateWebKitExperimentalFeatures;
-(void)userDefaultsDidChangeValueForKey:(id)arg0 ;
-(void)validateCommand:(id)arg0 ;
-(void)validateExtensionToolbarItemsInWindow:(id)arg0 ;
-(void)webExtensionButtonTapped:(id)arg0 extension:(id)arg1 ;
-(void)webExtensionKeyCommandPressed:(id)arg0 ;
-(void)webExtensionWasRemotelyEnabled:(id)arg0 ;
-(void)webExtensionsButtonTapped:(id)arg0 ;
-(void)webViewDidFirstVisuallyNonEmptyLayoutForTabDocument:(id)arg0 ;
-(void)willEnterForeground;
-(void)willResignActive;
-(void)willStartLoadFromUserTap:(id)arg0 ;
-(void)windowScene:(id)arg0 didUpdateCoordinateSpace:(id)arg1 interfaceOrientation:(NSInteger)arg2 traitCollection:(id)arg3 ;
-(void)windowScene:(id)arg0 performActionForShortcutItem:(id)arg1 completionHandler:(id)arg2 ;
-(void)windowScene:(id)arg0 userDidAcceptCloudKitShareWithMetadata:(id)arg1 ;
-(void)writePrivateBrowsingEnabled:(BOOL)arg0 ;


@end


#endif