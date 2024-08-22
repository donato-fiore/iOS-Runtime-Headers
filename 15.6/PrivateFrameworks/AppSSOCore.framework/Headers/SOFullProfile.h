// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SOFULLPROFILE_H
#define SOFULLPROFILE_H

@class NSDictionary, NSString;


#import "SOProfile.h"

@interface SOFullProfile : SOProfile

@property (retain, nonatomic) NSDictionary *extensionData; // ivar: _extensionData
@property (retain, nonatomic) NSString *extensionTeamIdentifier; // ivar: _extensionTeamIdentifier


+(NSInteger)profileTypeWithString:(id)arg0 ;
+(NSInteger)screenLockedBehaviorWithString:(id)arg0 ;
-(id)copyProfile;
-(id)copyProfileForClient;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithProfileData:(id)arg0 ;
-(void)removeURLPrefix:(id)arg0 ;


@end


#endif