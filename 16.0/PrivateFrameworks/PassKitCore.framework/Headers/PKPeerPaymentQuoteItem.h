// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPEERPAYMENTQUOTEITEM_H
#define PKPEERPAYMENTQUOTEITEM_H

@class NSString, NSDecimalNumber, NSData, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKPeerPaymentQuoteItem : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *countryCode; // ivar: _countryCode
@property (readonly, copy, nonatomic) NSString *dpanIdentifier; // ivar: _dpanIdentifier
@property (readonly, copy, nonatomic) NSDecimalNumber *exchangeRate; // ivar: _exchangeRate
@property (readonly, copy, nonatomic) NSDecimalNumber *fees; // ivar: _fees
@property (readonly, copy, nonatomic) NSString *feesCurrency; // ivar: _feesCurrency
@property (readonly, nonatomic) NSUInteger merchantCapabilities; // ivar: _merchantCapabilities
@property (readonly, copy, nonatomic) NSString *merchantIdentifier; // ivar: _merchantIdentifier
@property (readonly, copy, nonatomic) NSData *nonce; // ivar: _nonce
@property (readonly, nonatomic) BOOL preservesCurrentBalance; // ivar: _preservesCurrentBalance
@property (readonly, copy, nonatomic) NSDecimalNumber *receiveAmount; // ivar: _receiveAmount
@property (readonly, copy, nonatomic) NSString *receiveAmountCurrency; // ivar: _receiveAmountCurrency
@property (readonly, copy, nonatomic) NSDecimalNumber *sendAmount; // ivar: _sendAmount
@property (readonly, copy, nonatomic) NSString *sendAmountCurrency; // ivar: _sendAmountCurrency
@property (readonly, copy, nonatomic) NSArray *supportedNetworks; // ivar: _supportedNetworks
@property (readonly, copy, nonatomic) NSDecimalNumber *totalAmount; // ivar: _totalAmount
@property (readonly, copy, nonatomic) NSString *totalAmountCurrency; // ivar: _totalAmountCurrency
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(id)quoteItemWithDictionary:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif