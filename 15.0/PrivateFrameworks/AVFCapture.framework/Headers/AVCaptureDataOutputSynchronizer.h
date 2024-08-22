// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVCAPTUREDATAOUTPUTSYNCHRONIZER_H
#define AVCAPTUREDATAOUTPUTSYNCHRONIZER_H

@class NSArray, NSString;
@protocol AVCaptureVideoDataOutputSampleBufferDelegate, AVCaptureAudioDataOutputSampleBufferDelegate, AVCaptureMetadataOutputObjectsDelegate, AVCaptureDepthDataOutputDelegate, AVCaptureVisionDataOutputDelegate, AVCapturePointCloudDataOutputDelegate, AVCaptureCameraCalibrationDataOutputDelegate, AVCaptureDataOutputSynchronizerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AVCaptureDataOutputSynchronizerInternal.h"

@interface AVCaptureDataOutputSynchronizer : NSObject <AVCaptureVideoDataOutputSampleBufferDelegate, AVCaptureAudioDataOutputSampleBufferDelegate, AVCaptureMetadataOutputObjectsDelegate, AVCaptureDepthDataOutputDelegate, AVCaptureVisionDataOutputDelegate, AVCapturePointCloudDataOutputDelegate, AVCaptureCameraCalibrationDataOutputDelegate>

 {
    AVCaptureDataOutputSynchronizerInternal *_internal;
}


@property (readonly, retain) NSArray *dataOutputs;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSObject<AVCaptureDataOutputSynchronizerDelegate> *delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateCallbackQueue;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)initialize;
-(BOOL)_allSlaveSynchronizedDataOutputsContainTimestampEqualToOrGreaterThanMasterTimestamp:(struct ? )arg0 ;
-(id)initWithDataOutputs:(id)arg0 ;
-(int)_computedMasterSynchronizedDataQueueMaxDepthForDataOutputs:(id)arg0 ;
-(struct ? )_earliestSlaveSynchronizedDataQueueTimestamp;
-(void)_adjustSynchronizedDataTimestamps;
-(void)_appendSynchronizedData:(id)arg0 forCaptureOutput:(id)arg1 ;
-(void)_assignTimestampAdjustmentQueueToDataOutputStorageWithCommonProvenance;
-(void)_createTimestampHistoryQueuesForMetadataOutputStoragesWithNoTimestampAdjustmentQueues;
-(void)_dispatchRipenedSynchronizedData;
-(void)_dispatchSynchronizedDataWithTimestamp:(struct ? )arg0 ;
-(void)_overrideDataOutputDelegatesForDelegateCallbackQueue:(id)arg0 ;
-(void)cameraCalibrationDataOutput:(id)arg0 didDropCameraCalibrationDataAtTimestamp:(struct ? )arg1 connection:(id)arg2 reason:(NSInteger)arg3 ;
-(void)cameraCalibrationDataOutput:(id)arg0 didOutputCameraCalibrationData:(id)arg1 timestamp:(struct ? )arg2 connection:(id)arg3 ;
-(void)captureOutput:(id)arg0 didDropSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 fromConnection:(id)arg2 ;
-(void)captureOutput:(id)arg0 didOutputMetadataObjects:(id)arg1 fromConnection:(id)arg2 ;
-(void)captureOutput:(id)arg0 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 fromConnection:(id)arg2 ;
-(void)dealloc;
-(void)depthDataOutput:(id)arg0 didDropDepthData:(id)arg1 timestamp:(struct ? )arg2 connection:(id)arg3 reason:(NSInteger)arg4 ;
-(void)depthDataOutput:(id)arg0 didOutputDepthData:(id)arg1 timestamp:(struct ? )arg2 connection:(id)arg3 ;
-(void)pointCloudDataOutput:(id)arg0 didDropPointCloudData:(id)arg1 timestamp:(struct ? )arg2 connection:(id)arg3 reason:(NSInteger)arg4 ;
-(void)pointCloudDataOutput:(id)arg0 didOutputPointCloudData:(id)arg1 timestamp:(struct ? )arg2 connection:(id)arg3 ;
-(void)visionDataOutput:(id)arg0 didDropVisionDataPixelBufferForTimestamp:(struct ? )arg1 connection:(id)arg2 reason:(NSInteger)arg3 ;
-(void)visionDataOutput:(id)arg0 didOutputVisionDataPixelBuffer:(struct __CVBuffer *)arg1 timestamp:(struct ? )arg2 connection:(id)arg3 ;


@end


#endif