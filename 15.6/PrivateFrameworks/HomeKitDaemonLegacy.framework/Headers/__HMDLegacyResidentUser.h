// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef __HMDLEGACYRESIDENTUSER_H
#define __HMDLEGACYRESIDENTUSER_H



#import "HMDUser.h"
#import "HMDResidentUser.h"

@interface __HMDLegacyResidentUser : HMDUser

@property (readonly, nonatomic) HMDResidentUser *residentUser; // ivar: _residentUser


+(BOOL)supportsSecureCoding;
+(void)initialize;
-(BOOL)isRemoteGateway;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithResidentUser:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif