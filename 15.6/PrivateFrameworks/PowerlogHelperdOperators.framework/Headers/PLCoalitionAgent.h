// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLCOALITIONAGENT_H
#define PLCOALITIONAGENT_H

@class PLAgent, PLEntryNotificationOperatorComposition, NSMutableDictionary, PLXPCListenerOperatorComposition, NSDate, NSString, NSDictionary, PLXPCResponderOperatorComposition, PLNSNotificationOperatorComposition;



@interface PLCoalitionAgent : PLAgent

@property (retain) PLEntryNotificationOperatorComposition *batteryLevelChanged; // ivar: _batteryLevelChanged
@property (retain) NSMutableDictionary *coalitionIDToCoalitionNameMapping; // ivar: _coalitionIDToCoalitionNameMapping
@property (retain) PLXPCListenerOperatorComposition *coalitionReapNotification; // ivar: _coalitionReapNotification
@property (retain) NSDate *currentDate; // ivar: _currentDate
@property (retain) NSString *driveCapacity; // ivar: _driveCapacity
@property (retain) NSDictionary *lastCoalitionDictionary; // ivar: _lastCoalitionDictionary
@property (retain) NSDictionary *lastCoalitionObjectDictionary; // ivar: _lastCoalitionObjectDictionary
@property (retain) NSDate *lastDate; // ivar: _lastDate
@property (retain) PLXPCResponderOperatorComposition *logicalWritesResponder; // ivar: _logicalWritesResponder
@property (retain) PLEntryNotificationOperatorComposition *processmonitorCallback; // ivar: _processmonitorCallback
@property (retain) NSMutableDictionary *reapedCoalitions; // ivar: _reapedCoalitions
@property (retain) NSDate *reportMemoryStatsAfterTime; // ivar: _reportMemoryStatsAfterTime
@property (retain) PLNSNotificationOperatorComposition *thermalMonitorListener; // ivar: _thermalMonitorListener


+(id)entryAggregateDefinitionNANDStats;
+(id)entryAggregateDefinitions;
+(id)entryEventIntervalDefinitionCoalitionUsage;
+(id)entryEventIntervalDefinitions;
+(id)entryEventPointDefinitionCoalitionDrop;
+(id)entryEventPointDefinitionCoalitionMemory;
+(id)entryEventPointDefinitionCoalitionSnapshot;
+(id)entryEventPointDefinitions;
+(void)load;
-(BOOL)shouldLogCoalitionObject:(id)arg0 withEndObject:(id)arg1 ;
-(CGFloat)getCPUEnergyFromEntry:(id)arg0 ;
-(CGFloat)getCPUVoucherTimeFromEntry:(id)arg0 ;
-(CGFloat)getCPUWeightFromEntry:(id)arg0 ;
-(CGFloat)getGPUTimeFromEntry:(id)arg0 ;
-(NSUInteger)readPropertyFromRegistry:(struct __CFString *)arg0 ;
-(id)buildPLCoalitionDataObject:(struct coalition_resource_usage *)arg0 withBundleId:(id)arg1 withLaunchdName:(id)arg2 withDate:(id)arg3 withCoalitionId:(NSUInteger)arg4 isApp:(BOOL)arg5 ;
-(id)buildPLCoalitionDataObjectFromReapedNotification:(id)arg0 ;
-(id)buildPLEntry:(struct coalition_resource_usage *)arg0 withBundleId:(id)arg1 withLaunchdName:(id)arg2 withDate:(id)arg3 withCoalitionId:(NSUInteger)arg4 ;
-(id)buildPLEntryDiffWithStartEntry:(id)arg0 withEndEntry:(id)arg1 withLastDate:(id)arg2 ;
-(id)buildPLEntryDiffWithStartObject:(id)arg0 withEndObject:(id)arg1 withStartDate:(id)arg2 withEndDate:(id)arg3 ;
-(id)filterCoalitionDiffEntries:(id)arg0 ;
-(id)init;
-(id)processPerAppLogicalWritesWithInfo:(id)arg0 ;
-(void)addAccountingEventsFromCoalitions:(id)arg0 ;
-(void)debugCoalitionAgent;
-(void)getCoalitionInfoWithHFLFlag:(BOOL)arg0 ;
-(void)getStorageCapacity;
-(void)handleReapNotifications:(id)arg0 ;
-(void)initOperatorDependancies;
-(void)log;
-(void)logAggregateNANDStatsWithInfo:(id)arg0 ;
-(void)logCoalitionDifference:(id)arg0 ;
-(void)logCoalitionObjectDifference:(id)arg0 ;
-(void)logCoalitionObjectMemory:(id)arg0 ;
-(void)logCoalitionObjectSnapshot:(id)arg0 ;
-(void)logCoalitionSnapshot:(id)arg0 ;
-(void)logEventIntervalCoalitionIntervalWithHFLFlag:(BOOL)arg0 ;
-(void)logEventIntervalCoalitionIntervalWithoutHighFreqLogging;
-(void)logToAggd:(id)arg0 ;
-(void)logToCAProcessMemory:(id)arg0 andAccumulatedMemory:(id)arg1 ;
-(void)printCoalitionResourceUsage:(struct coalition_resource_usage *)arg0 withBundleId:(id)arg1 withLaunchdName:(id)arg2 ;
-(void)timedCoalitionInfo;


@end


#endif