// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKLEVELCATEGORYCHARTPOINT_H
#define HKLEVELCATEGORYCHARTPOINT_H

@class NSString, NSDate, NSNumber;
@protocol HKChartPoint, HKGraphSeriesBlockCoordinateInfo;

#import <Foundation/Foundation.h>


@interface HKLevelCategoryChartPoint : NSObject <HKChartPoint>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSDate *endDate; // ivar: _endDate
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger pointStyle; // ivar: _pointStyle
@property (retain, nonatomic) NSDate *startDate; // ivar: _startDate
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<HKGraphSeriesBlockCoordinateInfo> *userInfo; // ivar: _userInfo
@property (retain, nonatomic) NSNumber *yValue; // ivar: _yValue


-(id)allYValues;
-(id)maxXValueAsGenericType;
-(id)maxYValue;
-(id)minXValueAsGenericType;
-(id)minYValue;
-(id)xValueAsGenericType;
-(id)yValueForKey:(id)arg0 ;


@end


#endif