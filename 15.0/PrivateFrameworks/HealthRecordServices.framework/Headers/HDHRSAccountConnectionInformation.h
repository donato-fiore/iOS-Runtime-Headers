// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDHRSACCOUNTCONNECTIONINFORMATION_H
#define HDHRSACCOUNTCONNECTIONINFORMATION_H

@class NSUUID, HKClinicalGateway;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "HDHRSServerAuthorizationInformation.h"

@interface HDHRSAccountConnectionInformation : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSUUID *accountIdentifier; // ivar: _accountIdentifier
@property (readonly, copy, nonatomic) HDHRSServerAuthorizationInformation *authorization; // ivar: _authorization
@property (readonly, copy, nonatomic) HKClinicalGateway *gateway; // ivar: _gateway


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithAccountIdentifier:(id)arg0 gateway:(id)arg1 authorization:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif