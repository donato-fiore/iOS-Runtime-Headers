// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _SKSTOREPRODUCTACTIVITYANIMATIONCONTROLLER_H
#define _SKSTOREPRODUCTACTIVITYANIMATIONCONTROLLER_H

@class NSString;
@protocol UIViewControllerAnimatedTransitioning, UIViewControllerContextTransitioning;

#import <Foundation/Foundation.h>


@interface _SKStoreProductActivityAnimationController : NSObject <UIViewControllerAnimatedTransitioning>

 {
    id<UIViewControllerContextTransitioning> *_transitionContext;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(CGFloat)transitionDuration:(id)arg0 ;
-(void)animateTransition:(id)arg0 ;
-(void)endDelayingAnimation;


@end


#endif