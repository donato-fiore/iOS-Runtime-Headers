// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ANIMATIONENGINE_H
#define ANIMATIONENGINE_H


#import <Foundation/Foundation.h>


@interface AnimationEngine : NSObject {
    MotionVector _currentMotionVector;
    float _targetValue;
    ? _startTime;
    ? _lastAnimationDriveTime;
    CGFloat _animationDuration;
    id *_animationBlock;
    NSUInteger _animationOptions;
    CGFloat _estimatedFramePeriodSeconds;
}


@property (nonatomic) float position;
@property (nonatomic) float velocity;


-(id)initWithConfiguration:(id)arg0 ;
-(void)_resetAnimations;
// -(void)animateWithDuration:(CGFloat)arg0 toValue:(float)arg1 animations:(id)arg2 options:(unk)arg3 atTime:(NSUInteger)arg4  ;
-(void)driveAnimationAtTime:(struct ? )arg0 withConstraints:(struct AnimationEngineAnimationConstraints )arg1 withMultiplier:(float)arg2 ;


@end


#endif