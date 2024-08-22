// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ARFACETRACKINGIMAGESENSOR_H
#define ARFACETRACKINGIMAGESENSOR_H

@class AVCaptureMetadataOutput, NSArray, AVCaptureDepthDataOutput, AVCaptureConnection, NSString;
@protocol AVCaptureMetadataOutputObjectsDelegate, OS_dispatch_semaphore;


#import "ARImageSensor.h"
#import "ARFaceData.h"

@interface ARFaceTrackingImageSensor : ARImageSensor <AVCaptureMetadataOutputObjectsDelegate>

 {
    AVCaptureMetadataOutput *_metaDataOutput;
    NSArray *_availableMetadataObjectTypes;
    AVCaptureDepthDataOutput *_depthDataOutput;
    ARFaceData *_latestFaceData;
    NSObject<OS_dispatch_semaphore> *_faceDataSemaphore;
    BOOL _signpostFirstFrameDone;
    BOOL _signpostFirstFaceDone;
    CGFloat _startTime;
    NSUInteger _droppedFramesPerSec;
    BOOL _previousImageDataValid;
    AVCaptureConnection *_depthConnection;
    AVCaptureConnection *_metadataConnection;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL recordingMode; // ivar: _recordingMode
@property (readonly) Class superclass;


-(NSInteger)_videoOrientation;
-(NSUInteger)providedDataTypes;
-(id)_configureMetaDataOutput;
-(id)configureCaptureSession;
-(id)configureCaptureSessionCalibration;
-(id)initWithSettings:(id)arg0 captureSession:(id)arg1 captureQueue:(id)arg2 ;
-(id)outputsForSynchronizer;
-(id)prepareToStart;
-(void)captureOutput:(id)arg0 didOutputMetadataObjects:(id)arg1 fromConnection:(id)arg2 ;
-(void)captureOutput:(id)arg0 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 fromConnection:(id)arg2 ;
-(void)capturedSynchedOutput:(id)arg0 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 fromVideoConnection:(id)arg2 metaDataOutput:(id)arg3 didOutputMetadataObjects:(id)arg4 didOutputDepthData:(id)arg5 atTime:(struct ? )arg6 ;
-(void)configureCaptureDevice;
-(void)dataOutputSynchronizer:(id)arg0 didOutputSynchronizedDataCollection:(id)arg1 ;
-(void)dealloc;
-(void)reconfigure:(id)arg0 ;
-(void)stop;


@end


#endif