// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVTRANSITION_H
#define AVTRANSITION_H

@class NSMutableArray, UIViewPropertyAnimator;
@protocol AVTransitionDelegate, UIViewControllerContextTransitioningEx;

#import <Foundation/Foundation.h>

#import "AVPresentationContext.h"

@interface AVTransition : NSObject {
    CGAffineTransform _destinationViewTransform;
}


@property (readonly, nonatomic) NSMutableArray *allAnimators; // ivar: _allAnimators
@property (readonly, nonatomic) UIViewPropertyAnimator *clientAnimator; // ivar: _clientAnimator
@property (weak, nonatomic) NSObject<AVTransitionDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) AVPresentationContext *presentationContext; // ivar: _presentationContext
@property (readonly, nonatomic) UIViewPropertyAnimator *transitionAnimator; // ivar: _transitionAnimator
@property (readonly, nonatomic) CGFloat transitionAnimatorProgress;
@property (readonly, weak, nonatomic) NSObject<UIViewControllerContextTransitioningEx> *transitionContext; // ivar: _transitionContext


-(CGFloat)duration;
-(id)initWithTransitionContext:(id)arg0 ;
-(struct CGAffineTransform )_transformForScale:(CGFloat)arg0 translation:(struct CGPoint )arg1 rotation:(CGFloat)arg2 locationInWindow:(struct CGPoint )arg3 sourceRectInContainerView:(struct CGRect )arg4 ;
-(struct CGRect )_finalFrameForPresentedView;
-(struct CGRect )_initialFrameForPresentedView;
-(struct CGRect )_sourceViewFrameInContainerView;
-(void)_animateAlongsideInteractiveDismissalTransitionAnimationForCancelling;
-(void)_animateAlongsideInteractivePresentationTransitionAnimationForCancelling;
-(void)_animateFinishInteractiveTransition;
-(void)_dismissalTransitionDidEnd:(BOOL)arg0 ;
-(void)_dismissalTransitionWillBegin;
-(void)_freezeDismissingViewForFinishing;
-(void)_presentationTransitionDidEnd:(BOOL)arg0 ;
-(void)_presentationTransitionWillBegin;
-(void)_startOrContinueAnimatorsReversed:(BOOL)arg0 ;
-(void)_updateCornerAppearanceAttributesOfView:(id)arg0 toSourceView:(id)arg1 similarity:(CGFloat)arg2 ;
-(void)addRunAlongsideAnimationsIfNeeded;
-(void)cancelInteractiveTransition;
-(void)completeTransition:(BOOL)arg0 ;
-(void)dealloc;
-(void)finishInteractiveTransition;
-(void)pauseInteractiveTransition;
-(void)startInteractiveTransition;
-(void)updateWithPercentComplete:(CGFloat)arg0 scale:(CGFloat)arg1 translation:(struct CGPoint )arg2 rotation:(CGFloat)arg3 ;


@end


#endif