// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OPTTSMUTABLETEXTTOSPEECHREQUESTPROSODYTRANSFERCONFIG_H
#define OPTTSMUTABLETEXTTOSPEECHREQUESTPROSODYTRANSFERCONFIG_H

@class NSString;


#import "OPTTSTextToSpeechRequestProsodyTransferConfig.h"
#import "OPTTSTextToSpeechUserVoiceProfile.h"
#import "OPTTSTextToSpeechSpeechFeatureInputWave.h"

@interface OPTTSMutableTextToSpeechRequestProsodyTransferConfig : OPTTSTextToSpeechRequestProsodyTransferConfig

@property (copy, nonatomic) OPTTSTextToSpeechUserVoiceProfile *user_voice_profile;
@property (copy, nonatomic) NSString *user_voice_profile_url;
@property (copy, nonatomic) OPTTSTextToSpeechSpeechFeatureInputWave *wave_data;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif