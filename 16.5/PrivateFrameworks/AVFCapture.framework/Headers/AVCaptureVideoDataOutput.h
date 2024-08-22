// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVCAPTUREVIDEODATAOUTPUT_H
#define AVCAPTUREVIDEODATAOUTPUT_H

@class NSArray, NSString, NSDictionary;
@protocol AVCaptureDataOutputDelegateOverride, OS_dispatch_queue, AVCaptureVideoDataOutputSampleBufferDelegate;


#import "AVCaptureOutput.h"
#import "AVCaptureVideoDataOutputInternal.h"

@interface AVCaptureVideoDataOutput : AVCaptureOutput <AVCaptureDataOutputDelegateOverride>

 {
    AVCaptureVideoDataOutputInternal *_internal;
}


@property (nonatomic) BOOL alwaysDiscardsLateVideoFrames;
@property (nonatomic) BOOL automaticallyConfiguresOutputBufferDimensions;
@property (readonly, nonatomic) NSArray *availableVideoCVPixelFormatTypes;
@property (readonly, nonatomic) NSArray *availableVideoCodecTypes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id *delegateOverride;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateOverrideCallbackQueue;
@property (nonatomic) BOOL deliversPreviewSizedOutputBuffers;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) ? minFrameDuration;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *sampleBufferCallbackQueue;
@property (readonly, nonatomic) NSObject<AVCaptureVideoDataOutputSampleBufferDelegate> *sampleBufferDelegate;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSDictionary *videoSettings;


+(id)new;
+(void)initialize;
-(BOOL)appliesMirroringWithPhysicalFlipForConnection:(id)arg0 ;
-(BOOL)appliesOrientationWithPhysicalRotationForConnection:(id)arg0 ;
-(BOOL)canAddConnection:(id)arg0 failureReason:(*id)arg1 ;
-(BOOL)hasRequiredOutputFormatForConnection:(id)arg0 ;
-(BOOL)isSceneStabilityMetadataEnabled;
-(BOOL)isSceneStabilityMetadataSupported;
-(BOOL)isVideoSettingsDimensionsOverrideEnabled;
-(BOOL)updateVideoSettingsForConnection:(id)arg0 ;
-(id)addConnection:(id)arg0 error:(*id)arg1 ;
-(id)availableVideoCodecTypesForAssetWriterWithOutputFileType:(id)arg0 ;
-(id)connectionMediaTypes;
-(id)fullyPopulatedVideoSettingsForSettingsDictionary:(id)arg0 connection:(id)arg1 ;
-(id)init;
-(id)outputScalingModeForSourceFormat:(id)arg0 ;
-(id)recommendedVideoSettingsForAssetWriterWithOutputFileType:(id)arg0 ;
-(id)recommendedVideoSettingsForVideoCodecType:(id)arg0 assetWriterOutputFileType:(id)arg1 ;
-(id)supportedAssetWriterOutputFileTypes;
-(id)supportedVideoSettingsKeys;
-(id)vettedVideoSettingsForSettingsDictionary:(id)arg0 connection:(id)arg1 ;
-(struct CGSize )outputSizeForSourceFormat:(id)arg0 ;
-(unsigned int)requiredOutputFormatForConnection:(id)arg0 ;
-(void)_handleLocalQueueMessage:(struct FigLocalQueueMessage )arg0 ;
-(void)_handleNotification:(id)arg0 payload:(id)arg1 ;
-(void)_handleRemoteQueueOperation:(struct FigRemoteOperation *)arg0 ;
-(void)_processSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)_updateAvailableVideoCVPixelFormatTypesForConnection:(id)arg0 ;
-(void)_updateDeliversPreviewSizedOutputBuffersForConnection:(id)arg0 sessionPreset:(id)arg1 ;
-(void)_updateLocalQueue:(struct localQueueOpaque *)arg0 ;
-(void)_updateRemoteQueue:(struct remoteQueueReceiverOpaque *)arg0 ;
-(void)attachSafelyToFigCaptureSession:(struct OpaqueFigCaptureSession *)arg0 ;
-(void)dealloc;
-(void)detachSafelyFromFigCaptureSession:(struct OpaqueFigCaptureSession *)arg0 ;
-(void)handleChangedActiveFormat:(id)arg0 forDevice:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)removeConnection:(id)arg0 ;
-(void)setSceneStabilityMetadataEnabled:(BOOL)arg0 ;


@end


#endif