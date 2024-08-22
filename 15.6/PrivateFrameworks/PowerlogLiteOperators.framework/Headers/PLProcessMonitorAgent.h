// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLPROCESSMONITORAGENT_H
#define PLPROCESSMONITORAGENT_H

@class PLAgent, PLXPCListenerOperatorComposition, PLNSNotificationOperatorComposition, PLEntryNotificationOperatorComposition, NSDate, NSDictionary, PLMonotonicTimer, NSMutableSet, PLThreadStats;



@interface PLProcessMonitorAgent : PLAgent

@property (retain) PLXPCListenerOperatorComposition *appNotFrozenListener; // ivar: _appNotFrozenListener
@property (retain) PLXPCListenerOperatorComposition *appResumeInferredCarryListener; // ivar: _appResumeInferredCarryListener
@property (retain) PLXPCListenerOperatorComposition *appResumePredictionsListener; // ivar: _appResumePredictionsListener
@property (retain) PLNSNotificationOperatorComposition *asertionNotifications; // ivar: _asertionNotifications
@property (retain) PLEntryNotificationOperatorComposition *batteryLevelChanged; // ivar: _batteryLevelChanged
@property (retain) NSDate *currentCachedDate; // ivar: _currentCachedDate
@property CGFloat currentCachedTotalCPUTime; // ivar: _currentCachedTotalCPUTime
@property (retain) NSDictionary *diffFreezerProcs; // ivar: _diffFreezerProcs
@property BOOL firstBoot; // ivar: _firstBoot
@property (retain) NSDate *lastEntryDate; // ivar: _lastEntryDate
@property (retain) NSDictionary *lastFreezerProcs; // ivar: _lastFreezerProcs
@property (retain) NSDictionary *lastThreadIdToKTMonitorEntryDict; // ivar: _lastThreadIdToKTMonitorEntryDict
@property BOOL launchServiceStatsEnabled; // ivar: _launchServiceStatsEnabled
@property (retain) PLMonotonicTimer *logTimer; // ivar: _logTimer
@property (retain) NSDate *previousCacheDate; // ivar: _previousCacheDate
@property NSInteger processExitSummaryCount; // ivar: _processExitSummaryCount
@property (retain) NSMutableSet *processes; // ivar: _processes
@property (retain) PLThreadStats *threadStats; // ivar: _threadStats


+(BOOL)enableThreadStatsLogging;
+(NSUInteger)PIDToCoalitionID:(int)arg0 ;
+(id)defaults;
+(id)entryEventBackwardDefinitionProcessMonitor;
+(id)entryEventBackwardDefinitionProcessPeakMemory;
+(id)entryEventBackwardDefinitionThreadStats;
+(id)entryEventBackwardDefinitions;
+(id)entryEventBackwardProcessExitHistogram;
+(id)entryEventForwardAppResumeInferredCarry;
+(id)entryEventForwardDefinitions;
+(id)entryEventForwardProcessID;
+(id)entryEventIntervalDefinitionKernelTaskMonitor;
+(id)entryEventIntervalDefinitionProcessMonitorDiff;
+(id)entryEventIntervalDefinitions;
+(id)entryEventNoneDefinitions;
+(id)entryEventPointAppNotFrozen;
+(id)entryEventPointAppResumePredictions;
+(id)entryEventPointDefinitions;
+(id)entryEventPointFreezerDemotion;
+(id)entryEventPointFreezerStats;
+(id)entryEventPointMemoryStats;
+(id)entryEventPointMemoryTracking;
+(id)entryEventPointProcessExit;
+(id)entryEventPointProcessSnapshot;
+(id)entryEventPointSharedCacheReslid;
+(id)entryEventPointSystemFreezerStats;
+(void)load;
-(BOOL)isCachedForProcessID:(int)arg0 ;
-(BOOL)isCachedForProcessID:(int)arg0 andName:(id)arg1 ;
-(id)eventForwardProcessIDForPID:(int)arg0 ;
-(id)getFrozenProcesses;
-(id)getProcessesNotInFreezer:(id)arg0 withCurrentProcesses:(id)arg1 ;
-(id)init;
-(id)ledgerDataAtIndex:(int)arg0 forPid:(NSInteger)arg1 ;
-(id)processMonitorMultiKeyFromProcessID:(id)arg0 ;
-(id)trimConditionsForEntryKey:(id)arg0 forTrimDate:(id)arg1 ;
-(int)getFrozenToSwapLedgerIndex:(NSInteger)arg0 ;
-(int)getLedgerIndex:(NSInteger)arg0 forKey:(id)arg1 ;
-(int)getProcDirtyTimeLedgerIndex:(NSInteger)arg0 ;
-(int)get_kthread_list:(**NSUInteger)arg0 ;
-(void)disableProcessExitLogging;
-(void)enableProcessExitLogging;
-(void)getCpuUsageAndMemoryForPid:(int)arg0 withBuffer:(*void)arg1 withNewProcessArray:(id)arg2 withTotalCpu:(*CGFloat)arg3 withActiveProcesses:(id)arg4 ;
-(void)initOperatorDependancies;
-(void)initTaskOperatorDependancies;
-(void)initializeThreadStatsLogging;
-(void)log;
-(void)logEventBackwardProcessExitHistogram:(id)arg0 withStats:(struct ? *)arg1 withDate:(id)arg2 ;
-(void)logEventBackwardProcessMonitor;
-(void)logEventBackwardProcessMonitorUsingCache;
-(void)logEventBackwardProcessPeakMemoryUsingCache;
-(void)logEventForwardAppResumeInferredCarry:(id)arg0 ;
-(void)logEventIntervalKernelTaskMonitor;
-(void)logEventIntervalProcessMonitorInterval;
-(void)logEventIntervalProcessMonitorIntervalUsingCache;
-(void)logEventPointAppNotFrozen:(id)arg0 ;
-(void)logEventPointAppResumePredictions:(id)arg0 ;
-(void)logEventPointFreezerDemotion;
-(void)logEventPointFreezerStats;
-(void)logEventPointMemoryStats;
-(void)logEventPointMemoryTracking;
-(void)logEventPointProcessExit:(id)arg0 withLabelCount:(id)arg1 withStats:(struct ? *)arg2 withDate:(id)arg3 withNowInSec:(NSUInteger)arg4 ;
-(void)logEventPointProcessSnapshot;
-(void)logEventPointSharedCacheReslid:(id)arg0 ;
-(void)logEventPointSystemFreezerStats;
-(void)logProcDirtyStats;
-(void)logProcessExit;
-(void)logThreadStats;
-(void)processesOfInterest:(id)arg0 ;
-(void)updateProcessMonitorCache;


@end


#endif