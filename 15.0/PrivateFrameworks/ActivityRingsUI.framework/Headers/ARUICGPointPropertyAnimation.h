// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ARUICGPOINTPROPERTYANIMATION_H
#define ARUICGPOINTPROPERTYANIMATION_H



#import "ARUIAnimatableObjectPropertyAnimation.h"

@interface ARUICGPointPropertyAnimation : ARUIAnimatableObjectPropertyAnimation

@property (readonly, nonatomic) CGPoint currentValue; // ivar: _currentValue
@property (readonly, nonatomic) CGPoint endValue; // ivar: _endValue
@property (readonly, nonatomic) CGPoint startValue; // ivar: _startValue


+(id)animationWithEndingCGPointValue:(struct CGPoint )arg0 duration:(CGFloat)arg1 timingFunction:(id)arg2 completion:(id)arg3 ;
-(id)valueByAddingCurrentValueToValue:(id)arg0 ;
-(void)_updateWithProgress:(float)arg0 ;


@end


#endif