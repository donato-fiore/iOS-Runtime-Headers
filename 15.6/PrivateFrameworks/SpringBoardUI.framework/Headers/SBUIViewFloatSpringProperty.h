// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBUIVIEWFLOATSPRINGPROPERTY_H
#define SBUIVIEWFLOATSPRINGPROPERTY_H

@class UIViewFloatAnimatableProperty;
@protocol UIViewSpringAnimationBehaviorDescribing;



@interface SBUIViewFloatSpringProperty : UIViewFloatAnimatableProperty <UIViewSpringAnimationBehaviorDescribing>

 {
    CGFloat _dampingRatio;
    CGFloat _response;
    CGFloat _impulse;
    CGFloat _trackingDampingRatio;
    CGFloat _trackingResponse;
    CGFloat _trackingImpulse;
}


@property (nonatomic) CGFloat input;
@property (nonatomic) CGFloat output;
@property (nonatomic) BOOL tracking; // ivar: _tracking


+(void)_withoutAnimation:(id)arg0 ;
-(CGFloat)projectForDeceleration:(CGFloat)arg0 ;
-(CGFloat)projectForTime:(CGFloat)arg0 ;
-(id)init;
-(struct ? )parametersForTransitionFromState:(int)arg0 toState:(int)arg1 ;
-(void)setDampingRatio:(CGFloat)arg0 response:(CGFloat)arg1 ;
-(void)setDampingRatio:(CGFloat)arg0 response:(CGFloat)arg1 impulse:(CGFloat)arg2 ;


@end


#endif