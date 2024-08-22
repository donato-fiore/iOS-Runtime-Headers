// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SOFULLPROFILE_H
#define SOFULLPROFILE_H

@class NSDictionary, NSString;
@protocol NSSecureCoding;


#import "SOProfile.h"

@interface SOFullProfile : SOProfile <NSSecureCoding>



@property (retain, nonatomic) NSDictionary *extensionData; // ivar: _extensionData
@property (retain, nonatomic) NSString *extensionTeamIdentifier; // ivar: _extensionTeamIdentifier


+(BOOL)supportsSecureCoding;
+(NSInteger)authMethodWithString:(id)arg0 ;
+(NSInteger)profileTypeWithString:(id)arg0 ;
+(NSInteger)screenLockedBehaviorWithString:(id)arg0 ;
-(id)copyProfile;
-(id)copyProfileForClient;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProfileData:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)removeURLPrefix:(id)arg0 ;


@end


#endif