// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVAVAUDIOSETTINGSAUDIOOUTPUTSETTINGS_H
#define AVAVAUDIOSETTINGSAUDIOOUTPUTSETTINGS_H

@protocol AVReencodedAudioSettingsForFig, AVDecodedAudioSettingsForFig;


#import "AVAudioOutputSettings.h"

@interface AVAVAudioSettingsAudioOutputSettings : AVAudioOutputSettings <AVReencodedAudioSettingsForFig, AVDecodedAudioSettingsForFig>





+(id)_audioOutputSettingsWithAudioSettingsDictionary:(id)arg0 exceptionReason:(*id)arg1 ;
+(id)eligibleOutputSettingsDictionaryKeys;
-(BOOL)canFullySpecifyOutputFormatReturningReason:(*id)arg0 ;
-(BOOL)encoderIsAvailableOnCurrentSystemReturningError:(*id)arg0 ;
-(BOOL)willYieldCompressedSamples;
-(id)audioOptions;
-(id)initWithAVAudioSettingsDictionary:(id)arg0 exceptionReason:(*id)arg1 ;
-(id)initWithTrustedAVAudioSettingsDictionary:(id)arg0 ;
-(struct AudioChannelLayout *)copyAudioChannelLayoutForSourceFormatDescription:(struct opaqueCMFormatDescription *)arg0 audioChannelLayoutSize:(*NSUInteger)arg1 ;
-(void)getAudioStreamBasicDescription:(struct AudioStreamBasicDescription *)arg0 forAudioFileTypeID:(unsigned int)arg1 sourceFormatDescription:(struct opaqueCMFormatDescription *)arg2 ;


@end


#endif