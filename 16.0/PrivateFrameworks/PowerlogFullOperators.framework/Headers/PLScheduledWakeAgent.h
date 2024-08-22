// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLSCHEDULEDWAKEAGENT_H
#define PLSCHEDULEDWAKEAGENT_H

@class PLAgent, PLEntryNotificationOperatorComposition, PLSemaphore, NSMutableDictionary;



@interface PLScheduledWakeAgent : PLAgent

@property (retain) PLEntryNotificationOperatorComposition *canSleepNotification; // ivar: _canSleepNotification
@property (retain) PLSemaphore *canSleepSemaphore; // ivar: _canSleepSemaphore
@property (retain) NSMutableDictionary *previousScheduleWakeEvents; // ivar: _previousScheduleWakeEvents


+(id)accountingGroupDefinitions;
+(id)defaults;
+(id)entryEventBackwardDefinitions;
+(id)entryEventForwardDefinitions;
+(id)entryEventIntervalDefinitions;
+(id)entryEventNoneDefinitions;
+(id)entryEventPointDefinitions;
+(id)railDefinitions;
+(void)load;
-(id)humanReadableScheduledWakeString:(id)arg0 ;
-(id)init;
-(void)initOperatorDependancies;
-(void)log;
-(void)logEventForwardScheduledEvent;


@end


#endif