// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QSSMUTABLESETSPEECHPROFILE_H
#define QSSMUTABLESETSPEECHPROFILE_H

@class NSString;


#import "QSSSetSpeechProfile.h"
#import "QSSUserAcousticProfile.h"
#import "QSSUserLanguageProfile.h"

@interface QSSMutableSetSpeechProfile : QSSSetSpeechProfile

@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *session_id;
@property (copy, nonatomic) NSString *speech_id;
@property (copy, nonatomic) QSSUserAcousticProfile *user_acoustic_profile;
@property (copy, nonatomic) QSSUserLanguageProfile *user_language_profile;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif