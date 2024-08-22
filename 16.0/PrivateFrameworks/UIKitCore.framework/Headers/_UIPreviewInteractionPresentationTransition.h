// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIPREVIEWINTERACTIONPRESENTATIONTRANSITION_H
#define _UIPREVIEWINTERACTIONPRESENTATIONTRANSITION_H

@class NSString;
@protocol UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning, UIViewControllerContextTransitioning;

#import <Foundation/Foundation.h>

#import "UIViewPropertyAnimator.h"

@interface _UIPreviewInteractionPresentationTransition : NSObject <UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning>

 {
    id<UIViewControllerContextTransitioning> *_transitionContext;
    UIViewPropertyAnimator *_presentationAnimator;
    CGFloat _interactiveTransitionFraction;
    BOOL _shouldPerformAsDismissTransition;
    BOOL _didScheduleFinishTransition;
    BOOL _didScheduleCancelTransition;
}


@property (readonly, nonatomic) NSInteger completionCurve;
@property (readonly, nonatomic) CGFloat completionSpeed;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat interactiveTransitionFraction;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL wantsInteractiveStart;


-(BOOL)_shouldReduceMotion;
-(CGFloat)transitionDuration:(id)arg0 ;
-(id)_newPushDecayAnimator;
-(id)_newReducedMotionTimingCurveProviderForPreviewTransition;
-(id)_newTimingCurveProviderForPreviewTransition;
-(id)_preparedPresentationAnimator;
-(id)_previewPresentationControllerForTransitionContext:(id)arg0 ;
-(id)_previewPresentationControllerForViewController:(id)arg0 ;
-(id)init;
-(id)interruptibleAnimatorForTransition:(id)arg0 ;
-(void)_applyPushDecayEffectTransformToView:(id)arg0 ;
-(void)_performCancelTransition;
-(void)_performFinishTransition;
-(void)animateTransition:(id)arg0 ;
-(void)animationEnded:(BOOL)arg0 ;
-(void)cancelTransition;
-(void)finishTransition;
-(void)startInteractiveTransition:(id)arg0 ;
-(void)updateInteractiveTransition:(CGFloat)arg0 ;


@end


#endif