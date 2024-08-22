// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKVIRTUALCARDCREDENTIALS_H
#define PKVIRTUALCARDCREDENTIALS_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PKVirtualCardCredentials : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSString *cardSecurityCode; // ivar: _cardSecurityCode
@property (nonatomic) NSInteger cardType; // ivar: _cardType
@property (copy, nonatomic) NSString *expiration; // ivar: _expiration
@property (copy, nonatomic) NSString *formattedExpiration; // ivar: _formattedExpiration
@property (copy, nonatomic) NSString *primaryAccountNumber; // ivar: _primaryAccountNumber


+(BOOL)supportsSecureCoding;
+(id)demoVPANCredentials;
+(id)formattedDateStringFromServerDateString:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithEncryptedCardData:(id)arg0 ephemeralPublicKey:(id)arg1 privateKey:(struct __SecKey *)arg2 error:(*id)arg3 ;
-(id)initWithVPANPaymentCredentialResponse:(id)arg0 privateKey:(struct __SecKey *)arg1 error:(*id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif