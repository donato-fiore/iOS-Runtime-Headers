// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CMCAMERAWORKOUTSESSION_H
#define CMCAMERAWORKOUTSESSION_H

@protocol OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "CMAudioAccessoryManager.h"

@interface CMCameraWorkoutSession : NSObject {
    unique_ptr<CMCameraWorkoutLogger, std::default_delete<CMCameraWorkoutLogger>> _logger;
    CMAudioAccessoryManager *_audioAccessoryManager;
    *Dispatcher _deviceMotionDispatcher;
    *Dispatcher _accelerometerDispatcher;
    *Dispatcher _gyroDispatcher;
    *Dispatcher _gyroTemperatureDispatcher;
    BOOL _logAirpodsDM;
    BOOL _logDM;
    BOOL _logAccel;
    BOOL _logGyro;
    NSObject<OS_dispatch_source> *_logCountersTimer;
    atomic<unsigned int> _accelCount;
    atomic<unsigned int> _gyroCount;
    atomic<unsigned int> _dmCount;
    atomic<unsigned int> _airpodsDmCount;
    atomic<unsigned int> _skeletonCount;
    atomic<unsigned int> _facePoseCount;
    atomic<unsigned int> _watchActiveCalorieCount;
    atomic<unsigned int> _watchBasalCalorieCount;
    atomic<unsigned int> _watchHeartRateCount;
    atomic<unsigned int> _heartRateReferenceCount;
    atomic<unsigned int> _fitnessMachineSampleCount;
}




-(id)init;
-(id)initWithOptions:(id)arg0 ;
-(id)stats;
-(void)_feed2DSkeleton:(id)arg0 localMachtime:(CGFloat)arg1 globalMachtime:(CGFloat)arg2 ;
-(void)_feed3DLiftedSkeleton:(id)arg0 localMachtime:(CGFloat)arg1 globalMachtime:(CGFloat)arg2 ;
-(void)_feed3DRetargetedSkeleton:(id)arg0 localMachtime:(CGFloat)arg1 globalMachtime:(CGFloat)arg2 ;
-(void)_feedAccel:(struct Sample *)arg0 ;
-(void)_feedAccessoryConfig:(*void)arg0 ;
-(void)_feedAccessoryInEarStatus:(int)arg0 ;
-(void)_feedDeviceMotion:(struct Sample *)arg0 ;
-(void)_feedGyro:(struct Sample *)arg0 ;
-(void)_feedGyroTemperature:(struct Temperature *)arg0 ;
-(void)_feedHeadAccessoryDeviceMotion:(id)arg0 ;
-(void)dealloc;
-(void)feedBodyMetrics:(id)arg0 ;
-(void)feedFacePose:(id)arg0 ;
-(void)feedFitnessMachineSample:(id)arg0 ;
-(void)feedHeartRateReference:(unsigned short)arg0 localMachtime:(CGFloat)arg1 globalMachtime:(CGFloat)arg2 ;
-(void)feedSkeleton:(id)arg0 ;
-(void)feedWatchActiveCalories:(float)arg0 localMachtime:(CGFloat)arg1 globalMachtime:(CGFloat)arg2 ;
-(void)feedWatchBasalCalories:(float)arg0 localMachtime:(CGFloat)arg1 globalMachtime:(CGFloat)arg2 ;
-(void)feedWatchHeartRate:(float)arg0 confidence:(float)arg1 localMachtime:(CGFloat)arg2 globalMachtime:(CGFloat)arg3 ;
-(void)feedWorkoutEvent:(id)arg0 ;
-(void)flushMsl;
-(void)logCounters;
-(void)start;
-(void)stop;


@end


#endif