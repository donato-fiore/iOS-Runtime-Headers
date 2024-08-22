// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TUANIMATIONFLOATFUNCTION_H
#define TUANIMATIONFLOATFUNCTION_H

@class CAMediaTimingFunction;

#import <Foundation/Foundation.h>


@interface TUAnimationFloatFunction : NSObject

@property (nonatomic) CGFloat endValue; // ivar: _endValue
@property (nonatomic) CGFloat speed; // ivar: _speed
@property (nonatomic) CGFloat startValue; // ivar: _startValue
@property (retain, nonatomic) CAMediaTimingFunction *timingFunction; // ivar: _timingFunction


-(CGFloat)solveForTime:(CGFloat)arg0 ;
-(id)init;
-(id)initWithTimingFunction:(id)arg0 startValue:(CGFloat)arg1 endValue:(CGFloat)arg2 speed:(CGFloat)arg3 ;


@end


#endif