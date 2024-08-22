// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef QSSMUTABLETEXTTOSPEECHREQUESTPROSODYTRANSFERCONFIG_H
#define QSSMUTABLETEXTTOSPEECHREQUESTPROSODYTRANSFERCONFIG_H

@class NSString;


#import "QSSTextToSpeechRequestProsodyTransferConfig.h"
#import "QSSTextToSpeechUserVoiceProfile.h"
#import "QSSTextToSpeechSpeechFeatureInputWave.h"

@interface QSSMutableTextToSpeechRequestProsodyTransferConfig : QSSTextToSpeechRequestProsodyTransferConfig

@property (copy, nonatomic) QSSTextToSpeechUserVoiceProfile *user_voice_profile;
@property (copy, nonatomic) NSString *user_voice_profile_url;
@property (copy, nonatomic) QSSTextToSpeechSpeechFeatureInputWave *wave_data;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif