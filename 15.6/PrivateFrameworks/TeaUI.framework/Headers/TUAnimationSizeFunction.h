// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TUANIMATIONSIZEFUNCTION_H
#define TUANIMATIONSIZEFUNCTION_H

@class CAMediaTimingFunction;

#import <Foundation/Foundation.h>

#import "TUAnimationFloatFunction.h"

@interface TUAnimationSizeFunction : NSObject

@property (nonatomic) CGSize endValue; // ivar: _endValue
@property (retain, nonatomic) TUAnimationFloatFunction *heightFunction; // ivar: _heightFunction
@property (nonatomic) CGFloat speed; // ivar: _speed
@property (nonatomic) CGSize startValue; // ivar: _startValue
@property (retain, nonatomic) CAMediaTimingFunction *timingFunction; // ivar: _timingFunction
@property (retain, nonatomic) TUAnimationFloatFunction *widthFunction; // ivar: _widthFunction


-(id)initWithTimingFunction:(id)arg0 startRect:(struct CGSize )arg1 endRect:(struct CGSize )arg2 speed:(CGFloat)arg3 ;
-(struct CGSize )solveForTime:(CGFloat)arg0 ;
-(void)_reloadFunctions;


@end


#endif