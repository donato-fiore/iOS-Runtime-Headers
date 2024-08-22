// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TUANIMATIONRECTFUNCTION_H
#define TUANIMATIONRECTFUNCTION_H

@class CAMediaTimingFunction;

#import <Foundation/Foundation.h>

#import "TUAnimationPointFunction.h"
#import "TUAnimationSizeFunction.h"

@interface TUAnimationRectFunction : NSObject

@property (nonatomic) CGRect endValue; // ivar: _endValue
@property (retain, nonatomic) TUAnimationPointFunction *originFunction; // ivar: _originFunction
@property (retain, nonatomic) TUAnimationSizeFunction *sizeFunction; // ivar: _sizeFunction
@property (nonatomic) CGFloat speed; // ivar: _speed
@property (nonatomic) CGRect startValue; // ivar: _startValue
@property (retain, nonatomic) CAMediaTimingFunction *timingFunction; // ivar: _timingFunction


-(id)initWithTimingFunction:(id)arg0 startRect:(struct CGRect )arg1 endRect:(struct CGRect )arg2 speed:(CGFloat)arg3 ;
-(struct CGRect )solveForTime:(CGFloat)arg0 ;
-(void)_reloadFunctions;


@end


#endif