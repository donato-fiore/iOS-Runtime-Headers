// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUIMPORTONEUPTRANSITIONCONTROLLER_H
#define PUIMPORTONEUPTRANSITIONCONTROLLER_H

@class NSString, UIPanGestureRecognizer, UIViewController;
@protocol UIGestureRecognizerDelegate, UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning;


#import "PUModalTransition.h"
#import "PUPhotoPinchGestureRecognizer.h"
#import "PUImportOneUpModalTransition.h"

@interface PUImportOneUpTransitionController : PUModalTransition <UIGestureRecognizerDelegate, UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning>



@property (readonly, nonatomic) NSInteger completionCurve;
@property (readonly, nonatomic) CGFloat completionSpeed;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIPanGestureRecognizer *dismissPanGestureRecognizer; // ivar: _dismissPanGestureRecognizer
@property (retain, nonatomic) PUPhotoPinchGestureRecognizer *dismissPinchGestureRecognizer; // ivar: _dismissPinchGestureRecognizer
@property (nonatomic) BOOL hasInstalledDismissGestureRecognizers; // ivar: _hasInstalledDismissGestureRecognizers
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger operation; // ivar: _operation
@property (readonly, nonatomic) PUPhotoPinchGestureRecognizer *presentingPinchGestureRecognizer; // ivar: _presentingPinchGestureRecognizer
@property (readonly, nonatomic) UIViewController *presentingViewController; // ivar: _presentingViewController
@property (readonly) Class superclass;
@property (retain, nonatomic) PUImportOneUpModalTransition *transition; // ivar: _transition
@property (readonly, nonatomic) BOOL wantsInteractiveStart;


-(BOOL)continuousGestureRecognizerIsActive:(id)arg0 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(id)initWithPresentingViewController:(id)arg0 pinchGestureRecognizer:(id)arg1 ;
-(id)interactionControllerForDismissal:(id)arg0 ;
-(id)interactionControllerForPresentation:(id)arg0 ;
-(id)interruptibleAnimatorForTransition:(id)arg0 ;
-(void)animationEnded:(BOOL)arg0 ;
-(void)installDismissGestureRecognizersOnView:(id)arg0 ;
-(void)maybeInitiateInteractiveDismiss:(id)arg0 ;
-(void)startInteractiveTransition:(id)arg0 ;


@end


#endif