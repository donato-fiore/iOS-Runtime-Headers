// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MOVSTREAMOUTPUTSETTINGS_H
#define MOVSTREAMOUTPUTSETTINGS_H

@class NSDictionary;

#import <Foundation/Foundation.h>

#import "MOVStreamEncoderConfig.h"

@interface MOVStreamOutputSettings : NSObject

@property (readonly) MOVStreamEncoderConfig *config; // ivar: _config
@property (readonly) CGFloat expectedFrameRate; // ivar: _expectedFrameRate
@property (readonly) NSDictionary *settings; // ivar: _settings
@property (readonly) BOOL useCutsomEncoderConfig; // ivar: _useCutsomEncoderConfig


+(?)audioSettings;
+(?)customEncoderSettingsframeRate;
+(?)getBitsPerSecondForColorStreamframeRate;
+(?)h264SettingsframeRate;
+(?)hevc10bitMonochromeLosslessSettingsframeRate;
+(?)hevc10bitMonochromeSettingsframeRate;
+(?)hevc8bitMonochromeLosslessSettingsframeRate;
+(?)hevc8bitMonochromeSettingsframeRate;
+(?)hevc8bitWithAlphaLosslessSettingsframeRate;
+(?)hevc8bitWithAlphaSettingsframeRate;
+(?)hevcColorLosslessSettingsframeRate;
+(?)hevcColorSettingsframeRate;
+(?)outputSettingsForStreamdefaultFrameRate;
+(?)slimSettingsframeRate;
+(NSUInteger)applyBitrateModifiersTo:(NSUInteger)arg0 ;
+(int)matchDeprecatedType:(int)arg0 ;
-(id)initWithConfig:(id)arg0 ;
-(id)initWithFrameRate:(CGFloat)arg0 ;
-(id)initWithSettings:(id)arg0 ;


@end


#endif