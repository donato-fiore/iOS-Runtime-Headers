// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIPOPOVERCONTROLLER_H
#define UIPOPOVERCONTROLLER_H

@class NSArray, NSString;
@protocol UIDimmingViewDelegate, UIGestureRecognizerDelegatePrivate, UIAppearanceContainer, UIPopoverControllerDelegate;

#import <Foundation/Foundation.h>

#import "UIViewController.h"
#import "_UIPopoverView.h"
#import "UIView.h"
#import "UIBarButtonItem.h"
#import "UIColor.h"
#import "UIPanGestureRecognizer.h"
#import "UIPopoverController.h"
#import "UIDimmingView.h"
#import "_UIPopoverLayoutInfo.h"
#import "UIPopoverPresentationController.h"

@interface UIPopoverController : NSObject <UIDimmingViewDelegate, UIGestureRecognizerDelegatePrivate, UIAppearanceContainer>

 {
    UIViewController *_contentViewController;
    UIViewController *_splitParentController;
    _UIPopoverView *_popoverView;
    UIView *_layoutConstraintView;
    CGRect _targetRectInEmbeddingView;
    UIBarButtonItem *_targetBarButtonItem;
    NSUInteger _requestedArrowDirections;
    NSUInteger _currentArrowDirection;
    NSInteger _popoverBackgroundStyle;
    UIColor *_backgroundColor;
    CGSize _popoverContentSize;
    CGRect _targetRectInDimmingView;
    CGRect _embeddedTargetRect;
    NSInteger _popoverControllerStyle;
    BOOL _ignoresKeyboardNotifications;
    UIView *_currentPresentationView;
    CGRect _currentPresentationRectInView;
    NSUInteger _originalArrowDirections;
    unsigned int draggingChildScrollViewCount;
    id *_target;
    NSInteger _didFinish;
    UIViewController *_modalPresentationFromViewController;
    UIViewController *_modalPresentationToViewController;
    NSUInteger _toViewAutoResizingMask;
    UIViewController *_slidingViewController;
    NSInteger _presentationDirection;
    int _presentationState;
    BOOL _didPresentInActiveSequence;
    NSUInteger _slideTransitionCount;
    UIPanGestureRecognizer *_vendedGestureRecognizer;
    UIPanGestureRecognizer *_dimmingViewGestureRecognizer;
    UIPopoverController *_retainedSelf;
    NSArray *_passthroughViews;
    ? _popoverControllerFlags;
}


@property (nonatomic, setter=_setIgnoresKeyboardNotifications:) BOOL _ignoresKeyboardNotifications;
@property (nonatomic, getter=_allowsPopoverPresentationToAdapt, setter=_setAllowsPopoverPresentationToAdapt:) BOOL allowsPopoverPresentationToAdapt; // ivar: _allowsPopoverPresentationToAdapt
@property (copy, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIViewController *contentViewController;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<UIPopoverControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIDimmingView *dimmingView; // ivar: _dimmingView
@property (nonatomic) BOOL dismissesOnRotation; // ivar: _dismissesOnRotation
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *passthroughViews;
@property (nonatomic) NSUInteger popoverArrowDirection; // ivar: _popoverArrowDirection
@property (retain, nonatomic) Class popoverBackgroundViewClass; // ivar: _popoverBackgroundViewClass
@property (nonatomic) CGSize popoverContentSize;
@property (nonatomic) UIEdgeInsets popoverLayoutMargins; // ivar: _popoverLayoutMargins
@property (readonly, nonatomic, getter=isPopoverVisible) BOOL popoverVisible;
@property (retain, nonatomic) _UIPopoverLayoutInfo *preferredLayoutInfo; // ivar: _preferredLayoutInfo
@property (retain, nonatomic, getter=_presentationController, setter=_setPresentationController:) UIPopoverPresentationController *presentationController; // ivar: _presentationController
@property (nonatomic, getter=_presentationEdge, setter=_setPresentationEdge:) NSUInteger presentationEdge; // ivar: _presentationEdge
@property (weak, nonatomic, getter=_presentingView, setter=_setPresentingView:) UIView *presentingView; // ivar: _presentingView
@property (nonatomic, getter=_retainsSelfWhilePresented, setter=_setRetainsSelfWhilePresented:) BOOL retainsSelfWhilePresented; // ivar: _retainsSelfWhilePresented
@property (nonatomic) BOOL showsOrientationMarker; // ivar: _showsOrientationMarker
@property (nonatomic) BOOL showsPresentationArea; // ivar: _showsPresentationArea
@property (nonatomic) BOOL showsTargetRect; // ivar: _showsTargetRect
@property (readonly) Class superclass;


+(BOOL)_forceAttemptsToAvoidKeyboard;
+(BOOL)_popoversDisabled;
+(BOOL)_showTargetRectPref;
+(BOOL)_useLegacyPopoverControllers;
+(Class)_popoverViewClass;
+(struct UIEdgeInsets )_defaultPopoverLayoutMarginsForPopoverControllerStyle:(NSInteger)arg0 andContentViewController:(id)arg1 ;
+(void)_setForceModernPopoverUse:(BOOL)arg0 ;
-(BOOL)_allowsFocusBehindDimmingView;
-(BOOL)_attemptsToAvoidKeyboard;
-(BOOL)_canRepresentAutomatically;
-(BOOL)_embedsInView;
-(BOOL)_gestureRecognizer:(id)arg0 shouldBeRequiredToFailByGestureRecognizer:(id)arg1 ;
-(BOOL)_gestureRecognizer:(id)arg0 shouldRequireFailureOfGestureRecognizer:(id)arg1 ;
-(BOOL)_gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)_isDismissing;
-(BOOL)_isPresenting;
-(BOOL)_manuallyHandlesContentViewControllerAppearanceCalls;
-(BOOL)_shimPopoverPresentationController;
-(BOOL)_shimPresentSlidingPopoverAnimated:(BOOL)arg0 ;
-(BOOL)isPresentingOrDismissing;
-(BOOL)popoverPresentationControllerShouldDismissPopover:(id)arg0 ;
-(CGFloat)_dismissalAnimationDuration;
-(CGFloat)_presentationAnimationDuration;
-(Class)_defaultChromeViewClass;
-(Class)_popoverLayoutInfoForChromeClass:(Class)arg0 ;
-(NSInteger)_popoverBackgroundStyle;
-(NSInteger)_popoverControllerStyle;
-(NSInteger)adaptivePresentationStyleForPresentationController:(id)arg0 ;
-(NSInteger)adaptivePresentationStyleForPresentationController:(id)arg0 traitCollection:(id)arg1 ;
-(NSUInteger)_slideTransitionCount;
-(id)_completionBlockForDismissalWhenNotifyingDelegate:(SEL)arg0 ;
-(id)_gestureRecognizerForPresentationFromEdge:(NSUInteger)arg0 ;
-(id)_initWithContentViewController:(id)arg0 popoverControllerStyle:(NSInteger)arg1 ;
-(id)_layoutInfoForCurrentKeyboardState;
-(id)_layoutInfoForCurrentKeyboardStateAndHostingWindow:(id)arg0 ;
-(id)_layoutInfoFromLayoutInfo:(id)arg0 forCurrentKeyboardStateAndHostingWindow:(id)arg1 ;
-(id)_managingSplitViewController;
-(id)_splitParentController;
-(id)init;
-(id)initWithContentViewController:(id)arg0 ;
-(id)popoverView;
-(int)_presentationState;
-(struct CGPoint )_centerPointForScale:(CGFloat)arg0 frame:(struct CGRect )arg1 anchor:(struct CGPoint )arg2 ;
-(struct CGSize )_currentPopoverContentSize;
-(void)_adjustPopoverForNewContentSizeFromViewController:(id)arg0 allowShrink:(BOOL)arg1 ;
-(void)_beginMapsTransitionToNewViewController:(id)arg0 arrowDirections:(NSUInteger)arg1 slideDuration:(CGFloat)arg2 expandDuration:(CGFloat)arg3 ;
-(void)_beginMapsTransitionToNewViewController:(id)arg0 newTargetRect:(struct CGRect )arg1 inView:(id)arg2 arrowDirections:(NSUInteger)arg3 slideDuration:(CGFloat)arg4 expandDuration:(CGFloat)arg5 ;
-(void)_commonPresentPopoverFromRect:(struct CGRect )arg0 inView:(id)arg1 permittedArrowDirections:(NSUInteger)arg2 animated:(BOOL)arg3 ;
-(void)_containedViewControllerModalStateChanged;
-(void)_dismissPopoverAnimated:(BOOL)arg0 stateOnly:(BOOL)arg1 notifyDelegate:(BOOL)arg2 ;
-(void)_hostingWindowDidRotate:(id)arg0 ;
-(void)_hostingWindowWillRotate:(id)arg0 ;
-(void)_incrementSlideTransitionCount:(BOOL)arg0 ;
-(void)_invalidateLayoutInfo;
-(void)_keyboardStateChanged:(id)arg0 ;
-(void)_layoutDimmingViewForInterfaceOrientationOfHostingWindow:(id)arg0 ;
-(void)_modalAnimationFinishedEndIgnoringInteractiveEvents:(BOOL)arg0 ;
-(void)_modalTransition:(int)arg0 fromViewController:(id)arg1 toViewController:(id)arg2 target:(id)arg3 didFinish:(NSInteger)arg4 ;
-(void)_moveAwayFromTheKeyboard:(id)arg0 ;
-(void)_newViewControllerWasPushed:(id)arg0 ;
-(void)_performHierarchyCheckOnViewController:(id)arg0 ;
-(void)_postludeForDismissal;
-(void)_presentPopoverBySlidingIn:(BOOL)arg0 fromEdge:(NSUInteger)arg1 ofView:(id)arg2 animated:(BOOL)arg3 stateOnly:(BOOL)arg4 notifyDelegate:(BOOL)arg5 ;
-(void)_presentPopoverFromEdge:(NSUInteger)arg0 ofView:(id)arg1 animated:(BOOL)arg2 ;
-(void)_presentPopoverFromRect:(struct CGRect )arg0 embeddedInView:(id)arg1 usingViewForLayoutConstraints:(id)arg2 permittedArrowDirections:(NSUInteger)arg3 ;
-(void)_presentPopoverFromRect:(struct CGRect )arg0 embeddedInView:(id)arg1 usingViewForLayoutConstraints:(id)arg2 permittedArrowDirections:(NSUInteger)arg3 animate:(BOOL)arg4 ;
-(void)_presentShimmedPopoverFromRect:(struct CGRect )arg0 inView:(id)arg1 permittedArrowDirections:(NSUInteger)arg2 animated:(BOOL)arg3 ;
-(void)_resetSlideTransitionCount;
-(void)_scrollViewDidEndDragging:(id)arg0 ;
-(void)_scrollViewWillBeginDragging:(id)arg0 ;
-(void)_setGesturesEnabled:(BOOL)arg0 ;
-(void)_setManagingSplitViewController:(id)arg0 ;
-(void)_setPopoverBackgroundStyle:(NSInteger)arg0 ;
-(void)_setPopoverView:(id)arg0 ;
-(void)_setPresentationState:(int)arg0 ;
-(void)_setSplitParentController:(id)arg0 ;
-(void)_setupPresentationController;
-(void)_startWatchingForKeyboardNotificationsIfNecessary;
-(void)_startWatchingForNavigationControllerNotifications:(id)arg0 ;
-(void)_startWatchingForScrollViewNotifications;
-(void)_startWatchingForWindowRotations;
-(void)_stopWatchingForKeyboardNotifications;
-(void)_stopWatchingForNavigationControllerNotifications:(id)arg0 ;
-(void)_stopWatchingForNotifications;
-(void)_stopWatchingForScrollViewNotifications;
-(void)_stopWatchingForWindowRotations;
-(void)_swipe:(id)arg0 ;
-(void)_transitionFromViewController:(id)arg0 toViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)_updateDimmingViewTransformForInterfaceOrientationOfHostingWindow:(id)arg0 ;
-(void)dealloc;
-(void)dimmingViewWasTapped:(id)arg0 ;
-(void)dismissPopoverAnimated:(BOOL)arg0 ;
-(void)popoverPresentationController:(id)arg0 willRepositionPopoverToRect:(struct CGRect *)arg1 inView:(*id)arg2 ;
-(void)popoverPresentationControllerDidDismissPopover:(id)arg0 ;
-(void)presentPopoverFromBarButtonItem:(id)arg0 permittedArrowDirections:(NSUInteger)arg1 animated:(BOOL)arg2 ;
-(void)presentPopoverFromRect:(struct CGRect )arg0 inView:(id)arg1 permittedArrowDirections:(NSUInteger)arg2 animated:(BOOL)arg3 ;
-(void)setPopoverFrame:(struct CGRect )arg0 animated:(BOOL)arg1 ;


@end


#endif