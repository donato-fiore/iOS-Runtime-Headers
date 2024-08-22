// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKCURRENCYAMOUNT_H
#define PKCURRENCYAMOUNT_H

@class NSDecimalNumber, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKCurrencyAmount : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSDecimalNumber *amount; // ivar: _amount
@property (copy, nonatomic) NSString *currency; // ivar: _currency
@property (nonatomic) NSInteger exponent; // ivar: _exponent
@property (copy, nonatomic) NSString *preformattedString; // ivar: _preformattedString


+(BOOL)supportsSecureCoding;
+(id)maximumCurrencyAmount:(id)arg0 otherCurrencyAmount:(id)arg1 ;
+(id)minimumCurrencyAmount:(id)arg0 otherCurrencyAmount:(id)arg1 ;
-(BOOL)currencyAmountEqualToCurrencyAmount:(id)arg0 ;
-(BOOL)currencyAmountGreaterThanCurrencyAmount:(id)arg0 ;
-(BOOL)currencyAmountLessThanCurrencyAmount:(id)arg0 ;
-(BOOL)isCurrency;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToCurrencyAmount:(id)arg0 ;
-(NSInteger)compareToCurrencyCode:(id)arg0 amount:(id)arg1 ;
-(NSUInteger)hash;
-(id)absoluteValue;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)currencyAmountByAddingCurrencyAmount:(id)arg0 ;
-(id)currencyAmountBySubtractingCurrencyAmount:(id)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)formattedStringValue;
-(id)initWithAmount:(id)arg0 currency:(id)arg1 ;
-(id)initWithAmount:(id)arg0 currency:(id)arg1 exponent:(NSInteger)arg2 ;
-(id)initWithAmount:(id)arg0 exponent:(NSInteger)arg1 preformattedString:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)minimalFormattedStringValue;
-(id)minimalFormattedStringValueInLocale:(id)arg0 ;
-(id)negativeValue;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif