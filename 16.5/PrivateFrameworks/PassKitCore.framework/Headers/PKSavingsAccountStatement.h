// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKSAVINGSACCOUNTSTATEMENT_H
#define PKSAVINGSACCOUNTSTATEMENT_H

@class NSDecimalNumber, NSDate, NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PKSavingsAccountStatement : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic, setter=setAPY:) NSDecimalNumber *apy; // ivar: _apy
@property (copy, nonatomic) NSDecimalNumber *closingBalance; // ivar: _closingBalance
@property (copy, nonatomic) NSDate *closingDate; // ivar: _closingDate
@property (copy, nonatomic) NSString *currencyCode; // ivar: _currencyCode
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSDecimalNumber *interestEarned; // ivar: _interestEarned
@property (copy, nonatomic) NSDecimalNumber *openingBalance; // ivar: _openingBalance
@property (copy, nonatomic) NSDate *openingDate; // ivar: _openingDate
@property (nonatomic) NSInteger statementPeriodDays; // ivar: _statementPeriodDays
@property (copy, nonatomic) NSDecimalNumber *totalDailyCashDeposits; // ivar: _totalDailyCashDeposits
@property (copy, nonatomic) NSDecimalNumber *totalDeposits; // ivar: _totalDeposits
@property (copy, nonatomic) NSDecimalNumber *totalWithdrawn; // ivar: _totalWithdrawn


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif