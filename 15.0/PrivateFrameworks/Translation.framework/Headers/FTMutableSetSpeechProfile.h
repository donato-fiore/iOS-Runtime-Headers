// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FTMUTABLESETSPEECHPROFILE_H
#define FTMUTABLESETSPEECHPROFILE_H

@class NSString;


#import "FTSetSpeechProfile.h"
#import "FTUserAcousticProfile.h"
#import "FTUserLanguageProfile.h"

@interface FTMutableSetSpeechProfile : FTSetSpeechProfile

@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *session_id;
@property (copy, nonatomic) NSString *speech_id;
@property (copy, nonatomic) FTUserAcousticProfile *user_acoustic_profile;
@property (copy, nonatomic) FTUserLanguageProfile *user_language_profile;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif