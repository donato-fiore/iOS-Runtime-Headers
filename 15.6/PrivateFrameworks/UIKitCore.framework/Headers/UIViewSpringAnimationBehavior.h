// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIVIEWSPRINGANIMATIONBEHAVIOR_H
#define UIVIEWSPRINGANIMATIONBEHAVIOR_H

@protocol UIViewSpringAnimationBehaviorDescribing;

#import <Foundation/Foundation.h>


@interface UIViewSpringAnimationBehavior : NSObject <UIViewSpringAnimationBehaviorDescribing>

 {
    CGFloat _trackingDampingRatio;
    CGFloat _trackingResponse;
    CGFloat _dampingRatio;
    CGFloat _response;
    CGFloat _dampingRatioSmoothing;
    CGFloat _responseSmoothing;
}


@property (nonatomic) CGFloat inertialProjectionDeceleration; // ivar: _inertialProjectionDeceleration
@property (nonatomic) CGFloat inertialTargetSmoothing; // ivar: _inertialTargetSmoothing


+(id)behaviorWithDampingRatio:(CGFloat)arg0 response:(CGFloat)arg1 ;
-(id)init;
-(struct ? )parametersForTransitionFromState:(int)arg0 toState:(int)arg1 ;
-(void)setDampingRatio:(CGFloat)arg0 response:(CGFloat)arg1 ;
-(void)setTrackingDampingRatio:(CGFloat)arg0 response:(CGFloat)arg1 dampingRatioSmoothing:(CGFloat)arg2 responseSmoothing:(CGFloat)arg3 ;


@end


#endif