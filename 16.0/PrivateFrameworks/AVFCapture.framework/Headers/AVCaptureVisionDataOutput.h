// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVCAPTUREVISIONDATAOUTPUT_H
#define AVCAPTUREVISIONDATAOUTPUT_H

@class NSString, NSData;
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
@property (nonatomic, getter=isDynamicThresholdingEnabled) BOOL dynamicThresholdingEnabled;
@property (readonly, nonatomic, getter=isDynamicThresholdingSupported) BOOL dynamicThresholdingSupported;
@property (nonatomic, getter=isFeatureBinningEnabled) BOOL featureBinningEnabled;
@property (nonatomic) NSUInteger featureMatchingDescriptorSize;
@property (nonatomic, getter=isFeatureMatchingEnabled) BOOL featureMatchingEnabled;
@property (readonly, nonatomic, getter=isFeatureMatchingSupported) BOOL featureMatchingSupported;
@property (nonatomic, getter=isFeatureOrientationAssignmentEnabled) BOOL featureOrientationAssignmentEnabled;
@property (nonatomic) float gaussianPyramidBaseOctaveDownscalingFactor;
@property (nonatomic) NSUInteger gaussianPyramidOctavesCount;
@property (nonatomic) NSUInteger hammingDistanceThreshold;
@property (readonly, nonatomic, getter=isHammingDistanceThresholdSupported) BOOL hammingDistanceThresholdSupported;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger keypointDetectionFlowType;
@property (retain, nonatomic) NSData *laccConfigAndMetadata;
@property (readonly, nonatomic, getter=isLACCConfigAndMetadataSupported) BOOL laccConfigAndMetadataSupported;
@property (nonatomic) ? maxBurstDuration;
@property (nonatomic) NSUInteger maxKeypointsCount;
@property (nonatomic) ? minBurstFrameDuration;
@property (nonatomic) ? minFrameDuration;
@property (nonatomic) float orientationDistanceThreshold;
@property (readonly, nonatomic, getter=isOrientationDistanceThresholdSupported) BOOL orientationDistanceThresholdSupported;
@property (nonatomic) float sigmaDistanceThreshold;
@property (readonly, nonatomic, getter=isSigmaDistanceThresholdSupported) BOOL sigmaDistanceThresholdSupported;
@property (nonatomic) float squareDistanceDisparityFraction;
@property (readonly, nonatomic, getter=isSquareDistanceDisparityFractionSupported) BOOL squareDistanceDisparityFractionSupported;
@property (nonatomic) NSUInteger subPixelThreshold;
@property (readonly, nonatomic, getter=isSubPixelThresholdSupported) BOOL subPixelThresholdSupported;
@property (readonly) Class superclass;


+(id)new;
+(void)initialize;
-(BOOL)_isPropertySupported:(id)arg0 ;
-(BOOL)appliesMirroringWithPhysicalFlipForConnection:(id)arg0 ;
-(BOOL)appliesOrientationWithPhysicalRotationForConnection:(id)arg0 ;
-(BOOL)areRuntimeUpdatesSupported;
-(BOOL)canAddConnection:(id)arg0 failureReason:(*id)arg1 ;
-(BOOL)isKeypointDetectionFlowTypeSupported:(NSUInteger)arg0 ;
-(float)keypointDetectionThreshold;
-(id)addConnection:(id)arg0 error:(*id)arg1 ;
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
-(void)setRuntimeUpdates:(id)arg0 ;
-(void)triggerBurst;


@end


#endif