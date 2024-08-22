// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLPROCESSNETWORKAGENT_H
#define PLPROCESSNETWORKAGENT_H

@class PLAgent, PLEntryNotificationOperatorComposition, PLCFNotificationOperatorComposition, PLXPCListenerOperatorComposition, NSDate, NSDictionary, PLMonotonicTimer, NSMutableSet, UsageFeed;



@interface PLProcessNetworkAgent : PLAgent

@property (retain) PLEntryNotificationOperatorComposition *batteryLevelChanged; // ivar: _batteryLevelChanged
@property (retain) PLEntryNotificationOperatorComposition *batteryLevelChangedListenerForNetworkBitmap; // ivar: _batteryLevelChangedListenerForNetworkBitmap
@property (retain) PLCFNotificationOperatorComposition *flushNetworkBitmapsListener; // ivar: _flushNetworkBitmapsListener
@property (retain) PLXPCListenerOperatorComposition *highBWEndlistener; // ivar: _highBWEndlistener
@property (retain) PLXPCListenerOperatorComposition *highBWStartListener; // ivar: _highBWStartListener
@property (retain) NSDate *lastEntryDate; // ivar: _lastEntryDate
@property NSUInteger lastNetworkBitmapTimestamp; // ivar: _lastNetworkBitmapTimestamp
@property (retain) NSDictionary *lastProcessNameToNetworkUsageEntry; // ivar: _lastProcessNameToNetworkUsageEntry
@property (retain) PLMonotonicTimer *logUsageTimer; // ivar: _logUsageTimer
@property (retain) NSMutableSet *processes; // ivar: _processes
@property *__NStatManager statManagerRef; // ivar: _statManagerRef
@property (retain) UsageFeed *usageFeed; // ivar: _usageFeed


+(id)entryEventBackwardDefinitionNetworkBitmap;
+(id)entryEventBackwardDefinitionUsage;
+(id)entryEventBackwardDefinitions;
+(id)entryEventForwardDefinitionHighCellularBWTransactions;
+(id)entryEventForwardDefinitionHighCellularBWTransactionsDetail;
+(id)entryEventForwardDefinitionLowInternet;
+(id)entryEventForwardDefinitions;
+(id)entryEventIntervalDefinitionUsage;
+(id)entryEventIntervalDefinitions;
+(id)entryEventNoneDefinitions;
+(id)entryEventPointDefinitionConnection;
+(id)entryEventPointDefinitions;
+(void)load;
-(BOOL)hasSymptomsLogging;
-(BOOL)outcomeHasDataUsage:(id)arg0 ;
-(id)compressNetworkBitmap:(id)arg0 ;
-(id)init;
-(void)accountWithNetworkUsageDiffEntries:(id)arg0 withStartDate:(id)arg1 withEndDate:(id)arg2 ;
-(void)addSource:(id)arg0 toPID:(id)arg1 ;
-(void)aggregateAndLogNetworkBitmaps:(id)arg0 withStartTime:(NSUInteger)arg1 andEndTime:(NSUInteger)arg2 ;
-(void)didAddNewSource:(struct __NStatSource *)arg0 ;
-(void)didRemoveSource:(id)arg0 ;
-(void)didSetCountsBlock:(id)arg0 withCounts:(id)arg1 ;
-(void)didSetDescriptionBlock:(id)arg0 withDescription:(id)arg1 ;
-(void)handleHighBWEndCallback:(id)arg0 ;
-(void)handleHighBWStartCallback:(id)arg0 ;
-(void)initOperatorDependancies;
-(void)log;
-(void)logEventBackwardNetworkBitmaps;
-(void)logEventBackwardUsage;
-(void)logEventBackwardUsageWithOutcome:(id)arg0 ;
-(void)logEventForwardLowInternet;
-(void)logEventPointConnectionEvent:(short)arg0 forSource:(id)arg1 ;
-(void)processesOfInterest:(id)arg0 ;
-(void)timestampNetConnectEntry:(id)arg0 withEventType:(short)arg1 withSource:(id)arg2 ;
-(void)transferSource:(id)arg0 fromPID:(id)arg1 toPID:(id)arg2 ;


@end


#endif