// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKACTIVITYCHARTPOINT_H
#define HKACTIVITYCHARTPOINT_H

@class NSDate, HKActivityCache, NSArray, HKUnit, NSNumber, NSString;
@protocol HKChartPoint;

#import <Foundation/Foundation.h>

#import "HKActivityChartPointSummary.h"

@interface HKActivityChartPoint : NSObject <HKChartPoint>

 {
    NSDate *_date;
    HKActivityCache *_activityCache;
    NSArray *_workouts;
    HKUnit *_unit;
    NSNumber *_activeEnergyBurnedMinusWorkouts;
    NSNumber *_workoutActiveEnergyBurned;
    NSArray *_workoutTimes;
    HKActivityChartPointSummary *_summary;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)allYValues;
-(id)initWithActivityCache:(id)arg0 workouts:(id)arg1 unit:(id)arg2 ;
-(id)maxXValueAsGenericType;
-(id)maxYValue;
-(id)minXValueAsGenericType;
-(id)minYValue;
-(id)userInfo;
-(id)xValueAsGenericType;
-(id)yValue;
-(id)yValueForKey:(id)arg0 ;
-(void)_calculateEnergyBurned;
-(void)_createSummary;
-(void)_populateWorkoutTimes;


@end


#endif