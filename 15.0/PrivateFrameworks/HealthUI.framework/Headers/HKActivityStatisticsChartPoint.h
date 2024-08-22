// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKACTIVITYSTATISTICSCHARTPOINT_H
#define HKACTIVITYSTATISTICSCHARTPOINT_H

@class NSDate, HKUnit, NSArray, NSNumber, NSString;
@protocol HKChartPoint;

#import <Foundation/Foundation.h>

#import "HKActivityStatisticsChartPointSummary.h"

@interface HKActivityStatisticsChartPoint : NSObject <HKChartPoint>

 {
    NSDate *_date;
    HKUnit *_unit;
    NSArray *_nodes;
    HKActivityStatisticsChartPointSummary *_summary;
    NSNumber *_totalActiveEnergyBurned;
    NSNumber *_moveGoalValue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(CGFloat)_nodesCaloriesPercentDifference;
-(id)allYValues;
-(id)initWithNodes:(id)arg0 summary:(id)arg1 activityCache:(id)arg2 energyUnit:(id)arg3 ;
-(id)maxXValueAsGenericType;
-(id)maxYValue;
-(id)minXValueAsGenericType;
-(id)minYValue;
-(id)userInfo;
-(id)xValueAsGenericType;
-(id)yValue;
-(id)yValueForKey:(id)arg0 ;


@end


#endif