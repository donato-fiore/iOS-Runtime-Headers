// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFINTERACTIVEDISMISSCONTROLLER_H
#define SFINTERACTIVEDISMISSCONTROLLER_H

@class UIPercentDrivenInteractiveTransition, UIView, NSString, UIScreenEdgePanGestureRecognizer, UIViewController;
@protocol UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning, UIViewControllerContextTransitioning, SFInteractiveDismissControllerDelegate;



@interface SFInteractiveDismissController : UIPercentDrivenInteractiveTransition <UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning>

 {
    id<UIViewControllerContextTransitioning> *_transitionContext;
    NSUInteger _dismissMode;
    NSInteger _interactionState;
    CGFloat _timestamps;
    CGFloat _velocities;
    CGFloat _accelerations;
    UIView *_dimmingView;
}


@property (nonatomic) CGFloat averageAcceleration; // ivar: _averageAcceleration
@property (nonatomic) CGFloat averageVelocity; // ivar: _averageVelocity
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SFInteractiveDismissControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UIScreenEdgePanGestureRecognizer *edgeSwipeGestureRecognizer; // ivar: _edgeSwipeGestureRecognizer
@property (retain, nonatomic) UIView *edgeSwipeView; // ivar: _edgeSwipeView
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat previousAcceleration; // ivar: _previousAcceleration
@property (nonatomic) CGFloat previousDisplacement; // ivar: _previousDisplacement
@property (nonatomic) CGFloat previousTimeStamp; // ivar: _previousTimeStamp
@property (nonatomic) CGFloat previousVelocity; // ivar: _previousVelocity
@property (nonatomic) NSUInteger sampleCount; // ivar: _sampleCount
@property (nonatomic) CGFloat skipTimeStamp; // ivar: _skipTimeStamp
@property (readonly) Class superclass;
@property (nonatomic) CGFloat totalDistance; // ivar: _totalDistance
@property (weak, nonatomic) UIViewController *viewControllerToBeDismissed; // ivar: _viewControllerToBeDismissed


-(BOOL)popGesture:(id)arg0 withRemainingDuration:(CGFloat)arg1 shouldPopWithVelocity:(*CGFloat)arg2 ;
-(CGFloat)_percentComplete:(id)arg0 ;
-(CGFloat)_translationCoefficient;
-(CGFloat)transitionDuration:(id)arg0 ;
-(id)animationControllerForDismissedController:(id)arg0 ;
-(id)animationControllerForPresentedController:(id)arg0 presentingController:(id)arg1 sourceController:(id)arg2 ;
-(id)init;
-(id)interactionControllerForDismissal:(id)arg0 ;
-(struct CGPoint )translationForStatistics;
-(struct CGPoint )velocityForStatistics;
-(void)_animateDismissalCancelTransition;
-(void)_animateDismissalCompleteTransition;
-(void)_dismissAnimateTransition:(id)arg0 ;
-(void)_presentAnimateTransition:(id)arg0 ;
-(void)_updateStatistics:(id)arg0 firstSample:(BOOL)arg1 finalSample:(BOOL)arg2 ;
-(void)animateTransition:(id)arg0 ;
-(void)cancelInteractiveTransition;
-(void)finishInteractiveTransition;
-(void)startInteractiveTransition:(id)arg0 ;
-(void)swiped:(id)arg0 ;


@end


#endif