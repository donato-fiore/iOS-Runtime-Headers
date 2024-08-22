// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLEXPANDEDPLATTERTRANSITIONINGDELEGATE_H
#define PLEXPANDEDPLATTERTRANSITIONINGDELEGATE_H

@class NSString, UIPresentationController;
@protocol UIViewControllerTransitioningDelegate;

#import <Foundation/Foundation.h>


@interface PLExpandedPlatterTransitioningDelegate : NSObject <UIViewControllerTransitioningDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic, getter=_presentationController, setter=_setPresentationController:) UIPresentationController *presentationController; // ivar: _presentationController
@property (readonly) Class superclass;


-(id)animationControllerForDismissedController:(id)arg0 ;
-(id)animationControllerForPresentedController:(id)arg0 presentingController:(id)arg1 sourceController:(id)arg2 ;
-(id)presentationControllerForPresentedViewController:(id)arg0 presentingViewController:(id)arg1 sourceViewController:(id)arg2 ;
-(void)viewControllerAnimator:(id)arg0 willBeginDismissalAnimationWithTransitionContext:(id)arg1 ;
-(void)viewControllerAnimator:(id)arg0 willBeginPresentationAnimationWithTransitionContext:(id)arg1 ;


@end


#endif