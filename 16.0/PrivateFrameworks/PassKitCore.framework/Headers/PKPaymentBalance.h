// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYMENTBALANCE_H
#define PKPAYMENTBALANCE_H

@class NSArray, NSString, NSSet, NSDate, NSDecimalNumber;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PKCurrencyAmount.h"

@interface PKPaymentBalance : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSArray *componentBalances; // ivar: _componentBalances
@property (copy, nonatomic) NSString *currencyCode; // ivar: _currencyCode
@property (readonly, nonatomic) PKCurrencyAmount *currencyValue;
@property (nonatomic) NSInteger exponent; // ivar: _exponent
@property (readonly, nonatomic) NSString *formattedValue;
@property (copy, nonatomic) NSSet *identifiers; // ivar: _identifiers
@property (readonly, nonatomic) BOOL isCurrency;
@property (nonatomic) BOOL isPrimary; // ivar: _isPrimary
@property (copy, nonatomic) NSDate *lastUpdateDate; // ivar: _lastUpdateDate
@property (copy, nonatomic) NSString *localizedDescription; // ivar: _localizedDescription
@property (copy, nonatomic) NSString *localizedTitle; // ivar: _localizedTitle
@property (copy, nonatomic) NSString *preformattedString; // ivar: _preformattedString
@property (copy, nonatomic) NSDecimalNumber *value; // ivar: _value


+(BOOL)supportsSecureCoding;
+(id)identifiersFromComponentBalances:(id)arg0 ;
-(BOOL)isComposed;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithComponentBalances:(id)arg0 ;
-(id)initWithComponentBalances:(id)arg0 identifiers:(id)arg1 ;
-(id)initWithComponentBalances:(id)arg0 identifiers:(id)arg1 expiredBalances:(id)arg2 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 forCurrencyAmount:(id)arg1 ;
-(id)initWithIdentifier:(id)arg0 forValue:(id)arg1 roundingToExponent:(NSInteger)arg2 ;
-(id)initWithIdentifiers:(id)arg0 forCurrencyAmount:(id)arg1 ;
-(id)initWithIdentifiers:(id)arg0 forValue:(id)arg1 roundingToExponent:(NSInteger)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif