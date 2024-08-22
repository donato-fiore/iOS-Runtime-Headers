// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVCAPTURESTILLIMAGEOUTPUT_H
#define AVCAPTURESTILLIMAGEOUTPUT_H

@class NSArray, NSDictionary;


#import "AVCaptureOutput.h"
#import "AVCaptureStillImageOutputInternal.h"

@interface AVCaptureStillImageOutput : AVCaptureOutput {
    AVCaptureStillImageOutputInternal *_internal;
}


@property (nonatomic) BOOL automaticallyEnablesStillImageStabilizationWhenAvailable;
@property (readonly, nonatomic) NSArray *availableImageDataCVPixelFormatTypes;
@property (readonly, nonatomic) NSArray *availableImageDataCodecTypes;
@property (readonly, getter=isCapturingStillImage) BOOL capturingStillImage;
@property (nonatomic, getter=isHighResolutionStillImageOutputEnabled) BOOL highResolutionStillImageOutputEnabled;
@property (copy, nonatomic) NSDictionary *outputSettings;
@property (readonly, nonatomic, getter=isStillImageStabilizationActive) BOOL stillImageStabilizationActive;
@property (readonly, nonatomic, getter=isStillImageStabilizationSupported) BOOL stillImageStabilizationSupported;


+(NSUInteger)maxStillImageJPEGDataSize;
+(id)jpegStillImageNSDataRepresentation:(struct opaqueCMSampleBuffer *)arg0 ;
+(id)jpegStillImageNSDataRepresentationForSurface:(struct __IOSurface *)arg0 size:(NSUInteger)arg1 metadata:(id)arg2 ;
+(id)new;
+(struct __CFDictionary *)_copyAttachmentsAndPropagateFaceRegionsToExifAuxDictionaryForSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
+(void)initialize;
-(BOOL)_bracketedSettingsAreValid:(id)arg0 fromConnection:(id)arg1 exceptionReason:(*id)arg2 ;
-(BOOL)_preparedForBracketedCaptureWithSettings:(id)arg0 ;
-(BOOL)canAddConnection:(id)arg0 failureReason:(*id)arg1 ;
-(BOOL)highResolutionStillImageOutputEnabledChangeCausesCaptureSessionRestart;
-(BOOL)isLensStabilizationDuringBracketedCaptureEnabled;
-(BOOL)isLensStabilizationDuringBracketedCaptureSupported;
-(BOOL)isNoiseReductionEnabled;
-(BOOL)squareCropEnabled;
-(NSUInteger)maxBracketedCaptureStillImageCount;
-(id)_figCaptureStillImageSettingsForBracketedCaptureSettingsArray:(id)arg0 fromConnection:(id)arg1 ;
-(id)_figCaptureStillImageSettingsForConnection:(id)arg0 ;
-(id)addConnection:(id)arg0 error:(*id)arg1 ;
-(id)connectionMediaTypes;
-(id)firstActiveConnection;
-(id)init;
-(struct CGSize )outputSizeForSourceFormat:(id)arg0 ;
-(struct CGSize )previewImageSize;
-(unsigned int)imageDataFormatType;
-(unsigned int)shutterSound;
-(void)_setStillImageStabilizationAutomaticallyEnabled:(BOOL)arg0 ;
-(void)_updateLensStabilizationDuringBracketedCaptureSupportedForDevice:(id)arg0 ;
-(void)_updateMaxBracketedStillImageCaptureCountForSourceFormat:(id)arg0 ;
-(void)attachSafelyToFigCaptureSession:(struct OpaqueFigCaptureSession *)arg0 ;
-(void)captureStillImageAsynchronouslyFromConnection:(id)arg0 completionHandler:(id)arg1 ;
-(void)captureStillImageBracketAsynchronouslyFromConnection:(id)arg0 withSettingsArray:(id)arg1 completionHandler:(id)arg2 ;
-(void)captureStillImageSurfaceAsynchronouslyFromConnection:(id)arg0 completionHandler:(id)arg1 ;
-(void)clearPreparedBracketIfNeeded;
-(void)dealloc;
-(void)detachSafelyFromFigCaptureSession:(struct OpaqueFigCaptureSession *)arg0 ;
-(void)handleBackgroundBlurActiveChangedForDevice:(id)arg0 ;
-(void)handleCenterStageActiveChangedForDevice:(id)arg0 ;
-(void)handleChangedActiveFormat:(id)arg0 forDevice:(id)arg1 ;
-(void)handleNotification:(id)arg0 payload:(id)arg1 ;
-(void)handleNotificationForPrepareRequest:(id)arg0 withPayload:(id)arg1 ;
-(void)handleNotificationForRequest:(id)arg0 withPayload:(id)arg1 imageIsEV0:(*BOOL)arg2 ;
-(void)handleStudioLightingActiveChangedForDevice:(id)arg0 ;
-(void)prepareToCaptureStillImageBracketFromConnection:(id)arg0 withSettingsArray:(id)arg1 completionHandler:(id)arg2 ;
-(void)removeConnection:(id)arg0 ;
-(void)safelyHandleServerConnectionDeathForFigCaptureSession:(struct OpaqueFigCaptureSession *)arg0 ;
-(void)setLensStabilizationDuringBracketedCaptureEnabled:(BOOL)arg0 ;
-(void)setNoiseReductionEnabled:(BOOL)arg0 ;
-(void)setPreviewImageSize:(struct CGSize )arg0 ;
-(void)setShutterSound:(unsigned int)arg0 ;
-(void)setSquareCropEnabled:(BOOL)arg0 ;
-(void)updateSISSupportedForSourceDevice:(id)arg0 ;


@end


#endif