// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ARPARENTIMAGESENSOR_H
#define ARPARENTIMAGESENSOR_H

@class AVCaptureConnection, AVCaptureDeviceInput, AVCaptureAudioDataOutput, AVCaptureSession, NSString, NSMutableArray;
@protocol AVCaptureAudioDataOutputSampleBufferDelegate, ARSensor, ARImageSensorDataSource, OS_dispatch_queue, ARSensorDelegate;

#import <Foundation/Foundation.h>

#import "ARBufferPopulationMonitor.h"
#import "ARParentImageSensorSettings.h"

@interface ARParentImageSensor : NSObject <AVCaptureAudioDataOutputSampleBufferDelegate, ARSensor, ARImageSensorDataSource>

 {
    ARBufferPopulationMonitor *_bufferPopulationMonitor;
    NSObject<OS_dispatch_queue> *_captureQueue;
    BOOL _startingCaptureSession;
}


@property (readonly, nonatomic) AVCaptureConnection *audioConnection; // ivar: _audioConnection
@property (readonly, nonatomic) AVCaptureDeviceInput *audioInput; // ivar: _audioInput
@property (readonly, nonatomic) AVCaptureAudioDataOutput *audioOutput; // ivar: _audioOutput
@property (readonly, nonatomic) AVCaptureSession *captureSession; // ivar: _captureSession
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ARSensorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL interrupted; // ivar: _interrupted
@property (nonatomic) NSUInteger powerUsage; // ivar: _powerUsage
@property (nonatomic) BOOL recordingMode; // ivar: _recordingMode
@property BOOL running; // ivar: _running
@property (retain, nonatomic) NSMutableArray *sensors; // ivar: _sensors
@property (readonly, copy, nonatomic) ARParentImageSensorSettings *settings; // ivar: _settings
@property (readonly) Class superclass;
@property BOOL unrecoverable; // ivar: _unrecoverable


-(BOOL)_validateCameraAuthorization;
-(BOOL)_validateMicrophoneAuthorization;
-(BOOL)canReconfigure:(id)arg0 ;
-(NSUInteger)providedDataTypes;
-(id)captureDeviceTypeToExtrinsicsMapForImageSensor:(id)arg0 ;
-(id)initWithSettings:(id)arg0 ;
-(void)_configureAudioCapture;
-(void)addSensorForSettings:(id)arg0 ;
-(void)captureOutput:(id)arg0 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 fromConnection:(id)arg2 ;
-(void)captureSessionStateChanged:(id)arg0 ;
-(void)dealloc;
-(void)forceUpdatePowerUsage:(NSUInteger)arg0 ;
-(void)reconfigure:(id)arg0 ;
-(void)start;
-(void)stop;


@end


#endif