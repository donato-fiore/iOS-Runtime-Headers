// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSUISLIDEANIMATOR_H
#define AMSUISLIDEANIMATOR_H

@class CASpringAnimation, NSString;
@protocol UIViewControllerAnimatedTransitioning;

#import <Foundation/Foundation.h>


@interface AMSUISlideAnimator : NSObject <UIViewControllerAnimatedTransitioning>



@property (retain, nonatomic) CASpringAnimation *animation; // ivar: _animation
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(CGFloat)transitionDuration:(id)arg0 ;
-(void)animateTransition:(id)arg0 ;


@end


#endif