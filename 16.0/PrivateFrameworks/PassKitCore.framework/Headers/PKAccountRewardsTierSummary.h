// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKACCOUNTREWARDSTIERSUMMARY_H
#define PKACCOUNTREWARDSTIERSUMMARY_H

@class NSString, NSDate, NSDecimalNumber;
@protocol NSSecureCoding, NSCopying, PKIdentifiable;

#import <Foundation/Foundation.h>

#import "PKCurrencyAmount.h"

@interface PKAccountRewardsTierSummary : NSObject <NSSecureCoding, NSCopying, PKIdentifiable>

 {
    NSString *_uuid;
}


@property (retain, nonatomic) NSString *currencyCode; // ivar: _currencyCode
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSDate *endDate; // ivar: _endDate
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<NSCopying> *identifier;
@property (retain, nonatomic) NSDecimalNumber *onePercentTotal; // ivar: _onePercentTotal
@property (retain, nonatomic) NSDecimalNumber *specialTotal; // ivar: _specialTotal
@property (retain, nonatomic) NSDate *startDate; // ivar: _startDate
@property (readonly) Class superclass;
@property (retain, nonatomic) NSDecimalNumber *threePercentTotal; // ivar: _threePercentTotal
@property (readonly, nonatomic) NSDecimalNumber *totalAmount;
@property (readonly, nonatomic) PKCurrencyAmount *totalCurrencyAmount;
@property (retain, nonatomic) NSDecimalNumber *twoPercentTotal; // ivar: _twoPercentTotal


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToRewardsTierSummary:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)currencyAmountForRewardsTier:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStartDate:(id)arg0 endDate:(id)arg1 currencyCode:(id)arg2 onePercentTotal:(id)arg3 twoPercentTotal:(id)arg4 threePercentTotal:(id)arg5 specialTotal:(id)arg6 ;
-(id)totalForRewardsTier:(NSUInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif