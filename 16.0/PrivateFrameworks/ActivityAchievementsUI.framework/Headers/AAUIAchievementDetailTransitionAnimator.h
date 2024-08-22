// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AAUIACHIEVEMENTDETAILTRANSITIONANIMATOR_H
#define AAUIACHIEVEMENTDETAILTRANSITIONANIMATOR_H

@class UIView, NSString, UIViewController;
@protocol UIViewControllerAnimatedTransitioning, AnimatorDetailViewController;

#import <Foundation/Foundation.h>


@interface AAUIAchievementDetailTransitionAnimator : NSObject <UIViewControllerAnimatedTransitioning>



@property (copy, nonatomic) id *completionBlock; // ivar: _completionBlock
@property (retain, nonatomic) UIView *conversionView; // ivar: _conversionView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<AnimatorDetailViewController> *detailViewController; // ivar: _detailViewController
@property (copy, nonatomic) id *dismissBlock; // ivar: _dismissBlock
@property (nonatomic) CGPoint finalBadgeCenter; // ivar: _finalBadgeCenter
@property (nonatomic) CGRect finalBadgeFrame; // ivar: _finalBadgeFrame
@property (nonatomic) CGAffineTransform finalBadgeTransform; // ivar: _finalBadgeTransform
@property (nonatomic) CGAffineTransform finalPresentingVCTransform; // ivar: _finalPresentingVCTransform
@property (readonly) NSUInteger hash;
@property (nonatomic) CGPoint initialBadgeCenter; // ivar: _initialBadgeCenter
@property (nonatomic) CGRect initialBadgeFrame; // ivar: _initialBadgeFrame
@property (nonatomic) CGAffineTransform initialBadgeTransform; // ivar: _initialBadgeTransform
@property (copy, nonatomic) id *presentBlock; // ivar: _presentBlock
@property (retain, nonatomic) UIViewController *presentingViewController; // ivar: _presentingViewController
@property (retain, nonatomic) NSString *presentingViewControllerWeeTitle; // ivar: _presentingViewControllerWeeTitle
@property (nonatomic) BOOL reduceMotion; // ivar: _reduceMotion
@property (nonatomic) BOOL shouldAdjustForInset; // ivar: _shouldAdjustForInset
@property (nonatomic) BOOL shouldDismissGracefullyForTextSizeChange; // ivar: _shouldDismissGracefullyForTextSizeChange
@property (nonatomic) BOOL shouldPlayFlipInAnimation; // ivar: _shouldPlayFlipInAnimation
@property (readonly) Class superclass;


-(BOOL)isPresentingWithContext:(id)arg0 ;
-(CGFloat)transitionDuration:(id)arg0 ;
// -(id)initWithPresentingViewController:(id)arg0 detailViewController:(id)arg1 shouldPlayFlipInAnimation:(BOOL)arg2 initialBadgeFrame:(struct CGRect )arg3 conversionView:(id)arg4 presentAlongsideBlock:(id)arg5 dismissAlongsideBlock:(unk)arg6 completionBlock:(id)arg7  ;
-(void)animateDismissalWithContext:(id)arg0 ;
-(void)animatePresentationWithContext:(id)arg0 ;
-(void)animateTransition:(id)arg0 ;
-(void)prepareForAnimationsWithContext:(id)arg0 ;
-(void)reducedMotionAnimateDismissalWithContext:(id)arg0 ;
-(void)reducedMotionAnimatePresentationWithContext:(id)arg0 ;
-(void)textSizeDidChange:(id)arg0 ;


@end


#endif