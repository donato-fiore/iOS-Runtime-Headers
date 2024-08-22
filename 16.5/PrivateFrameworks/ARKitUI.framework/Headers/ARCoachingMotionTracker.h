// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ARCOACHINGMOTIONTRACKER_H
#define ARCOACHINGMOTIONTRACKER_H


#import <Foundation/Foundation.h>


@interface ARCoachingMotionTracker : NSObject {
    ? _velocities;
    ? _lastPosition;
    CGFloat _lastTime;
    int _velocityIndex;
    CGFloat _lastThresholdBreakTime;
    int _thresholdBreakCount;
    BOOL _wasMoving;
}


@property (readonly, nonatomic) BOOL didStartMoving;
@property (readonly, nonatomic) BOOL didStopMoving;
@property (nonatomic) BOOL isMoving; // ivar: _isMoving


-(id)calcAverageVelocity;
-(id)init;
-(void)clear;
-(void)updateWithFrame:(id)arg0 ;


@end


#endif