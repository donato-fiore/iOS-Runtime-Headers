// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTTRANSACTIONREWARDSITEM_H
#define PKPAYMENTTRANSACTIONREWARDSITEM_H

@class NSDecimalNumber, NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "PKCurrencyAmount.h"

@interface PKPaymentTransactionRewardsItem : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) PKCurrencyAmount *currencyAmount; // ivar: _currencyAmount
@property (retain, nonatomic) NSDecimalNumber *eligibleValue; // ivar: _eligibleValue
@property (nonatomic) NSUInteger eligibleValueUnit; // ivar: _eligibleValueUnit
@property (nonatomic) BOOL hasEnhancedMerchantProgramIdentifier; // ivar: _hasEnhancedMerchantProgramIdentifier
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSString *programIdentifier; // ivar: _programIdentifier
@property (retain, nonatomic) NSString *promotionIdentifier; // ivar: _promotionIdentifier
@property (retain, nonatomic) NSString *promotionName; // ivar: _promotionName
@property (nonatomic) NSUInteger state; // ivar: _state
@property (nonatomic) NSUInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToRewardsItem:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)jsonDictionaryRepresentation;
-(void)_initWithRewardsDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif