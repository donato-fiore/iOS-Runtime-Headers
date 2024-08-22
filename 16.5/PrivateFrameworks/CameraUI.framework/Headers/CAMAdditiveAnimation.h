// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAMADDITIVEANIMATION_H
#define CAMADDITIVEANIMATION_H

@class CAMediaTimingFunction;

#import <Foundation/Foundation.h>

#import "CAMAdditiveAnimation.h"

@interface CAMAdditiveAnimation : NSObject

@property (readonly, nonatomic) CAMediaTimingFunction *_curve; // ivar: __curve
@property (readonly, nonatomic) CGFloat _duration; // ivar: __duration
@property (retain, nonatomic) CAMAdditiveAnimation *_fromAnimation; // ivar: __fromAnimation
@property (nonatomic) CGFloat _fromValue; // ivar: __fromValue
@property (nonatomic, setter=_setLastTime:) CGFloat _lastTime; // ivar: __lastTime
@property (nonatomic, setter=_setStartTime:) CGFloat _startTime; // ivar: __startTime
@property (readonly, nonatomic) CGFloat _toValue; // ivar: __toValue
@property (readonly, nonatomic, getter=isFinished) BOOL finished;
@property (readonly, nonatomic) CGFloat value;


+(id)animationToValue:(CGFloat)arg0 fromAnimation:(id)arg1 duration:(CGFloat)arg2 curve:(id)arg3 ;
+(id)animationToValue:(CGFloat)arg0 fromValue:(CGFloat)arg1 duration:(CGFloat)arg2 curve:(id)arg3 ;
-(id)description;
-(void)updateWithTimestamp:(CGFloat)arg0 ;


@end


#endif