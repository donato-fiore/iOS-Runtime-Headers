// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKACTIVITYSTATISTICSCHARTPOINTSUMMARY_H
#define HKACTIVITYSTATISTICSCHARTPOINTSUMMARY_H

@class NSString;
@protocol HKGraphSeriesBlockCoordinateInfo;

#import <Foundation/Foundation.h>


@interface HKActivityStatisticsChartPointSummary : NSObject <HKGraphSeriesBlockCoordinateInfo>



@property (readonly, nonatomic) NSString *activityGoalSummaryString; // ivar: _activityGoalSummaryString
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *energyBurnSummaryString; // ivar: _energyBurnSummaryString
@property (readonly, nonatomic) NSString *formattedDateString; // ivar: _formattedDateString
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *workoutSummaryString; // ivar: _workoutSummaryString


+(id)_dateFormatter;
+(id)_distanceFormatter;
+(id)_energyFormatter;
+(id)_integerNumberFormatter;
+(id)_workoutDurationFormatter;
-(id)initWithActivityCache:(id)arg0 workouts:(id)arg1 ;
-(void)_createWorkoutSummaryWithWorkouts:(id)arg0 ;


@end


#endif