// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTTIMEINBEDSESSIONTRACKER_H
#define MTTIMEINBEDSESSIONTRACKER_H



#import "MTSleepSessionTracker.h"

@interface MTTimeInBedSessionTracker : MTSleepSessionTracker



+(BOOL)_shouldUseBedtimeDismissedDateForAlarm:(id)arg0 ;
+(BOOL)_trackingEnabledForSleepAlarm:(id)arg0 ;
-(Class)sessionClass;
-(id)_createSleepSessionWithUserWakeTime:(id)arg0 endReason:(NSUInteger)arg1 ;
-(id)processedSessionForSession:(id)arg0 ;
-(void)endSessionWithDate:(id)arg0 reason:(NSUInteger)arg1 ;
-(void)sleepCoordinator:(id)arg0 sleepModeManuallyExited:(id)arg1 sleepAlarm:(id)arg2 ;
-(void)startSession;


@end


#endif