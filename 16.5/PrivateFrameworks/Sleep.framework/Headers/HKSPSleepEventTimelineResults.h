// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKSPSLEEPEVENTTIMELINERESULTS_H
#define HKSPSLEEPEVENTTIMELINERESULTS_H


#import <Foundation/Foundation.h>

#import "HKSPMutableSleepSchedule.h"
#import "HKSPSleepSchedule.h"
#import "HKSPSleepEventTimeline.h"

@interface HKSPSleepEventTimelineResults : NSObject

@property (retain, nonatomic) HKSPMutableSleepSchedule *mutableValidSleepSchedule; // ivar: _mutableValidSleepSchedule
@property (retain, nonatomic) HKSPSleepSchedule *originalSleepSchedule; // ivar: _originalSleepSchedule
@property (nonatomic) BOOL sleepScheduleInvalid; // ivar: _sleepScheduleInvalid
@property (nonatomic) NSUInteger sleepScheduleInvalidReason; // ivar: _sleepScheduleInvalidReason
@property (nonatomic) BOOL snoozeFireDateNeedsReset; // ivar: _snoozeFireDateNeedsReset
@property (retain, nonatomic) HKSPSleepEventTimeline *timeline; // ivar: _timeline
@property (retain, nonatomic) HKSPSleepEventTimeline *unadjustedTimeline; // ivar: _unadjustedTimeline
@property (readonly, nonatomic) HKSPSleepSchedule *validSleepSchedule;




@end


#endif