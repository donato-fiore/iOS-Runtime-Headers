// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVCAPTUREVISIONDATAOUTPUT_H
#define AVCAPTUREVISIONDATAOUTPUT_H

@class NSString;
@protocol AVCaptureDataOutputDelegateOverride, AVCaptureVisionDataOutputDelegate, OS_dispatch_queue;


#import "AVCaptureOutput.h"
#import "AVCaptureVisionDataOutputInternal.h"

@interface AVCaptureVisionDataOutput : AVCaptureOutput <AVCaptureDataOutputDelegateOverride>

 {
    AVCaptureVisionDataOutputInternal *_internal;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSObject<AVCaptureVisionDataOutputDelegate> *delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateCallbackQueue;
@property (readonly, nonatomic) id *delegateOverride;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateOverrideCallbackQueue;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isFeatureBinningEnabled) BOOL featureBinningEnabled;
@property (nonatomic, getter=isFeatureOrientationAssignmentEnabled) BOOL featureOrientationAssignmentEnabled;
@property (nonatomic) float gaussianPyramidBaseOctaveDownscalingFactor;
@property (nonatomic) NSUInteger gaussianPyramidOctavesCount;
@property (readonly) NSUInteger hash;
@property (nonatomic) ? maxBurstDuration;
@property (nonatomic) NSUInteger maxKeypointsCount;
@property (nonatomic) ? minBurstFrameDuration;
@property (nonatomic) ? minFrameDuration;
@property (readonly) Class superclass;


+(id)new;
+(void)initialize;
-(BOOL)appliesMirroringWithPhysicalFlipForConnection:(id)arg0 ;
-(BOOL)appliesOrientationWithPhysicalRotationForConnection:(id)arg0 ;
-(BOOL)canAddConnection:(id)arg0 failureReason:(*id)arg1 ;
-(float)keypointDetectionThreshold;
-(id)connectionMediaTypes;
-(id)init;
-(void)_handleLocalQueueMessage:(struct FigLocalQueueMessage )arg0 ;
-(void)_handleNotification:(id)arg0 payload:(id)arg1 ;
-(void)_handleRemoteQueueOperation:(struct FigRemoteOperation *)arg0 ;
-(void)_initializeClientVisiblePropertiesForSourceDevice:(id)arg0 ;
-(void)_processSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)_updateLocalQueue:(struct localQueueOpaque *)arg0 ;
-(void)_updateRemoteQueue:(struct remoteQueueReceiverOpaque *)arg0 ;
-(void)attachSafelyToFigCaptureSession:(struct OpaqueFigCaptureSession *)arg0 ;
-(void)dealloc;
-(void)detachSafelyFromFigCaptureSession:(struct OpaqueFigCaptureSession *)arg0 ;
-(void)handleChangedActiveFormat:(id)arg0 forDevice:(id)arg1 ;
-(void)removeConnection:(id)arg0 ;
-(void)setKeypointDetectionThreshold:(float)arg0 ;
-(void)triggerBurst;


@end


#endif