// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ARIMAGESENSOR_H
#define ARIMAGESENSOR_H

@class AVCaptureVisionDataOutput, NSMutableArray, AVCameraCalibrationData, NSMutableDictionary, AVCaptureConnection, AVCaptureCameraCalibrationDataOutput, AVCaptureDevice, AVCaptureSession, NSString, AVCaptureDataOutputSynchronizer, NSArray, AVCapturePhotoOutput, AVCaptureDeviceInput, AVCaptureVideoDataOutput;
@protocol AVCaptureVideoDataOutputSampleBufferDelegate, AVCaptureDataOutputSynchronizerDelegate, AVCaptureCameraCalibrationDataOutputDelegate, AVCapturePhotoCaptureDelegate, ARSensor, OS_dispatch_queue, ARImageSensorDataSource, ARSensorDelegate;

#import <Foundation/Foundation.h>

#import "ARBufferPopulationMonitor.h"
#import "ARImageSensorSettings.h"

@interface ARImageSensor : NSObject <AVCaptureVideoDataOutputSampleBufferDelegate, AVCaptureDataOutputSynchronizerDelegate, AVCaptureCameraCalibrationDataOutputDelegate, AVCapturePhotoCaptureDelegate, ARSensor>

 {
    AVCaptureVisionDataOutput *_visionDataOutput;
    NSMutableArray *_captureDeviceKeysObserved;
    AVCameraCalibrationData *_cameraCalibrationData;
    NSMutableDictionary *_extrinsicsMap;
    BOOL _reachedExposureTargetOffsetThreshold;
    NSUInteger _initialImageDatasCounter;
}


@property (retain, nonatomic) ARBufferPopulationMonitor *bufferPopulationMonitor; // ivar: _bufferPopulationMonitor
@property (readonly, nonatomic) AVCaptureConnection *calibrationConnection; // ivar: _calibrationConnection
@property (readonly, nonatomic) AVCaptureCameraCalibrationDataOutput *calibrationOutput; // ivar: _calibrationOutput
@property (readonly, nonatomic) AVCaptureDevice *captureDevice; // ivar: _captureDevice
@property NSInteger captureFramesPerSecond; // ivar: _captureFramesPerSecond
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *captureQueue; // ivar: _captureQueue
@property (readonly, nonatomic) AVCaptureSession *captureSession; // ivar: _captureSession
@property (retain) NSMutableArray *connections; // ivar: _connections
@property (weak, nonatomic) NSObject<ARImageSensorDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property float defaultLensPosition; // ivar: _defaultLensPosition
@property (weak, nonatomic) NSObject<ARSensorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL interrupted; // ivar: _interrupted
@property (readonly, nonatomic) ARImageSensorSettings *mutableSettings;
@property (readonly, nonatomic) AVCaptureDataOutputSynchronizer *outputSynchronizer; // ivar: _outputSynchronizer
@property (readonly, nonatomic) NSArray *outputsForSynchronizer;
@property (readonly, nonatomic) AVCapturePhotoOutput *photoOutput; // ivar: _photoOutput
@property (nonatomic) NSUInteger powerUsage; // ivar: _powerUsage
@property BOOL runningSingleShotAutoFocus; // ivar: _runningSingleShotAutoFocus
@property (readonly, copy, nonatomic) ARImageSensorSettings *settings; // ivar: _settings
@property (readonly) Class superclass;
@property (retain, nonatomic) AVCaptureConnection *videoConnection; // ivar: _videoConnection
@property (retain, nonatomic) AVCaptureDeviceInput *videoInput; // ivar: _videoInput
@property (readonly, nonatomic) AVCaptureVideoDataOutput *videoOutput; // ivar: _videoOutput
@property (readonly, nonatomic) AVCaptureConnection *visionDataConnection; // ivar: _visionDataConnection


+(void)registerSignPostForImageData:(id)arg0 ;
-(BOOL)canReconfigure:(id)arg0 ;
-(NSUInteger)providedDataTypes;
-(id)_configurePhotoOutputForCaptureSession:(id)arg0 ;
-(id)_configureVisionDataOutputForSession:(id)arg0 ;
-(id)_defaultPhotoSettings;
-(id)configureCaptureSession;
-(id)configureCaptureSessionCalibration;
-(id)init;
-(id)initWithSettings:(id)arg0 captureSession:(id)arg1 captureQueue:(id)arg2 ;
-(id)logPrefix;
-(id)prepareToStart;
-(id)setActiveFormat;
-(struct ? )_createCMTimeFractionFromDecimalDuration:(CGFloat)arg0 ;
-(void)_configureCameraExposureForDevice:(id)arg0 ;
-(void)_configureCameraFocusForDevice:(id)arg0 ;
-(void)_configureCameraWhiteBalanceForDevice:(id)arg0 ;
-(void)_configureFrameRateForDevice:(id)arg0 frameRate:(CGFloat)arg1 ;
-(void)_configureImageControlModeForDevice:(id)arg0 ;
-(void)_dispatchImageData:(id)arg0 ;
-(void)cameraCalibrationDataOutput:(id)arg0 didDropCameraCalibrationDataAtTimestamp:(struct ? )arg1 connection:(id)arg2 reason:(NSInteger)arg3 ;
-(void)cameraCalibrationDataOutput:(id)arg0 didOutputCameraCalibrationData:(id)arg1 timestamp:(struct ? )arg2 connection:(id)arg3 ;
-(void)captureHighResolutionFrameWithPhotoSettings:(id)arg0 ;
-(void)captureOutput:(id)arg0 didDropSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 fromConnection:(id)arg2 ;
-(void)captureOutput:(id)arg0 didFinishProcessingPhoto:(id)arg1 error:(id)arg2 ;
-(void)captureOutput:(id)arg0 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 fromConnection:(id)arg2 ;
-(void)configureCaptureDevice;
-(void)configureFrameRateForDevice:(id)arg0 ;
-(void)configureGeometricDistortionCorrectionForDevice:(id)arg0 ;
-(void)dataOutputSynchronizer:(id)arg0 didOutputSynchronizedDataCollection:(id)arg1 ;
-(void)dealloc;
-(void)enableAutoFocusForDevice:(id)arg0 ;
-(void)enableContinuousAutoFocusIfPossible;
-(void)enableSensor:(BOOL)arg0 ;
-(void)forceUpdatePowerUsage:(NSUInteger)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)reconfigure:(id)arg0 ;
-(void)resetExposureTracking;
-(void)start;
-(void)stop;
-(void)teardown;
-(void)trackExposureTargetOffsetIfNeededForImageData:(id)arg0 shouldDrop:(*BOOL)arg1 ;
-(void)triggerVisionDataBurst;
-(void)updateCaptureDeviceFrameRate:(CGFloat)arg0 ;


@end


#endif