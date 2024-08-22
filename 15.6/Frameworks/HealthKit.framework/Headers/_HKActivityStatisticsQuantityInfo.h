// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _HKACTIVITYSTATISTICSQUANTITYINFO_H
#define _HKACTIVITYSTATISTICSQUANTITYINFO_H

@class NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "HKQuantity.h"

@interface _HKActivityStatisticsQuantityInfo : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSDate *endDate; // ivar: _endDate
@property (retain, nonatomic) HKQuantity *quantityValue; // ivar: _quantityValue
@property (retain, nonatomic) NSDate *startDate; // ivar: _startDate


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStartDate:(id)arg0 endDate:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif