// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UISPLITVIEWCONTROLLER_H
#define UISPLITVIEWCONTROLLER_H

@class NSString, NSArray;
@protocol UIViewControllerStatusBarPartStyleProvider, UISplitViewControllerImpl, UISplitViewControllerDelegate;


#import "UIViewController.h"
#import "UIScreenEdgePanGestureRecognizer.h"
#import "UISlidingBarConfiguration.h"
#import "UISlidingBarState.h"
#import "UIBarButtonItem.h"
#import "UISlidingBarStateRequest.h"

@interface UISplitViewController : UIViewController <UIViewControllerStatusBarPartStyleProvider>

 {
    id<UISplitViewControllerImpl> *_impl;
}


@property (nonatomic, getter=_allowsDimmedSecondaryAsDeepestUnambiguousResponder, setter=_setAllowsDimmedSecondaryAsDeepestUnambiguousResponder:) BOOL _allowsDimmedSecondaryAsDeepestUnambiguousResponder;
@property (copy, nonatomic, setter=_setDisplayModeButtonItemTitle:) NSString *_displayModeButtonItemTitle;
@property (readonly, nonatomic) UIScreenEdgePanGestureRecognizer *_fluidOpenSidebarPresentationGestureRecognizer;
@property (nonatomic, setter=_setForceDisplayModeBarButtonHidden:) BOOL _forceDisplayModeBarButtonHidden;
@property (nonatomic, getter=_isLockedForDelegateCallback, setter=_setLockedForDelegateCallback:) BOOL _lockedForDelegateCallback; // ivar: __lockedForDelegateCallback
@property (nonatomic, getter=_preferredPrimaryColumnWidth, setter=_setPreferredPrimaryColumnWidth:) CGFloat _preferredPrimaryColumnWidth;
@property (nonatomic, setter=_setPreferredSplitBehavior:) NSInteger _preferredSplitBehavior;
@property (nonatomic, getter=_preferredSupplementaryColumnWidth, setter=_setPreferredSupplementaryColumnWidth:) CGFloat _preferredSupplementaryColumnWidth;
@property (readonly, nonatomic) NSInteger _splitBehavior;
@property (nonatomic, setter=_setVisibleToggleButtonRequiresPresentsWithGesture:) BOOL _visibleToggleButtonRequiresPresentsWithGesture;
@property (readonly, nonatomic, getter=isCollapsed) BOOL collapsed;
@property (readonly, nonatomic) NSInteger composition;
@property (copy, nonatomic) UISlidingBarConfiguration *configuration;
@property (readonly, nonatomic) UISlidingBarState *currentState;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<UISplitViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger displayMode;
@property (readonly, nonatomic) UIBarButtonItem *displayModeButtonItem;
@property (nonatomic) NSInteger displayModeButtonVisibility;
@property (nonatomic) float gutterWidth;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hidesMasterViewInPortrait;
@property (nonatomic) CGFloat maximumPrimaryColumnWidth;
@property (nonatomic) CGFloat maximumSupplementalColumnWidth;
@property (nonatomic) CGFloat maximumSupplementaryColumnWidth;
@property (nonatomic) CGFloat minimumPrimaryColumnWidth;
@property (nonatomic) CGFloat minimumSupplementalColumnWidth;
@property (nonatomic) CGFloat minimumSupplementaryColumnWidth;
@property (readonly, nonatomic) NSArray *possibleStates;
@property (readonly, nonatomic) NSInteger preferredCenterStatusBarStyle;
@property (nonatomic) NSInteger preferredDisplayMode;
@property (readonly, nonatomic) NSInteger preferredLeadingStatusBarStyle;
@property (nonatomic) CGFloat preferredPrimaryColumnWidth;
@property (nonatomic) CGFloat preferredPrimaryColumnWidthFraction;
@property (nonatomic) NSInteger preferredSplitBehavior;
@property (nonatomic) CGFloat preferredSupplementalColumnWidthFraction;
@property (nonatomic) CGFloat preferredSupplementaryColumnWidth;
@property (nonatomic) CGFloat preferredSupplementaryColumnWidthFraction;
@property (readonly, nonatomic) NSInteger preferredTrailingStatusBarStyle;
@property (nonatomic, getter=_prefersOverlayInRegularWidthPhone, setter=_setPrefersOverlayInRegularWidthPhone:) BOOL prefersOverlayInRegularWidthPhone;
@property (nonatomic) BOOL prefersSecondaryOnlyShortcutButtonVisible;
@property (nonatomic) BOOL presentsWithGesture;
@property (nonatomic) NSInteger primaryBackgroundStyle;
@property (readonly, nonatomic) CGFloat primaryColumnWidth;
@property (nonatomic) NSInteger primaryEdge;
@property (nonatomic) BOOL showsFullScreenShortcutButtonIfApplicable;
@property (nonatomic) BOOL showsSecondaryOnlyButton;
@property (readonly, nonatomic) NSInteger splitBehavior;
@property (copy, nonatomic) UISlidingBarStateRequest *stateRequest;
@property (readonly, nonatomic) NSInteger style;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat supplementalColumnWidth;
@property (readonly, nonatomic) CGFloat supplementaryColumnWidth;
@property (nonatomic, getter=_usesDeviceOverlayPreferences, setter=_setUsesDeviceOverlayPreferences:) BOOL usesDeviceOverlayPreferences;
@property (nonatomic, getter=_usesExtraWidePrimaryColumn, setter=_setUsesExtraWidePrimaryColumn:) BOOL usesExtraWidePrimaryColumn;
@property (copy, nonatomic) NSArray *viewControllers;


+(BOOL)_automaticDisplayModeOnPhoneUsesOverlayInLandscapeDefaultValue;
+(BOOL)_devicePrefersOverlayInRegularWidth;
+(BOOL)doesOverridePreferredInterfaceOrientationForPresentation;
+(NSInteger)_forcedImpl;
+(void)_setForcedImpl:(NSInteger)arg0 ;
-(BOOL)_disableAutomaticKeyboardBehavior;
-(BOOL)_handlesCounterRotationForPresentation;
-(BOOL)_hasPreferredInterfaceOrientationForPresentation;
-(BOOL)_iPhoneShouldUseOverlayInCurrentEnvironment;
-(BOOL)_isAnimating;
-(BOOL)_isRotating;
-(BOOL)_isViewControllerForObservableScrollViewAmbiguous;
-(BOOL)_layoutPrimaryOnRight;
-(BOOL)_navigationControllerShouldNotAdjustTransitioningSizeForChildContainer:(id)arg0 ;
-(BOOL)_optsOutOfPopoverControllerHierarchyCheck;
-(BOOL)_shouldPersistViewWhenCoding;
-(BOOL)_shouldUseFluidSidebarGestures;
-(BOOL)_shouldUseNewStatusBarBehavior;
-(BOOL)_shouldUseSeparateStatusBarStyles;
-(BOOL)_super_disableAutomaticKeyboardBehavior;
-(BOOL)_super_shouldUpdateFocusInContext:(id)arg0 ;
-(BOOL)_usesPanelImpl;
-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg0 ;
-(BOOL)shouldUpdateFocusInContext:(id)arg0 ;
-(CGFloat)_contentMarginForChildViewController:(id)arg0 ;
-(CGFloat)_primaryDividerPosition;
-(CGFloat)_supplementaryDividerPosition;
-(NSInteger)_columnForViewController:(id)arg0 ;
-(NSInteger)_preferredModalPresentationStyle;
-(NSInteger)_subclassPreferredFocusedViewPrioritizationType;
-(NSInteger)_super_preferredInterfaceOrientationForPresentation;
-(NSInteger)preferredInterfaceOrientationForPresentation;
-(NSUInteger)_super_supportedInterfaceOrientations;
-(NSUInteger)supportedInterfaceOrientations;
-(id)_additionalViewControllersToCheckForUserActivity;
-(id)_allContainedViewControllers;
-(id)_childViewControllersToSendViewWillTransitionToSize;
-(id)_deepestActionResponder;
-(id)_effectiveActivityItemsConfiguration;
-(id)_multitaskingDragExclusionRects;
-(id)_navigationController:(id)arg0 navigationBarAdditionalActionsForBackButtonMenu:(id)arg1 ;
-(id)_nextResponderUsingTargetActionStrategyFromChildViewController:(id)arg0 didTraverseToParentViewController:(*BOOL)arg1 ;
-(id)_panelImpl;
-(id)_presentationControllerForPresentedController:(id)arg0 presentingController:(id)arg1 sourceController:(id)arg2 ;
-(id)_primaryContentResponder;
-(id)_primaryDimmingView;
-(id)_super_childViewControllerForStatusBarStyle;
-(id)_super_childViewControllersToSendViewWillTransitionToSize;
-(id)_super_deepestActionResponder;
-(id)_super_multitaskingDragExclusionRects;
-(id)_super_preferredFocusEnvironments;
-(id)_super_preferredFocusedView;
-(id)_super_traitCollectionForChildEnvironment:(id)arg0 ;
-(id)_traitCollectionForChildEnvironment:(id)arg0 ;
-(id)_viewControllerForColumn:(NSInteger)arg0 ;
-(id)_viewControllerForObservableScrollView;
-(id)childViewControllerForStatusBarStyle;
-(id)detailViewController;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithComposition:(NSInteger)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithStyle:(NSInteger)arg0 ;
-(id)masterViewController;
-(id)preferredFocusEnvironments;
-(id)preferredFocusedView;
-(id)transitionCoordinator;
-(id)viewControllerForColumn:(NSInteger)arg0 ;
-(struct CGRect )_frameForChildContentContainer:(id)arg0 ;
-(struct CGSize )_contentSizeForChildViewController:(id)arg0 inPopoverController:(id)arg1 ;
-(struct CGSize )_super_sizeForChildContentContainer:(id)arg0 withParentContainerSize:(struct CGSize )arg1 ;
-(struct CGSize )sizeForChildContentContainer:(id)arg0 withParentContainerSize:(struct CGSize )arg1 ;
-(struct UIEdgeInsets )_edgeInsetsForChildViewController:(id)arg0 insetsAreAbsolute:(*BOOL)arg1 ;
-(struct UIEdgeInsets )_tvOSColumnStyleExtraInsetsForChildViewController:(id)arg0 ;
-(void)_allowingMutationsInDelegateCallback:(id)arg0 ;
-(void)_animateToRequest:(id)arg0 ;
-(void)_commonInit;
-(void)_descendantWillPresentViewController:(id)arg0 modalSourceViewController:(id)arg1 presentationController:(id)arg2 animated:(BOOL)arg3 ;
-(void)_didChangeToFirstResponder:(id)arg0 ;
-(void)_didEndSnapshotSession:(id)arg0 ;
-(void)_didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)_enumerateAncestorViewControllersUntilStop:(*BOOL)arg0 usingBlock:(id)arg1 ;
-(void)_getRotationContentSettings:(struct ? *)arg0 ;
-(void)_hideColumn:(NSInteger)arg0 ;
-(void)_marginInfoForChild:(id)arg0 leftMargin:(*CGFloat)arg1 rightMargin:(*CGFloat)arg2 ;
-(void)_navigationController:(id)arg0 navigationBar:(id)arg1 itemBackButtonUpdated:(id)arg2 ;
-(void)_navigationController:(id)arg0 navigationBar:(id)arg1 topItemUpdatedContentLayout:(id)arg2 ;
-(void)_navigationControllerDidChangeNavigationBarHidden:(id)arg0 ;
-(void)_navigationControllerDidUpdateStack:(id)arg0 ;
-(void)_popoverController:(id)arg0 didChangeFromVisible:(BOOL)arg1 ;
-(void)_popoverController:(id)arg0 willChangeToVisible:(BOOL)arg1 ;
-(void)_setViewController:(id)arg0 forColumn:(NSInteger)arg1 ;
-(void)_showColumn:(NSInteger)arg0 ;
-(void)_super_didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)_super_removeChildViewController:(id)arg0 ;
-(void)_super_viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)_super_willTransitionToTraitCollection:(id)arg0 withTransitionCoordinator:(id)arg1 ;
-(void)_tabBarControllerDidChangeSelection:(id)arg0 ;
-(void)_updateChildContentMargins;
-(void)_updateDisplayModeButtonItem;
-(void)_updateLayoutForStatusBarAndInterfaceOrientation;
-(void)_updateScrollEdgeBehaviorForDetailNavigationContoller;
-(void)_viewControllerChildViewControllersDidChange:(id)arg0 ;
-(void)_willBeginSnapshotSession:(id)arg0 ;
-(void)_willShowCollapsedDetailViewController:(id)arg0 inTargetController:(id)arg1 ;
-(void)addChildViewController:(id)arg0 ;
-(void)decodeRestorableStateWithCoder:(id)arg0 ;
-(void)didMoveToParentViewController:(id)arg0 ;
-(void)didRotateFromInterfaceOrientation:(NSInteger)arg0 ;
-(void)encodeRestorableStateWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)hideColumn:(NSInteger)arg0 ;
-(void)loadView;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg0 ;
-(void)removeChildViewController:(id)arg0 ;
-(void)removeFromParentViewController;
-(void)setAutomaticallyAdjustsScrollViewInsets:(BOOL)arg0 ;
-(void)setDefinesPresentationContext:(BOOL)arg0 ;
-(void)setEdgesForExtendedLayout:(NSUInteger)arg0 ;
-(void)setExtendedLayoutIncludesOpaqueBars:(BOOL)arg0 ;
-(void)setModalPresentationCapturesStatusBarAppearance:(BOOL)arg0 ;
-(void)setModalPresentationStyle:(NSInteger)arg0 ;
-(void)setModalTransitionStyle:(NSInteger)arg0 ;
-(void)setOverrideTraitCollection:(id)arg0 ;
-(void)setPreferredContentSize:(struct CGSize )arg0 ;
-(void)setProvidesPresentationContextTransitionStyle:(BOOL)arg0 ;
-(void)setRestoresFocusAfterTransition:(BOOL)arg0 ;
-(void)setView:(id)arg0 ;
-(void)setViewController:(id)arg0 forColumn:(NSInteger)arg1 ;
-(void)setViewRespectsSystemMinimumLayoutMargins:(BOOL)arg0 ;
-(void)showColumn:(NSInteger)arg0 ;
-(void)showDetailViewController:(id)arg0 sender:(id)arg1 ;
-(void)showViewController:(id)arg0 sender:(id)arg1 ;
-(void)toggleMasterVisible:(id)arg0 ;
-(void)toggleSidebar:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)unloadViewForced:(BOOL)arg0 ;
-(void)validateCommand:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)willAnimateRotationToInterfaceOrientation:(NSInteger)arg0 duration:(CGFloat)arg1 ;
-(void)willRotateToInterfaceOrientation:(NSInteger)arg0 duration:(CGFloat)arg1 ;
-(void)willTransitionToTraitCollection:(id)arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif