// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKJULIANINDEXEDSEVENDAYQUANTITYCHARTPOINT_H
#define HKJULIANINDEXEDSEVENDAYQUANTITYCHARTPOINT_H

@class NSString, NSDate, NSNumber;
@protocol HKChartPoint, HKGraphSeriesBlockCoordinateInfo;

#import <Foundation/Foundation.h>


@interface HKJulianIndexedSevenDayQuantityChartPoint : NSObject <HKChartPoint>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<HKGraphSeriesBlockCoordinateInfo> *userInfo; // ivar: _userInfo
@property (retain, nonatomic) NSDate *xEnd; // ivar: _xEnd
@property (retain, nonatomic) NSDate *xStart; // ivar: _xStart
@property (retain, nonatomic) NSNumber *yValue; // ivar: _yValue


-(id)allYValues;
-(id)initWithStartDate:(id)arg0 endDate:(id)arg1 displayType:(id)arg2 unit:(id)arg3 quantity:(id)arg4 ;
-(id)maxXValueAsGenericType;
-(id)maxYValue;
-(id)minXValueAsGenericType;
-(id)minYValue;
-(id)xValueAsGenericType;
-(id)yValueForKey:(id)arg0 ;


@end


#endif