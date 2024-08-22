// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKCOMPACTNAVIGATIONCONTAINERCONTROLLERPRESENTATIONANIMATOR_H
#define PKCOMPACTNAVIGATIONCONTAINERCONTROLLERPRESENTATIONANIMATOR_H

@class UIViewController, UIView, NSString;
@protocol UIViewControllerAnimatedTransitioning, UIViewControllerContextTransitioning;

#import <Foundation/Foundation.h>

#import "PKCompactNavigationContainerController.h"

@interface PKCompactNavigationContainerControllerPresentationAnimator : NSObject <UIViewControllerAnimatedTransitioning>

 {
    id<UIViewControllerContextTransitioning> *_transitionContext;
    BOOL _presenting;
    UIViewController *_presentingVC;
    UIView *_presentingView;
    PKCompactNavigationContainerController *_presentedVC;
    UIView *_presentedView;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(CGFloat)transitionDuration:(id)arg0 ;
-(id)initWithPresenting:(BOOL)arg0 ;
-(void)_updateWithTransitionContext:(id)arg0 ;
-(void)animateTransition:(id)arg0 ;


@end


#endif