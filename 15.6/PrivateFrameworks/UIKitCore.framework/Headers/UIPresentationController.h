// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIPRESENTATIONCONTROLLER_H
#define UIPRESENTATIONCONTROLLER_H

@class NSUUID, NSString, NSArray;
@protocol _UIFallbackEnvironment, _UIGeometryChangeObserver, _UIAppearanceContainer, _UITraitEnvironmentInternal, _UIContentContainerInternal, UIGestureRecognizerDelegate, UIAppearanceContainer, UITraitEnvironment, UIContentContainer, UIFocusEnvironment, UIViewControllerTransitionCoordinatorContext, UIViewControllerTransitionCoordinator, UIViewControllerInteractiveTransitioning, UIViewControllerAnimatedTransitioning, UIAdaptivePresentationControllerDelegate, UIFocusItemContainer;

#import <Foundation/Foundation.h>

#import "UITraitCollection.h"
#import "UIView.h"
#import "UITapGestureRecognizer.h"
#import "_UIFormSheetPresentationController.h"
#import "_UIPresentationControllerVisualStyle.h"
#import "UIBarButtonItem.h"
#import "UIViewController.h"

@interface UIPresentationController : NSObject <_UIFallbackEnvironment, _UIGeometryChangeObserver, _UIAppearanceContainer, _UITraitEnvironmentInternal, _UIContentContainerInternal, UIGestureRecognizerDelegate, UIAppearanceContainer, UITraitEnvironment, UIContentContainer, UIFocusEnvironment>

 {
    BOOL _isDisconnectedRoot;
    BOOL _transitionAsDisconnectedRoot;
    BOOL _needsDidAppear;
    BOOL _needsDidDisappear;
    BOOL _monitorsSystemLayoutFittingSize;
    BOOL _didUpdateLayoutForStatusBarAndInterfaceOrientation;
    id *_target;
    SEL _didEndSelector;
    UITraitCollection *_lastNotifiedTraitCollection;
    UIView *_snapshotOverlayView;
    UITapGestureRecognizer *_backGestureRecognizer;
    NSUUID *_currentRunningAnimationsUUID;
}


@property (readonly, nonatomic) _UIFormSheetPresentationController *_adaptiveFormSheetPresentationController;
@property (readonly, nonatomic) BOOL _allowsFocusInPresentingViewController;
@property (copy, nonatomic) id *_computeToEndFrameForCurrentTransition; // ivar: __computeToEndFrameForCurrentTransition
@property (copy, nonatomic) id *_containerSuperviewForCurrentTransition; // ivar: __containerSuperviewForCurrentTransition
@property (weak, nonatomic, getter=_currentPresentationSuperview, setter=_setCurrentPresentationSuperview:) UIView *_currentPresentationSuperview; // ivar: __currentPresentationSuperview
@property (copy, nonatomic) id *_currentTransitionDidComplete; // ivar: __currentTransitionDidComplete
@property (copy, nonatomic) id *_customFromViewForCurrentTransition; // ivar: __customFromViewForCurrentTransition
@property (copy, nonatomic) id *_customToViewForCurrentTransition; // ivar: __customToViewForCurrentTransition
@property (nonatomic, setter=_setForcePresentationInPresenterScene:) BOOL _forcePresentationInPresenterScene; // ivar: _forcePresentationInPresenterScene
@property (copy, nonatomic) id *_fromViewForCurrentTransition; // ivar: __fromViewForCurrentTransition
@property (readonly, nonatomic) BOOL _ignoresLeftAndRightSafeAreaInsets;
@property (readonly, nonatomic) BOOL _isPresentedInFullScreen;
@property (readonly, nonatomic) BOOL _mayChildGrabPresentedViewControllerView;
@property (readonly, nonatomic) NSObject<_UITraitEnvironmentInternal> *_parentTraitEnvironment;
@property (nonatomic, getter=_preferredContentSize, setter=_setPreferredContentSize:) CGSize _preferredContentSize; // ivar: _preferredContentSize
@property (readonly, nonatomic) BOOL _presentedViewControllerProvidesContentScrollView;
@property (copy, nonatomic) id *_toViewForCurrentTransition; // ivar: __toViewForCurrentTransition
@property (copy, nonatomic) id *_transitionViewForCurrentTransition; // ivar: __transitionViewForCurrentTransition
@property (readonly, nonatomic) _UIPresentationControllerVisualStyle *_visualStyle; // ivar: _visualStyle
@property (readonly, nonatomic) NSInteger adaptivePresentationStyle;
@property (retain, nonatomic, getter=_adaptiveTransitionContext, setter=_setAdaptiveTransitionContext:) NSObject<UIViewControllerTransitionCoordinatorContext> *adaptiveTransitionContext; // ivar: _adaptiveTransitionContext
@property (retain, nonatomic, getter=_adaptiveTransitionCoordinator, setter=_setAdaptiveTransitionCoordinator:) NSObject<UIViewControllerTransitionCoordinator> *adaptiveTransitionCoordinator; // ivar: _adaptiveTransitionCoordinator
@property (retain, nonatomic) UIBarButtonItem *barButtonItem; // ivar: _barButtonItem
@property (nonatomic, getter=_changedPresentingViewControllerDuringAdaptation, setter=_setChangedPresentingViewControllerDuringAdaptation:) BOOL changedPresentingViewControllerDuringAdaptation; // ivar: _changedPresentingViewControllerDuringAdaptation
@property (nonatomic, getter=_containerIgnoresDirectTouchEvents, setter=_setContainerIgnoresDirectTouchEvents:) BOOL containerIgnoresDirectTouchEvents; // ivar: _containerIgnoresDirectTouchEvents
@property (retain, nonatomic, setter=_setContainerView:) UIView *containerView; // ivar: _containerView
@property (retain, nonatomic, getter=_currentInteractionController, setter=_setCurrentInteractionController:) NSObject<UIViewControllerInteractiveTransitioning> *currentInteractionController; // ivar: _currentInteractionController
@property (retain, nonatomic, getter=_currentTransitionController, setter=_setCurrentTransitionController:) NSObject<UIViewControllerAnimatedTransitioning> *currentTransitionController; // ivar: _currentTransitionController
@property (retain, nonatomic, getter=_customViewForTouchContinuation, setter=_setCustomViewForTouchContinuation:) UIView *customViewForTouchContinuation; // ivar: _customViewForTouchContinuation
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<UIAdaptivePresentationControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *focusGroupIdentifier;
@property (readonly, nonatomic) NSObject<UIFocusItemContainer> *focusItemContainer;
@property (readonly, nonatomic) CGRect frameOfPresentedViewInContainerView;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic, getter=_internalOverrideTraitCollection, setter=_setInternalOverrideTraitCollection:) UITraitCollection *internalOverrideTraitCollection; // ivar: _internalOverrideTraitCollection
@property (nonatomic) BOOL isCurrentStateCancelled; // ivar: _isCurrentStateCancelled
@property (copy, nonatomic) UITraitCollection *overrideTraitCollection; // ivar: _overrideTraitCollection
@property (readonly, weak, nonatomic) NSObject<UIFocusEnvironment> *parentFocusEnvironment;
@property (readonly, nonatomic) CGSize preferredContentSize;
@property (readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
@property (readonly, weak, nonatomic) UIView *preferredFocusedView;
@property (readonly, nonatomic) NSInteger presentationStyle;
@property (retain, nonatomic, getter=_presentationView, setter=_setPresentationView:) UIView *presentationView; // ivar: _presentationView
@property (readonly, nonatomic) UIView *presentedView;
@property (retain, nonatomic, setter=_setPresentedViewController:) UIViewController *presentedViewController; // ivar: _presentedViewController
@property (retain, nonatomic, setter=_setPresentingViewController:) UIViewController *presentingViewController; // ivar: _presentingViewController
@property (readonly, nonatomic, getter=_realSourceView) UIView *realSourceView; // ivar: _realSourceView
@property (nonatomic, getter=_shouldContinueTouchesOnTargetViewController, setter=_setShouldContinueTouchesOnTargetViewController:) BOOL shouldContinueTouchesOnTargetViewController; // ivar: _shouldContinueTouchesOnTargetViewController
@property (nonatomic, getter=_shouldDeactivateReachabilityWhenTransitioning, setter=_setShouldDeactivateReachabilityWhenTransitioning:) BOOL shouldDeactivateReachabilityWhenTransitioning; // ivar: _shouldDeactivateReachabilityWhenTransitioning
@property (readonly, nonatomic) BOOL shouldPresentInFullscreen;
@property (readonly, nonatomic) BOOL shouldRemovePresentersView;
@property (nonatomic) CGRect sourceRect; // ivar: _sourceRect
@property (retain, nonatomic) UIView *sourceView; // ivar: _sourceView
@property (nonatomic) NSInteger state; // ivar: _state
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UITraitCollection *traitCollection;


+(BOOL)_allowsDeferredTransitions;
+(BOOL)_preventsAppearanceProxyCustomization;
+(BOOL)_shouldDeferTransitions;
+(struct UIEdgeInsets )_statusBarOverlapAndMarginInfoForView:(id)arg0 inWindow:(id)arg1 ;
+(void)_scheduleTransition:(id)arg0 ;
+(void)initialize;
-(BOOL)_canPresentInSeparateScene;
-(BOOL)_fallbackShouldDismiss;
-(BOOL)_forcesPreferredAnimationControllers;
-(BOOL)_gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)_gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)_handlesKeyboardAvoidance;
-(BOOL)_inheritsPresentingViewControllerThemeLevel;
-(BOOL)_isAdapted;
-(BOOL)_isModal;
-(BOOL)_keyboardShouldAnimateAlongsideForInteractiveTransitions;
-(BOOL)_monitorsSystemLayoutFittingSize;
-(BOOL)_presentationPotentiallyUnderlapsStatusBar;
-(BOOL)_preserveResponderAcrossWindows;
-(BOOL)_shouldAdaptFromTraitCollection:(id)arg0 toTraitCollection:(id)arg1 ;
-(BOOL)_shouldConvertToScene;
-(BOOL)_shouldDisableInteractionDuringTransitions;
-(BOOL)_shouldDisablePresentersAppearanceCallbacks;
-(BOOL)_shouldDismiss;
-(BOOL)_shouldGrabPresentersView;
-(BOOL)_shouldKeepCurrentFirstResponder;
-(BOOL)_shouldMakePresentedViewControllerFirstResponder;
-(BOOL)_shouldOccludeDuringPresentation;
-(BOOL)_shouldPresentedViewControllerControlStatusBarAppearance;
-(BOOL)_shouldPreserveFirstResponder;
-(BOOL)_shouldRespectDefinesPresentationContext;
-(BOOL)_shouldRestoreFirstResponder;
-(BOOL)_shouldSavePresentedViewControllerForStateRestoration;
-(BOOL)_transitioningFrom;
-(BOOL)_transitioningTo;
-(BOOL)dismissed;
-(BOOL)dismissing;
-(BOOL)presented;
-(BOOL)presenting;
-(BOOL)shouldUpdateFocusInContext:(id)arg0 ;
-(Class)_appearanceGuideClass;
-(NSInteger)_defaultPresentationStyleForTraitCollection:(id)arg0 ;
-(NSInteger)_subclassPreferredFocusedViewPrioritizationType;
-(NSInteger)adaptivePresentationStyleForTraitCollection:(id)arg0 ;
-(id)_activePresentationController;
-(id)_adaptiveWillTransitionToTraitCollection:(id)arg0 withTransitionCoordinator:(id)arg1 ;
-(id)_animatorForContainmentTransition;
-(id)_appearanceContainer;
-(id)_childPresentationController;
-(id)_createVisualStyleForProvider:(id)arg0 ;
-(id)_currentContextPresentationSuperview;
-(id)_fallbackTraitCollection;
-(id)_firstCurrentContextChildInWindow;
-(id)_focusMapContainer;
-(id)_fullscreenPresentationSuperview;
-(id)_initialPresentationViewControllerForViewController:(id)arg0 ;
-(id)_parentPresentationController;
-(id)_parentPresentationControllerImmediate:(BOOL)arg0 ;
-(id)_parentTraitCollection;
-(id)_passthroughViews;
-(id)_preferredAnimationControllerForDismissal;
-(id)_preferredAnimationControllerForPresentation;
-(id)_preferredInteractionControllerForDismissal:(id)arg0 ;
-(id)_preferredInteractionControllerForPresentation:(id)arg0 ;
-(id)_presentationControllerForTraitCollection:(id)arg0 ;
-(id)_presentedViewControllerForPresentationController:(id)arg0 traitCollection:(id)arg1 ;
-(id)_rootPresentingViewControllerForNestedPresentation;
-(id)_traitCollectionForChildEnvironment:(id)arg0 ;
-(id)_viewToIgnoreLayerTransformForViewFrameInWindowContentOverlayInsetsCalculation;
-(id)_viewsParticipatingInNavigationControllerTransition;
-(id)init;
-(id)initWithPresentedViewController:(id)arg0 presentingViewController:(id)arg1 ;
-(id)presentedContentContainer;
-(struct ? )__sizeClassPair;
-(struct CGRect )_frameForChildContentContainer:(id)arg0 ;
-(struct CGRect )_frameForTransitionViewInPresentationSuperview:(id)arg0 ;
-(struct CGRect )_frameForTransitionViewInPresentationSuperview:(id)arg0 inWindow:(id)arg1 ;
-(struct CGRect )_frameOfPresentedViewControllerViewInSuperview;
-(struct CGSize )sizeForChildContentContainer:(id)arg0 withParentContainerSize:(struct CGSize )arg1 ;
-(struct UIEdgeInsets )_additionalSafeAreaInsets;
-(struct UIEdgeInsets )_baseContentInsetsWithLeftMargin:(*CGFloat)arg0 rightMargin:(*CGFloat)arg1 ;
-(void)_adjustOrientationIfNecessaryInWindow:(id)arg0 forViewController:(id)arg1 preservingViewController:(id)arg2 ;
-(void)_beginOcclusionIfNecessary:(BOOL)arg0 ;
-(void)_cleanup;
-(void)_closeScene;
-(void)_containedViewControllerModalStateChanged;
-(void)_convertToSceneFromPresentingViewController:(id)arg0 ;
-(void)_coverWithSnapshot;
-(void)_disableMenuPressForBackGesture;
-(void)_dismissWithAnimationController:(id)arg0 interactionController:(id)arg1 target:(id)arg2 didEndSelector:(SEL)arg3 ;
-(void)_enableOcclusion:(BOOL)arg0 ;
-(void)_geometryChanged:(struct ? *)arg0 forAncestor:(id)arg1 ;
-(void)_initViewHierarchyForPresentationSuperview:(id)arg0 ;
-(void)_initViewHierarchyForPresentationSuperview:(id)arg0 inWindow:(id)arg1 ;
-(void)_parent:(id)arg0 willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)_performBackGesture:(id)arg0 ;
-(void)_prepareForWindowDeallocRecursively:(BOOL)arg0 ;
-(void)_presentWithAnimationController:(id)arg0 inWindow:(id)arg1 interactionController:(id)arg2 target:(id)arg3 didEndSelector:(SEL)arg4 ;
-(void)_realSourceViewDidChangeFromView:(id)arg0 toView:(id)arg1 ;
-(void)_releaseSnapshot;
-(void)_sendDelegateWillPresentWithAdaptiveStyle:(NSInteger)arg0 transitionCoordinator:(id)arg1 ;
-(void)_sendDidAttemptToDismiss;
-(void)_sendDidDismiss;
-(void)_sendFallbackDidDismiss;
-(void)_sendFallbackWillDismiss;
-(void)_sendPresentationControllerNotification:(id)arg0 userInfo:(id)arg1 ;
-(void)_sendWillDismiss;
-(void)_systemLayoutFittingSizeDidChangeForChildContentContainer:(id)arg0 childViewController:(id)arg1 ;
-(void)_transitionFromDidEnd;
-(void)_transitionFromWillBegin;
-(void)_transitionToDidEnd;
-(void)_transitionToPresentationController:(id)arg0 withTransitionCoordinator:(id)arg1 ;
-(void)_transitionToWillBegin;
-(void)_transplantView:(id)arg0 toSuperview:(id)arg1 ;
-(void)_transplantView:(id)arg0 toSuperview:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)_updateRealSourceView;
-(void)_updateTraitsIfNecessary;
-(void)_willRunTransitionForCurrentStateDeferred:(BOOL)arg0 ;
-(void)_window:(id)arg0 willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)completeCurrentTransitionImmediately;
-(void)dealloc;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)dismissalTransitionDidEnd:(BOOL)arg0 ;
-(void)dismissalTransitionWillBegin;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg0 ;
-(void)presentationTransitionDidEnd:(BOOL)arg0 ;
-(void)presentationTransitionWillBegin;
-(void)runTransitionForCurrentState;
-(void)setNeedsFocusUpdate;
-(void)systemLayoutFittingSizeDidChangeForChildContentContainer:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)transitionDidFinish:(BOOL)arg0 ;
-(void)transitionDidStart;
-(void)updateFocusIfNeeded;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)willTransitionToTraitCollection:(id)arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif