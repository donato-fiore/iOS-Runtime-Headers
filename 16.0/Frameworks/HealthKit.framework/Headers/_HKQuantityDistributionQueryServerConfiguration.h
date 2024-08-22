// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _HKQUANTITYDISTRIBUTIONQUERYSERVERCONFIGURATION_H
#define _HKQUANTITYDISTRIBUTIONQUERYSERVERCONFIGURATION_H

@class NSDate, NSDateComponents;


#import "HKQueryServerConfiguration.h"
#import "HKQuantity.h"

@interface _HKQuantityDistributionQueryServerConfiguration : HKQueryServerConfiguration

@property (copy, nonatomic) NSDate *anchorDate; // ivar: _anchorDate
@property (nonatomic) NSInteger contextStyle; // ivar: _contextStyle
@property (copy, nonatomic) NSDate *endDate; // ivar: _endDate
@property (copy, nonatomic) HKQuantity *histogramAnchor; // ivar: _histogramAnchor
@property (copy, nonatomic) HKQuantity *histogramBucketSize; // ivar: _histogramBucketSize
@property (copy, nonatomic) NSDateComponents *intervalComponents; // ivar: _intervalComponents
@property (nonatomic) NSUInteger options; // ivar: _options
@property (copy, nonatomic) NSDate *startDate; // ivar: _startDate


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif