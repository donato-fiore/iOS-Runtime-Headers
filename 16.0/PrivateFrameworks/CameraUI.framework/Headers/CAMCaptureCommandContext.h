// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAMCAPTURECOMMANDCONTEXT_H
#define CAMCAPTURECOMMANDCONTEXT_H

@class AVCaptureDevice, AVCaptureDeviceInput, AVCaptureSession, AVCaptureDeviceFormat, AVCaptureVideoDataOutput, AVCaptureMetadataOutput, AVCaptureMovieFileOutput, AVCapturePhotoOutput, NSString, AVCaptureVideoPreviewLayer, AVCaptureVideoThumbnailOutput;
@protocol AVMomentCaptureMovieRecordingDelegate, AVCaptureFileOutputRecordingDelegate, AVCapturePhotoCaptureDelegate;

#import <Foundation/Foundation.h>

#import "CAMCaptureEngine.h"
#import "CAMPanoramaConfiguration.h"
#import "CAMPanoramaOutput.h"

@interface CAMCaptureCommandContext : NSObject

@property (readonly, weak, nonatomic) CAMCaptureEngine *_captureEngine; // ivar: __captureEngine
@property (retain, nonatomic) AVCaptureDevice *currentAudioDevice; // ivar: _currentAudioDevice
@property (retain, nonatomic) AVCaptureDeviceInput *currentAudioDeviceInput; // ivar: _currentAudioDeviceInput
@property (retain, nonatomic) AVCaptureSession *currentCaptureSession; // ivar: _currentCaptureSession
@property (retain, nonatomic) AVCaptureDeviceFormat *currentDepthDataFormat; // ivar: _currentDepthDataFormat
@property (retain, nonatomic) AVCaptureVideoDataOutput *currentEffectsPreviewOutput; // ivar: _currentEffectsPreviewOutput
@property (retain, nonatomic) AVCaptureMetadataOutput *currentMetadataOutput; // ivar: _currentMetadataOutput
@property (readonly, weak, nonatomic) NSObject<AVMomentCaptureMovieRecordingDelegate> *currentMomentCaptureMovieRecordingDelegate;
@property (retain, nonatomic) AVCaptureMovieFileOutput *currentMovieFileOutput; // ivar: _currentMovieFileOutput
@property (readonly, nonatomic) CAMPanoramaConfiguration *currentPanoramaConfiguration;
@property (retain, nonatomic) CAMPanoramaOutput *currentPanoramaOutput; // ivar: _currentPanoramaOutput
@property (readonly, weak, nonatomic) NSObject<AVCaptureFileOutputRecordingDelegate> *currentRecordingDelegate;
@property (readonly, weak, nonatomic) NSObject<AVCapturePhotoCaptureDelegate> *currentStillImageDelegate;
@property (retain, nonatomic) AVCapturePhotoOutput *currentStillImageOutput; // ivar: _currentStillImageOutput
@property (retain, nonatomic) AVCaptureDevice *currentVideoDevice; // ivar: _currentVideoDevice
@property (retain, nonatomic) AVCaptureDeviceFormat *currentVideoDeviceFormat; // ivar: _currentVideoDeviceFormat
@property (retain, nonatomic) AVCaptureDeviceInput *currentVideoDeviceInput; // ivar: _currentVideoDeviceInput
@property (retain, nonatomic) NSString *currentVideoDevicePreset; // ivar: _currentVideoDevicePreset
@property (retain, nonatomic) AVCaptureVideoPreviewLayer *currentVideoPreviewLayer; // ivar: _currentVideoPreviewLayer
@property (retain, nonatomic) AVCaptureVideoThumbnailOutput *currentVideoThumbnailOutput; // ivar: _currentVideoThumbnailOutput


-(id)_captureEngineDeviceForMode:(NSInteger)arg0 desiredDevice:(NSInteger)arg1 videoConfiguration:(NSInteger)arg2 videoStabilizationStrength:(NSInteger)arg3 resolvedDevice:(*NSInteger)arg4 ;
-(id)_metadataOutputForMode:(NSInteger)arg0 ;
-(id)audioDeviceInput;
-(id)cachedMomentCaptureSettingsForIdentifier:(id)arg0 ;
-(id)initWithCaptureEngine:(id)arg0 ;
-(id)outputsForGraphConfiguration:(id)arg0 ;
-(id)primaryOutputForMode:(NSInteger)arg0 ;
-(id)videoDeviceForMode:(NSInteger)arg0 desiredDevice:(NSInteger)arg1 videoConfiguration:(NSInteger)arg2 videoStabilizationStrength:(NSInteger)arg3 resolvedDevice:(*NSInteger)arg4 ;
-(void)cacheMomentCaptureSettings:(id)arg0 forIdentifier:(id)arg1 ;
-(void)clear;
-(void)clearCachedMomentCaptureSettingsForIdentifier:(id)arg0 ;
-(void)registerStillImageCaptureRequest:(id)arg0 withSettings:(id)arg1 ;
-(void)registerVideoCaptureRequest:(id)arg0 ;
-(void)registerVideoEndZoomFactor:(CGFloat)arg0 ;
-(void)startPanoramaCaptureWithRequest:(id)arg0 ;
-(void)stopPanoramaCaptureInterrupted:(BOOL)arg0 ;


@end


#endif