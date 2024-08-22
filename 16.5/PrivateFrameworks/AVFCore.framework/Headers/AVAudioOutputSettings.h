// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVAUDIOOUTPUTSETTINGS_H
#define AVAUDIOOUTPUTSETTINGS_H

@class NSDictionary;


#import "AVOutputSettings.h"

@interface AVAudioOutputSettings : AVOutputSettings

@property (readonly, nonatomic) NSDictionary *audioSettingsDictionary;


+(id)_audioOutputSettingsWithAudioSettingsDictionary:(id)arg0 exceptionReason:(*id)arg1 ;
+(id)_outputSettingsWithOutputSettingsDictionary:(id)arg0 mediaType:(id)arg1 exceptionReason:(*id)arg2 ;
+(id)audioConverterPropertiesForAudioSettingsDictionary:(id)arg0 ;
+(id)audioOutputSettingsWithAudioSettingsDictionary:(id)arg0 ;
+(id)audioOutputSettingsWithTrustedAudioSettingsDictionary:(id)arg0 ;
+(id)defaultAudioOutputSettings;
+(id)registeredOutputSettingsClasses;
-(BOOL)validateUsingOutputSettingsValidator:(id)arg0 reason:(*id)arg1 ;
-(id)compatibleMediaTypes;
-(id)initWithAudioSettingsDictionary:(id)arg0 exceptionReason:(*id)arg1 ;


@end


#endif