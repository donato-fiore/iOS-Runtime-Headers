// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIALERTCONTROLLERPRESENTATIONCONTROLLER_H
#define _UIALERTCONTROLLERPRESENTATIONCONTROLLER_H

@class NSLayoutConstraint, NSString;
@protocol UIAdaptivePresentationControllerDelegate, UIForcePresentationController, _UIForcePresentationControllerDelegate;


#import "UIPresentationController.h"
#import "_UIKeyboardLayoutAlignmentView.h"
#import "UIView.h"
#import "UIAlertVisualStyleUpdatableConstraints.h"
#import "_UIStatesFeedbackGenerator.h"
#import "UIGestureRecognizer.h"

@interface _UIAlertControllerPresentationController : UIPresentationController <UIAdaptivePresentationControllerDelegate, UIForcePresentationController>

 {
    _UIKeyboardLayoutAlignmentView *keyboardLayoutAlignmentView;
    UIView *keyboardLayoutAlignmentAvailableSpaceView;
    UIAlertVisualStyleUpdatableConstraints *_visualStyleUpdatableConstraints;
    NSLayoutConstraint *_topAvailableSpaceConstraint;
    NSLayoutConstraint *_bottomAvailableSpaceConstraint;
    BOOL constraintsPrepared;
}


@property (nonatomic, getter=_isChromeHidden, setter=_setChromeHidden:) BOOL _chromeHidden; // ivar: _chromeHidden
@property (readonly) UIView *_dimmingView; // ivar: _dimmingView
@property (setter=_setIsCurrentContext:) BOOL _isCurrentContext; // ivar: __isCurrentContext
@property (readonly, nonatomic) UIView *_revealContainerView; // ivar: _revealContainerView
@property (setter=_setShouldRespectNearestCurrentContextPresenter:) BOOL _shouldRespectNearestCurrentContextPresenter; // ivar: __shouldRespectNearestCurrentContextPresenter
@property (nonatomic) BOOL _sourceViewSnapshotAndScaleTransformSuppressed; // ivar: _sourceViewSnapshotAndScaleTransformSuppressed
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) _UIStatesFeedbackGenerator *feedbackGenerator; // ivar: _feedbackGenerator
@property (weak, nonatomic) NSObject<_UIForcePresentationControllerDelegate> *forcePresentationControllerDelegate; // ivar: _forcePresentationControllerDelegate
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIGestureRecognizer *panningGestureRecognizer; // ivar: _panningGestureRecognizer
@property (copy, nonatomic) id *presentationPhaseCompletionBlock; // ivar: _presentationPhaseCompletionBlock
@property (readonly) Class superclass;


-(BOOL)_canCommitPresentation;
-(BOOL)_canDismissPresentation;
-(BOOL)_keyboardShouldAnimateAlongsideForInteractiveTransitions;
-(BOOL)_preserveResponderAcrossWindows;
-(BOOL)_shouldOccludeDuringPresentation;
-(BOOL)_shouldRespectDefinesPresentationContext;
-(BOOL)shouldPresentInFullscreen;
-(NSInteger)adaptivePresentationStyle;
-(NSInteger)adaptivePresentationStyleForPresentationController:(id)arg0 ;
-(id)_createVisualStyleForProvider:(id)arg0 ;
-(id)_presentedAlertController;
-(id)initWithPresentedViewController:(id)arg0 presentingViewController:(id)arg1 ;
-(id)presentationController:(id)arg0 viewControllerForAdaptivePresentationStyle:(NSInteger)arg1 ;
-(struct CGRect )_frameForTransitionViewInPresentationSuperview:(id)arg0 ;
-(void)_prepareConstraintsIfNecessary;
-(void)_prepareDimmingViewIfNecessary;
-(void)_presentedAlertControllerDidAdapt;
-(void)_updateConstraintsIfNecessary;
-(void)_willRunTransitionForCurrentStateDeferred:(BOOL)arg0 ;
-(void)containerViewDidLayoutSubviews;
-(void)containerViewWillLayoutSubviews;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg0 ;
-(void)presentationTransitionWillBegin;
-(void)setDelegate:(id)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif