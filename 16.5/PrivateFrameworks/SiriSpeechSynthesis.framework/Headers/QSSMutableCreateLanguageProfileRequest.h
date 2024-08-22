// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef QSSMUTABLECREATELANGUAGEPROFILEREQUEST_H
#define QSSMUTABLECREATELANGUAGEPROFILEREQUEST_H

@class NSString, NSArray;


#import "QSSCreateLanguageProfileRequest.h"
#import "QSSUserLanguageProfile.h"

@interface QSSMutableCreateLanguageProfileRequest : QSSCreateLanguageProfileRequest

@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *session_id;
@property (copy, nonatomic) NSString *speech_id;
@property (copy, nonatomic) NSArray *user_data;
@property (copy, nonatomic) QSSUserLanguageProfile *user_language_profile;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif