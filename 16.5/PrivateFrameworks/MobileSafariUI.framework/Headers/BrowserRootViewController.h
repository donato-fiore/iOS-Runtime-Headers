// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BROWSERROOTVIEWCONTROLLER_H
#define BROWSERROOTVIEWCONTROLLER_H

@class UIViewController, UIApplication, WBSDiagnosticStateCollector, SFThemeColorEffectView, SFTouchDownGestureRecognizer, SFUnifiedBarTheme, UIView, UITapGestureRecognizer, UIPanGestureRecognizer, UIButton, UIHoverGestureRecognizer, SFToastViewController, SFPinnableBanner, SFBannerTheme, NSArray, NSNumber, _SFBrowserConfiguration, NSString, _SFDynamicBarAnimator, UIBarButtonItem, UIView<_SFBarCommon>, UIView<_SFNavigationBarCommon>, UIRefreshControl, SFWebExtensionEnabledRemotelyBanner, SFScreenTimeOverlayViewController, UIScrollView, SFWebpageStatusBarView, SFWebExtensionPermissionBanner, _SFWebView;
@protocol CapsuleNavigationBarViewControllerDelegate, SFCapsuleCollectionViewGestureObserving, SFOrderedContainerViewDelegate, SidebarContentDimmingViewDelegate, TabBarDropExpansionViewDelegate, TabOverviewThemeProviding, UIGestureRecognizerDelegate, UIViewControllerStatusBarPartStyleProvider, SFScreenTimeOverlayHostingViewController, SidebarUIProxy, TabDocumentViewGeometryProviding, SFBarAnimating, BrowserRootViewControllerDelegate, SidebarUIProxyDelegate, TabThumbnailCollectionView;


#import "ViewWithCustomNextResponder.h"
#import "TabBarDropExpansionView.h"
#import "BarContainerView.h"
#import "ScrollToTopView.h"
#import "BookmarksBarView.h"
#import "BrowserToolbar.h"
#import "BrowserController.h"
#import "CapsuleNavigationBarViewController.h"
#import "CatalogViewController.h"
#import "NavigationBar.h"
#import "SidebarContentDimmingView.h"
#import "SidebarViewController.h"
#import "TabBar.h"
#import "TabBarManager.h"
#import "TabHoverPreview.h"
#import "UnifiedBar.h"
#import "UnifiedField.h"

@interface BrowserRootViewController : UIViewController <CapsuleNavigationBarViewControllerDelegate, SFCapsuleCollectionViewGestureObserving, SFOrderedContainerViewDelegate, SidebarContentDimmingViewDelegate, TabBarDropExpansionViewDelegate, TabOverviewThemeProviding, UIGestureRecognizerDelegate, UIViewControllerStatusBarPartStyleProvider, SFScreenTimeOverlayHostingViewController, SidebarUIProxy, TabDocumentViewGeometryProviding>

 {
    UIApplication *_app;
    CGFloat _bottomBarKeyboardOffset;
    BOOL _canBecomeFirstResponder;
    ViewWithCustomNextResponder *_contentContainerView;
    UIEdgeInsets _contentInsetForContentFrame;
    UIEdgeInsets _maximumObscuredInsets;
    UIEdgeInsets _obscuredInsets;
    UIEdgeInsets _horizontalScrollIndicatorBaseInsets;
    UIEdgeInsets _verticalScrollIndicatorBaseInsets;
    NSUInteger _sizeTransitionCount;
    BOOL _statusBarStyleUpdateQueued;
    TabBarDropExpansionView *_tabBarDropExpansionView;
    BarContainerView *_topAuxiliaryBarsContainerView;
    ScrollToTopView *_scrollToTopView;
    UIViewController *_contentContainerViewController;
    UIViewController *_documentAndTopBarsContainerViewController;
    WBSDiagnosticStateCollector *_stateCollector;
    SFThemeColorEffectView *_statusBarBackdrop;
    SFTouchDownGestureRecognizer *_touchDownGestureRecognizer;
    SFThemeColorEffectView *_topBackdrop;
    SFUnifiedBarTheme *_topBackdropTheme;
    BOOL _topBackdropUsesPlainTheme;
    UIView *_topSeparator;
    BOOL _updatingTopBarStyles;
    BOOL _willDismissCatalogViewController;
    UITapGestureRecognizer *_showBarsFromBottomBarRecognizer;
    UIPanGestureRecognizer *_hideNavigationBarGestureRecognizer;
    BOOL _isTransitioningTabViews;
    CGSize _sizeForToolbarPlacement;
    NSInteger _toolbarPlacement;
    NSUInteger _sidebarControllerActiveAnimationCount;
    UIButton *_sidebarTrailingButton;
    UIView *_sidebarButtonEmbeddedInUnifiedBar;
    UIHoverGestureRecognizer *_statusBarHoverGestureRecognizer;
    SFToastViewController *_currentlyPresentedToastViewController;
}


@property (retain, nonatomic) SFPinnableBanner *appBanner; // ivar: _appBanner
@property (readonly, nonatomic) SFBannerTheme *bannerTheme; // ivar: _bannerTheme
@property (nonatomic) BOOL barStateAllowsHidingHomeIndicator; // ivar: _barStateAllowsHidingHomeIndicator
@property (readonly, nonatomic) NSArray *bars;
@property (retain, nonatomic) BookmarksBarView *bookmarksBar; // ivar: _bookmarksBar
@property (readonly, nonatomic) NSInteger bookmarksPresentationStyle;
@property (readonly, nonatomic) BrowserToolbar *bottomToolbar; // ivar: _bottomToolbar
@property (readonly, weak, nonatomic) BrowserController *browserController; // ivar: _browserController
@property (readonly, nonatomic) NSNumber *capsuleCollectionViewLayout;
@property (readonly, nonatomic) CapsuleNavigationBarViewController *capsuleViewController; // ivar: _capsuleViewController
@property (retain, nonatomic) CatalogViewController *catalogViewController; // ivar: _catalogViewController
@property (retain, nonatomic) _SFBrowserConfiguration *configuration; // ivar: _configuration
@property (readonly, nonatomic) ViewWithCustomNextResponder *contentContainerView;
@property (readonly, nonatomic) CGRect contentFrameInPageView;
@property (retain, nonatomic) SFPinnableBanner *crashBanner; // ivar: _crashBanner
@property (readonly, nonatomic) NSObject<SFBarAnimating> *currentBarAnimator;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<BrowserRootViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UIView *documentAndTopBarsContainerView; // ivar: _documentAndTopBarsContainerView
@property (nonatomic) BOOL documentSafeAreaInsetsFrozen; // ivar: _documentSafeAreaInsetsFrozen
@property (readonly, nonatomic) _SFDynamicBarAnimator *dynamicBarAnimator; // ivar: _dynamicBarAnimator
@property (readonly, nonatomic) UIButton *floatingSidebarButton; // ivar: _floatingSidebarButton
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat horizontalMarginForCatalogViewInPopover;
@property (readonly, nonatomic) UIViewController *hostViewControllerForOverlay;
@property (readonly, nonatomic) BOOL insetsContentContainerFromStatusBar;
@property (copy, nonatomic) id *intentInteractionCompletion; // ivar: _intentInteractionCompletion
@property (readonly, nonatomic, getter=isInteractivelyMinimizingBars) BOOL interactivelyMinimizingBars;
@property (readonly, nonatomic) BOOL isPerformingSizeTransition; // ivar: _isPerformingSizeTransition
@property (nonatomic) BOOL keepBarsMinimized; // ivar: _keepBarsMinimized
@property (readonly, nonatomic) UIBarButtonItem *leadingSidebarButtonItem;
@property (readonly, nonatomic) CGFloat maximumHeightObscuredByBottomToolbar;
@property (readonly, nonatomic) NavigationBar *navigationBar; // ivar: _navigationBar
@property (readonly, nonatomic) CGFloat navigationBarDesiredHeight;
@property (readonly, nonatomic) CGFloat navigationBarSquishedHeight;
@property (nonatomic) BOOL needsScrollToTopView; // ivar: _needsScrollToTopView
@property (readonly, nonatomic) CGFloat offsetForDynamicBarAnimator;
@property (readonly, nonatomic) NSInteger preferredCenterStatusBarStyle;
@property (readonly, nonatomic) NSInteger preferredLeadingStatusBarStyle;
@property (readonly, nonatomic) NSInteger preferredTrailingStatusBarStyle;
@property (readonly, nonatomic) UIView<_SFBarCommon> *primaryBar;
@property (readonly, nonatomic) UIView<_SFNavigationBarCommon> *primaryNavigationBar;
@property (nonatomic) BOOL pullToRefreshIsEnabled; // ivar: _pullToRefreshIsEnabled
@property (readonly, nonatomic) UIRefreshControl *refreshControl;
@property (retain, nonatomic) SFWebExtensionEnabledRemotelyBanner *remotelyEnabledExtensionBanner; // ivar: _remotelyEnabledExtensionBanner
@property (retain, nonatomic) SFScreenTimeOverlayViewController *screenTimeOverlayViewController; // ivar: _screenTimeOverlayViewController
@property (readonly, nonatomic) UIScrollView *scrollView; // ivar: _scrollView
@property (readonly, nonatomic, getter=isShowingSidebar) BOOL showingSidebar; // ivar: _showingSidebar
@property (nonatomic, getter=isShowingTabBar) BOOL showingTabBar; // ivar: _showingTabBar
@property (readonly, nonatomic) UIButton *sidebarButtonEmbeddedInSidebar; // ivar: _sidebarButtonEmbeddedInSidebar
@property (readonly, nonatomic) UIBarButtonItem *sidebarButtonItem; // ivar: _sidebarButtonItem
@property (readonly, nonatomic) SidebarContentDimmingView *sidebarContentDimmingView; // ivar: _sidebarContentDimmingView
@property (readonly, nonatomic) NSInteger sidebarStyle; // ivar: _sidebarStyle
@property (readonly, nonatomic) UIBarButtonItem *sidebarTrailingButtonItem; // ivar: _sidebarTrailingButtonItem
@property (weak, nonatomic) NSObject<SidebarUIProxyDelegate> *sidebarUIProxyDelegate; // ivar: _sidebarUIProxyDelegate
@property (readonly, nonatomic) SidebarViewController *sidebarViewController; // ivar: _sidebarViewController
@property (readonly, nonatomic) SFWebpageStatusBarView *statusBarView; // ivar: _statusBarView
@property (readonly) Class superclass;
@property (retain, nonatomic) TabBar *tabBar; // ivar: _tabBar
@property (readonly, nonatomic) UIView *tabBarClipperView; // ivar: _tabBarClipperView
@property (readonly, nonatomic) TabBarManager *tabBarManager; // ivar: _tabBarManager
@property (retain, nonatomic) SFPinnableBanner *tabGroupBanner; // ivar: _tabGroupBanner
@property (readonly, nonatomic) TabHoverPreview *tabHoverPreview; // ivar: _tabHoverPreview
@property (weak, nonatomic) NSObject<TabThumbnailCollectionView> *tabThumbnailCollectionView; // ivar: _tabThumbnailCollectionView
@property (nonatomic, getter=isTogglingTabBar) BOOL togglingTabBar; // ivar: _togglingTabBar
@property (readonly, nonatomic) NSInteger toolbarPlacement;
@property (readonly, nonatomic) SFThemeColorEffectView *topBackdrop;
@property (readonly, nonatomic) NSArray *topBanners; // ivar: _topBanners
@property (readonly, nonatomic) NSArray *topBannersAnchoredToStatusBar;
@property (readonly, nonatomic) NSArray *topBannersSeparableFromStatusBar;
@property (readonly, nonatomic) UIView<_SFNavigationBarCommon> *topBar;
@property (readonly, nonatomic) UIBarButtonItem *trailingSidebarButtonItem;
@property (readonly, nonatomic) UnifiedBar *unifiedBar; // ivar: _unifiedBar
@property (readonly, nonatomic) UnifiedField *unifiedField;
@property (nonatomic) BOOL usesFaintTopSeparator; // ivar: _usesFaintTopSeparator
@property (readonly, nonatomic, getter=isUsingBottomCapsule) BOOL usingBottomCapsule;
@property (readonly, nonatomic) BOOL usingLoweredBar;
@property (readonly, nonatomic) BOOL usingUnifiedBar;
@property (retain, nonatomic) SFWebExtensionPermissionBanner *webExtensionBanner; // ivar: _webExtensionBanner
@property (retain, nonatomic) _SFWebView *webView; // ivar: _webView
@property (readonly, nonatomic) UIEdgeInsets webViewEffectiveSafeAreaInsets;
@property (readonly, nonatomic) CGSize webViewMaximumUnobscuredLayoutSize;
@property (readonly, nonatomic) CGSize webViewMinimumLayoutSize;


+(BOOL)automaticallyNotifiesObserversForKey:(id)arg0 ;
-(BOOL)_bannerIsSeparableFromStatusBar:(id)arg0 ;
-(BOOL)_interfaceFillsScreen;
-(BOOL)_isShowingEmbeddedSidebar;
-(BOOL)_isShowingFindOnPage;
-(BOOL)_isTrackingDropSession;
-(BOOL)_shouldHideUnifiedBar;
-(BOOL)_shouldPositionBottomToolbarAboveKeyboard;
-(BOOL)_shouldShowSidebarContentDimmingView;
-(BOOL)_shouldShowThemeColorInTopBar;
-(BOOL)_showsTopBackdrop;
-(BOOL)_usesWebpageStatusBar;
-(BOOL)becomeFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(BOOL)capsuleNavigationBarViewController:(id)arg0 shouldUnminimizeOnScrollForScrollView:(id)arg1 ;
-(BOOL)capsuleNavigationBarViewControllerAllowsMinimizationGesture:(id)arg0 ;
-(BOOL)capsuleNavigationBarViewControllerIsShowingFindOnPage:(id)arg0 ;
-(BOOL)capsuleNavigationBarViewControllerIsTrackingDropSession:(id)arg0 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)inElementFullscreenForTabDocumentView:(id)arg0 ;
-(BOOL)prefersHomeIndicatorAutoHidden;
-(BOOL)safari_wantsTransparentApplicationBackground;
-(BOOL)shouldFreezeWebViewUpdatesForTabDocumentView:(id)arg0 ;
-(CGFloat)_bottomBarOffset;
-(CGFloat)_topAuxiliaryBarsHeight;
-(CGFloat)_totalAdditionalContentHeightForBanners;
-(CGFloat)keyboardInsetInCoordinateSpace:(id)arg0 ;
-(CGFloat)minimumEffectiveDeviceWidthForTabDocumentView:(id)arg0 ;
-(NSInteger)preferredStatusBarStyle;
-(NSUInteger)_indexOfFirstBannerSeparableFromStatusBar;
-(NSUInteger)preferredScreenEdgesDeferringSystemGestures;
-(NSUInteger)tabDocumentView:(id)arg0 contentOffsetAdjustmentEdgeWithPreviousContentInset:(struct UIEdgeInsets )arg1 ;
-(id)_activeTabDocumentView;
-(id)_continuousReadingViewController;
-(id)_multitaskingDragExclusionRects;
-(id)_plainTopBackdropGroupName;
-(id)_viewForConvertingToCoordinateSpace:(id)arg0 ;
-(id)childViewControllerForStatusBarStyle;
-(id)createToolbarForCapsuleNavigationBarViewController:(id)arg0 ;
-(id)initWithBrowserController:(id)arg0 ;
-(id)overrideTraitCollectionForChildViewController:(id)arg0 ;
-(id)preferredFocusEnvironments;
-(id)snapshotContentProviderForTab:(id)arg0 ;
-(id)tabOverview:(id)arg0 topBarThemeForItem:(id)arg1 ;
-(struct CGPoint )_convertDocumentCoordinateSpacePoint:(struct CGPoint )arg0 toCoordinateSpace:(id)arg1 ;
-(struct CGRect )_convertDocumentCoordinateSpaceRect:(struct CGRect )arg0 toCoordinateSpace:(id)arg1 ;
-(struct CGRect )_convertRect:(struct CGRect )arg0 fromViewInDocumentContainer:(id)arg1 toCoordinateSpace:(id)arg2 ;
-(struct CGRect )_frameForBottomToolbarForceHidden:(BOOL)arg0 ;
-(struct CGRect )_frameForCatalogView;
-(struct CGRect )_frameForContentContainerView;
-(struct CGRect )_frameForNavigationBar;
-(struct CGRect )_frameForSidebarWhenShowing:(BOOL)arg0 ;
-(struct CGRect )_sidebarDimmedContentFrameIncludingSidebarOnlyIfEmbedded:(BOOL)arg0 ;
-(struct CGRect )bottomToolbarFrameInCoordinateSpace:(id)arg0 includeKeyboard:(BOOL)arg1 ;
-(struct CGRect )contentContainerViewFrameForBrowserSize:(struct CGSize )arg0 ;
-(struct CGRect )navigationBarFrameInCoordinateSpace:(id)arg0 ;
-(struct CGSize )maximumUnobscuredWebViewLayoutSizeForTabDocumentView:(id)arg0 ;
-(struct CGSize )minimumWebViewLayoutSizeForTabDocumentView:(id)arg0 ;
-(struct SFScrollIndicatorInsets )scrollIndicatorInsetsForTabDocumentView:(id)arg0 ;
-(struct UIEdgeInsets )_avoidanceInsets;
-(struct UIEdgeInsets )_baseInsetsForHorizontalScrollIndicator;
-(struct UIEdgeInsets )_baseInsetsForVerticalScrollIndicator;
-(struct UIEdgeInsets )_loweredBarMaximumObscuredInsets;
-(struct UIEdgeInsets )_loweredBarMinimumObscuredInsets;
-(struct UIEdgeInsets )_loweredBarObscuredInsets;
-(struct UIEdgeInsets )_loweredBarObscuredInsetsIgnoringKeyboard;
-(struct UIEdgeInsets )maximumObscuredInsetsForRect:(struct CGRect )arg0 inCoordinateSpace:(id)arg1 ;
-(struct UIEdgeInsets )minimumObscuredInsetsForRect:(struct CGRect )arg0 inCoordinateSpace:(id)arg1 ;
-(struct UIEdgeInsets )obscuredInsetsForRect:(struct CGRect )arg0 inCoordinateSpace:(id)arg1 ;
-(struct UIEdgeInsets )obscuredInsetsWithComponents:(NSUInteger)arg0 forRect:(struct CGRect )arg1 inCoordinateSpace:(id)arg2 ;
-(struct UIEdgeInsets )obscuredScrollViewInsetsConsideringTargetState:(BOOL)arg0 insetsDueToSafeArea:(struct UIEdgeInsets *)arg1 ;
-(struct UIEdgeInsets )obscuredScrollViewInsetsForTabDocumentView:(id)arg0 unobscuredSafeAreaInsets:(struct UIEdgeInsets *)arg1 ;
-(struct UIEdgeInsets )scrollViewContentInsetAdjustmentsForTabDocumentView:(id)arg0 ;
-(struct UIEdgeInsets )sidebarObscuredInsetsForRect:(struct CGRect )arg0 inCoordinateSpace:(id)arg1 ;
-(void)_applyStatusBarBackdropTheme;
-(void)_applyTopBackdropTheme;
-(void)_boundingPathMayHaveChangedForView:(id)arg0 relativeToBoundsOriginOnly:(BOOL)arg1 ;
-(void)_createBottomToolbarIfNeeded;
-(void)_createSidebarContentDimmingViewIfNeeded;
-(void)_destroySidebarContentDimmingViewIfNeeded;
-(void)_hideNavigationBarGestureRecognized:(id)arg0 ;
-(void)_keyboardWillChangeFrame:(id)arg0 ;
-(void)_layOutBottomToolbar;
-(void)_layOutFloatingSidebarButtonForSidebarShowing:(BOOL)arg0 ;
-(void)_layOutScrollToTopView;
-(void)_layOutSidebar;
-(void)_layOutSidebarContentDimmingView;
-(void)_layOutTabView;
-(void)_layOutTopBackdrop;
-(void)_layOutTopBanners;
-(void)_layOutWebpageStatusBarView;
-(void)_logCurrentLayoutState;
-(void)_prepareBarsForTransitionFromPreviousToolbarPlacement:(NSInteger)arg0 ;
-(void)_prepareToShowSidebarViewControllerIfNeeded;
-(void)_receivedTouchDown:(id)arg0 ;
-(void)_refreshControlFired:(id)arg0 ;
-(void)_registerLayoutStateUpdateHandler;
-(void)_setShowingFloatingSidebarButton:(BOOL)arg0 ;
-(void)_setUpFloatingSidebarButton;
-(void)_setUpRefreshControlIfNeeded;
-(void)_setUpTabGroupButton;
-(void)_setUpWebpageStatusBarIfNeeded;
-(void)_showBarsFromBottomBarTap:(id)arg0 ;
-(void)_sidebarTrailingButtonWasTapped;
-(void)_statusBarHover:(id)arg0 ;
-(void)_transitionFromBanner:(id)arg0 toBanner:(id)arg1 animated:(BOOL)arg2 ;
-(void)_updateAllowsHidingHomeIndicatorMinimized:(BOOL)arg0 ;
-(void)_updateBannerTheme;
-(void)_updateBottomBarHeightAboveKeyboard;
-(void)_updateCapsuleTopSeparatorColor;
-(void)_updateRefreshControl;
-(void)_updateRefreshControlStyle;
-(void)_updateSidebarStyle;
-(void)_updateThemeForBanner:(id)arg0 animated:(BOOL)arg1 ;
-(void)_updateToolbarForToolbarPlacementAllowingRemoval:(BOOL)arg0 ;
-(void)_updateToolbarPlacementIfNeeded;
-(void)_updateTopBanners;
-(void)_updateTopBarAllowingRemoval:(BOOL)arg0 ;
-(void)_updateTopBarStyles;
-(void)_updateTopBarStylesAnimated:(BOOL)arg0 ;
-(void)addChildViewController:(id)arg0 ;
-(void)addToastViewController:(id)arg0 ;
-(void)capsuleCollectionView:(id)arg0 selectionGestureDidChangeFromAxis:(NSUInteger)arg1 ;
-(void)capsuleCollectionViewDidUpdateMinimizationGesture:(id)arg0 ;
-(void)capsuleNavigationBarViewController:(id)arg0 didCreateNavigationBar:(id)arg1 ;
-(void)capsuleNavigationBarViewController:(id)arg0 selectedItemWillChangeToState:(NSInteger)arg1 options:(NSInteger)arg2 coordinator:(id)arg3 ;
-(void)capsuleNavigationBarViewControllerDidChangeCapsuleFocus:(id)arg0 options:(NSInteger)arg1 ;
-(void)capsuleNavigationBarViewControllerDidTapVoiceSearch:(id)arg0 ;
-(void)capsuleNavigationBarViewControllerWillHideKeyboard:(id)arg0 ;
-(void)capsuleNavigationController:(id)arg0 obscuredInsetsDidChangeWithCoordinator:(id)arg1 ;
-(void)dealloc;
-(void)didReceiveMemoryWarning;
-(void)didToggleTabBar;
-(void)didTransitionTabView;
-(void)dismissViewControllerAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)displayHostedScreenTimeView;
-(void)dynamicBarAnimatorOutputsDidChange:(id)arg0 ;
-(void)layOutCatalogView;
-(void)layOutTopBars;
-(void)loadView;
-(void)presentViewController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)removeChildViewController:(id)arg0 notifyDidMove:(BOOL)arg1 ;
-(void)removeToastViewController:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)setNeedsPreferredStatusBarUpdateAfterCommitAnimated:(BOOL)arg0 ;
-(void)sidebarDimmingViewDismiss:(id)arg0 ;
-(void)stopRefreshing;
-(void)tabBarDropExpansionView:(id)arg0 didBeginTrackingDropSession:(id)arg1 ;
-(void)tabBarDropExpansionView:(id)arg0 didEndTrackingDropSession:(id)arg1 ;
-(void)tabCollectionViewDidCancelDismissal:(id)arg0 ;
-(void)tabCollectionViewDidDismiss:(id)arg0 ;
-(void)tabCollectionViewWillDismiss:(id)arg0 ;
-(void)tabCollectionViewWillPresent:(id)arg0 ;
-(void)tabDocumentViewDidUpdateDistanceScrolled:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateAccessibilityIdentifier;
-(void)updateCapsuleLayoutStyle;
-(void)updateOrderedSubviewsForOrderedContainerView:(id)arg0 ;
-(void)updateSuppressesStandaloneTabBar;
-(void)updateTabHoverPreview;
-(void)updateTabViewPinchRecognizer;
-(void)updateThemeColorIfNeededAnimated:(BOOL)arg0 ;
-(void)updateUnifiedBarChromelessScrollDistance;
-(void)updateUnifiedBarVisibility;
-(void)updateUsesLockdownStatusBar;
-(void)updateUsesWebpageStatusBar;
-(void)updateViewForTabDocument:(id)arg0 ;
-(void)updateViewsAfterContentContainerViewBoundsChange;
-(void)updateWebViewSizeAttributes;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)willToggleTabBar;
-(void)willTransitionTabView;


@end


#endif