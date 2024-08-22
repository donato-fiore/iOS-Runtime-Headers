// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDSLEEPWEEKSUMMARYBUILDER_H
#define HDSLEEPWEEKSUMMARYBUILDER_H



#import "HDSleepDaySummaryBuilder.h"

@interface HDSleepWeekSummaryBuilder : HDSleepDaySummaryBuilder



+(id)dateIntervalForMorningIndex:(NSInteger)arg0 calendar:(id)arg1 ;
-(id)applicableSleepSchedules;
-(id)sleepAnalysisSamples;


@end


#endif