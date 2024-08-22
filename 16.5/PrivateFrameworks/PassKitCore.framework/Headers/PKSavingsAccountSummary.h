// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKSAVINGSACCOUNTSUMMARY_H
#define PKSAVINGSACCOUNTSUMMARY_H

@class NSDecimalNumber, NSNumberFormatter, NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PKSavingsAccountSummary : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic, setter=setAPY:) NSDecimalNumber *apy; // ivar: _apy
@property (readonly, nonatomic) NSNumberFormatter *apyFormatter; // ivar: _apyFormatter
@property (copy, nonatomic) NSDecimalNumber *availableBalance; // ivar: _availableBalance
@property (copy, nonatomic) NSDecimalNumber *currentBalance; // ivar: _currentBalance
@property (readonly, nonatomic) NSString *formattedAPY;
@property (nonatomic) BOOL hasWithdrawalLimit; // ivar: _hasWithdrawalLimit
@property (copy, nonatomic) NSDecimalNumber *interestTotal; // ivar: _interestTotal
@property (copy, nonatomic) NSDecimalNumber *interestYTD; // ivar: _interestYTD
@property (copy, nonatomic) NSDecimalNumber *pendingBalance; // ivar: _pendingBalance
@property (nonatomic) NSUInteger withdrawalsRemaining; // ivar: _withdrawalsRemaining


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif