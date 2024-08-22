// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLCPUENERGYISSUEDETECTORSERVICE_H
#define PLCPUENERGYISSUEDETECTORSERVICE_H

@class PLService, PLEntryNotificationOperatorComposition, NSArray, NSDictionary, NSMutableDictionary, NSDate, PLXPCListenerOperatorComposition, NSString;



@interface PLCPUEnergyIssueDetectorService : PLService

@property (retain) PLEntryNotificationOperatorComposition *batteryCallback; // ivar: _batteryCallback
@property (retain) PLEntryNotificationOperatorComposition *coalitionCallback; // ivar: _coalitionCallback
@property (retain) NSArray *cpuAllowList; // ivar: _cpuAllowList
@property (retain) NSDictionary *cpuThresholds; // ivar: _cpuThresholds
@property (retain) NSMutableDictionary *cpuUsage; // ivar: _cpuUsage
@property (retain) NSDate *detectionStartTime; // ivar: _detectionStartTime
@property (retain) PLXPCListenerOperatorComposition *detectorListener; // ivar: _detectorListener
@property BOOL deviceIsPluggedIn; // ivar: _deviceIsPluggedIn
@property (readonly) NSString *entryKeyPLCoalitionAgentEventIntervalCoalition; // ivar: _entryKeyPLCoalitionAgentEventIntervalCoalition
@property BOOL pluggedInBetweenCoalitionSBC; // ivar: _pluggedInBetweenCoalitionSBC


+(id)defaults;
+(id)entryAggregateDefinitionAppRunTime;
+(id)entryAggregateDefinitions;
+(void)load;
-(CGFloat)getCPUTime:(id)arg0 ;
-(id)buildCallBack:(id)arg0 withGroup:(BOOL)arg1 withHandler:(id)arg2 ;
-(id)init;
-(id)loadCPUAllowlist;
-(id)loadCpuThresholds;
-(int)customLongTermCPUThreshold;
-(int)matchingPidWithProcessName:(id)arg0 withBundleID:(id)arg1 ;
-(void)checkCpuUsage:(id)arg0 withNewCoaltionArray:(id)arg1 ;
-(void)handleBatteryCallback:(id)arg0 ;
-(void)handleCoalitionCallback:(id)arg0 ;
-(void)initOperatorDependancies;
-(void)listAllRunningPidsWithBuffer:(*int)arg0 withSizeOfBuffer:(int)arg1 ;
-(void)sendEnergyIssueSignatureNotification:(id)arg0 withThreshold:(CGFloat)arg1 ;
-(void)testService;


@end


#endif