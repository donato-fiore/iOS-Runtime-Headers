// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CMMOTIONMANAGERINTERNAL_H
#define CMMOTIONMANAGERINTERNAL_H

@class NSOperationQueue, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CMMotionManagerInternal : NSObject {
    os_unfair_lock_s fSampleLock;
    *Dispatcher fAccelerometerDispatcher;
    CGFloat fAccelerometerUpdateInterval;
    id *fAccelerometerHandler;
    NSOperationQueue *fAccelerometerQueue;
    CGFloat fLastAccelerometerNotificationTimestamp;
    Sample fLatestAccelerometerSample;
    *Dispatcher fAmbientPressureDispatcher;
    CGFloat fAmbientPressureUpdateInterval;
    id *fAmbientPressureHandler;
    NSOperationQueue *fAmbientPressureQueue;
    CGFloat fLastAmbientPressureNotificationTimestamp;
    Sample fLatestAmbientPressureSample;
    *Dispatcher fCompensatedAmbientPressureDispatcher;
    CGFloat fCompensatedAmbientPressureUpdateInterval;
    id *fCompensatedAmbientPressureHandler;
    NSOperationQueue *fCompensatedAmbientPressureQueue;
    CGFloat fLastCompensatedAmbientPressureNotificationTimestamp;
    Sample fLatestCompensatedAmbientPressureSample;
    *Dispatcher fGyroDispatcher;
    CGFloat fGyroUpdateInterval;
    id *fGyroHandler;
    NSOperationQueue *fGyroQueue;
    CGFloat fLastGyroNotificationTimestamp;
    Sample fLatestGyroSample;
    *Dispatcher fDeviceMotionDispatcher;
    CGFloat fDeviceMotionUpdateInterval;
    id *fDeviceMotionHandler;
    NSOperationQueue *fDeviceMotionQueue;
    CGFloat fLastDeviceMotionNotificationTimestamp;
    int fDeviceMotionMode;
    NSUInteger fAttitudeReferenceFrame;
    BOOL fCompassCalibrationHud;
    BOOL fIsCompassCalibrated;
    BOOL fIsUsingCalibratedCompass;
    BOOL fHaveSentDeviceRequiresMovementError;
    BOOL fHaveSentTrueNorthUnavailableError;
    CGFloat fDeviceMotionStartTimestamp;
    ? fInitialReferenceRotation;
    BOOL fIsInitialReferenceAvailable;
    *Dispatcher fMagnetometerDispatcher;
    CGFloat fMagnetometerUpdateInterval;
    id *fMagnetometerHandler;
    NSOperationQueue *fMagnetometerQueue;
    CGFloat fLastMagnetometerNotificationTimestamp;
    Sample fLatestMagnetometerSample;
    BOOL fShowsDeviceMovementDisplay;
    *Dispatcher fPrivateAccelerometerDataDispatcher;
    *unk fPrivateAccelerometerDataCallback;
    *void fPrivateAccelerometerDataCallbackInfo;
    *Dispatcher fPrivateGyroDataDispatcher;
    *unk fPrivateGyroDataCallback;
    *void fPrivateGyroDataCallbackInfo;
    *Dispatcher fPrivateMagnetometerDataDispatcher;
    *unk fPrivateMagnetometerDataCallback;
    *void fPrivateMagnetometerDataCallbackInfo;
    *Dispatcher fPrivateDeviceMotionDispatcher;
    *unk fPrivateDeviceMotionCallback;
    *void fPrivateDeviceMotionCallbackInfo;
    BOOL fPrivateDeviceMotionUse9Axis;
    BOOL fPrivateUseAccelerometer;
    *void fConnection;
    NSObject<OS_dispatch_queue> *fConnectionQueue;
    BOOL fSidebandSensorFusionEnabled;
    BOOL fSidebandSensorFusionLatency;
    BOOL fSidebandSensorFusionSnoop;
    unique_ptr<CLIspDataVisitor, std::default_delete<CLIspDataVisitor>> fSidebandVisitor;
    int fPrivatePowerConservationMode;
    *unk fPrivateNotificationCallback;
    *void fPrivateNotificationCallbackInfo;
    *Dispatcher fPrivateDeviceMotionSensorStatusDispatcher;
    id *fDeviceMotionErrorHandler;
    NSOperationQueue *fDeviceMotionErrorQueue;
    BOOL fIsApplicationActive;
    unique_ptr<CLDeviceMotionLiteService, std::default_delete<CLDeviceMotionLiteService>> fDeviceMotionLiteService;
    unique_ptr<CMMotionManagerStatsCollector, std::default_delete<CMMotionManagerStatsCollector>> fMotionManagerStatsCollector;
}


@property (retain, nonatomic) NSOperationQueue *fDeviceMotionLiteClientQueue; // ivar: _fDeviceMotionLiteClientQueue
@property (copy, nonatomic) id *fDeviceMotionLiteFusedHandler; // ivar: _fDeviceMotionLiteFusedHandler
@property (retain, nonatomic) NSString *fDeviceMotionLitePhysicalDeviceID; // ivar: _fDeviceMotionLitePhysicalDeviceID


-(id)init;
-(void)dealloc;
-(void)teardownPrivate;


@end


#endif