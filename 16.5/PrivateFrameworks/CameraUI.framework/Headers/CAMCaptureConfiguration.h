// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAMCAPTURECONFIGURATION_H
#define CAMCAPTURECONFIGURATION_H

@class NSDictionary, NSArray;

#import <Foundation/Foundation.h>


@interface CAMCaptureConfiguration : NSObject

@property (readonly, nonatomic) NSInteger HDRMode; // ivar: _HDRMode
@property (readonly, nonatomic) NSInteger audioConfiguration; // ivar: _audioConfiguration
@property (readonly, nonatomic) NSInteger device; // ivar: _device
@property (readonly, nonatomic) NSDictionary *exposureBiasesByMode; // ivar: _exposureBiasesByMode
@property (readonly, nonatomic) NSInteger flashMode; // ivar: _flashMode
@property (readonly, nonatomic) NSInteger irisMode; // ivar: _irisMode
@property (readonly, nonatomic) NSInteger macroMode; // ivar: _macroMode
@property (nonatomic) BOOL mirrorFrontCameraCaptures; // ivar: _mirrorFrontCameraCaptures
@property (readonly, nonatomic) NSInteger mode; // ivar: _mode
@property (readonly, nonatomic, getter=isPhotoBooth) BOOL photoBooth; // ivar: _photoBooth
@property (readonly, nonatomic) NSInteger photoModeAspectRatioCrop; // ivar: _photoModeAspectRatioCrop
@property (readonly, nonatomic) NSInteger photoModeEffectFilterType; // ivar: _photoModeEffectFilterType
@property (readonly, nonatomic) CGFloat portraitModeApertureValue; // ivar: _portraitModeApertureValue
@property (readonly, nonatomic) NSInteger portraitModeEffectFilterType; // ivar: _portraitModeEffectFilterType
@property (readonly, nonatomic) CGFloat portraitModeIntensityValue; // ivar: _portraitModeIntensityValue
@property (readonly, nonatomic) NSInteger portraitModeLightingEffectType; // ivar: _portraitModeLightingEffectType
@property (readonly, nonatomic) NSInteger proResVideoMode; // ivar: _proResVideoMode
@property (readonly, nonatomic) NSInteger rawMode; // ivar: _rawMode
@property (nonatomic) NSUInteger selectedSemanticStyleIndex; // ivar: _selectedSemanticStyleIndex
@property (retain, nonatomic) NSArray *semanticStyles; // ivar: _semanticStyles
@property (nonatomic) NSInteger sharedLibraryMode; // ivar: _sharedLibraryMode
@property (readonly, nonatomic) NSInteger squareModeEffectFilterType; // ivar: _squareModeEffectFilterType
@property (readonly, nonatomic) NSInteger timerDuration; // ivar: _timerDuration
@property (readonly, nonatomic) NSInteger torchMode; // ivar: _torchMode
@property (readonly, nonatomic) NSInteger videoConfiguration; // ivar: _videoConfiguration
@property (readonly, nonatomic) NSInteger videoStabilizationMode; // ivar: _videoStabilizationMode


+(NSInteger)_fallbackVideoConfigurationForUnsupportedConfiguration:(NSInteger)arg0 ;
+(NSInteger)audioConfigurationForMode:(NSInteger)arg0 device:(NSInteger)arg1 emulationMode:(NSInteger)arg2 duringCall:(BOOL)arg3 forceMonoAudioRecording:(BOOL)arg4 ;
+(NSInteger)sanitizeVideoConfigurationForDesiredConfiguration:(NSInteger)arg0 mode:(NSInteger)arg1 device:(NSInteger)arg2 ;
+(id)captureGraphConfigurationUsingConfiguration:(id)arg0 ;
+(id)configuration:(id)arg0 withDevice:(NSInteger)arg1 ;
+(id)tinyConfigurationForConfiguration:(id)arg0 preserveFilters:(BOOL)arg1 ;
-(id)_previewFilters;
-(id)initForPhotoBoothWithCaptureDevice:(NSInteger)arg0 ;
-(id)initWithCaptureMode:(NSInteger)arg0 captureDevice:(NSInteger)arg1 videoConfiguration:(NSInteger)arg2 audioConfiguration:(NSInteger)arg3 flashMode:(NSInteger)arg4 torchMode:(NSInteger)arg5 HDRMode:(NSInteger)arg6 irisMode:(NSInteger)arg7 timerDuration:(NSInteger)arg8 photoModeAspectRatioCrop:(NSInteger)arg9 photoModeEffectFilterType:(NSInteger)arg10 squareModeEffectFilterType:(NSInteger)arg11 portraitModeEffectFilterType:(NSInteger)arg12 portraitModeLightingEffectType:(NSInteger)arg13 portraitModeApertureValue:(CGFloat)arg14 portraitModeIntensityValue:(CGFloat)arg15 mirrorFrontCameraCaptures:(BOOL)arg16 exposureBiasesByMode:(id)arg17 macroMode:(NSInteger)arg18 rawMode:(NSInteger)arg19 proResVideoMode:(NSInteger)arg20 semanticStyles:(id)arg21 selectedSemanticStyleIndex:(NSUInteger)arg22 videoStabilizationMode:(NSInteger)arg23 sharedLibraryMode:(NSInteger)arg24 ;
-(id)initWithConfiguration:(id)arg0 ;


@end


#endif