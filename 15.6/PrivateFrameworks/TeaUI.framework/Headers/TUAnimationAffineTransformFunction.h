// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TUANIMATIONAFFINETRANSFORMFUNCTION_H
#define TUANIMATIONAFFINETRANSFORMFUNCTION_H

@class CAMediaTimingFunction;

#import <Foundation/Foundation.h>

#import "TUAnimationFloatFunction.h"

@interface TUAnimationAffineTransformFunction : NSObject

@property (retain, nonatomic) TUAnimationFloatFunction *aFunction; // ivar: _aFunction
@property (retain, nonatomic) TUAnimationFloatFunction *bFunction; // ivar: _bFunction
@property (retain, nonatomic) TUAnimationFloatFunction *cFunction; // ivar: _cFunction
@property (retain, nonatomic) TUAnimationFloatFunction *dFunction; // ivar: _dFunction
@property (nonatomic) CGAffineTransform endValue; // ivar: _endValue
@property (nonatomic) CGFloat speed; // ivar: _speed
@property (nonatomic) CGAffineTransform startValue; // ivar: _startValue
@property (retain, nonatomic) CAMediaTimingFunction *timingFunction; // ivar: _timingFunction
@property (retain, nonatomic) TUAnimationFloatFunction *txFunction; // ivar: _txFunction
@property (retain, nonatomic) TUAnimationFloatFunction *tyFunction; // ivar: _tyFunction


-(id)initWithTimingFunction:(id)arg0 startTransform:(struct CGAffineTransform )arg1 endTransform:(struct CGAffineTransform )arg2 speed:(CGFloat)arg3 ;
-(struct CGAffineTransform )solveForTime:(CGFloat)arg0 ;


@end


#endif