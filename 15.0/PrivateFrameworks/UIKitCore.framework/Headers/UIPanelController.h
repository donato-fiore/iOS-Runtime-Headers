// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIPANELCONTROLLER_H
#define UIPANELCONTROLLER_H

@class NSMutableArray, NSArray, NSString;
@protocol UILayoutContainerViewDelegate, UIPanelControllerDelegate;

#import <Foundation/Foundation.h>

#import "UIView.h"
#import "_UIPanelInternalState.h"
#import "UISlidingBarState.h"
#import "_UIVerticalEdgeShadowView.h"
#import "UIDimmingView.h"
#import "UIViewController.h"
#import "UISlidingBarConfiguration.h"
#import "_UIFloatableBarButtonItem.h"
#import "UISlidingBarStateRequest.h"
#import "UINavigationBar.h"
#import "UILayoutContainerView.h"

@interface UIPanelController : NSObject <UILayoutContainerViewDelegate>

 {
    ? _panelControllerFlags;
    NSMutableArray *_wrapperBlocksForNextUpdate;
}


@property (nonatomic, setter=_setChangingViewControllerParentage:) BOOL _changingViewControllerParentage; // ivar: __changingViewControllerParentage
@property (retain, nonatomic, setter=_setContentView:) UIView *_contentView; // ivar: __contentView
@property (retain, nonatomic, setter=_setDestinationTransitionView:) UIView *_destTransitionView; // ivar: __destTransitionView
@property (nonatomic, setter=_setHasUpdatedForTraitCollection:) BOOL _hasUpdatedForTraitCollection; // ivar: __hasUpdatedForTraitCollection
@property (retain, nonatomic, setter=_setInternalState:) _UIPanelInternalState *_internalState; // ivar: __internalState
@property (copy, nonatomic, setter=_setLastComputedPublicState:) UISlidingBarState *_lastComputedPublicState; // ivar: __lastComputedPublicState
@property (copy, nonatomic, setter=_setLastPossiblePublicStates:) NSArray *_lastPossiblePublicStates; // ivar: __lastPossiblePublicStates
@property (nonatomic, setter=_setLastViewSize:) CGSize _lastViewSize; // ivar: __lastViewSize
@property (retain, nonatomic, setter=_setLeadingBorderView:) UIView *_leadingBorderView; // ivar: __leadingBorderView
@property (nonatomic, setter=_setNeedsFirstTimeUpdateForTraitCollection:) BOOL _needsFirstTimeUpdateForTraitCollection; // ivar: __needsFirstTimeUpdateForTraitCollection
@property (retain, nonatomic, setter=_setOverlayEdgeShadowView:) _UIVerticalEdgeShadowView *_overlayEdgeShadowView; // ivar: __overlayEdgeShadowView
@property (retain, nonatomic, setter=_setPreviousInternalState:) _UIPanelInternalState *_previousInternalState; // ivar: __previousInternalState
@property (retain, nonatomic, setter=_setPrimaryParallaxDimmingView:) UIDimmingView *_primaryParallaxDimmingView; // ivar: __primaryParallaxDimmingView
@property (retain, nonatomic, setter=_setSourceTransitionView:) UIView *_sourceTransitionView; // ivar: __sourceTransitionView
@property (retain, nonatomic, setter=_setSupplementaryBorderView:) UIView *_supplementaryBorderView; // ivar: __supplementaryBorderView
@property (retain, nonatomic, setter=_setSupplementaryParallaxShadowView:) _UIVerticalEdgeShadowView *_supplementaryParallaxShadowView; // ivar: __supplementaryParallaxShadowView
@property (retain, nonatomic, setter=_setTrailingBorderView:) UIView *_trailingBorderView; // ivar: __trailingBorderView
@property (nonatomic) BOOL animationRequestShouldCoordinate; // ivar: _animationRequestShouldCoordinate
@property (nonatomic, getter=areClippingViewsUnnecessary) BOOL clippingViewsUnnecessary;
@property (readonly, nonatomic, getter=isCollapsed) BOOL collapsed;
@property (readonly, nonatomic) NSInteger collapsedState;
@property (retain, nonatomic) UIViewController *collapsedViewController;
@property (copy, nonatomic) UISlidingBarConfiguration *configuration;
@property (readonly, nonatomic) UISlidingBarState *currentState;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<UIPanelControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIView *dimmingView; // ivar: _dimmingView
@property (retain, nonatomic) _UIFloatableBarButtonItem *floatingBarButtonItem; // ivar: _floatingBarButtonItem
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) UISlidingBarStateRequest *interactiveStateRequest;
@property (retain, nonatomic) UIView *leadingBarContentClippingView; // ivar: _leadingBarContentClippingView
@property (nonatomic) BOOL leadingTrailingWrapsNavigationController;
@property (retain, nonatomic) UIViewController *leadingViewController;
@property (retain, nonatomic) UIViewController *mainViewController;
@property (retain, nonatomic) UINavigationBar *navigationBarForContentLayoutGuideAnimation; // ivar: _navigationBarForContentLayoutGuideAnimation
@property (weak, nonatomic) UIViewController *owningViewController; // ivar: _owningViewController
@property (readonly, nonatomic) NSArray *possibleStates;
@property (nonatomic, getter=isPresentationGestureActive) BOOL presentationGestureActive;
@property (retain, nonatomic) UIViewController *preservedDetailController;
@property (nonatomic, getter=isRunExpandScheduled, setter=setRunExpandScheduled:) BOOL runExpandScheduled;
@property (copy, nonatomic) UISlidingBarStateRequest *stateRequest;
@property (nonatomic) NSInteger style; // ivar: _style
@property (readonly) Class superclass;
@property (retain, nonatomic) UIView *supplementaryBarContentClippingView; // ivar: _supplementaryBarContentClippingView
@property (retain, nonatomic) UIViewController *supplementaryViewController;
@property (readonly, nonatomic) BOOL supportsColumnStyle;
@property (retain, nonatomic) UIView *trailingBarContentClippingView; // ivar: _trailingBarContentClippingView
@property (retain, nonatomic) UIViewController *trailingViewController;
@property (readonly, nonatomic) NSArray *uncachedPossibleStates;
@property (retain, nonatomic) UILayoutContainerView *view; // ivar: _view


+(id)_withDisabledAppearanceTransitions:(BOOL)arg0 forVisibleDescendantsOf:(id)arg1 perform:(id)arg2 ;
-(BOOL)_willCollapseWithNewTraitCollection:(id)arg0 oldTraitCollection:(id)arg1 ;
-(BOOL)_willExpandWithNewTraitCollection:(id)arg0 oldTraitCollection:(id)arg1 ;
-(BOOL)isAnimating;
-(BOOL)isLeadingViewControllerVisibleAfterAnimation;
-(BOOL)isSupplementaryViewControllerVisibleAfterAnimation;
-(BOOL)isTrailingViewControllerVisibleAfterAnimation;
-(CGFloat)interpolatedMarginForPrimaryNavigationBar:(id)arg0 supplementaryOrSecondaryNavbar:(id)arg1 getInterpolatedAlpha:(*CGFloat)arg2 ;
-(id)_createBorderView;
-(id)_createOverlayEdgeShadowViewForEdge:(NSUInteger)arg0 ;
-(id)allViewControllers;
-(id)gatherMultitaskingDragExclusionRectsFromVisibleColumns;
-(id)initWithOwningViewController:(id)arg0 ;
-(id)transitionCoordinator;
-(struct CGSize )_expectedSecondaryColumnSizeAfterAnimatingToState:(id)arg0 getLeadingColumnSize:(struct CGSize *)arg1 trailingColumnSize:(struct CGSize *)arg2 supplementaryColumnSize:(struct CGSize *)arg3 ;
-(void)_addIdentifiedChildViewController:(id)arg0 ;
-(void)_adjustForKeyboardInfo:(id)arg0 ;
-(void)_adjustNonOverlayLeadingScrollViewsForKeyboardInfo:(id)arg0 ;
-(void)_animateFromRequest:(id)arg0 toRequest:(id)arg1 withAffectedSides:(NSInteger)arg2 forceOverlay:(BOOL)arg3 velocity:(CGFloat)arg4 ;
-(void)_collapseWithTransitionCoordinator:(id)arg0 ;
-(void)_expandWithTransitionCoordinator:(id)arg0 ;
-(void)_layoutContainerViewDidMoveToWindow:(id)arg0 ;
-(void)_layoutContainerViewWillMoveToWindow:(id)arg0 ;
-(void)_observeKeyboardNotificationsOnScreen:(id)arg0 ;
-(void)_performDeferredUpdate;
-(void)_performSingleDeferredUpdatePass;
-(void)_performWrappedUpdate:(id)arg0 ;
-(void)_removeIdentifiedChildViewController:(id)arg0 ;
-(void)_setBorderViewsObserveViewBackgroundColor:(BOOL)arg0 ;
-(void)_setNeedsDeferredUpdate;
-(void)_setNeedsLayoutAndPerformImmediately:(BOOL)arg0 ;
-(void)_stopAnimationsBeginningInteraction:(BOOL)arg0 ;
-(void)_stopObservingKeyboardNotifications;
-(void)_unspecifiedUpdateToNewPublicState:(id)arg0 withSize:(struct CGSize )arg1 ;
-(void)_updateBorderViewsBackgroundColor:(id)arg0 ;
-(void)_updateForTraitCollection:(id)arg0 oldTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)_updateToNewPublicState:(id)arg0 withSize:(struct CGSize )arg1 ;
-(void)_withDisabledAppearanceTransitionsPerform:(id)arg0 ;
-(void)addWrapperBlockForNextUpdate:(id)arg0 ;
-(void)animateToRequest:(id)arg0 ;
-(void)animateToRequest:(id)arg0 forceOverlay:(BOOL)arg1 ;
-(void)animateToRequest:(id)arg0 forceOverlay:(BOOL)arg1 withVelocity:(CGFloat)arg2 ;
-(void)dealloc;
-(void)loadView;
-(void)navigationControllerDidChangeNavigationBarHidden:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg0 ;
-(void)removeChildViewController:(id)arg0 ;
-(void)setNeedsUpdate;
-(void)stopAnimations;
-(void)traitCollectionDidChange:(id)arg0 toNewTraits:(id)arg1 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 superBlock:(id)arg2 ;
-(void)willTransitionToTraitCollection:(id)arg0 withTransitionCoordinator:(id)arg1 superBlock:(id)arg2 ;


@end


#endif