// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TUANIMATIONPOINTFUNCTION_H
#define TUANIMATIONPOINTFUNCTION_H

@class CAMediaTimingFunction;

#import <Foundation/Foundation.h>

#import "TUAnimationFloatFunction.h"

@interface TUAnimationPointFunction : NSObject

@property (nonatomic) CGPoint endValue; // ivar: _endValue
@property (nonatomic) CGFloat speed; // ivar: _speed
@property (nonatomic) CGPoint startValue; // ivar: _startValue
@property (retain, nonatomic) CAMediaTimingFunction *timingFunction; // ivar: _timingFunction
@property (retain, nonatomic) TUAnimationFloatFunction *xFunction; // ivar: _xFunction
@property (retain, nonatomic) TUAnimationFloatFunction *yFunction; // ivar: _yFunction


-(id)initWithTimingFunction:(id)arg0 startRect:(struct CGPoint )arg1 endRect:(struct CGPoint )arg2 speed:(CGFloat)arg3 ;
-(struct CGPoint )solveForTime:(CGFloat)arg0 ;
-(void)_reloadFunctions;


@end


#endif