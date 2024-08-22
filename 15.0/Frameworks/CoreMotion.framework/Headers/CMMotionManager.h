// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CMMOTIONMANAGER_H
#define CMMOTIONMANAGER_H


#import <Foundation/Foundation.h>

#import "CMAccelerometerData.h"
#import "CMAmbientPressureData.h"
#import "CMDeviceMotion.h"
#import "CMGyroData.h"
#import "CMMagnetometerData.h"

@interface CMMotionManager : NSObject {
    id *_internal;
}


@property (readonly, nonatomic, getter=isAccelerometerActive) BOOL accelerometerActive;
@property (readonly, nonatomic, getter=isAccelerometerAvailable) BOOL accelerometerAvailable;
@property (readonly) CMAccelerometerData *accelerometerData;
@property (nonatomic) CGFloat accelerometerUpdateInterval;
@property (readonly) CMAmbientPressureData *ambientPressureData;
@property (readonly, nonatomic) NSUInteger attitudeReferenceFrame;
@property (readonly) CMAmbientPressureData *compensatedAmbientPressureData;
@property (readonly) CMDeviceMotion *deviceMotion;
@property (readonly, nonatomic, getter=isDeviceMotionActive) BOOL deviceMotionActive;
@property (readonly, nonatomic, getter=isDeviceMotionAvailable) BOOL deviceMotionAvailable;
@property (nonatomic) CGFloat deviceMotionUpdateInterval;
@property (readonly, nonatomic, getter=isGyroActive) BOOL gyroActive;
@property (readonly, nonatomic, getter=isGyroAvailable) BOOL gyroAvailable;
@property (readonly) CMGyroData *gyroData;
@property (nonatomic) CGFloat gyroUpdateInterval;
@property (readonly, nonatomic, getter=isDeviceMotionLiteAvailable) BOOL isDeviceMotionLiteAvailable;
@property (readonly, nonatomic, getter=isMagnetometerActive) BOOL magnetometerActive;
@property (readonly, nonatomic, getter=isMagnetometerAvailable) BOOL magnetometerAvailable;
@property (readonly) CMMagnetometerData *magnetometerData;
@property (nonatomic) CGFloat magnetometerUpdateInterval;
@property (readonly, nonatomic, getter=isPredictedDeviceMotionAvailable) BOOL predictedDeviceMotionAvailable;
@property (nonatomic) BOOL showsDeviceMovementDisplay;
@property (readonly, nonatomic, getter=isSidebandSensorFusionAvailable) BOOL sidebandSensorFusionAvailable;


+(BOOL)configureM7Activity:(BOOL)arg0 stepCounting:(BOOL)arg1 activityForceCodeTransition:(BOOL)arg2 stepCountingForceCodeTransition:(BOOL)arg3 threshold:(BOOL)arg4 onBodyDetection:(BOOL)arg5 ispMode:(unsigned char)arg6 predictionInterval:(float)arg7 logLevel:(char)arg8 proactiveRevisitTime:(unsigned short)arg9 ;
+(BOOL)deviceMotionInitialized:(struct Sample *)arg0 ;
+(BOOL)hasRunMiniCal;
+(BOOL)northAlignedReferenceFrame:(NSUInteger)arg0 ;
+(BOOL)setUrgentCalFlag;
+(BOOL)startGyroMiniCalibration;
+(BOOL)supportsGyroMiniCalibration;
+(NSUInteger)availableAttitudeReferenceFrames;
+(struct ? )gyroCalibrationDatabaseGetBiasFit;
+(struct ? )gyroCalibrationDatabaseGetBiasFitAndEstimate:(struct ? *)arg0 atTemperature:(float)arg1 ;
+(void)dummySelector:(id)arg0 ;
+(void)dumpDb:(NSInteger)arg0 toURL:(id)arg1 onCompletion:(id)arg2 ;
+(void)initialize;
+(void)setAllowInBackground:(BOOL)arg0 ;
-(BOOL)isAmbientPressureActive;
-(BOOL)isAmbientPressureAvailable;
-(BOOL)isCompensatedAmbientPressureActive;
-(BOOL)readRawAmbientPressureSamplesFromDB:(id)arg0 toQueue:(id)arg1 where:(id)arg2 withHandler:(id)arg3 ;
-(BOOL)sendDeviceMotionError:(int)arg0 ;
-(BOOL)setMotionThreadPriority:(int)arg0 ;
-(BOOL)setSidebandSensorFusionEnable:(BOOL)arg0 ;
-(BOOL)setSidebandSensorFusionEnable:(BOOL)arg0 measureLatency:(BOOL)arg1 withSnoopHandler:(id)arg2 ;
-(BOOL)setSidebandSensorFusionEnable:(BOOL)arg0 withSnoopHandler:(id)arg1 ;
-(BOOL)useAccelerometer;
-(CGFloat)ambientPressureUpdateInterval;
-(CGFloat)compensatedAmbientPressureUpdateInterval;
-(id)computeNonlinearPRTTFromDB:(id)arg0 where:(id)arg1 ;
-(id)init;
-(id)initPrivate;
-(id)initUsing6AxisSensorFusion;
-(id)initUsingGyroOnlySensorFusion;
-(id)predictedDeviceMotionAtTimestamp:(CGFloat)arg0 error:(*id)arg1 ;
-(int)gyttNumTemperatures;
-(void)_startDeviceMotionErrorUpdatesToQueue:(id)arg0 withHandler:(id)arg1 ;
-(void)_stopDeviceMotionErrorUpdates;
-(void)applyInitialReference:(struct Sample *)arg0 ;
-(void)applyNorthReference:(struct Sample *)arg0 ;
-(void)connect;
-(void)dealloc;
-(void)deallocPrivate;
-(void)didBecomeActive:(id)arg0 ;
-(void)didBecomeActivePrivate:(id)arg0 ;
-(void)dismissDeviceMovementDisplay;
-(void)onAccelerometer:(struct Sample *)arg0 ;
-(void)onAmbientPressure:(struct Sample *)arg0 ;
-(void)onCompensatedAmbientPressure:(struct Sample *)arg0 ;
-(void)onDeviceMotion:(struct Sample *)arg0 ;
-(void)onGyro:(struct Sample *)arg0 ;
-(void)onMagnetometer:(struct Sample *)arg0 ;
-(void)rebuildGytt;
-(void)setAmbientPressureUpdateInterval:(CGFloat)arg0 ;
-(void)setAmbientPressureUpdateIntervalPrivate:(CGFloat)arg0 ;
-(void)setCompensatedAmbientPressureUpdateInterval:(CGFloat)arg0 ;
-(void)setCompensatedAmbientPressureUpdateIntervalPrivate:(CGFloat)arg0 ;
-(void)setNotificationCallback:(*unk)arg0 info:(*void)arg1 ;
-(void)setPowerConservationMode:(int)arg0 ;
-(void)setSidebandTimeSyncHandler:(id)arg0 ;
-(void)setUseAccelerometer:(BOOL)arg0 ;
-(void)showDeviceMovementDisplay;
-(void)startAccelerometerUpdates;
-(void)startAccelerometerUpdatesPrivateToQueue:(id)arg0 withHandler:(id)arg1 ;
-(void)startAccelerometerUpdatesToQueue:(id)arg0 withHandler:(id)arg1 ;
-(void)startAmbientPressureUpdates;
-(void)startAmbientPressureUpdatesPrivateToQueue:(id)arg0 withHandler:(id)arg1 ;
-(void)startAmbientPressureUpdatesToQueue:(id)arg0 withHandler:(id)arg1 ;
-(void)startCompensatedAmbientPressureUpdates;
-(void)startCompensatedAmbientPressureUpdatesPrivateToQueue:(id)arg0 withHandler:(id)arg1 ;
-(void)startCompensatedAmbientPressureUpdatesToQueue:(id)arg0 withHandler:(id)arg1 ;
-(void)startDeviceMotionLiteFusedUpdatesForDeviceID:(id)arg0 toQueue:(id)arg1 withHandler:(id)arg2 ;
-(void)startDeviceMotionLiteUpdatesForDeviceID:(id)arg0 usingConfiguration:(struct ? )arg1 toQueue:(id)arg2 withFusedHandler:(id)arg3 ;
-(void)startDeviceMotionUpdates;
-(void)startDeviceMotionUpdatesPrivateUsingReferenceFrame:(NSUInteger)arg0 toQueue:(id)arg1 withHandler:(id)arg2 ;
-(void)startDeviceMotionUpdatesToQueue:(id)arg0 withHandler:(id)arg1 ;
-(void)startDeviceMotionUpdatesUsingReferenceFrame:(NSUInteger)arg0 ;
-(void)startDeviceMotionUpdatesUsingReferenceFrame:(NSUInteger)arg0 toQueue:(id)arg1 withHandler:(id)arg2 ;
-(void)startGyroUpdates;
-(void)startGyroUpdatesPrivateToQueue:(id)arg0 withHandler:(id)arg1 ;
-(void)startGyroUpdatesToQueue:(id)arg0 withHandler:(id)arg1 ;
-(void)startMagnetometerUpdates;
-(void)startMagnetometerUpdatesPrivateToQueue:(id)arg0 withHandler:(id)arg1 ;
-(void)startMagnetometerUpdatesToQueue:(id)arg0 withHandler:(id)arg1 ;
-(void)stopAccelerometerUpdates;
-(void)stopAccelerometerUpdatesPrivate;
-(void)stopAmbientPressureUpdates;
-(void)stopAmbientPressureUpdatesPrivate;
-(void)stopCompensatedAmbientPressureUpdates;
-(void)stopCompensatedAmbientPressureUpdatesPrivate;
-(void)stopDeviceMotionLiteUpdatesForDeviceID:(id)arg0 ;
-(void)stopDeviceMotionUpdates;
-(void)stopDeviceMotionUpdatesPrivate;
-(void)stopGyroUpdates;
-(void)stopGyroUpdatesPrivate;
-(void)stopMagnetometerUpdates;
-(void)stopMagnetometerUpdatesPrivate;
-(void)willResignActive:(id)arg0 ;
-(void)willResignActivePrivate:(id)arg0 ;


@end


#endif