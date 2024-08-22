// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPEERPAYMENTQUOTE_H
#define PKPEERPAYMENTQUOTE_H

@class NSString, NSData, NSDecimalNumber, NSURL, NSArray, NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PKCurrencyAmount.h"
#import "PKPeerPaymentQuoteDynamicFraudContent.h"
#import "PKPeerPaymentRecipient.h"

@interface PKPeerPaymentQuote : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *accountNumber; // ivar: _accountNumber
@property (readonly, copy, nonatomic) NSData *appleHash; // ivar: _appleHash
@property (copy, nonatomic) NSString *bankName; // ivar: _bankName
@property (readonly, nonatomic) PKCurrencyAmount *calculatedTotalAmount;
@property (readonly, copy, nonatomic) NSDecimalNumber *currentBalance; // ivar: _currentBalance
@property (readonly, copy, nonatomic) NSString *currentBalanceCurrency; // ivar: _currentBalanceCurrency
@property (readonly, copy, nonatomic) NSString *disclosureText; // ivar: _disclosureText
@property (readonly, copy, nonatomic) NSURL *disclosureURL; // ivar: _disclosureURL
@property (readonly, copy, nonatomic) PKPeerPaymentQuoteDynamicFraudContent *dynamicFraudContent; // ivar: _dynamicFraudContent
@property (readonly, copy, nonatomic) NSData *externalHash; // ivar: _externalHash
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSArray *items; // ivar: _items
@property (retain, nonatomic) PKPeerPaymentRecipient *recipient; // ivar: _recipient
@property (readonly, nonatomic) NSUInteger riskLevel; // ivar: _riskLevel
@property (copy, nonatomic) NSString *routingNumber; // ivar: _routingNumber
@property (readonly, copy, nonatomic) NSDecimalNumber *totalFees; // ivar: _totalFees
@property (readonly, copy, nonatomic) NSString *totalFeesCurrency; // ivar: _totalFeesCurrency
@property (readonly, copy, nonatomic) NSDecimalNumber *totalReceiveAmount; // ivar: _totalReceiveAmount
@property (readonly, copy, nonatomic) NSString *totalReceiveAmountCurrency; // ivar: _totalReceiveAmountCurrency
@property (readonly, copy, nonatomic) NSDate *validUntil; // ivar: _validUntil
@property (readonly, nonatomic) CGFloat validityDuration;


+(BOOL)supportsSecureCoding;
-(BOOL)hasExpired;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)preservesCurrentBalance;
-(NSUInteger)hash;
-(id)description;
-(id)firstQuoteItemOfType:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif