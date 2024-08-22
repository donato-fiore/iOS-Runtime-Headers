// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKSTATISTICS_H
#define HKSTATISTICS_H

@class NSDate, NSArray, NSDictionary, NSNumber, NSString, NSDateInterval;
@protocol _HKDateBounded, HKSampleAggregateCacheProviding, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "HKObjectType.h"
#import "HKQuantity.h"
#import "HKQuantityType.h"

@interface HKStatistics : NSObject <_HKDateBounded, HKSampleAggregateCacheProviding, NSSecureCoding, NSCopying>

 {
    HKObjectType *_dataType;
    NSDate *_startDate;
    NSDate *_endDate;
    NSArray *_sources;
}


@property (copy, nonatomic) HKQuantity *averageQuantity; // ivar: _averageQuantity
@property (copy, nonatomic) NSDictionary *averageQuantityBySource; // ivar: _averageQuantityBySource
@property (copy, nonatomic) NSNumber *categoryValue; // ivar: _categoryValue
@property (copy, nonatomic) NSDictionary *categoryValueBySource; // ivar: _categoryValueBySource
@property (nonatomic) NSUInteger dataCount; // ivar: _dataCount
@property (copy, nonatomic) NSDictionary *dataCountBySource; // ivar: _dataCountBySource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) HKQuantity *duration; // ivar: _duration
@property (copy, nonatomic) NSDictionary *durationBySource; // ivar: _durationBySource
@property (readonly) NSDate *endDate;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) HKQuantity *maximumQuantity; // ivar: _maximumQuantity
@property (copy, nonatomic) NSDictionary *maximumQuantityBySource; // ivar: _maximumQuantityBySource
@property (copy, nonatomic) HKQuantity *minimumQuantity; // ivar: _minimumQuantity
@property (copy, nonatomic) NSDictionary *minimumQuantityBySource; // ivar: _minimumQuantityBySource
@property (copy, nonatomic) HKQuantity *mostRecentQuantity; // ivar: _mostRecentQuantity
@property (copy, nonatomic) NSDictionary *mostRecentQuantityBySource; // ivar: _mostRecentQuantityBySource
@property (copy, nonatomic) NSDateInterval *mostRecentQuantityDateInterval; // ivar: _mostRecentQuantityDateInterval
@property (copy, nonatomic) NSDictionary *mostRecentQuantityDateIntervalBySource; // ivar: _mostRecentQuantityDateIntervalBySource
@property (copy, nonatomic) HKQuantity *percentileQuantity; // ivar: _percentileQuantity
@property (copy, nonatomic) NSDictionary *percentileQuantityBySource; // ivar: _percentileQuantityBySource
@property (readonly) HKQuantityType *quantityType;
@property (readonly) NSArray *sources;
@property (readonly) NSDate *startDate;
@property (copy, nonatomic) HKQuantity *sumQuantity; // ivar: _sumQuantity
@property (copy, nonatomic) NSDictionary *sumQuantityBySource; // ivar: _sumQuantityBySource
@property (copy, nonatomic) NSDictionary *sumQuantityBySourceID; // ivar: _sumQuantityBySourceID
@property (readonly) Class superclass;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(void)_validateOptions:(NSUInteger)arg0 forDataType:(id)arg1 ;
-(BOOL)getData:(*id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)bucketIndexForIntervalComponents:(id)arg0 anchorDate:(id)arg1 ;
-(id)_initAsCopyOf:(id)arg0 ;
-(id)_initWithDataType:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 ;
-(id)asJSONObject;
-(id)averageQuantityForSource:(id)arg0 ;
-(id)baselineRelativeValueState;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)durationForSource:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDataType:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 ;
-(id)maximumQuantityForSource:(id)arg0 ;
-(id)minimumQuantityForSource:(id)arg0 ;
-(id)mostRecentQuantityDateIntervalForSource:(id)arg0 ;
-(id)mostRecentQuantityForSource:(id)arg0 ;
-(id)sumQuantityForSource:(id)arg0 ;
-(void)_validateUnit:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif