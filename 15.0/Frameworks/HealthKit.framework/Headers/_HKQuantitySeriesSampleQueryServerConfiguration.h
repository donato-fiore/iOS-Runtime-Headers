// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _HKQUANTITYSERIESSAMPLEQUERYSERVERCONFIGURATION_H
#define _HKQUANTITYSERIESSAMPLEQUERYSERVERCONFIGURATION_H

@class NSDate, NSUUID;


#import "HKQueryServerConfiguration.h"
#import "HKQuantitySample.h"

@interface _HKQuantitySeriesSampleQueryServerConfiguration : HKQueryServerConfiguration

@property (copy, nonatomic) NSDate *latestSampleStartDate; // ivar: _latestSampleStartDate
@property (copy, nonatomic) NSUUID *latestUUID; // ivar: _latestUUID
@property (copy, nonatomic) NSDate *maximumStartDate; // ivar: _maximumStartDate
@property (nonatomic) NSInteger mode; // ivar: _mode
@property (nonatomic) NSUInteger options; // ivar: _options
@property (copy, nonatomic) HKQuantitySample *quantitySample; // ivar: _quantitySample
@property (nonatomic) NSInteger seriesAnchor; // ivar: _seriesAnchor


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif