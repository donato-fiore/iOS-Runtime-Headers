// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVCAPTURECONNECTION_H
#define AVCAPTURECONNECTION_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "AVCaptureConnectionInternal.h"
#import "AVCaptureOutput.h"
#import "AVCaptureVideoPreviewLayer.h"

@interface AVCaptureConnection : NSObject {
    AVCaptureConnectionInternal *_internal;
}


@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (readonly, nonatomic) NSInteger activeVideoStabilizationMode;
@property (readonly, nonatomic) NSArray *audioChannels;
@property (nonatomic) BOOL automaticallyAdjustsVideoMirroring;
@property (nonatomic, getter=isCameraIntrinsicMatrixDeliveryEnabled) BOOL cameraIntrinsicMatrixDeliveryEnabled;
@property (readonly, nonatomic, getter=isCameraIntrinsicMatrixDeliverySupported) BOOL cameraIntrinsicMatrixDeliverySupported;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic) BOOL enablesVideoStabilizationWhenAvailable;
@property (readonly, nonatomic) NSArray *inputPorts;
@property (readonly, nonatomic) AVCaptureOutput *output;
@property (nonatomic) NSInteger preferredVideoStabilizationMode;
@property (readonly, nonatomic, getter=isVideoFieldModeSupported) BOOL supportsVideoFieldMode; // ivar: _supportsVideoFieldMode
@property (readonly, nonatomic, getter=isVideoMaxFrameDurationSupported) BOOL supportsVideoMaxFrameDuration;
@property (readonly, nonatomic, getter=isVideoMinFrameDurationSupported) BOOL supportsVideoMinFrameDuration;
@property (readonly, nonatomic, getter=isVideoMirroringSupported) BOOL supportsVideoMirroring;
@property (readonly, nonatomic, getter=isVideoOrientationSupported) BOOL supportsVideoOrientation;
@property (readonly, nonatomic, getter=isVideoStabilizationSupported) BOOL supportsVideoStabilization;
@property (nonatomic) NSInteger videoFieldMode; // ivar: _videoFieldMode
@property (nonatomic) ? videoMaxFrameDuration;
@property (readonly, nonatomic) CGFloat videoMaxScaleAndCropFactor;
@property (nonatomic) ? videoMinFrameDuration;
@property (nonatomic, getter=isVideoMirrored) BOOL videoMirrored;
@property (nonatomic) NSInteger videoOrientation;
@property (readonly, nonatomic) AVCaptureVideoPreviewLayer *videoPreviewLayer;
@property (nonatomic) CGFloat videoScaleAndCropFactor;
@property (readonly, nonatomic, getter=isVideoStabilizationEnabled) BOOL videoStabilizationEnabled;


+(id)connectionWithInputPort:(id)arg0 videoPreviewLayer:(id)arg1 ;
+(id)connectionWithInputPorts:(id)arg0 output:(id)arg1 ;
+(void)initialize;
-(BOOL)_updateCameraIntrinsicMatrixDeliverySupported;
-(BOOL)isDebugMetadataSidecarFileEnabled;
-(BOOL)isLive;
-(BOOL)isLivePhotoMetadataWritingSupported;
-(BOOL)isTrulyDisabled;
-(BOOL)isVideoMaxFrameDurationSet;
-(BOOL)isVideoMinFrameDurationSet;
-(BOOL)isVideoRetainedBufferCountHintSupported;
-(BOOL)livePhotoMetadataWritingEnabled;
-(BOOL)sourcesFromFrontFacingCamera;
-(NSInteger)_resolveActiveVideoStabilizationMode:(NSInteger)arg0 format:(id)arg1 ;
-(NSInteger)videoMirroringMethodForMovieRecording;
-(float)getAvgAudioLevelForChannel:(id)arg0 ;
-(float)getPeakAudioLevelForChannel:(id)arg0 ;
-(id)description;
-(id)figCaptureConnectionConfigurationForSessionPreset:(id)arg0 allConnections:(id)arg1 ;
-(id)initWithInputPort:(id)arg0 videoPreviewLayer:(id)arg1 ;
-(id)initWithInputPorts:(id)arg0 output:(id)arg1 ;
-(id)mediaType;
-(id)session;
-(id)sourceDevice;
-(id)sourceDeviceInput;
-(id)supportedVideoMirroringMethodsForMovieRecording;
-(int)changeSeed;
-(int)videoRetainedBufferCountHint;
-(unsigned int)clientRetainedBufferCount;
-(void)_updateActiveVideoStabilizationMode:(NSInteger)arg0 bumpChangeSeed:(BOOL)arg1 ;
-(void)_updateMaxScaleAndCropFactorForFormat:(id)arg0 ;
-(void)_updatePropertiesForFormat:(id)arg0 ;
-(void)_updateSupportedVideoMirroringMethodsForMovieRecording;
-(void)bumpChangeSeed;
-(void)dealloc;
-(void)handleChangedActiveFormat:(id)arg0 forDevice:(id)arg1 ;
-(void)inputPortFormatDescriptionChanged:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)setDebugMetadataSidecarFileEnabled:(BOOL)arg0 ;
-(void)setLivePhotoMetadataWritingEnabled:(BOOL)arg0 ;
-(void)setVideoMirroringMethodForMovieRecording:(NSInteger)arg0 ;
-(void)setVideoRetainedBufferCountHint:(int)arg0 ;
-(void)setupInternalStorage;
-(void)setupObservers;
-(void)teardownObservers;
-(void)updateAudioChannelsArray;
-(void)updateAudioLevelsArray;


@end


#endif