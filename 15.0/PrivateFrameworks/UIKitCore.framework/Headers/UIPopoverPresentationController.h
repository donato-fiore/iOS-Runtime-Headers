// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIPOPOVERPRESENTATIONCONTROLLER_H
#define UIPOPOVERPRESENTATIONCONTROLLER_H

@class NSString, NSArray;
@protocol _UIPopoverDimmingViewDelegate, UIGestureRecognizerDelegatePrivate, UIPopoverPresentationControllerDelegate;


#import "UIPresentationController.h"
#import "UIViewController.h"
#import "_UIPopoverView.h"
#import "_UICutoutShadowView.h"
#import "UIView.h"
#import "UIBarButtonItem.h"
#import "UIColor.h"
#import "UIPanGestureRecognizer.h"
#import "UISheetPresentationController.h"
#import "UIDimmingView.h"
#import "_UIPopoverLayoutInfo.h"
#import "UIPopoverPresentationController.h"

@interface UIPopoverPresentationController : UIPresentationController <_UIPopoverDimmingViewDelegate, UIGestureRecognizerDelegatePrivate>

 {
    UIViewController *_contentViewController;
    _UIPopoverView *_popoverView;
    _UICutoutShadowView *_shadowView;
    UIView *_layoutConstraintView;
    CGRect _targetRectInEmbeddingView;
    UIBarButtonItem *_targetBarButtonItem;
    NSUInteger _currentArrowDirection;
    NSInteger _popoverBackgroundStyle;
    UIColor *_backgroundColor;
    UIColor *_arrowBackgroundColor;
    CGSize _popoverContentSize;
    CGRect _lastSourceRectInContainerView;
    NSInteger _popoverControllerStyle;
    BOOL _ignoresKeyboardNotifications;
    BOOL _canOverlapSourceViewRect;
    BOOL _backgroundBlurDisabled;
    unsigned int draggingChildScrollViewCount;
    id *_target;
    SEL _didEndSelector;
    UIViewController *_modalPresentationFromViewController;
    UIViewController *_modalPresentationToViewController;
    NSUInteger _toViewAutoResizingMask;
    UIViewController *_slidingViewController;
    BOOL _isArrowDirectionFixed;
    BOOL _useSourceViewBoundsAsSourceRect;
    NSInteger _presentationDirection;
    int _presentationState;
    BOOL _didPresentInActiveSequence;
    NSUInteger _slideTransitionCount;
    UIPanGestureRecognizer *_vendedGestureRecognizer;
    UIPanGestureRecognizer *_dimmingViewGestureRecognizer;
    ? _popoverControllerFlags;
    NSString *_sceneIdentifier;
    UIPanGestureRecognizer *_detachGestureRecognizer;
    BOOL _wasDetached;
    BOOL _isDismissingBecauseDimmingViewTapped;
}


@property (nonatomic, setter=_setAllowsSourceViewInDifferentWindowThanInitialPresentationViewController:) BOOL _allowsSourceViewInDifferentWindowThanInitialPresentationViewController; // ivar: __allowsSourceViewInDifferentWindowThanInitialPresentationViewController
@property (nonatomic, getter=_arrowOffset, setter=_setArrowOffset:) CGFloat _arrowOffset;
@property (nonatomic, getter=_centersPopoverIfSourceViewNotSet, setter=_setCentersPopoverIfSourceViewNotSet:) BOOL _centersPopoverIfSourceViewNotSet; // ivar: __centersPopoverIfSourceViewNotSet
@property (nonatomic, setter=_setDimmingViewTopEdgeInset:) CGFloat _dimmingViewTopEdgeInset; // ivar: __dimmingViewTopEdgeInset
@property (nonatomic, setter=_setIgnoreBarButtonItemSiblings:) BOOL _ignoreBarButtonItemSiblings; // ivar: __ignoreBarButtonItemSiblings
@property (nonatomic, setter=_setIgnoresKeyboardNotifications:) BOOL _ignoresKeyboardNotifications;
@property (nonatomic, setter=_setPopoverBackgroundStyle:) NSInteger _popoverBackgroundStyle;
@property (nonatomic, setter=_setPreferredHorizontalAlignment:) NSInteger _preferredHorizontalAlignment; // ivar: __preferredHorizontalAlignment
@property (nonatomic, getter=_shouldHideArrow, setter=_setShouldHideArrow:) BOOL _shouldHideArrow; // ivar: __shouldHideArrow
@property (nonatomic, setter=_setSoftAssertWhenNoSourceViewOrBarButtonItemSpecified:) BOOL _softAssertWhenNoSourceViewOrBarButtonItemSpecified; // ivar: __softAssertWhenNoSourceViewOrBarButtonItemSpecified
@property (readonly, nonatomic) UISheetPresentationController *adaptiveSheetPresentationController; // ivar: _adaptiveSheetPresentationController
@property (nonatomic, getter=_isAdaptivityEnabled, setter=_setAdaptivityEnabled:) BOOL adaptivityEnabled; // ivar: _adaptivityEnabled
@property (readonly, nonatomic) NSUInteger arrowDirection;
@property (copy, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIBarButtonItem *barButtonItem;
@property (nonatomic) BOOL canOverlapSourceViewRect;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<UIPopoverPresentationControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIDimmingView *dimmingView; // ivar: _dimmingView
@property (nonatomic) BOOL dismissesOnRotation; // ivar: _dismissesOnRotation
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *passthroughViews;
@property (nonatomic) NSUInteger permittedArrowDirections; // ivar: _permittedArrowDirections
@property (nonatomic) NSUInteger popoverArrowDirection; // ivar: _popoverArrowDirection
@property (retain, nonatomic) Class popoverBackgroundViewClass; // ivar: _popoverBackgroundViewClass
@property (nonatomic) UIEdgeInsets popoverLayoutMargins; // ivar: _popoverLayoutMargins
@property (retain, nonatomic) _UIPopoverLayoutInfo *preferredLayoutInfo; // ivar: _preferredLayoutInfo
@property (nonatomic, getter=_presentationEdge, setter=_setPresentationEdge:) NSUInteger presentationEdge; // ivar: _presentationEdge
@property (weak, nonatomic, getter=_presentingView, setter=_setPresentingView:) UIView *presentingView; // ivar: _presentingView
@property (retain, nonatomic) UIPopoverPresentationController *retainedSelf; // ivar: _retainedSelf
@property (nonatomic, getter=_retainsSelfWhilePresented, setter=_setRetainsSelfWhilePresented:) BOOL retainsSelfWhilePresented; // ivar: _retainsSelfWhilePresented
@property (nonatomic, getter=_shouldDisableInteractionDuringTransitions, setter=_setShouldDisableInteractionDuringTransitions:) BOOL shouldDisableInteractionDuringTransitions; // ivar: _shouldDisableInteractionDuringTransitions
@property (nonatomic, getter=_shouldPreserveFirstResponder, setter=_setShouldPreserveFirstResponder:) BOOL shouldPreserveFirstResponder; // ivar: _shouldPreserveFirstResponder
@property (nonatomic) BOOL showsOrientationMarker; // ivar: _showsOrientationMarker
@property (nonatomic) BOOL showsPresentationArea; // ivar: _showsPresentationArea
@property (nonatomic) BOOL showsTargetRect; // ivar: _showsTargetRect
@property (retain, nonatomic, getter=_sourceOverlayView, setter=_setSourceOverlayView:) UIView *sourceOverlayView; // ivar: _sourceOverlayView
@property (retain, nonatomic, getter=_sourceOverlayViewConstraints, setter=_setSourceOverlayViewConstraints:) NSArray *sourceOverlayViewConstraints; // ivar: _sourceOverlayViewConstraints
@property (nonatomic) CGRect sourceRect;
@property (retain, nonatomic) UIView *sourceView;
@property (readonly) Class superclass;
@property (retain, nonatomic, getter=_targetRectView, setter=_setTargetRectView:) UIView *targetRectView; // ivar: _targetRectView


+(BOOL)_alwaysAllowPopoverPresentations;
+(BOOL)_forceAttemptsToAvoidKeyboard;
+(BOOL)_showTargetRectPref;
+(Class)_popoverViewClass;
+(struct UIEdgeInsets )_defaultPopoverLayoutMarginsForPopoverControllerStyle:(NSInteger)arg0 andContentViewController:(id)arg1 ;
+(void)_setAlwaysAllowPopoverPresentations:(BOOL)arg0 ;
-(BOOL)_allowsFocusBehindDimmingView;
-(BOOL)_attemptsToAvoidKeyboard;
-(BOOL)_backgroundBlurDisabled;
-(BOOL)_embedsInView;
-(BOOL)_fallbackShouldDismiss;
-(BOOL)_forcesPreferredAnimationControllers;
-(BOOL)_handlesKeyboardAvoidance;
-(BOOL)_isDismissing;
-(BOOL)_isPresenting;
-(BOOL)_isShimmingPopoverControllerPresentation;
-(BOOL)_manuallyHandlesContentViewControllerAppearanceCalls;
-(BOOL)_popoverIsDismissingBecauseDimmingViewWasTapped;
-(BOOL)_presentationPotentiallyUnderlapsStatusBar;
-(BOOL)_shouldConvertToScene;
-(BOOL)_shouldKeepCurrentFirstResponder;
-(BOOL)_shouldOccludeDuringPresentation;
-(BOOL)_shouldPopoverContentExtendOverArrowForViewController:(id)arg0 backgroundViewClass:(Class)arg1 ;
-(BOOL)_shouldPresentedViewControllerControlStatusBarAppearance;
-(BOOL)_useNSPopover;
-(BOOL)dimmingViewWasTapped:(id)arg0 withDismissCompletion:(id)arg1 ;
-(BOOL)isPopoverVisible;
-(BOOL)isPresentingOrDismissing;
-(BOOL)popoverDimmingViewDidReceiveDismissalInteraction:(id)arg0 ;
-(BOOL)popoverDimmingViewShouldAllowInteraction:(id)arg0 ;
-(BOOL)shouldPresentInFullscreen;
-(CGFloat)_dismissalAnimationDuration;
-(CGFloat)_presentationAnimationDuration;
-(Class)_defaultChromeViewClass;
-(Class)_popoverLayoutInfoForChromeClass:(Class)arg0 ;
-(NSInteger)_defaultPresentationStyleForTraitCollection:(id)arg0 ;
-(NSInteger)_popoverControllerStyle;
-(NSInteger)presentationStyle;
-(NSUInteger)_slideTransitionCount;
-(id)_adaptiveFormSheetPresentationController;
-(id)_backgroundView;
-(id)_completionBlockForDismissalWhenNotifyingDelegate:(SEL)arg0 ;
-(id)_createVisualStyleForProvider:(id)arg0 ;
-(id)_exceptionStringForNilSourceViewOrBarButtonItem;
-(id)_initialPresentationViewControllerForViewController:(id)arg0 ;
-(id)_layoutInfoForCurrentKeyboardState;
-(id)_layoutInfoForCurrentKeyboardStateAndHostingWindow:(id)arg0 ;
-(id)_layoutInfoFromLayoutInfo:(id)arg0 forCurrentKeyboardStateAndHostingWindow:(id)arg1 ;
-(id)_lowerWindowDismissalGestureViews;
-(id)_popoverHostingWindow;
-(id)_preferredAnimationControllerForDismissal;
-(id)_preferredAnimationControllerForPresentation;
-(id)_presentationView;
-(id)arrowBackgroundColor;
-(id)init;
-(id)initWithPresentedViewController:(id)arg0 presentingViewController:(id)arg1 ;
-(id)popoverView;
-(id)presentedView;
-(int)_presentationState;
-(struct CGPoint )_centerPointForScale:(CGFloat)arg0 frame:(struct CGRect )arg1 anchor:(struct CGPoint )arg2 ;
-(struct CGRect )_calculateContainingFrame;
-(struct CGRect )_sourceRectInCoordinateSpace:(id)arg0 ;
-(struct CGRect )frameOfPresentedViewInContainerView;
-(struct CGSize )_currentPopoverContentSize;
-(struct CGSize )popoverContentSize;
-(struct UIEdgeInsets )_additionalSafeAreaInsets;
-(struct UIEdgeInsets )_baseContentInsetsWithLeftMargin:(*CGFloat)arg0 rightMargin:(*CGFloat)arg1 ;
-(struct UIEdgeInsets )_effectivePopoverLayoutMargins;
-(void)_clearCachedPopoverContentSize;
-(void)_closeScene;
-(void)_convertToSceneFromPresentingViewController:(id)arg0 ;
-(void)_dismissPopoverAnimated:(BOOL)arg0 stateOnly:(BOOL)arg1 notifyDelegate:(BOOL)arg2 ;
-(void)_handlePan:(id)arg0 ;
-(void)_incrementSlideTransitionCount:(BOOL)arg0 ;
-(void)_invalidateLayoutInfo;
-(void)_keyboardStateChanged:(id)arg0 ;
-(void)_moveAwayFromTheKeyboard:(id)arg0 ;
-(void)_performHierarchyCheckOnViewController:(id)arg0 ;
-(void)_postludeForDismissal;
-(void)_realSourceViewDidChangeFromView:(id)arg0 toView:(id)arg1 ;
-(void)_realSourceViewGeometryDidChange;
-(void)_resetSlideTransitionCount;
-(void)_scrollViewDidEndDragging:(id)arg0 ;
-(void)_scrollViewWillBeginDragging:(id)arg0 ;
-(void)_sendDelegateWillRepositionToRect;
-(void)_sendFallbackDidDismiss;
-(void)_sendFallbackWillDismiss;
-(void)_setBackgroundBlurDisabled:(BOOL)arg0 ;
-(void)_setContentViewController:(id)arg0 animated:(BOOL)arg1 ;
-(void)_setContentViewController:(id)arg0 backgroundStyle:(NSInteger)arg1 animated:(BOOL)arg2 ;
-(void)_setGesturesEnabled:(BOOL)arg0 ;
-(void)_setLowerWindowDismissalGestureViews:(id)arg0 ;
-(void)_setPopoverFrame:(struct CGRect )arg0 animated:(BOOL)arg1 coordinator:(id)arg2 ;
-(void)_setPopoverView:(id)arg0 ;
-(void)_setPresentationState:(int)arg0 ;
-(void)_startWatchingForKeyboardNotificationsIfNecessary;
-(void)_startWatchingForScrollViewNotifications;
-(void)_stopWatchingForKeyboardNotifications;
-(void)_stopWatchingForNotifications;
-(void)_stopWatchingForScrollViewNotifications;
-(void)_transitionFromDidEnd;
-(void)_transitionFromViewController:(id)arg0 toViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)_transitionFromWillBegin;
-(void)_transitionToDidEnd;
-(void)_transitionToWillBegin;
-(void)_updateShadowFrame;
-(void)_updateSourceOverlayViewConstraints;
-(void)containerViewWillLayoutSubviews;
-(void)dealloc;
-(void)dismissalTransitionDidEnd:(BOOL)arg0 ;
-(void)dismissalTransitionWillBegin;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg0 ;
-(void)presentationTransitionDidEnd:(BOOL)arg0 ;
-(void)presentationTransitionWillBegin;
-(void)setArrowBackgroundColor:(id)arg0 ;
-(void)setPopoverContentSize:(struct CGSize )arg0 ;
-(void)setPopoverContentSize:(struct CGSize )arg0 animated:(BOOL)arg1 ;
-(void)setPopoverFrame:(struct CGRect )arg0 animated:(BOOL)arg1 ;
-(void)set_ignoreBarButtonItemSiblings:(BOOL)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif