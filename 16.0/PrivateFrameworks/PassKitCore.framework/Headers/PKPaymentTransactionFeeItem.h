// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYMENTTRANSACTIONFEEITEM_H
#define PKPAYMENTTRANSACTIONFEEITEM_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PKCurrencyAmount.h"

@interface PKPaymentTransactionFeeItem : NSObject <NSSecureCoding>



@property (copy, nonatomic) PKCurrencyAmount *currencyAmount; // ivar: _currencyAmount
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSString *localizedDisplayName; // ivar: _localizedDisplayName
@property (nonatomic) NSUInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToFeeItem:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFeeDictionary:(id)arg0 ;
-(id)jsonDictionaryRepresentation;
-(void)_initWithFeeDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif