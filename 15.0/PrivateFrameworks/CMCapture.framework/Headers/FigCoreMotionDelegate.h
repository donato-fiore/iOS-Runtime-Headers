// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FIGCOREMOTIONDELEGATE_H
#define FIGCOREMOTIONDELEGATE_H

@class CMMotionManager;

#import <Foundation/Foundation.h>


@interface FigCoreMotionDelegate : NSObject {
    _opaque_pthread_mutex_t ringMutex;
    CMMotionManager *motionManager;
    BOOL manageFusedMotion;
    BOOL manageAccel;
    BOOL manageGravity;
    int accelRingIndex;
    float accelRingX;
    float accelRingY;
    float accelRingZ;
    CGFloat accelRingTime;
    int fusedRingIndex;
    CGFloat fusedRingTime;
    BOOL fusedRingDoingBiasEstimation;
    ? fusedRingAccel;
    ? fusedRingQuaternion;
    ? fusedRingPosition;
    *OpaqueFigSemaphore dataSemaphore;
    CGFloat latestMotionDataTime;
    CGFloat latestGravityDataTime;
    BOOL copyingAllData;
    CGFloat dLatestFusedMotionCopied;
    CGFloat dLatestTimestamp;
    CGFloat dGyroUpdateInterval;
    CGFloat dStartOfLogging;
    ? previousQuaternion;
    ? currentQuaternion;
    BOOL computingPosition;
    ? position;
    ? velocity;
}




-(BOOL)isCopyingAllData;
-(BOOL)managingAccel;
-(BOOL)managingFusedMotion;
-(BOOL)managingGravity;
-(id)copyAllFusedMotionData;
-(id)copyFusedMotionData:(CGFloat)arg0 endTime:(CGFloat)arg1 timeoutValue:(CGFloat)arg2 errOut:(*int)arg3 ;
-(id)copyNewFusedMotionData;
-(id)init;
-(id)initWithAccelerometer:(BOOL)arg0 gravityZ:(BOOL)arg1 fusedMotion:(BOOL)arg2 accelUpdateInterval:(float)arg3 fusedMotionUpdateInterval:(float)arg4 motionCallbackThreadPriority:(id)arg5 ;
-(int)getFusedVectorX:(*float)arg0 y:(*float)arg1 z:(*float)arg2 forTimeStamp:(CGFloat)arg3 ;
-(int)getGravityX:(*float)arg0 y:(*float)arg1 z:(*float)arg2 forTimeStamp:(CGFloat)arg3 ;
-(int)getLatestMotionDataTime:(*CGFloat)arg0 ;
-(int)getVectorX:(*float)arg0 y:(*float)arg1 z:(*float)arg2 forTimeStamp:(CGFloat)arg3 ;
-(int)updateCurrentQuaternionForTimeStamp:(CGFloat)arg0 ;
-(int)updateCurrentQuaternionForTimeStamps:(CGFloat)arg0 withEnd:(CGFloat)arg1 ;
-(void)dealloc;
-(void)didUpdateAcceleration:(struct ? )arg0 time:(CGFloat)arg1 ;
-(void)didUpdateFusedMotionWithDeviceMotion:(struct ? )arg0 time:(CGFloat)arg1 ifsync:(BOOL)arg2 ;
-(void)didUpdateGravity:(struct ? )arg0 time:(CGFloat)arg1 ;
-(void)didUpdatePositionWithAcceleration:(struct ? *)arg0 forTimeStamp:(CGFloat)arg1 ;
-(void)didUpdatePositionWithTimeStamp:(CGFloat)arg0 ;
-(void)didUpdateVelocityWithAcceleration:(struct ? *)arg0 forTimeStamp:(CGFloat)arg1 ;
-(void)getCurrentAttitudeRoll:(*CGFloat)arg0 pitch:(*CGFloat)arg1 yaw:(*CGFloat)arg2 ;
-(void)getCurrentDeltaAttitudeRoll:(*CGFloat)arg0 pitch:(*CGFloat)arg1 yaw:(*CGFloat)arg2 ;
-(void)getCurrentDeltaQuaternion:(struct ? *)arg0 ;
-(void)getCurrentQuaternion:(struct ? *)arg0 ;
-(void)getPositionX:(*float)arg0 y:(*float)arg1 z:(*float)arg2 forTimeStamp:(CGFloat)arg3 ;
-(void)updateDeviceCallback:(BOOL)arg0 fusedMotionUpdateInterval:(float)arg1 ;
-(void)updateGyroInterval:(float)arg0 ;


@end


#endif