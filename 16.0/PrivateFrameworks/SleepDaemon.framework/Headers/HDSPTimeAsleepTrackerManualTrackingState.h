// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDSPTIMEASLEEPTRACKERMANUALTRACKINGSTATE_H
#define HDSPTIMEASLEEPTRACKERMANUALTRACKINGSTATE_H



#import "HDSPTimeAsleepTrackerSleepTrackingState.h"

@interface HDSPTimeAsleepTrackerManualTrackingState : HDSPTimeAsleepTrackerSleepTrackingState



+(NSUInteger)defaultEndReason;
+(NSUInteger)defaultStartReason;
-(BOOL)schedulesExpiration;
-(id)expirationDate;
-(id)stateName;
-(void)bedtimeOccurred;
-(void)sleepModeExitedWithReason:(NSUInteger)arg0 ;
-(void)startWakeDetectionOccurred;
-(void)stateDidExpireWithContext:(id)arg0 ;


@end


#endif