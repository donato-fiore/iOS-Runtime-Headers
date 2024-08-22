// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VSACCOUNT_H
#define VSACCOUNT_H

@class NSString, NSNumber;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "VSAccountStore.h"
#import "VSOptional.h"
#import "VSKeychainGenericPassword.h"

@interface VSAccount : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *accountDescription; // ivar: _accountDescription
@property (weak, nonatomic) VSAccountStore *accountStore; // ivar: _accountStore
@property (copy, nonatomic) NSString *accountTypeDescription; // ivar: _accountTypeDescription
@property (retain, nonatomic) VSOptional *authenticationToken; // ivar: _authenticationToken
@property (readonly, nonatomic) NSString *identityProviderDisplayName;
@property (retain, nonatomic) VSOptional *identityProviderID; // ivar: _identityProviderID
@property (retain, nonatomic) VSKeychainGenericPassword *keychainItem; // ivar: _keychainItem
@property (retain, nonatomic) NSNumber *legacyItemHash; // ivar: _legacyItemHash
@property (retain, nonatomic) VSKeychainGenericPassword *legacyKeychainItem; // ivar: _legacyKeychainItem
@property (retain, nonatomic) VSOptional *optionalIdentityProviderDisplayName; // ivar: _optionalIdentityProviderDisplayName
@property (copy, nonatomic) NSString *preferredAppID; // ivar: _preferredAppID
@property (nonatomic, getter=isSynchronizable) BOOL synchronizable; // ivar: _synchronizable
@property (copy, nonatomic) NSString *username; // ivar: _username
@property (nonatomic) NSUInteger version; // ivar: _version


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)contentsHash;
-(NSUInteger)hash;
-(id)description;
-(id)effectiveModificationDate;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif