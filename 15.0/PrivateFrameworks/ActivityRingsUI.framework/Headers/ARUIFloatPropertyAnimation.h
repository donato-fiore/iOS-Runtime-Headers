// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ARUIFLOATPROPERTYANIMATION_H
#define ARUIFLOATPROPERTYANIMATION_H



#import "ARUIAnimatableObjectPropertyAnimation.h"

@interface ARUIFloatPropertyAnimation : ARUIAnimatableObjectPropertyAnimation

@property (readonly, nonatomic) float currentValue; // ivar: _currentValue
@property (readonly, nonatomic) float endValue; // ivar: _endValue
@property (readonly, nonatomic) float startValue; // ivar: _startValue


// +(id)animationWithEndingFloatValue:(float)arg0 duration:(CGFloat)arg1 customTimingFunction:(id)arg2 completion:(unk)arg3  ;
+(id)animationWithEndingFloatValue:(float)arg0 duration:(CGFloat)arg1 timingFunction:(id)arg2 completion:(id)arg3 ;
-(id)valueByAddingCurrentValueToValue:(id)arg0 ;
-(void)_updateWithProgress:(float)arg0 ;


@end


#endif