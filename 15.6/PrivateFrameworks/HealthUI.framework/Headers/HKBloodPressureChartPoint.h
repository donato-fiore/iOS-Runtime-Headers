// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKBLOODPRESSURECHARTPOINT_H
#define HKBLOODPRESSURECHARTPOINT_H

@class NSDate, NSString;
@protocol HKChartPoint, HKGraphSeriesBlockCoordinateInfo;

#import <Foundation/Foundation.h>

#import "HKHealthChartPoint.h"

@interface HKBloodPressureChartPoint : NSObject <HKChartPoint>



@property (retain, nonatomic) NSDate *date; // ivar: _date
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) HKHealthChartPoint *diastolicChartPoint; // ivar: _diastolicChartPoint
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) HKHealthChartPoint *systolicChartPoint; // ivar: _systolicChartPoint
@property (retain, nonatomic) NSObject<HKGraphSeriesBlockCoordinateInfo> *userInfo; // ivar: _userInfo


-(id)allYValues;
-(id)maxXValueAsGenericType;
-(id)maxYValue;
-(id)minXValueAsGenericType;
-(id)minYValue;
-(id)xValueAsGenericType;
-(id)yValue;
-(id)yValueForKey:(id)arg0 ;
-(void)setChartPoint:(id)arg0 forType:(id)arg1 ;


@end


#endif