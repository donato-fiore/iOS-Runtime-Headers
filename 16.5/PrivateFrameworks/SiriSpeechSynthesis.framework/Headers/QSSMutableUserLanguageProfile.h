// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef QSSMUTABLEUSERLANGUAGEPROFILE_H
#define QSSMUTABLEUSERLANGUAGEPROFILE_H

@class NSData, NSString;


#import "QSSUserLanguageProfile.h"

@interface QSSMutableUserLanguageProfile : QSSUserLanguageProfile

@property (copy, nonatomic) NSData *profile_blob;
@property (copy, nonatomic) NSString *profile_blob_version;
@property (copy, nonatomic) NSString *profile_checksum;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)profile_blob:(id)arg0 ;


@end


#endif