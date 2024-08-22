// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QSSMUTABLEUPDATEDACOUSTICPROFILE_H
#define QSSMUTABLEUPDATEDACOUSTICPROFILE_H

@class NSString;


#import "QSSUpdatedAcousticProfile.h"
#import "QSSUserAcousticProfile.h"

@interface QSSMutableUpdatedAcousticProfile : QSSUpdatedAcousticProfile

@property (nonatomic) int return_code;
@property (copy, nonatomic) NSString *return_str;
@property (copy, nonatomic) NSString *session_id;
@property (copy, nonatomic) NSString *speech_id;
@property (copy, nonatomic) QSSUserAcousticProfile *updated_acoustic_profile;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif