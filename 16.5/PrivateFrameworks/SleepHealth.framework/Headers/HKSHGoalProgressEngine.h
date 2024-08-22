// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKSHGOALPROGRESSENGINE_H
#define HKSHGOALPROGRESSENGINE_H

@class HKHealthStore;

#import <Foundation/Foundation.h>


@interface HKSHGoalProgressEngine : NSObject {
    HKHealthStore *_healthStore;
}




+(CGFloat)_timeIntervalForDate:(id)arg0 sinceDate:(id)arg1 calendar:(id)arg2 ;
+(id)_computeStandardDeviationFor:(id)arg0 ;
+(id)_dateComponentsForInterval:(CGFloat)arg0 sinceDate:(id)arg1 calendar:(id)arg2 ;
+(id)_firstAsleepSegment:(id)arg0 ;
+(id)_firstInBedSegment:(id)arg0 ;
+(id)_firstSegmentMatchingSleepValues:(id)arg0 inPeriods:(id)arg1 ;
+(id)_lastAsleepSegment:(id)arg0 ;
+(id)_lastInBedSegment:(id)arg0 ;
+(id)_lastSegmentMatchingSleepValues:(id)arg0 inPeriods:(id)arg1 ;
+(id)goalProgressForDaySummaries:(id)arg0 ;
+(id)goalProgressForDaySummaries:(id)arg0 inMorningIndexRange:(struct ? )arg1 ;
-(id)initWithHealthStore:(id)arg0 ;
-(void)fetchGoalProgressForMorningIndexRange:(struct ? )arg0 completion:(id)arg1 ;


@end


#endif