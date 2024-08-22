// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLPOWERASSERTIONAGENT_H
#define PLPOWERASSERTIONAGENT_H

@class PLAgent, NSMutableDictionary, NSDictionary, PLCFNotificationOperatorComposition, PLTimer, NSMutableArray, PLEntryNotificationOperatorComposition, PLNSNotificationOperatorComposition, NSSet;



@interface PLPowerAssertionAgent : PLAgent

@property (retain) NSMutableDictionary *UUIDStartEntryCache; // ivar: _UUIDStartEntryCache
@property NSInteger aggregateMaxPIDCount; // ivar: _aggregateMaxPIDCount
@property NSInteger aggregteZeroDeltaCount; // ivar: _aggregteZeroDeltaCount
@property (readonly) NSDictionary *assertTypeToEnum; // ivar: _assertTypeToEnum
@property (retain, nonatomic) NSMutableDictionary *assertionAggregatedLastSample; // ivar: _assertionAggregatedLastSample
@property (retain) NSMutableDictionary *assertionAggregatedLastSamplePLDataStructure; // ivar: _assertionAggregatedLastSamplePLDataStructure
@property (retain) PLCFNotificationOperatorComposition *assertionBufferFullNotification; // ivar: _assertionBufferFullNotification
@property (nonatomic) BOOL assertionBufferFullNotificationActive; // ivar: _assertionBufferFullNotificationActive
@property (retain) PLTimer *assertionBufferFullNotificationRearmTimer; // ivar: _assertionBufferFullNotificationRearmTimer
@property (retain) NSMutableArray *assertionBufferNotificationTracking; // ivar: _assertionBufferNotificationTracking
@property (retain) PLCFNotificationOperatorComposition *assertionNotification; // ivar: _assertionNotification
@property (retain) PLTimer *assertionSnapShotTimer; // ivar: _assertionSnapShotTimer
@property (nonatomic) BOOL assertionSnapshotTimerActive;
@property (retain) NSMutableDictionary *assertionUUIDCache; // ivar: _assertionUUIDCache
@property (retain) PLEntryNotificationOperatorComposition *batteryLevelNotificiations; // ivar: _batteryLevelNotificiations
@property (retain) PLEntryNotificationOperatorComposition *canSleepNotification; // ivar: _canSleepNotification
@property (retain) PLNSNotificationOperatorComposition *dailyTaskNotification; // ivar: _dailyTaskNotification
@property BOOL firstBufferDrain; // ivar: _firstBufferDrain
@property (retain) PLCFNotificationOperatorComposition *flushAssertionBufferCFNotification; // ivar: _flushAssertionBufferCFNotification
@property (nonatomic) BOOL lastActivityOverflow; // ivar: _lastActivityOverflow
@property (readonly) NSSet *logAssertNameForActions; // ivar: _logAssertNameForActions
@property (retain) PLTimer *runQueryTimer; // ivar: _runQueryTimer
@property (readonly) NSDictionary *startEndActionsToEnum; // ivar: _startEndActionsToEnum
@property (retain) PLEntryNotificationOperatorComposition *wakeNotification; // ivar: _wakeNotification


+(BOOL)shouldOptimizeSmallAssertions;
+(id)defaults;
+(id)entryEventBackwardDefinitions;
+(id)entryEventForwardDefinitionAssertion;
+(id)entryEventForwardDefinitions;
+(id)entryEventIntervalDefinitions;
+(id)entryEventNoneDefinitions;
+(id)entryEventPointDefinitionAggregateReset;
+(id)entryEventPointDefinitionBufferStatus;
+(id)entryEventPointDefinitionSnapshotReason;
+(id)entryEventPointDefinitionTimedOutProcesses;
+(id)entryEventPointDefinitions;
+(void)load;
-(id)bundleIDForAssertionProcessPID:(int)arg0 ;
-(id)init;
-(id)sanitizeAssertionNameForEntry:(id)arg0 ;
-(void)checkAssertionBufferFullNotificationRate;
-(void)initOperatorDependancies;
-(void)log;
-(void)logAggregatedAssertionActivity;
-(void)logAggregatedAssertionActivityPLDataStructure;
-(void)logEventForwardAssertion;
-(void)logEventForwardAssertionWithReason:(id)arg0 asSnapshot:(BOOL)arg1 ;
-(void)logEventPointAggregateResetWithReason:(short)arg0 withPidCount:(int)arg1 ;
-(void)logInterval:(id)arg0 ;
-(void)logSnapshot:(id)arg0 ;
-(void)logSnapshotAtMidnight:(id)arg0 ;
-(void)resetIOPMSetAssertionActivityAggregatePLDataStructureWithReason:(short)arg0 withPidCount:(int)arg1 ;
-(void)resetIOPMSetAssertionActivityAggregateWithReason:(short)arg0 withPidCount:(int)arg1 ;


@end


#endif