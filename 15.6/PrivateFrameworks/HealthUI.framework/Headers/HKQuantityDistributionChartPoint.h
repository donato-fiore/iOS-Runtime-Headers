// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKQUANTITYDISTRIBUTIONCHARTPOINT_H
#define HKQUANTITYDISTRIBUTIONCHARTPOINT_H

@class NSArray, NSDate, NSString, NSNumber;
@protocol HKChartPoint, HKGraphSeriesBlockCoordinateInfo;

#import <Foundation/Foundation.h>


@interface HKQuantityDistributionChartPoint : NSObject <HKChartPoint>



@property (readonly, nonatomic) NSArray *bucketCounts; // ivar: _bucketCounts
@property (readonly, nonatomic) NSDate *bucketDate; // ivar: _bucketDate
@property (readonly, nonatomic) CGFloat bucketIncrement; // ivar: _bucketIncrement
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSNumber *maximumY; // ivar: _maximumY
@property (readonly, nonatomic) CGFloat minimumBucketValue; // ivar: _minimumBucketValue
@property (readonly, nonatomic) NSNumber *minimumY; // ivar: _minimumY
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<HKGraphSeriesBlockCoordinateInfo> *userInfo; // ivar: _userInfo


-(id)_quickDate:(id)arg0 ;
-(id)allYValues;
-(id)initWithHistogramData:(id)arg0 bucketIncrement:(CGFloat)arg1 unit:(id)arg2 displayType:(id)arg3 ;
-(id)initWithHistogramData:(id)arg0 unit:(id)arg1 displayType:(id)arg2 ;
-(id)maxXValueAsGenericType;
-(id)maxYValue;
-(id)minXValueAsGenericType;
-(id)minYValue;
-(id)xValueAsGenericType;
-(id)yValue;
-(id)yValueForKey:(id)arg0 ;


@end


#endif