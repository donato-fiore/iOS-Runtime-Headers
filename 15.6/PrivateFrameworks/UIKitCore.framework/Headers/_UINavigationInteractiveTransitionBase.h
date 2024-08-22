// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UINAVIGATIONINTERACTIVETRANSITIONBASE_H
#define _UINAVIGATIONINTERACTIVETRANSITIONBASE_H

@class CADisplayLink, NSString;
@protocol UIGestureRecognizerDelegate, _UINavigationInteractiveTransitionBaseDelegate;


#import "UIPercentDrivenInteractiveTransition.h"
#import "UIView.h"
#import "UIViewController.h"
#import "_UINavigationParallaxTransition.h"
#import "UIPanGestureRecognizer.h"
#import "UIGestureRecognizer.h"

@interface _UINavigationInteractiveTransitionBase : UIPercentDrivenInteractiveTransition <UIGestureRecognizerDelegate>

 {
    UIView *_gestureRecognizerView;
    BOOL __updateRequestActive;
    CADisplayLink *_displayLink;
    CGFloat _timestamps;
    CGFloat _velocities;
    CGFloat _accelerations;
}


@property (nonatomic, setter=_setCompletesTransitionOnEnd:) BOOL _completesTransitionOnEnd; // ivar: __completesTransitionOnEnd
@property (nonatomic, setter=_setInteractionState:) NSInteger _interactionState; // ivar: __interactionState
@property (weak, nonatomic, setter=_setParent:) UIViewController *_parent; // ivar: __parent
@property (nonatomic, setter=_setShouldReverseLayoutDirection:) BOOL _shouldReverseLayoutDirection; // ivar: __shouldReverseLayoutDirection
@property (nonatomic, setter=_setStoppedTransitionWasCancelled:) BOOL _stoppedTransitionWasCancelled; // ivar: __stoppedTransitionWasCancelled
@property (nonatomic, setter=_setTransitionWasStopped:) BOOL _transitionWasStopped; // ivar: __transitionWasStopped
@property (nonatomic, setter=_setUseAugmentedShouldPopDecisionProcedure:) BOOL _useAugmentedShouldPopDecisionProcedure; // ivar: __useAugmentedShouldPopDecisionProcedure
@property (retain, nonatomic) _UINavigationParallaxTransition *animationController; // ivar: _animationController
@property (nonatomic) CGFloat averageAcceleration; // ivar: _averageAcceleration
@property (nonatomic) CGFloat averageVelocity; // ivar: _averageVelocity
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_UINavigationInteractiveTransitionBaseDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) UIPanGestureRecognizer *gestureRecognizer; // ivar: _gestureRecognizer
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL inSpringAnimation; // ivar: _inSpringAnimation
@property (readonly, nonatomic, getter=_navigationGesture) UIGestureRecognizer *navigationGesture;
@property (nonatomic) CGFloat previousAcceleration; // ivar: _previousAcceleration
@property (nonatomic) CGFloat previousDisplacement; // ivar: _previousDisplacement
@property (nonatomic) CGFloat previousTimeStamp; // ivar: _previousTimeStamp
@property (nonatomic) CGFloat previousVelocity; // ivar: _previousVelocity
@property (nonatomic) NSUInteger sampleCount; // ivar: _sampleCount
@property (nonatomic) BOOL shouldReverseTranslation; // ivar: _shouldReverseTranslation
@property (nonatomic) CGFloat skipTimeStamp; // ivar: _skipTimeStamp
@property (nonatomic) BOOL springAnimationIsPending; // ivar: _springAnimationIsPending
@property (readonly) Class superclass;
@property (nonatomic) CGFloat totalDistance; // ivar: _totalDistance


-(BOOL)_gestureRecognizer:(id)arg0 shouldBeRequiredToFailByGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)popGesture:(id)arg0 withRemainingDuration:(CGFloat)arg1 shouldPopWithVelocity:(*CGFloat)arg2 ;
-(CGFloat)_translationCoefficient;
-(id)initWithGestureRecognizerView:(id)arg0 animator:(id)arg1 delegate:(id)arg2 ;
-(void)_completeStoppedInteractiveTransition;
-(void)_resetInteractionController;
-(void)_stopInteractiveTransition;
-(void)_updateStatistics:(id)arg0 firstSample:(BOOL)arg1 finalSample:(BOOL)arg2 ;
-(void)cancelInteractiveTransition;
-(void)dealloc;
-(void)finishInteractiveTransition;
-(void)handleNavigationTransition:(id)arg0 ;
-(void)setNotInteractiveTransition;
-(void)startInteractiveTransition;
-(void)startInteractiveTransition:(id)arg0 ;


@end


#endif