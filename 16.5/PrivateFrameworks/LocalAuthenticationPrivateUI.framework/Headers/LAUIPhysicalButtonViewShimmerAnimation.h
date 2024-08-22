// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LAUIPHYSICALBUTTONVIEWSHIMMERANIMATION_H
#define LAUIPHYSICALBUTTONVIEWSHIMMERANIMATION_H

@class CAGradientLayer;


#import "LAUIPhysicalButtonViewAnimation.h"

@interface LAUIPhysicalButtonViewShimmerAnimation : LAUIPhysicalButtonViewAnimation {
    CAGradientLayer *_shimmerGradient;
}




-(BOOL)_isReducedMotionEnabled;
-(CGFloat)duration;
-(void)_beginReducedMotionAnimationWithDelay:(CGFloat)arg0 ;
-(void)_beginRegularMotionAnimationWithDelay:(CGFloat)arg0 ;
-(void)_endShimmerAnimation;
-(void)beginWithDelay:(CGFloat)arg0 ;
-(void)endImmediately;


@end


#endif