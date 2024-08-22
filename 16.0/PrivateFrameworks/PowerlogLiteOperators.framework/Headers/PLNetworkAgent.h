// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLNETWORKAGENT_H
#define PLNETWORKAGENT_H

@class PLAgent, PLEntryNotificationOperatorComposition, PLSemaphore, NSMutableDictionary;
@protocol OS_nw_path_monitor, OS_dispatch_queue;



@interface PLNetworkAgent : PLAgent

@property (retain) PLEntryNotificationOperatorComposition *batteryLevelChanged; // ivar: _batteryLevelChanged
@property (retain) PLEntryNotificationOperatorComposition *canSleep; // ivar: _canSleep
@property (retain) PLSemaphore *canSleepSemaphore; // ivar: _canSleepSemaphore
@property (retain) NSMutableDictionary *lastIsExpensiveProperties; // ivar: _lastIsExpensiveProperties
@property (retain) NSObject<OS_nw_path_monitor> *nwPathMonitorCellular; // ivar: _nwPathMonitorCellular
@property (retain) NSObject<OS_nw_path_monitor> *nwPathMonitorLoopback; // ivar: _nwPathMonitorLoopback
@property (retain) NSObject<OS_nw_path_monitor> *nwPathMonitorOther; // ivar: _nwPathMonitorOther
@property (retain) NSObject<OS_dispatch_queue> *nwPathMonitorQueue; // ivar: _nwPathMonitorQueue
@property (retain) NSObject<OS_nw_path_monitor> *nwPathMonitorWiFi; // ivar: _nwPathMonitorWiFi
@property (retain) NSObject<OS_nw_path_monitor> *nwPathMonitorWired; // ivar: _nwPathMonitorWired
@property (nonatomic) int wakeSocket; // ivar: _wakeSocket


+(id)accountingGroupDefinitions;
+(id)defaults;
+(id)entryEventBackwardDefinitions;
+(id)entryEventForwardDefinitionNetworkIsExpensive;
+(id)entryEventForwardDefinitions;
+(id)entryEventIntervalDefinitions;
+(id)entryEventNoneDefinitions;
+(id)entryEventPointDefinitionUnattributedWake;
+(id)entryEventPointDefinitionWake;
+(id)entryEventPointDefinitions;
+(id)railDefinitions;
+(void)load;
-(id)NWPathMonitorWithInterface:(int)arg0 ;
-(id)init;
-(void)handleNWPathUpdate:(id)arg0 ;
-(void)initKernelEvent;
-(void)initOperatorDependancies;
-(void)log;
-(void)logEventBackwardCumulativeNetworkUsage;
-(void)logEventPointWake;


@end


#endif