// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SGSOCIALPROFILE_H
#define SGSOCIALPROFILE_H

@class NSString;


#import "SGLabeledObject.h"

@interface SGSocialProfile : SGLabeledObject

@property (readonly, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly, nonatomic) NSString *service; // ivar: _service
@property (readonly, nonatomic) NSString *teamIdentifier; // ivar: _teamIdentifier
@property (readonly, nonatomic) NSString *userIdentifier; // ivar: _userIdentifier
@property (readonly, nonatomic) NSString *username; // ivar: _username


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToSGSocialProfile:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUsername:(id)arg0 userIdentifier:(id)arg1 bundleIdentifier:(id)arg2 displayName:(id)arg3 service:(id)arg4 teamIdentifier:(id)arg5 label:(id)arg6 extractionInfo:(id)arg7 recordId:(id)arg8 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif