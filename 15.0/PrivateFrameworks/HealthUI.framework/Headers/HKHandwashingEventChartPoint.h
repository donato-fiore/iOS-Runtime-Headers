// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKHANDWASHINGEVENTCHARTPOINT_H
#define HKHANDWASHINGEVENTCHARTPOINT_H

@class NSNumber, NSString, NSDate;
@protocol HKChartPoint, HKGraphSeriesBlockCoordinateInfo;

#import <Foundation/Foundation.h>


@interface HKHandwashingEventChartPoint : NSObject <HKChartPoint>



@property (copy, nonatomic) NSNumber *averageDuration; // ivar: _averageDuration
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSDate *endDate; // ivar: _endDate
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL meetsGoal; // ivar: _meetsGoal
@property (retain, nonatomic) NSDate *midDate; // ivar: _midDate
@property (copy, nonatomic) NSDate *startDate; // ivar: _startDate
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<HKGraphSeriesBlockCoordinateInfo> *userInfo; // ivar: _userInfo


-(id)allYValues;
-(id)initWithStartDate:(id)arg0 endDate:(id)arg1 ;
-(id)maxXValueAsGenericType;
-(id)maxYValue;
-(id)minXValueAsGenericType;
-(id)minYValue;
-(id)xValueAsGenericType;
-(id)yValue;
-(id)yValueForKey:(id)arg0 ;


@end


#endif