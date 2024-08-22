// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVCAPTUREDEVICEINPUT_H
#define AVCAPTUREDEVICEINPUT_H



#import "AVCaptureInput.h"
#import "AVCaptureDeviceInputInternal.h"
#import "AVCaptureDevice.h"

@interface AVCaptureDeviceInput : AVCaptureInput {
    AVCaptureDeviceInputInternal *_internal;
}


@property (readonly, nonatomic) AVCaptureDevice *device;
@property (nonatomic) BOOL unifiedAutoExposureDefaultsEnabled;
@property (nonatomic) ? videoMinFrameDurationOverride;


+(id)deviceInputWithDevice:(id)arg0 error:(*id)arg1 ;
+(void)initialize;
-(BOOL)_authorizedToUseDeviceAndRequestIfNecessary:(id)arg0 ;
-(BOOL)isBackgroundBlurAllowed;
-(BOOL)isBuiltInMicrophoneStereoAudioCaptureEnabled;
-(BOOL)isBuiltInMicrophoneStereoAudioCaptureSupported;
-(BOOL)isCameraCalibrationDataDeliveryEnabled;
-(BOOL)isCenterStageAllowed;
-(BOOL)isMaxGainOverrideSupported;
-(BOOL)isVisionDataDeliveryEnabled;
-(float)maxGainOverride;
-(float)portraitLightingEffectStrength;
-(float)simulatedAperture;
-(id)description;
-(id)init;
-(id)initWithDevice:(id)arg0 error:(*id)arg1 ;
-(id)multiCamPorts;
-(id)notReadyError;
-(id)ports;
-(id)portsWithMediaType:(id)arg0 sourceDeviceType:(id)arg1 sourceDevicePosition:(NSInteger)arg2 ;
-(id)videoDevice;
-(struct OpaqueCMClock *)clock;
-(void)_applyVideoMinFrameDurationOverride;
-(void)_bumpChangeSeedForFirstPortWithMediaType:(id)arg0 ;
-(void)_handleNotification:(id)arg0 payload:(id)arg1 ;
-(void)_resetPortraitLightingEffectStrength;
-(void)_resetSimulatedAperture;
-(void)_sourceFormatDidChange:(struct opaqueCMFormatDescription *)arg0 ;
-(void)attachSafelyToFigCaptureSession:(struct OpaqueFigCaptureSession *)arg0 ;
-(void)dealloc;
-(void)detachSafelyFromFigCaptureSession:(struct OpaqueFigCaptureSession *)arg0 ;
-(void)handleChangedActiveFormat:(id)arg0 forDevice:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)setBackgroundBlurAllowed:(BOOL)arg0 ;
-(void)setBuiltInMicrophoneStereoAudioCaptureEnabled:(BOOL)arg0 ;
-(void)setCameraCalibrationDataDeliveryEnabled:(BOOL)arg0 ;
-(void)setCenterStageAllowed:(BOOL)arg0 ;
-(void)setMaxGainOverride:(float)arg0 ;
-(void)setPortraitLightingEffectStrength:(float)arg0 ;
-(void)setSession:(id)arg0 ;
-(void)setSimulatedAperture:(float)arg0 ;
-(void)setVisionDataDeliveryEnabled:(BOOL)arg0 ;


@end


#endif