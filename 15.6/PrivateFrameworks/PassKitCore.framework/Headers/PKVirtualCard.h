// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKVIRTUALCARD_H
#define PKVIRTUALCARD_H

@class NSString, NSData, NSDate;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "PKVirtualCardCredentials.h"

@interface PKVirtualCard : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSString *FPANSuffix; // ivar: _FPANSuffix
@property (copy, nonatomic) NSString *cardholderName; // ivar: _cardholderName
@property (copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (copy, nonatomic) NSData *encryptedData; // ivar: _encryptedData
@property (copy, nonatomic) NSData *ephemeralPublicKey; // ivar: _ephemeralPublicKey
@property (copy, nonatomic) NSString *expiration; // ivar: _expiration
@property (nonatomic) BOOL hasDynamicSecurityCode; // ivar: _hasDynamicSecurityCode
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) PKVirtualCardCredentials *keychainCardCredentials; // ivar: _keychainCardCredentials
@property (copy, nonatomic) NSDate *lastAutoFilledBySafari; // ivar: _lastAutoFilledBySafari
@property (copy, nonatomic) NSDate *lastUpdatedDate; // ivar: _lastUpdatedDate
@property (nonatomic) BOOL requiresAuthentication; // ivar: _requiresAuthentication
@property (copy, nonatomic) NSDate *securityCodeExpiration; // ivar: _securityCodeExpiration
@property (copy, nonatomic) NSString *securityCodeIdentifier; // ivar: _securityCodeIdentifier
@property (nonatomic) NSInteger state; // ivar: _state
@property (nonatomic) BOOL supportsLocalStorage; // ivar: _supportsLocalStorage
@property (nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(void)deleteAllLocalKeychainVirtualCards;
+(void)queryKeychainForVirtualCards:(id)arg0 ;
-(BOOL)hasSensitiveCredentials;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToSafariEntryWithPrimaryAccountNumber:(id)arg0 expirationDate:(id)arg1 ;
-(BOOL)isValidFromKeychain;
-(NSUInteger)hash;
-(id)_wrapperWithType:(NSUInteger)arg0 identifier:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)generateHashWithPrimaryAccountNumber:(id)arg0 expirationDate:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithKeychainData:(id)arg0 ;
-(id)keychainVirtualCard;
-(id)mergeVirtualCardWith:(id)arg0 ;
-(void)deleteKeychainVirtualCard;
-(void)deleteLocalKeychainVirtualCard;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeKeychainVirtualCardToKeychain;


@end


#endif