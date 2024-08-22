// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLSLEEPWAKEAGENT_H
#define PLSLEEPWAKEAGENT_H

@class PLAgent, PLSemaphore, PLXPCListenerOperatorComposition;


#import "PLEventForwardPowerStateEntry.h"

@interface PLSleepWakeAgent : PLAgent

@property CGFloat apSOCBasePower; // ivar: _apSOCBasePower
@property (retain) PLSemaphore *canSleepSemaphore; // ivar: _canSleepSemaphore
@property (retain) PLEventForwardPowerStateEntry *lastSleepEntry; // ivar: _lastSleepEntry
@property (retain) PLEventForwardPowerStateEntry *lastWakeEntry; // ivar: _lastWakeEntry
@property *__IOPMConnection pmConnection; // ivar: _pmConnection
@property unsigned int pmNotifier; // ivar: _pmNotifier
@property unsigned int rootDomainConnect; // ivar: _rootDomainConnect
@property *IONotificationPort systemPowerPortRef; // ivar: _systemPowerPortRef
@property (retain) PLXPCListenerOperatorComposition *wakeGestureXPCListener; // ivar: _wakeGestureXPCListener


+(id)entryEventBackwardDefinitions;
+(id)entryEventForwardDefinitionPowerState;
+(id)entryEventForwardDefinitionUserIdle;
+(id)entryEventForwardDefinitions;
+(id)entryEventNoneDefinitionPowerNapConfig;
+(id)entryEventNoneDefinitions;
+(id)entryEventPointDefinitionCurrentKernelWakeTime;
+(id)entryEventPointDefinitionCurrentMachWakeTime;
+(id)entryEventPointDefinitionKernelState;
+(id)entryEventPointDefinitionScheduledWake;
+(id)entryEventPointDefinitionWakeGesture;
+(id)entryEventPointDefinitions;
+(id)railDefinitions;
+(void)load;
-(NSUInteger)getCurrentWakeTime;
-(NSUInteger)getSleepSubclassKey;
-(id)driverWakeReasons;
-(id)getCurrentWakeTimeKey;
-(id)getLastSleepEntry;
-(id)getLastWakeEntry;
-(id)getPostWakeEntry:(NSUInteger)arg0 ;
-(id)getSleepStatisticsApps;
-(id)getThisWakeEntry:(id)arg0 withCurrentWakeTime:(NSUInteger)arg1 withIsDarkwake:(BOOL)arg2 withDidSleep:(BOOL)arg3 ;
-(id)init;
-(id)sleepTriggers;
-(id)wakeReasonFromIORegistry;
-(id)wakeReasons;
-(id)wakeReasonsAsNSString;
-(id)wakeType;
-(short)getSleepState;
-(unsigned int)getIOPMRootDomain;
-(void)capabilitiesChanged:(unsigned int)arg0 ;
-(void)initOperatorDependancies;
-(void)log;
-(void)logEventForwardUserIdle:(BOOL)arg0 ;
-(void)logEventNonePowerNapConfig;
-(void)logEventPointCurrentScheduledWake;
-(void)logEventPointKernelState;
-(void)logEventPointWakeGesture:(id)arg0 ;
-(void)logSleepEntries:(id)arg0 ;
-(void)logWakeEntries:(id)arg0 withCurrentTime:(NSUInteger)arg1 ;
-(void)registerForCapabilitiesChange;
-(void)registerForUserIdleNotification;
-(void)systemPoweredOn;


@end


#endif