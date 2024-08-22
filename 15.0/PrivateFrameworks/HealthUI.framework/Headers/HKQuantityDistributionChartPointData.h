// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKQUANTITYDISTRIBUTIONCHARTPOINTDATA_H
#define HKQUANTITYDISTRIBUTIONCHARTPOINTDATA_H

@class NSArray, NSString, NSDate, HKUnit;
@protocol HKGraphSeriesChartData;

#import <Foundation/Foundation.h>


@interface HKQuantityDistributionChartPointData : NSObject <HKGraphSeriesChartData>



@property (readonly, nonatomic) CGFloat averageValue; // ivar: _averageValue
@property (readonly, nonatomic) NSArray *bucketCounts; // ivar: _bucketCounts
@property (readonly, nonatomic) CGFloat bucketIncrement; // ivar: _bucketIncrement
@property (readonly, nonatomic) NSArray *contextIdentifiers; // ivar: _contextIdentifiers
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat duration; // ivar: _duration
@property (readonly, nonatomic) NSDate *endDate; // ivar: _endDate
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat maximumValue; // ivar: _maximumValue
@property (readonly, nonatomic) CGFloat minimumBucketValue; // ivar: _minimumBucketValue
@property (readonly, nonatomic) CGFloat minimumValue; // ivar: _minimumValue
@property (readonly, nonatomic) NSDate *startDate; // ivar: _startDate
@property (readonly) Class superclass;
@property (readonly, nonatomic) HKUnit *unit; // ivar: _unit


-(id)initWithDistributionData:(id)arg0 bucketIncrement:(CGFloat)arg1 unit:(id)arg2 displayType:(id)arg3 ;
-(id)initWithDistributionData:(id)arg0 unit:(id)arg1 displayType:(id)arg2 ;


@end


#endif