// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UISPLITVIEWCONTROLLERCLASSICIMPL_H
#define UISPLITVIEWCONTROLLERCLASSICIMPL_H

@class NSString, NSArray;
@protocol UIGestureRecognizerDelegate, UILayoutContainerViewDelegate, UISplitViewControllerImpl, UISplitViewControllerDelegate;

#import <Foundation/Foundation.h>

#import "UISplitViewController.h"
#import "UIBarButtonItem.h"
#import "UISplitViewControllerDisplayModeBarButtonItem.h"
#import "UIPopoverController.h"
#import "UIView.h"
#import "UIResponder.h"
#import "UISnapshotView.h"
#import "UITraitCollection.h"
#import "UIGestureRecognizer.h"
#import "UITapGestureRecognizer.h"
#import "UIViewController.h"
#import "UIFocusContainerGuide.h"

@interface UISplitViewControllerClassicImpl : NSObject <UIGestureRecognizerDelegate, UILayoutContainerViewDelegate, UISplitViewControllerImpl>

 {
    UISplitViewController *_svc;
    UIBarButtonItem *_barButtonItem;
    UISplitViewControllerDisplayModeBarButtonItem *_displayModeButtonItem;
    NSString *_buttonTitle;
    UIPopoverController *_hiddenPopoverController;
    UIView *_rotationSnapshotView;
    UIResponder *_postTransitionResponder;
    UISnapshotView *_collapsingMasterSnapshotView;
    UISnapshotView *_collapsingDetailSnapshotView;
    float _gutterWidth;
    NSInteger _rotatingFromOrientation;
    NSInteger _lastPresentedOrientation;
    CGRect _rotatingFromMasterViewFrame;
    CGRect _rotatingToMasterViewFrame;
    UIView *_underBarSeparatorView;
    UITraitCollection *_traitCollectionWhenRemovedFromWindow;
    UIGestureRecognizer *_popoverPresentationGestureRecognizer;
    UITapGestureRecognizer *_menuGestureRecognizer;
    NSInteger _preferredDisplayMode;
    NSInteger _effectiveTargetDisplayMode;
    NSInteger _pendingDisplayModeChangeCount;
    NSInteger _rotatingMasterChange;
    BOOL _useChangingBoundsLayout;
    NSInteger _transitioningMasterChange;
    UITraitCollection *_transitioningToTraitCollection;
    NSInteger _transitioningToInternalMode;
    NSInteger _lastNotifiedDisplayMode;
    CGRect _viewBoundsBeforeCollapse;
    NSInteger _suspendedState;
    NSInteger _primaryEdge;
    ? _splitViewControllerFlags;
}


@property (copy, nonatomic, setter=_setClearPreventRotationHook:) id *_clearPreventRotationHook; // ivar: __clearPreventRotationHook
@property (copy, nonatomic, setter=_setDisplayModeButtonItemTitle:) NSString *_displayModeButtonItemTitle; // ivar: _displayModeButtonItemTitle
@property (retain, nonatomic, setter=_setPreservedDetailController:) UIViewController *_preservedDetailController; // ivar: __preservedDetailController
@property (readonly, nonatomic, getter=isCollapsed) BOOL collapsed;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<UISplitViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=_detailFocusContainerGuide) UIFocusContainerGuide *detailFocusContainerGuide; // ivar: _detailFocusContainerGuide
@property (nonatomic) float gutterWidth;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hidesMasterViewInPortrait;
@property (readonly, nonatomic) BOOL inCollapsingToProposedTopColumnCallback;
@property (readonly, nonatomic, getter=_lastFocusedChildViewControllerIndex) NSUInteger lastFocusedChildViewControllerIndex; // ivar: _lastFocusedChildViewControllerIndex
@property (readonly, nonatomic) BOOL lockedForDelegateCallback;
@property (readonly, nonatomic, getter=_masterFocusContainerGuide) UIFocusContainerGuide *masterFocusContainerGuide; // ivar: _masterFocusContainerGuide
@property (nonatomic) CGFloat maximumPrimaryColumnWidth; // ivar: _maximumPrimaryColumnWidth
@property (nonatomic) CGFloat minimumPrimaryColumnWidth; // ivar: _minimumPrimaryColumnWidth
@property (nonatomic) NSInteger preferredDisplayMode;
@property (nonatomic) CGFloat preferredPrimaryColumnWidthFraction; // ivar: _preferredPrimaryColumnWidthFraction
@property (nonatomic) BOOL prefersOverlayInRegularWidthPhone;
@property (nonatomic) BOOL presentsWithGesture; // ivar: _presentsWithGesture
@property (nonatomic) NSInteger primaryBackgroundStyle;
@property (nonatomic) NSInteger primaryEdge;
@property (readonly, nonatomic) NSInteger style;
@property (readonly) Class superclass;
@property (nonatomic) BOOL usesDeviceOverlayPreferences;
@property (nonatomic, getter=_usesExtraWidePrimaryColumn, setter=_setUsesExtraWidePrimaryColumn:) BOOL usesExtraWidePrimaryColumn;
@property (copy, nonatomic) NSArray *viewControllers;


+(CGFloat)_defaultGutterWidthInView:(id)arg0 ;
-(BOOL)_canDisplayHostedMaster;
-(BOOL)_defersUpdateDelegateHiddenMasterAspectRatios;
-(BOOL)_disableAutomaticKeyboardBehavior;
-(BOOL)_effectivePresentsWithGesture;
-(BOOL)_handlesCounterRotationForPresentation;
-(BOOL)_hasMasterViewController;
-(BOOL)_hasPreferredInterfaceOrientationForPresentation;
-(BOOL)_hidesMasterViewInCurrentOrientation;
-(BOOL)_hidesMasterViewInOrientation:(NSInteger)arg0 medusaState:(NSInteger)arg1 ;
-(BOOL)_iPhoneShouldUseOverlayIfRegularWidth;
-(BOOL)_iPhoneShouldUseOverlayInCurrentEnvironment;
-(BOOL)_isAnimating;
-(BOOL)_isBasicallyHorizontallyCompact;
-(BOOL)_isHidesMasterInLandscapeInvalid;
-(BOOL)_isHidesMasterInPortraitInvalid;
-(BOOL)_isMasterPopoverVisible;
-(BOOL)_isMasterViewShown;
-(BOOL)_isRotating;
-(BOOL)_isTransitioningFromCollapsedToSeparated;
-(BOOL)_layoutPrimaryOnRight;
-(BOOL)_optsOutOfPopoverControllerHierarchyCheck;
-(BOOL)_shouldPersistViewWhenCoding;
-(BOOL)_shouldPreventAutorotation;
-(BOOL)_shouldUseRelativeInsets;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)hidesMasterViewInLandscape;
-(BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg0 ;
-(BOOL)shouldUpdateFocusInContext:(id)arg0 ;
-(CGFloat)_contentMarginForChildViewController:(id)arg0 ;
-(CGFloat)_defaultMaximumPrimaryColumnWidthForSize:(struct CGSize )arg0 ;
-(CGFloat)_masterPresentationAnimationDuration;
-(CGFloat)_primaryColumnWidthForSize:(struct CGSize )arg0 ;
-(CGFloat)_primaryColumnWidthForSize:(struct CGSize )arg0 isCompact:(BOOL)arg1 ;
-(CGFloat)_primaryDividerPosition;
-(CGFloat)_supplementaryDividerPosition;
-(CGFloat)primaryColumnWidth;
-(NSInteger)_currentInterfaceIdiom;
-(NSInteger)_defaultTargetDisplayMode;
-(NSInteger)_effectivePrimaryHidingState;
-(NSInteger)_effectiveTargetDisplayMode;
-(NSInteger)_internalModeForTraitCollection:(id)arg0 orientation:(NSInteger)arg1 viewSize:(struct CGSize )arg2 medusaState:(NSInteger)arg3 ;
-(NSInteger)_medusaState;
-(NSInteger)_medusaStateForOrientation:(NSInteger)arg0 viewWidth:(CGFloat)arg1 ;
-(NSInteger)_prepareToTransitionToViewSize:(struct CGSize )arg0 fromOrientation:(NSInteger)arg1 toOrientation:(NSInteger)arg2 duration:(CGFloat)arg3 ;
-(NSInteger)_primaryHidingState;
-(NSInteger)_primaryHidingStateForCurrentOrientation;
-(NSInteger)displayMode;
-(NSInteger)preferredCenterStatusBarStyle;
-(NSInteger)preferredInterfaceOrientationForPresentation;
-(NSInteger)preferredLeadingStatusBarStyle;
-(NSInteger)preferredTrailingStatusBarStyle;
-(NSUInteger)_targetEdgeForPopover;
-(NSUInteger)supportedInterfaceOrientations;
-(id)_additionalViewControllersToCheckForUserActivity;
-(id)_allContainedViewControllers;
-(id)_childContainingSender:(id)arg0 ;
-(id)_childViewControllersToSendViewWillTransitionToSize;
-(id)_deepestActionResponder;
-(id)_deepestUnambiguousResponder;
-(id)_defaultDisplayModes;
-(id)_multitaskingDragExclusionRects;
-(id)_nextVisibleViewControllerForResponderAfterChildViewController:(id)arg0 ;
-(id)_primaryContentResponder;
-(id)_primaryDimmingView;
-(id)_primaryViewControllerForCollapsing;
-(id)_primaryViewControllerForExpanding;
-(id)_secondaryViewControllerForCollapsing;
-(id)_separateSecondaryViewControllerFromPrimaryViewController:(id)arg0 ;
-(id)_traitCollectionForChildEnvironment:(id)arg0 ;
-(id)childViewControllerForStatusBarStyle;
-(id)detailViewController;
-(id)displayModeButtonItem;
-(id)initWithSplitViewController:(id)arg0 ;
-(id)masterViewController;
-(id)preferredFocusEnvironments;
-(id)preferredFocusedView;
-(struct CGRect )_detailViewFrame;
-(struct CGRect )_detailViewFrame:(struct CGRect )arg0 ;
-(struct CGRect )_frameForChildContentContainer:(id)arg0 ;
-(struct CGRect )_masterViewFrame;
-(struct CGRect )_masterViewFrame:(struct CGRect )arg0 ;
-(struct CGSize )_contentSizeForChildViewController:(id)arg0 inPopoverController:(id)arg1 ;
-(struct CGSize )_screenSizeInMainScene:(BOOL)arg0 ;
-(struct CGSize )sizeForChildContentContainer:(id)arg0 withParentContainerSize:(struct CGSize )arg1 ;
-(struct UIEdgeInsets )_edgeInsetsForChildViewController:(id)arg0 insetsAreAbsolute:(*BOOL)arg1 ;
-(void)__viewWillLayoutSubviews;
-(void)_addOrRemovePopoverPresentationGestureRecognizer;
-(void)_animateTransitionFromTraitCollection:(id)arg0 withTransitionCoordinator:(id)arg1 ;
-(void)_animateTransitionToOrientation:(NSInteger)arg0 duration:(CGFloat)arg1 masterChange:(NSInteger)arg2 ;
-(void)_cacheEffectiveTargetDisplayMode;
-(void)_changeToDisplayMode:(NSInteger)arg0 forCurrentOrientationOnly:(BOOL)arg1 ;
-(void)_collapseMaster:(id)arg0 andDetail:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)_collapseMasterAndDetailWithTransitionCoordinator:(id)arg0 ;
-(void)_collapseSecondaryViewController:(id)arg0 ontoPrimaryViewController:(id)arg1 ;
-(void)_commonInit;
-(void)_completeTransitionFromOrientation:(NSInteger)arg0 masterChange:(NSInteger)arg1 ;
-(void)_descendantWillPresentViewController:(id)arg0 modalSourceViewController:(id)arg1 presentationController:(id)arg2 animated:(BOOL)arg3 ;
-(void)_didChangeToFirstResponder:(id)arg0 ;
-(void)_didEndSnapshotSession;
-(void)_didTransitionTraitCollection;
-(void)_didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)_dismissMasterViewController:(BOOL)arg0 ;
-(void)_displayModeBarButtonItemWasUsedForFirstTime:(id)arg0 ;
-(void)_displayModeDidChange;
-(void)_displayModeWillChangeTo:(NSInteger)arg0 ;
-(void)_getRotationContentSettings:(struct ? *)arg0 ;
-(void)_initWithCoder:(id)arg0 ;
-(void)_invalidateHidesMasterViewForAspectRatio:(NSInteger)arg0 ;
-(void)_layoutContainerViewDidMoveToWindow:(id)arg0 ;
-(void)_layoutContainerViewWillMoveToWindow:(id)arg0 ;
-(void)_loadNewSubviews:(id)arg0 ;
-(void)_marginInfoForChild:(id)arg0 leftMargin:(*CGFloat)arg1 rightMargin:(*CGFloat)arg2 ;
-(void)_popoverController:(id)arg0 didChangeFromVisible:(BOOL)arg1 ;
-(void)_popoverController:(id)arg0 willChangeToVisible:(BOOL)arg1 ;
-(void)_prepareForCompactLayout;
-(void)_presentMasterViewController:(BOOL)arg0 ;
-(void)_removeCollapsingSnapshotViews;
-(void)_separateMasterAndDetailWithTransitionCoordinator:(id)arg0 ;
-(void)_setDetailViewFrame:(struct CGRect )arg0 ;
-(void)_setMasterOverrideTraitCollectionActive:(BOOL)arg0 ;
-(void)_setPrimaryHidingState:(NSInteger)arg0 ;
-(void)_setPrimaryHidingStateForCurrentOrientation:(NSInteger)arg0 ;
-(void)_setUpFocusContainerGuides;
-(void)_setupHiddenPopoverControllerWithViewController:(id)arg0 ;
-(void)_setupUnderBarSeparatorView;
-(void)_showMasterViewAnimated:(BOOL)arg0 ;
-(void)_triggerDisplayModeAction:(id)arg0 ;
-(void)_updateChildContentMargins;
-(void)_updateDelegateHiddenMasterAspectRatios;
-(void)_updateDisplayModeButtonItem;
-(void)_updateLayoutForStatusBarAndInterfaceOrientation;
-(void)_updateMasterViewControllerFrame;
-(void)_updateTargetDisplayMode;
-(void)_viewControllerHiding:(id)arg0 ;
-(void)_willBeginSnapshotSession;
-(void)_willShowCollapsedDetailViewController:(id)arg0 inTargetController:(id)arg1 ;
-(void)dealloc;
-(void)decodeRestorableStateWithCoder:(id)arg0 ;
-(void)didRotateFromInterfaceOrientation:(NSInteger)arg0 ;
-(void)encodeRestorableStateWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)loadView;
-(void)popoverWillAppear:(id)arg0 ;
-(void)showDetailViewController:(id)arg0 sender:(id)arg1 ;
-(void)showViewController:(id)arg0 sender:(id)arg1 ;
-(void)snapshotAllViews;
-(void)snapshotForRotationFromInterfaceOrientation:(NSInteger)arg0 toInterfaceOrientation:(NSInteger)arg1 masterChange:(NSInteger)arg2 ;
-(void)snapshotMasterView;
-(void)toggleMasterVisible:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)unloadViewForced:(BOOL)arg0 ;
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