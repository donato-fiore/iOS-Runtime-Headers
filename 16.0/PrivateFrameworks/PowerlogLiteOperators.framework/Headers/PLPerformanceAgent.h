// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLPERFORMANCEAGENT_H
#define PLPERFORMANCEAGENT_H

@class PLAgent, PLEntryNotificationOperatorComposition, PLNSNotificationOperatorComposition;



@interface PLPerformanceAgent : PLAgent

@property (retain) PLEntryNotificationOperatorComposition *batteryLevelChanged; // ivar: _batteryLevelChanged
@property (retain) PLNSNotificationOperatorComposition *dailyTaskNotification; // ivar: _dailyTaskNotification
@property int randomSample; // ivar: _randomSample
@property int sampleCounter; // ivar: _sampleCounter


+(BOOL)shouldCreateJetsamPriorityTable;
+(id)entryEventIntervalDefinitionExperiment;
+(id)entryEventIntervalDefinitions;
+(id)entryEventPointDefinitionAPFSFragmentation;
+(id)entryEventPointDefinitionDiskFragmentation;
+(id)entryEventPointDefinitionDiskUsage;
+(id)entryEventPointDefinitionJetsamPriority;
+(id)entryEventPointDefinitionRollout;
+(id)entryEventPointDefinitionSystemMemory;
+(id)entryEventPointDefinitions;
+(void)load;
-(id)descriptionForMemoryPressure:(int)arg0 ;
-(id)init;
-(int)countFD:(int)arg0 ;
-(int)countMachPort:(int)arg0 ;
-(void)initOperatorDependancies;
-(void)log;
-(void)logEventIntervalExperiment;
-(void)logEventPointAPFSFragmentation;
-(void)logEventPointAPFSFragmentationWithContainer:(char *)arg0 ;
-(void)logEventPointDiskFragmentation;
-(void)logEventPointDiskUsage;
-(void)logEventPointJetsamPrority;
-(void)logEventPointRollout;
-(void)logEventPointSystemMemory;
-(void)logSystemMemoryToCA:(id)arg0 ;


@end


#endif