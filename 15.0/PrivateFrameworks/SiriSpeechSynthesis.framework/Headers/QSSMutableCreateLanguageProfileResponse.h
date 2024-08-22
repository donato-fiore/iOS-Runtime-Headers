// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QSSMUTABLECREATELANGUAGEPROFILERESPONSE_H
#define QSSMUTABLECREATELANGUAGEPROFILERESPONSE_H

@class NSString;


#import "QSSCreateLanguageProfileResponse.h"
#import "QSSUserLanguageProfile.h"

@interface QSSMutableCreateLanguageProfileResponse : QSSCreateLanguageProfileResponse

@property (nonatomic) int error_code;
@property (copy, nonatomic) NSString *error_str;
@property (nonatomic) BOOL incomplete_profile;
@property (nonatomic) BOOL recreate_apg_prons;
@property (copy, nonatomic) NSString *session_id;
@property (copy, nonatomic) NSString *speech_id;
@property (copy, nonatomic) QSSUserLanguageProfile *user_language_profile;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif