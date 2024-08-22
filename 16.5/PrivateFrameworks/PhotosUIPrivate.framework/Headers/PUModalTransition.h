// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUMODALTRANSITION_H
#define PUMODALTRANSITION_H

@class NSString;
@protocol UIViewControllerTransitioningDelegate;


#import "PUViewControllerTransition.h"

@interface PUModalTransition : PUViewControllerTransition <UIViewControllerTransitioningDelegate>



@property (nonatomic, setter=_setOperation:) NSInteger _operation; // ivar: __operation
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)animationControllerForDismissedController:(id)arg0 ;
-(id)animationControllerForPresentedController:(id)arg0 presentingController:(id)arg1 sourceController:(id)arg2 ;
-(id)interactionControllerForDismissal:(id)arg0 ;
-(id)interactionControllerForPresentation:(id)arg0 ;
-(id)presentingViewController;
-(void)animateTransition:(id)arg0 ;
-(void)cancelInteractiveTransition;
-(void)completeInteractiveDismissTransitionFinished:(BOOL)arg0 ;
-(void)completeInteractivePresentTransitionFinished:(BOOL)arg0 ;
-(void)finishInteractiveTransition;
-(void)imageModulationIntensityDidChange;
-(void)transitionWillDismissInteractively:(BOOL)arg0 ;
-(void)transitionWillPresentInteractively:(BOOL)arg0 ;


@end


#endif