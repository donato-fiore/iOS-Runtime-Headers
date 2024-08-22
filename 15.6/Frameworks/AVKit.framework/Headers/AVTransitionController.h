// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVTRANSITIONCONTROLLER_H
#define AVTRANSITIONCONTROLLER_H

@class NSString, CAMediaTimingFunction, UIView;
@protocol UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning, AVTransitionDelegate, AVTransitionDriverDelegate, UIViewControllerTransitioningDelegate, AVTransitionControllerDelegate, AVTransitionDriver;

#import <Foundation/Foundation.h>

#import "AVTransition.h"
#import "AVDisplayLink.h"
#import "AVInteractiveTransitionGestureTracker.h"
#import "AVPresentationContext.h"
#import "AVPresentationController.h"

@interface AVTransitionController : NSObject <UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning, AVTransitionDelegate, AVTransitionDriverDelegate, UIViewControllerTransitioningDelegate>



@property (retain, nonatomic) AVTransition *activeTransition; // ivar: _activeTransition
@property (readonly, nonatomic) NSInteger completionCurve;
@property (readonly, nonatomic) CGFloat completionSpeed;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AVTransitionControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) AVDisplayLink *displayLink; // ivar: _displayLink
@property (retain, nonatomic) CAMediaTimingFunction *easeInFunction; // ivar: _easeInFunction
@property (retain, nonatomic) CAMediaTimingFunction *easeOutFunction; // ivar: _easeOutFunction
@property (readonly, nonatomic) AVInteractiveTransitionGestureTracker *gestureTracker; // ivar: _gestureTracker
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) UIView *interactionView; // ivar: _interactionView
@property (retain, nonatomic) NSObject<AVTransitionDriver> *interactiveGestureTracker; // ivar: _interactiveGestureTracker
@property (readonly, weak, nonatomic) AVPresentationContext *presentationContext;
@property (weak, nonatomic) AVPresentationController *presentationController; // ivar: _presentationController
@property (weak, nonatomic) UIView *sourceViewForNextPresentation; // ivar: _sourceViewForNextPresentation
@property (nonatomic) NSInteger state; // ivar: _state
@property (readonly) Class superclass;
@property (nonatomic) CGPoint touchGravity; // ivar: _touchGravity
@property (copy, nonatomic) id *transitionDidBeginHandler; // ivar: _transitionDidBeginHandler
@property (readonly, nonatomic) BOOL wantsInteractiveStart;


-(BOOL)transitionDriver:(id)arg0 gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(BOOL)transitionDriver:(id)arg0 shouldDriveTransitionInteractionOfType:(NSInteger)arg1 ;
-(CGFloat)transitionDuration:(id)arg0 ;
-(id)animationControllerForDismissedController:(id)arg0 ;
-(id)animationControllerForPresentedController:(id)arg0 presentingController:(id)arg1 sourceController:(id)arg2 ;
-(id)interactionControllerForDismissal:(id)arg0 ;
-(id)interactionControllerForPresentation:(id)arg0 ;
-(id)presentationControllerForPresentedViewController:(id)arg0 presentingViewController:(id)arg1 sourceViewController:(id)arg2 ;
-(id)transitionBackgroundViewBackgroundColor:(id)arg0 ;
-(id)transitionPresentedViewBackgroundColor:(id)arg0 ;
-(void)_cancelTransition;
-(void)_finishTransition;
-(void)_fireDidBeginHandlerIfNeeded;
-(void)_startObservingAnimatorProgress;
-(void)addTransitionDriver:(id)arg0 toView:(id)arg1 ;
-(void)animateTransition:(id)arg0 ;
-(void)animationEnded:(BOOL)arg0 ;
-(void)beginFullScreenDismissalOfViewController:(id)arg0 animated:(BOOL)arg1 isInteractive:(BOOL)arg2 completion:(id)arg3 ;
-(void)beginFullScreenPresentationOfViewController:(id)arg0 fromView:(id)arg1 isInteractive:(BOOL)arg2 completion:(id)arg3 ;
-(void)startInteractiveTransition:(id)arg0 ;
-(void)transitionDriver:(id)arg0 didBeginTrackingTransitionInteraction:(NSInteger)arg1 readyToProceedHandler:(id)arg2 ;
-(void)transitionDriverDidCancelInteraction:(id)arg0 ;
-(void)transitionDriverDidContinueInteraction:(id)arg0 ;
-(void)transitionDriverDidFinishInteraction:(id)arg0 ;
-(void)transitionWillComplete:(id)arg0 success:(BOOL)arg1 continueBlock:(id)arg2 ;


@end


#endif