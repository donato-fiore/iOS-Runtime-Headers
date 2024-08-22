// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKHEALTHCHARTPOINT_H
#define HKHEALTHCHARTPOINT_H

@class NSDate, NSNumber, NSString;
@protocol HKChartPoint, HKGraphSeriesBlockCoordinateInfo;

#import <Foundation/Foundation.h>


@interface HKHealthChartPoint : NSObject <HKChartPoint>

 {
    NSDate *_date;
    NSNumber *_sum;
    NSNumber *_min;
    NSNumber *_max;
    NSNumber *_avg;
    NSNumber *_mostRecent;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<HKGraphSeriesBlockCoordinateInfo> *userInfo; // ivar: _userInfo


-(id)allYValues;
-(id)initWithDataSourceValue:(id)arg0 options:(NSUInteger)arg1 unit:(id)arg2 displayType:(id)arg3 ;
-(id)initWithStatistics:(id)arg0 options:(NSUInteger)arg1 unit:(id)arg2 displayType:(id)arg3 sourceTimeZone:(id)arg4 ;
-(id)maxXValueAsGenericType;
-(id)maxYValue;
-(id)minXValueAsGenericType;
-(id)minYValue;
-(id)xValueAsGenericType;
-(id)yValue;
-(id)yValueForKey:(id)arg0 ;


@end


#endif