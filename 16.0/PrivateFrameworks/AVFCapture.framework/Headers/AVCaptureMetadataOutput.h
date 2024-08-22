// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVCAPTUREMETADATAOUTPUT_H
#define AVCAPTUREMETADATAOUTPUT_H

@class NSArray, NSString;
@protocol AVCaptureDataOutputDelegateOverride, OS_dispatch_queue, AVCaptureMetadataOutputObjectsDelegate;


#import "AVCaptureOutput.h"
#import "AVCaptureMetadataOutputInternal.h"

@interface AVCaptureMetadataOutput : AVCaptureOutput <AVCaptureDataOutputDelegateOverride>

 {
    AVCaptureMetadataOutputInternal *_internal;
}


@property (readonly, nonatomic) NSArray *availableMetadataObjectTypes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id *delegateOverride;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateOverrideCallbackQueue;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *metadataObjectTypes;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *metadataObjectsCallbackQueue;
@property (readonly, nonatomic) NSObject<AVCaptureMetadataOutputObjectsDelegate> *metadataObjectsDelegate;
@property (nonatomic) CGRect rectOfInterest;
@property (readonly) Class superclass;


+(id)_metadataConstantValueToName:(id)arg0 ;
+(id)new;
+(void)initialize;
-(BOOL)canAddConnection:(id)arg0 failureReason:(*id)arg1 ;
-(BOOL)isAppClipCodeMetadataObjectTypeAvailable;
-(BOOL)isAppClipCodeMetadataSupported;
-(BOOL)isFaceTrackingMetadataObjectTypesAvailable;
-(BOOL)isFaceTrackingPlusEnabled;
-(BOOL)isFaceTrackingSupported;
-(BOOL)isFaceTrackingUsingFaceRecognition;
-(BOOL)isHeadMetadataObjectTypesAvailable;
-(BOOL)isHeadMetadataSupported;
-(BOOL)isOfflineVideoStabilizationMotionMetadataObjectTypesAvailable;
-(BOOL)isOfflineVideoStabilizationMotionMetadataSupported;
-(BOOL)isTextRegionMetadataObjectTypeAvailable;
-(BOOL)isTextRegionMetadataSupported;
-(BOOL)isVideoPreviewHistogramMetadataObjectTypesAvailable;
-(BOOL)isVideoPreviewHistogramMetadataSupported;
-(NSInteger)faceTrackingMaxFaces;
-(float)faceTrackingNetworkFailureThresholdMultiplier;
-(id)_metadataIdentifiers;
-(id)connectionMediaTypes;
-(id)init;
-(void)_handleLocalQueueMessage:(struct FigLocalQueueMessage )arg0 ;
-(void)_handleNotification:(id)arg0 payload:(id)arg1 ;
-(void)_handleRemoteQueueOperation:(struct FigRemoteOperation *)arg0 ;
-(void)_processSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)_updateLocalQueue:(struct localQueueOpaque *)arg0 ;
-(void)_updateRemoteQueue:(struct remoteQueueReceiverOpaque *)arg0 ;
-(void)attachSafelyToFigCaptureSession:(struct OpaqueFigCaptureSession *)arg0 ;
-(void)dealloc;
-(void)detachSafelyFromFigCaptureSession:(struct OpaqueFigCaptureSession *)arg0 ;
-(void)setAppClipCodeMetadataObjectTypeAvailable:(BOOL)arg0 ;
-(void)setFaceTrackingMaxFaces:(NSInteger)arg0 ;
-(void)setFaceTrackingMetadataObjectTypesAvailable:(BOOL)arg0 ;
-(void)setFaceTrackingNetworkFailureThresholdMultiplier:(float)arg0 ;
-(void)setFaceTrackingPlusEnabled:(BOOL)arg0 ;
-(void)setFaceTrackingUsesFaceRecognition:(BOOL)arg0 ;
-(void)setHeadMetadataObjectTypesAvailable:(BOOL)arg0 ;
-(void)setOfflineVideoStabilizationMotionMetadataObjectTypesAvailable:(BOOL)arg0 ;
-(void)setTextRegionMetadataObjectTypeAvailable:(BOOL)arg0 ;
-(void)setVideoPreviewHistogramMetadataObjectTypesAvailable:(BOOL)arg0 ;


@end


#endif