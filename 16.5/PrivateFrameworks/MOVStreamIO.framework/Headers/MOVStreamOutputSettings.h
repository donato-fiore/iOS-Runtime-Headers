// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MOVSTREAMOUTPUTSETTINGS_H
#define MOVSTREAMOUTPUTSETTINGS_H

@class NSDictionary;

#import <Foundation/Foundation.h>

#import "MOVStreamEncoderConfig.h"

@interface MOVStreamOutputSettings : NSObject

@property (readonly) MOVStreamEncoderConfig *config; // ivar: _config
@property (readonly) CGFloat expectedFrameRate; // ivar: _expectedFrameRate
@property (readonly) NSDictionary *settings; // ivar: _settings
@property (readonly) BOOL useCustomEncoderConfig; // ivar: _useCustomEncoderConfig


+(?)audioSettings;
+(?)customEncoderSettings:(?)arg0 frameRateenableAVEHighPerformanceProfile;
+(?)generalHEVCColorSettings:(?)arg0 frameRateenableAVEHighPerformanceProfile;
+(?)getBitsPerSecondForColorStreamframeRate;
+(?)getQualitySetting;
+(?)h264Settings:(?)arg0 frameRateenableAVEHighPerformanceProfile;
+(?)hevc10bitMonochromeLosslessSettings:(?)arg0 frameRateenableAVEHighPerformanceProfile;
+(?)hevc10bitMonochromeSettings:(?)arg0 frameRateenableAVEHighPerformanceProfile;
+(?)hevc8bitMonochromeLosslessSettings:(?)arg0 frameRateenableAVEHighPerformanceProfile;
+(?)hevc8bitMonochromeSettings:(?)arg0 frameRateenableAVEHighPerformanceProfile;
+(?)hevc8bitWithAlphaLosslessSettings:(?)arg0 frameRateenableAVEHighPerformanceProfile;
+(?)hevc8bitWithAlphaSettings:(?)arg0 frameRateenableAVEHighPerformanceProfile;
+(?)hevcColorLosslessSettings:(?)arg0 frameRateenableAVEHighPerformanceProfile;
+(?)hevcColorSettings:(?)arg0 frameRateenableAVEHighPerformanceProfile;
+(?)outputSettingsForStream:(?)arg0 defaultFrameRateenableAVEHighPerformanceProfile;
+(?)prores422SettingsframeRate;
+(?)prores4444SettingsframeRate;
+(?)slimSettingsframeRate;
+(BOOL)isBitDepth10Encoding:(int)arg0 ;
+(BOOL)isLosslessColorEncoding:(int)arg0 ;
+(NSInteger)chromaSamplingEncoding:(int)arg0 ;
+(NSUInteger)applyBitrateModifiersTo:(NSUInteger)arg0 ;
+(id)hevcColorSettingsLossless:(BOOL)arg0 quality:(CGFloat)arg1 bitsPerSecond:(NSUInteger)arg2 bitDepth10:(BOOL)arg3 chromaSampling:(NSInteger)arg4 frameRate:(CGFloat)arg5 dimensions:(struct ? )arg6 enableAVEHighPerformanceProfile:(BOOL)arg7 ;
+(int)matchDeprecatedType:(int)arg0 ;
-(id)init;
-(id)initWithConfig:(id)arg0 ;
-(id)initWithFrameRate:(CGFloat)arg0 ;
-(id)initWithFrameRate:(CGFloat)arg0 useCustomEncoderConfig:(BOOL)arg1 ;
-(id)initWithSettings:(id)arg0 ;


@end


#endif