// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VSACCOUNT_H
#define VSACCOUNT_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "VSAccountStore.h"
#import "VSOptional.h"

@interface VSAccount : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *accountDescription; // ivar: _accountDescription
@property (weak, nonatomic) VSAccountStore *accountStore; // ivar: _accountStore
@property (copy, nonatomic) NSString *accountTypeDescription; // ivar: _accountTypeDescription
@property (retain, nonatomic) VSOptional *authenticationToken; // ivar: _authenticationToken
@property (readonly, nonatomic) NSString *identityProviderDisplayName;
@property (retain, nonatomic) VSOptional *identityProviderID; // ivar: _identityProviderID
@property (retain, nonatomic) VSOptional *keychainItem;
@property (retain, nonatomic) VSOptional *optionalIdentityProviderDisplayName; // ivar: _optionalIdentityProviderDisplayName
@property (copy, nonatomic) NSString *preferredAppID; // ivar: _preferredAppID
@property (copy, nonatomic) NSString *username; // ivar: _username


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif