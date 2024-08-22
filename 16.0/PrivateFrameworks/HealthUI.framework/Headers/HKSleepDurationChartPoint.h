// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKSLEEPDURATIONCHARTPOINT_H
#define HKSLEEPDURATIONCHARTPOINT_H

@class NSString, NSNumber, NSDate;
@protocol HKChartPoint, HKSleepChartPointProducing;

#import <Foundation/Foundation.h>

#import "HKSleepChartPointUserInfo.h"

@interface HKSleepDurationChartPoint : NSObject <HKChartPoint, HKSleepChartPointProducing>



@property (nonatomic) CGFloat asleepValue; // ivar: _asleepValue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSNumber *goalValue; // ivar: _goalValue
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL highlighted; // ivar: _highlighted
@property (nonatomic) CGFloat inBedValue; // ivar: _inBedValue
@property (readonly) Class superclass;
@property (retain, nonatomic) HKSleepChartPointUserInfo *userInfo; // ivar: _userInfo
@property (copy, nonatomic) NSDate *xValue; // ivar: _xValue


+(id)chartPointsForSummaries:(id)arg0 context:(id)arg1 ;
-(id)allYValues;
-(id)maxXValueAsGenericType;
-(id)maxYValue;
-(id)minXValueAsGenericType;
-(id)minYValue;
-(id)yValue;
-(id)yValueForKey:(id)arg0 ;


@end


#endif