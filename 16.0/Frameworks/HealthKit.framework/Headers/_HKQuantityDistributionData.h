// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _HKQUANTITYDISTRIBUTIONDATA_H
#define _HKQUANTITYDISTRIBUTIONDATA_H

@class NSArray, NSDate;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "HKQuantity.h"

@interface _HKQuantityDistributionData : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) HKQuantity *averageValue; // ivar: _averageValue
@property (readonly, nonatomic) NSArray *contextIdentifiers; // ivar: _contextIdentifiers
@property (readonly, nonatomic) HKQuantity *duration; // ivar: _duration
@property (readonly, nonatomic) NSDate *endDate; // ivar: _endDate
@property (readonly, nonatomic) NSArray *histogramCounts; // ivar: _histogramCounts
@property (readonly, nonatomic) HKQuantity *maximumValue; // ivar: _maximumValue
@property (readonly, nonatomic) HKQuantity *minimumBucketValue; // ivar: _minimumBucketValue
@property (readonly, nonatomic) HKQuantity *minimumValue; // ivar: _minimumValue
@property (readonly, nonatomic) NSDate *startDate; // ivar: _startDate


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStartDate:(id)arg0 endDate:(id)arg1 minimumBucketValue:(id)arg2 minimumValue:(id)arg3 maximumValue:(id)arg4 averageValue:(id)arg5 duration:(id)arg6 histogramCounts:(id)arg7 ;
-(id)initWithStartDate:(id)arg0 endDate:(id)arg1 minimumBucketValue:(id)arg2 minimumValue:(id)arg3 maximumValue:(id)arg4 averageValue:(id)arg5 duration:(id)arg6 histogramCounts:(id)arg7 contextIdentifiers:(id)arg8 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif