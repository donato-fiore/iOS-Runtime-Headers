// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFFLOATSPRINGPROPERTY_H
#define SFFLOATSPRINGPROPERTY_H

@class UIViewFloatAnimatableProperty;
@protocol UIViewSpringAnimationBehaviorDescribing;



@interface SFFloatSpringProperty : UIViewFloatAnimatableProperty <UIViewSpringAnimationBehaviorDescribing>

 {
    CGFloat _dampingRatio;
    CGFloat _response;
    CGFloat _trackingDampingRatio;
    CGFloat _trackingResponse;
}


@property (nonatomic) CGFloat input;
@property (nonatomic) CGFloat output;
@property (nonatomic) BOOL primed; // ivar: _primed
@property (nonatomic) BOOL tracking; // ivar: _tracking


+(void)_withoutAnimation:(id)arg0 ;
-(CGFloat)projectForDeceleration:(CGFloat)arg0 ;
-(CGFloat)projectForTime:(CGFloat)arg0 ;
-(id)init;
-(struct ? )parametersForTransitionFromState:(int)arg0 toState:(int)arg1 ;
-(void)setDampingRatio:(CGFloat)arg0 response:(CGFloat)arg1 ;


@end


#endif