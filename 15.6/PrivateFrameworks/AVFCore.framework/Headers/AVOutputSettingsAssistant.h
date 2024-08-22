// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVOUTPUTSETTINGSASSISTANT_H
#define AVOUTPUTSETTINGSASSISTANT_H

@class NSDictionary, NSString;

#import <Foundation/Foundation.h>

#import "AVOutputSettingsAssistantInternal.h"

@interface AVOutputSettingsAssistant : NSObject {
    AVOutputSettingsAssistantInternal *_internal;
}


@property (readonly, nonatomic) NSDictionary *audioSettings;
@property (readonly, nonatomic) NSString *outputFileType;
@property (readonly, nonatomic) NSDictionary *videoSettings;


+(BOOL)validatesSourceVideoMinFrameDuration;
+(id)_allOutputSettingsPresets;
+(id)availableOutputSettingsPresets;
+(id)baseSettingsProviderForPreset:(id)arg0 ;
+(id)outputSettingsAssistantWithPreset:(id)arg0 ;
+(id)videoEncoderCapabilities;
+(id)videoSettingsAdjusterForPreset:(id)arg0 ;
-(id)init;
-(id)initWithPreset:(id)arg0 ;
-(id)videoEncoderSpecification;
-(struct ? )sourceVideoAverageFrameDuration;
-(struct ? )sourceVideoMinFrameDuration;
-(struct opaqueCMFormatDescription *)sourceAudioFormat;
-(struct opaqueCMFormatDescription *)sourceVideoFormat;
-(void)dealloc;
-(void)setSourceAudioFormat:(struct opaqueCMFormatDescription *)arg0 ;
-(void)setSourceVideoAverageFrameDuration:(struct ? )arg0 ;
-(void)setSourceVideoFormat:(struct opaqueCMFormatDescription *)arg0 ;
-(void)setSourceVideoMinFrameDuration:(struct ? )arg0 ;
-(void)setVideoEncoderSpecification:(id)arg0 ;


@end


#endif