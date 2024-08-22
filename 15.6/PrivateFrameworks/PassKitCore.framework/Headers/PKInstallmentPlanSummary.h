// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKINSTALLMENTPLANSUMMARY_H
#define PKINSTALLMENTPLANSUMMARY_H

@class NSString, NSDecimalNumber, NSDate;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PKInstallmentPlanSummary : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSString *currencyCode; // ivar: _currencyCode
@property (retain, nonatomic) NSDecimalNumber *currentBalance; // ivar: _currentBalance
@property (retain, nonatomic) NSDate *currentEndDate; // ivar: _currentEndDate
@property (retain, nonatomic) NSDecimalNumber *interestCharged; // ivar: _interestCharged
@property (retain, nonatomic) NSDecimalNumber *minimumDue; // ivar: _minimumDue
@property (retain, nonatomic) NSDate *minimumDueDate; // ivar: _minimumDueDate
@property (retain, nonatomic) NSDate *originalEndDate; // ivar: _originalEndDate
@property (retain, nonatomic) NSDecimalNumber *paymentsToDateAmount; // ivar: _paymentsToDateAmount
@property (retain, nonatomic) NSDate *startDate; // ivar: _startDate


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToInstallmentPlanSummary:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif