// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EDGERECTANGLEANIMATOR_H
#define EDGERECTANGLEANIMATOR_H

@protocol RectangleAnimator, FramingSpaceManager;

#import <Foundation/Foundation.h>

#import "AnimationEngine.h"
#import "CinematicFramingSessionOptions.h"

@interface EdgeRectangleAnimator : NSObject <RectangleAnimator>

 {
    ? _currentState;
    NSInteger _movementState;
    AnimationEngine *_xAxisAnimationEngine;
    AnimationEngine *_yAxisAnimationEngine;
    AnimationEngine *_sizeAnimationEngine;
    id<FramingSpaceManager> *_framingSpaceManager;
}


@property (retain, nonatomic) CinematicFramingSessionOptions *options; // ivar: options
@property (readonly, nonatomic) CGRect rectangle;
@property (readonly, nonatomic) float sizeSpeed;
@property (nonatomic) float verticalAccelerationMultiplier; // ivar: verticalAccelerationMultiplier
@property (readonly, nonatomic) float xSpeed;
@property (readonly, nonatomic) float ySpeed;


-(id)initWithRectangle:(struct CGRect )arg0 framingSpaceManager:(id)arg1 ;
-(struct CGRect )driveAnimationToTarget:(struct CGRect )arg0 atTime:(struct ? )arg1 inState:(NSInteger)arg2 ;
-(void)drivePivotAnimationsToTarget:(struct ? )arg0 withPivotDescriptions:(struct ? )arg1 atTime:(struct ? )arg2 ;
-(void)driveWidthAnimationToTarget:(struct ? )arg0 withPivotDescriptions:(struct ? )arg1 atTime:(struct ? )arg2 ;
-(void)driveXPivotWithLocation:(float)arg0 velocity:(float)arg1 pivotDescriptions:(struct ? )arg2 toTargetLocation:(float)arg3 targetVelocity:(float)arg4 atTime:(struct ? )arg5 ;
-(void)driveYPivotWithLocation:(float)arg0 velocity:(float)arg1 pivotDescriptions:(struct ? )arg2 toTargetLocation:(float)arg3 targetVelocity:(float)arg4 atTime:(struct ? )arg5 ;
-(void)resetToRectangle:(struct CGRect )arg0 ;


@end


#endif