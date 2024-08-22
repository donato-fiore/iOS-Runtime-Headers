// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKDASHBOARDPRESENTATIONCONTROLLER_H
#define GKDASHBOARDPRESENTATIONCONTROLLER_H

@class NSString;
@protocol UIViewControllerAnimatedTransitioning, UIViewControllerTransitioningDelegate;

#import <Foundation/Foundation.h>


@interface GKDashboardPresentationController : NSObject <UIViewControllerAnimatedTransitioning, UIViewControllerTransitioningDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL presenting; // ivar: _presenting
@property (readonly) Class superclass;
@property (nonatomic) CGFloat transitionDuration; // ivar: _transitionDuration


+(void)presentViewController:(id)arg0 presentingViewController:(id)arg1 animated:(BOOL)arg2 ;
-(CGFloat)transitionDuration:(id)arg0 ;
-(id)animationControllerForDismissedController:(id)arg0 ;
-(id)animationControllerForPresentedController:(id)arg0 presentingController:(id)arg1 sourceController:(id)arg2 ;
-(id)init;
-(void)animateTransition:(id)arg0 ;
-(void)animationEnded:(BOOL)arg0 ;


@end


#endif