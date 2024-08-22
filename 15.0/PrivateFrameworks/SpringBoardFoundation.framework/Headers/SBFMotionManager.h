// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBFMOTIONMANAGER_H
#define SBFMOTIONMANAGER_H

@class CMMotionManager;

#import <Foundation/Foundation.h>

#import "SBFInfiniteImpulseResponseFilter.h"

@interface SBFMotionManager : NSObject {
    CGFloat _x;
    CGFloat _y;
    CGFloat _z;
    ? _attitude;
    CGFloat _roll;
    CGFloat _pitch;
    CGFloat _yaw;
    CGFloat _coefficient;
    CGFloat _threshold;
    NSUInteger _referenceFrame;
    CMMotionManager *_motionManager;
    BOOL _motionManagerPaused;
    SBFInfiniteImpulseResponseFilter *_motionFilterX;
    SBFInfiniteImpulseResponseFilter *_motionFilterY;
    SBFInfiniteImpulseResponseFilter *_motionFilterZ;
    SBFInfiniteImpulseResponseFilter *_motionFilterAX;
    SBFInfiniteImpulseResponseFilter *_motionFilterAY;
    SBFInfiniteImpulseResponseFilter *_motionFilterAZ;
    SBFInfiniteImpulseResponseFilter *_motionFilterAW;
    SBFInfiniteImpulseResponseFilter *_motionFilterRoll;
    SBFInfiniteImpulseResponseFilter *_motionFilterPitch;
    SBFInfiniteImpulseResponseFilter *_motionFilterYaw;
}


@property (nonatomic) CGFloat accelerometerUpdateInterval;
@property (readonly, nonatomic) ? attitude;
@property (nonatomic) CGFloat deviceMotionUpdateInterval;
@property (readonly, nonatomic) SBFInfiniteImpulseResponseFilter *motionFilterX;
@property (readonly, nonatomic) SBFInfiniteImpulseResponseFilter *motionFilterY;
@property (readonly, nonatomic) SBFInfiniteImpulseResponseFilter *motionFilterZ;
@property (readonly, nonatomic) CGFloat pitch;
@property (readonly, nonatomic) CGFloat roll;
@property (readonly, nonatomic) CGFloat x;
@property (readonly, nonatomic) CGFloat y;
@property (readonly, nonatomic) CGFloat yaw;
@property (readonly, nonatomic) CGFloat z;


-(BOOL)isDeviceMotionAvailable;
-(id)init;
-(id)initWithCoefficient:(CGFloat)arg0 ;
-(id)initWithCoefficient:(CGFloat)arg0 threshold:(CGFloat)arg1 ;
-(void)_createFilters;
-(void)createMotionManager;
-(void)pauseDeviceMotionUpdates;
-(void)startDeviceAccelerometerUpdates;
-(void)startDeviceMotionUpdates;
-(void)stopDeviceAccelerometerUpdates;
-(void)stopDeviceMotionUpdates;


@end


#endif