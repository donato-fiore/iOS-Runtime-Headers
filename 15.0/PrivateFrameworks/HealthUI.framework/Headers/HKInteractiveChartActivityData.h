// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKINTERACTIVECHARTACTIVITYDATA_H
#define HKINTERACTIVECHARTACTIVITYDATA_H

@class HKActivitySummary, NSString;
@protocol HKGraphSeriesChartData;

#import <Foundation/Foundation.h>


@interface HKInteractiveChartActivityData : NSObject <HKGraphSeriesChartData>



@property (retain, nonatomic) HKActivitySummary *activitySummaryData; // ivar: _activitySummaryData
@property (nonatomic) NSInteger activityValue; // ivar: _activityValue
@property (readonly, nonatomic) BOOL activityValueGoalMet;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasActivityGoal;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;




@end


#endif