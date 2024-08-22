// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLDEBUGSERVICE_H
#define PLDEBUGSERVICE_H

@class PLService, PLXPCListenerOperatorComposition, PLXPCResponderOperatorComposition, PLEntryNotificationOperatorComposition, PLSemaphore, NSDictionary, NSMutableArray, PLDiscretionaryEnergyMonitor;


#import "PLAccountingDebugService.h"

@interface PLDebugService : PLService

@property (retain) PLAccountingDebugService *accDS; // ivar: _accDS
@property (retain) PLXPCListenerOperatorComposition *aggregateTestListener; // ivar: _aggregateTestListener
@property (retain) PLXPCResponderOperatorComposition *aggregateTestResponder; // ivar: _aggregateTestResponder
@property (retain) PLEntryNotificationOperatorComposition *assertionListener; // ivar: _assertionListener
@property (retain) PLEntryNotificationOperatorComposition *assertionNewListener; // ivar: _assertionNewListener
@property (retain) PLEntryNotificationOperatorComposition *assertionUpdateListener; // ivar: _assertionUpdateListener
@property (retain) PLEntryNotificationOperatorComposition *canSleepNotification; // ivar: _canSleepNotification
@property (retain) PLSemaphore *canSleepSemaphore; // ivar: _canSleepSemaphore
@property (retain) NSDictionary *clientFrameworkTestData; // ivar: _clientFrameworkTestData
@property (retain) NSMutableArray *clientFrameworkTestDataBatch; // ivar: _clientFrameworkTestDataBatch
@property (retain) PLXPCListenerOperatorComposition *clientFrameworkTestListener; // ivar: _clientFrameworkTestListener
@property (retain) PLXPCListenerOperatorComposition *clientFrameworkTestListenerBatch; // ivar: _clientFrameworkTestListenerBatch
@property (retain) PLXPCListenerOperatorComposition *clientFrameworkTestListenerNonAllowlisted; // ivar: _clientFrameworkTestListenerNonAllowlisted
@property (retain) PLXPCResponderOperatorComposition *clientFrameworkTestResponder; // ivar: _clientFrameworkTestResponder
@property (retain) PLXPCResponderOperatorComposition *clientFrameworkTestResponderBatch; // ivar: _clientFrameworkTestResponderBatch
@property (retain) PLXPCResponderOperatorComposition *clientFrameworkTestResponderNonAllowlisted; // ivar: _clientFrameworkTestResponderNonAllowlisted
@property (retain) PLDiscretionaryEnergyMonitor *energyMonitorDebugInstance; // ivar: _energyMonitorDebugInstance
@property (retain) PLXPCResponderOperatorComposition *energyMonitorDebugResponder; // ivar: _energyMonitorDebugResponder
@property (retain) PLXPCListenerOperatorComposition *schemaTestListener; // ivar: _schemaTestListener
@property (retain) PLEntryNotificationOperatorComposition *sleepNotification; // ivar: _sleepNotification
@property (retain) PLEntryNotificationOperatorComposition *wakeNotification; // ivar: _wakeNotification
@property (retain) PLXPCListenerOperatorComposition *xpcListenerPLLog; // ivar: _xpcListenerPLLog
@property (retain) PLXPCResponderOperatorComposition *xpcResponderPLAPITest; // ivar: _xpcResponderPLAPITest
@property (retain) PLXPCResponderOperatorComposition *xpcResponderPLLog; // ivar: _xpcResponderPLLog


+(id)entryAggregateDefinitionAggregateTest;
+(id)entryAggregateDefinitionAggregateTestSmall;
+(id)entryAggregateDefinitionAggregateTestSplitAndBucket;
+(id)entryAggregateDefinitionAggregateTestVerySmall;
+(id)entryAggregateDefinitions;
+(id)entryEventNoneDefinitionArrayTest;
+(id)entryEventNoneDefinitionFastInsertTest;
+(id)entryEventNoneDefinitionPLAPITest;
+(id)entryEventNoneDefinitionSleepNotificationTest;
+(id)entryEventNoneDefinitions;
+(id)entryEventPointDefinitionTest;
+(id)entryEventPointDefinitions;
+(id)railDefinitions;
+(void)load;
-(BOOL)rawRead:(id)arg0 ;
-(BOOL)rawWrite:(id)arg0 ;
-(id)filledTestArrayEntry;
-(id)getValueForPropertyName:(id)arg0 forEnergyMonitor:(id)arg1 ;
-(id)handleEnergyMonitorDebugQuery:(id)arg0 ;
-(id)init;
-(id)testPLAPIAccounting_AddPowerMeasurementEventInterval:(id)arg0 ;
-(id)testPLAPIAccounting_CreateDistributionEventForwardAdd:(id)arg0 ;
-(id)testPLAPIAccounting_CreateDistributionEventForwardChild:(id)arg0 ;
-(id)testPLAPIAccounting_CreateDistributionEventForwardRem:(id)arg0 ;
-(id)testPLAPIAccounting_CreateDistributionEventInterval:(id)arg0 ;
-(id)testPLAPIAccounting_CreateDistributionEventPoint:(id)arg0 ;
-(id)testPLAPIAccounting_CreatePowerEventBackward:(id)arg0 ;
-(id)testPLAPIAccounting_CreatePowerEventForward:(id)arg0 ;
-(id)testPLAPIAccounting_CreatePowerEventInterval:(id)arg0 ;
-(id)testPLAPIAccounting_CreateQualificationEventBackward:(id)arg0 ;
-(id)testPLAPIAccounting_CreateQualificationEventForwardAdd:(id)arg0 ;
-(id)testPLAPIAccounting_CreateQualificationEventForwardChild:(id)arg0 ;
-(id)testPLAPIAccounting_CreateQualificationEventForwardRem:(id)arg0 ;
-(id)testPLAPIAccounting_CreateQualificationEventInterval:(id)arg0 ;
-(id)testPLAPIAccounting_CreateQualificationEventPoint:(id)arg0 ;
-(id)testPLAPIAccounting_ExistingTest:(id)arg0 ;
-(id)testPLAPICore_DeleteAllEntriesForKey:(id)arg0 ;
-(id)testPLAPICore_DeleteAllEntriesForKeyBTWF:(id)arg0 ;
-(id)testPLAPICore_DeleteAllEntriesForKeyWF:(id)arg0 ;
-(id)testPLAPICore_DeleteEntry:(id)arg0 ;
-(id)testPLAPICore_DeleteEntryForKey:(id)arg0 ;
-(id)testPLAPICore_EntriesForKeyBeforeTICWF:(id)arg0 ;
-(id)testPLAPICore_EntriesForKeyInTimeRange:(id)arg0 ;
-(id)testPLAPICore_EntriesForKeyWithProperties:(id)arg0 ;
-(id)testPLAPICore_LastEntryForKeyWC:(id)arg0 ;
-(id)testPLAPICore_LastEntryForKeyWSEK:(id)arg0 ;
-(id)testPLAPICore_UpdateEntry:(id)arg0 ;
-(id)testPLAPICore_WriteEntries:(id)arg0 ;
-(id)testPLAPICore_WriteEntry:(id)arg0 ;
-(id)test_LogErr:(id)arg0 str:(id)arg1 ;
-(id)test_LogPass:(id)arg0 str:(id)arg1 ;
-(void)aggregateDataFromSignpost;
-(void)constructAppIdentifierColumns;
-(void)constructAppIdentifierTables;
-(void)currentBasebandTime;
-(void)fireSignificantBatteryChangeNotification;
-(void)initOperatorDependancies;
-(void)iterateAgents;
-(void)iterateServices;
-(void)populateIdentifiers:(id)arg0 ;
-(void)printNullTestResultsForEntry:(id)arg0 withDescription:(id)arg1 ;
-(void)stressActivityScheduler;
-(void)stressAggregateSmall;
-(void)stressAggregateVerySmall;
-(void)stressCache;
-(void)stressCacheSmall;
-(void)stressMidnightCalculation;
-(void)stressMonotonicTimer;
-(void)stressMonotonicTimer2;
-(void)stressMonotonicTimer3;
-(void)stressObjectForKey;
-(void)stressPLEntry;
-(void)stressSetObjectForKey;
-(void)stressTaskingSubmission;
-(void)stressTimer;
-(void)testABM;
-(void)testAllEntryKeyRequests;
-(void)testArchive;
-(void)testArray;
-(void)testBlockingFlushCaches;
-(void)testCompression;
-(void)testDailyTasks;
-(void)testEntryApplicationAgent;
-(void)testEntryDelete;
-(void)testEntryLogRequestedForEntryKey:(id)arg0 ;
-(void)testEntryQueries;
-(void)testEntrySleep;
-(void)testEntryWake;
-(void)testExit;
-(void)testFastInserts;
-(void)testGenerateOTASubmission;
-(void)testMonotonicAggregateEntries;
-(void)testMonotonicAggregateEntriesExtendedTime;
-(void)testMonotonicTimerThroughSleep;
-(void)testProportionateAggregateEntries;
-(void)testTrimCESQL;
-(void)testTrimEPSQL;
-(void)testUTF8;


@end


#endif