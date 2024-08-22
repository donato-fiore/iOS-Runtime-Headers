// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDSPTIMEINBEDTRACKER_H
#define HDSPTIMEINBEDTRACKER_H

@class NSString, HKSPSleepScheduleModel;
@protocol HDSPSleepScheduleStateObserver, HDSPSleepTracker, HDSPSleepTrackerDelegate, HKSPQueueBackedScheduler;

#import <Foundation/Foundation.h>

#import "HDSPEnvironment.h"

@interface HDSPTimeInBedTracker : NSObject <HDSPSleepScheduleStateObserver, HDSPSleepTracker>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HDSPSleepTrackerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, weak, nonatomic) HDSPEnvironment *environment; // ivar: _environment
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isTimeInBedTrackingEnabled;
@property (readonly, nonatomic) NSObject<HKSPQueueBackedScheduler> *sleepIntervalScheduler; // ivar: _sleepIntervalScheduler
@property (readonly, nonatomic) HKSPSleepScheduleModel *sleepScheduleModel;
@property (readonly) Class superclass;


-(id)_computeSessionMetadataForInterval:(id)arg0 ;
-(id)_computeSleepSessionStartBeforeDate:(id)arg0 ;
-(id)_createSleepSessionWithEndDate:(id)arg0 endReason:(NSUInteger)arg1 ;
-(id)computeSleepIntervalsForInterval:(id)arg0 ;
-(id)initWithEnvironment:(id)arg0 ;
-(id)processedSessionForSession:(id)arg0 ;
-(void)_endSleepSessionWithReason:(NSUInteger)arg0 ;
-(void)environmentWillBecomeReady:(id)arg0 ;
-(void)sleepScheduleStateDidChange:(NSUInteger)arg0 previousState:(NSUInteger)arg1 reason:(NSUInteger)arg2 ;


@end


#endif