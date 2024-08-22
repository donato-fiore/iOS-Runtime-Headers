// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RMGENERICAUTHENTICATIONCREDENTIAL_H
#define RMGENERICAUTHENTICATIONCREDENTIAL_H

@class NSString, NSDictionary;


#import "RMAuthenticationCredential.h"

@interface RMGenericAuthenticationCredential : RMAuthenticationCredential

@property (readonly, copy, nonatomic) NSString *authenticationScheme; // ivar: _authenticationScheme
@property (readonly, copy, nonatomic) NSDictionary *properties; // ivar: _properties


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToAuthenticationCredential:(id)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)initWithAuthenticationScheme:(id)arg0 properties:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif