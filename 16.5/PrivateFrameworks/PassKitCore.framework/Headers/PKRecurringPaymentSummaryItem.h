// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKRECURRINGPAYMENTSUMMARYITEM_H
#define PKRECURRINGPAYMENTSUMMARYITEM_H

@class NSDate;
@protocol NSCopying, NSSecureCoding;


#import "PKPaymentSummaryItem.h"

@interface PKRecurringPaymentSummaryItem : PKPaymentSummaryItem <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSDate *endDate; // ivar: _endDate
@property (nonatomic) NSInteger intervalCount; // ivar: _intervalCount
@property (readonly, nonatomic) BOOL intervalCountSpecified;
@property (nonatomic) NSUInteger intervalUnit; // ivar: _intervalUnit
@property (readonly, nonatomic) BOOL intervalUnitSpecified;
@property (copy, nonatomic) NSDate *startDate; // ivar: _startDate


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToRecurringPaymentSummaryItem:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 error:(*id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif