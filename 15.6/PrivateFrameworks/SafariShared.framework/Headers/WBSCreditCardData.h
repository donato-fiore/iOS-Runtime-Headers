// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSCREDITCARDDATA_H
#define WBSCREDITCARDDATA_H

@class NSString, NSDate, PKVirtualCard;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WBSCreditCardData : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *cardName; // ivar: _cardName
@property (copy, nonatomic) NSString *cardNumber; // ivar: _cardNumber
@property (readonly, copy, nonatomic) NSString *cardSecurityCode; // ivar: _cardSecurityCode
@property (copy, nonatomic) NSString *cardholderName; // ivar: _cardholderName
@property (readonly, copy, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (retain, nonatomic) NSDate *lastUsedDate; // ivar: _lastUsedDate
@property (readonly) BOOL shouldHide;
@property (readonly, nonatomic) PKVirtualCard *virtualCard; // ivar: _virtualCard


+(BOOL)supportsSecureCoding;
-(BOOL)hasSameCreditCardInformationAs:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_expirationDateFromPKVirtualCard:(id)arg0 ;
-(id)creditCardDataByMergingOtherAttributesBesidesCardNumberFromCard:(id)arg0 ;
-(id)creditCardDataByUpdatingLastUsedDate:(id)arg0 ;
-(id)description;
-(id)initWithCardName:(id)arg0 number:(id)arg1 cardholderName:(id)arg2 expirationDate:(id)arg3 ;
-(id)initWithCardName:(id)arg0 number:(id)arg1 cardholderName:(id)arg2 expirationDate:(id)arg3 securityCode:(id)arg4 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithKeychainRepresentation:(id)arg0 ;
-(id)initWithVirtualCard:(id)arg0 ;
-(id)initWithVirtualCardCredentials:(id)arg0 virtualCard:(id)arg1 ;
-(id)keychainRepresentationByMigratingExistingKeychainData:(id)arg0 ;
-(id)keychainRepresentationForNewCard;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif