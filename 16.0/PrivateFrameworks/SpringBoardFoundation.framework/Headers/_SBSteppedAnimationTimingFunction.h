// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SBSTEPPEDANIMATIONTIMINGFUNCTION_H
#define _SBSTEPPEDANIMATIONTIMINGFUNCTION_H

@class CAMediaTimingFunction;

#import <Foundation/Foundation.h>


@interface _SBSteppedAnimationTimingFunction : NSObject

@property (readonly, nonatomic) SBNormalizedTransitionInterval constrainedRange; // ivar: _constrainedRange
@property (readonly, nonatomic) CAMediaTimingFunction *timingFunction; // ivar: _timingFunction


+(id)timingFunctionWithTimingFunction:(id)arg0 constrainedToIntervalBetween:(CGFloat)arg1 and:(CGFloat)arg2 ;
-(CGFloat)valueAtPercentage:(CGFloat)arg0 ;
-(id)initWithTimingFunction:(id)arg0 constrainedToIntervalBetween:(CGFloat)arg1 and:(CGFloat)arg2 ;


@end


#endif