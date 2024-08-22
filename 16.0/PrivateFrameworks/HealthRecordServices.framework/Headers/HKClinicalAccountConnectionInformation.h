// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKCLINICALACCOUNTCONNECTIONINFORMATION_H
#define HKCLINICALACCOUNTCONNECTIONINFORMATION_H

@class NSUUID, NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "HKFHIRServerAuthenticationInformation.h"
#import "HKFHIRCredential.h"
#import "HKClinicalGateway.h"

@interface HKClinicalAccountConnectionInformation : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSUUID *accountIdentifier; // ivar: _accountIdentifier
@property (readonly, copy, nonatomic) NSArray *authSchemaDefinitions; // ivar: _authSchemaDefinitions
@property (readonly, copy, nonatomic) HKFHIRServerAuthenticationInformation *authentication; // ivar: _authentication
@property (readonly, copy, nonatomic) HKFHIRCredential *authorization; // ivar: _authorization
@property (readonly, copy, nonatomic) HKClinicalGateway *gateway; // ivar: _gateway
@property (readonly, copy, nonatomic) NSArray *resourceSchemaDefinitions; // ivar: _resourceSchemaDefinitions


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithAccountIdentifier:(id)arg0 gateway:(id)arg1 authorization:(id)arg2 authentication:(id)arg3 authSchemaDefinitions:(id)arg4 resourceSchemaDefinitions:(id)arg5 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif