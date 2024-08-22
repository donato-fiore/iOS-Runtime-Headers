// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLBATTERYGAUGESERVICE_H
#define PLBATTERYGAUGESERVICE_H

@class PLService, NSMutableDictionary, NSDate, NSTimer, PLSemaphore, NSSet, NSMutableArray, PLXPCResponderOperatorComposition;


#import "PLDTCostElement.h"

@interface PLBatteryGaugeService : PLService

@property (retain) NSMutableDictionary *applicationResults; // ivar: _applicationResults
@property (retain) NSMutableDictionary *bundleIDandPidMap; // ivar: _bundleIDandPidMap
@property (retain) id *costElement; // ivar: _costElement
@property int curQueryCount; // ivar: _curQueryCount
@property (retain) NSDate *curQueryTime; // ivar: _curQueryTime
@property (retain) NSMutableDictionary *entrykeyCallBackMapping; // ivar: _entrykeyCallBackMapping
@property (retain) NSMutableDictionary *entrykeyCallBackOnceMapping; // ivar: _entrykeyCallBackOnceMapping
@property (retain) NSTimer *exitTimer; // ivar: _exitTimer
@property BOOL isTestingRunning; // ivar: _isTestingRunning
@property int lastQueryCount; // ivar: _lastQueryCount
@property (retain) NSDate *lastQueryTime; // ivar: _lastQueryTime
@property (retain) NSMutableDictionary *locationResults; // ivar: _locationResults
@property (retain) NSMutableDictionary *measurements; // ivar: _measurements
@property (retain) PLDTCostElement *networkingCostElement; // ivar: _networkingCostElement
@property (retain) NSMutableDictionary *processMonitorResults; // ivar: _processMonitorResults
@property (retain) NSMutableDictionary *processNetworkResults; // ivar: _processNetworkResults
@property (retain) NSMutableDictionary *reported; // ivar: _reported
@property (retain) NSMutableDictionary *reportedApplication; // ivar: _reportedApplication
@property (retain) NSMutableDictionary *reportedLocation; // ivar: _reportedLocation
@property (retain) NSMutableDictionary *reportedProcessMonitor; // ivar: _reportedProcessMonitor
@property (retain) NSMutableDictionary *reportedProcessNetwork; // ivar: _reportedProcessNetwork
@property (retain) NSMutableDictionary *requestTime; // ivar: _requestTime
@property (retain) PLSemaphore *responseSemaphore; // ivar: _responseSemaphore
@property (retain) NSMutableDictionary *responseTime; // ivar: _responseTime
@property (retain) NSMutableDictionary *results; // ivar: _results
@property (retain) NSMutableDictionary *returnTime; // ivar: _returnTime
@property (readonly) NSSet *scoringEntities; // ivar: _scoringEntities
@property CGFloat startTime; // ivar: _startTime
@property CGFloat stopTime; // ivar: _stopTime
@property (retain) NSTimer *thermalStateTimer; // ivar: _thermalStateTimer
@property (retain) NSMutableArray *trackedProcesses; // ivar: _trackedProcesses
@property (retain) PLXPCResponderOperatorComposition *xpcResponderBatteryGaugeDT; // ivar: _xpcResponderBatteryGaugeDT


+(void)load;
-(CGFloat)computeDisplayCostWithAvgRed:(int)arg0 withAvgGreen:(int)arg1 withAvgBlue:(int)arg2 ;
-(CGFloat)computeGPUCostWithGPUSec:(id)arg0 ;
-(CGFloat)computeLocationCostWithWifiCost:(int)arg0 withGpsCost:(int)arg1 withCellCost:(int)arg2 withSkyhookCost:(int)arg3 ;
-(CGFloat)computeNetworkingCostWithWifiIn:(int)arg0 withWifiOut:(int)arg1 withCellIn:(int)arg2 withCellOut:(int)arg3 ;
-(id)DTQueryResponse:(id)arg0 ;
-(id)clearStateRoutine:(id)arg0 ;
-(id)compileSnapshotResponse;
-(id)convertRawUsageToScore:(id)arg0 ;
-(id)extractAndSetProcessIdentifierWithPayload:(id)arg0 ;
-(id)extractAndTranslateProcessIdentifier:(id)arg0 ;
-(id)getObjectInMeasurementsWithPid:(int)arg0 withCategory:(id)arg1 withKey:(id)arg2 ;
-(id)init;
-(id)pauseRoutineWithPayload:(id)arg0 ;
-(id)resumeRoutineWithPayload:(id)arg0 ;
-(id)startRoutineWithPayload:(id)arg0 ;
-(id)stopRoutineWithPayload:(id)arg0 ;
-(int)matchingPidWithProcessName:(id)arg0 withBundleID:(id)arg1 ;
-(void)dataReceivedFrom:(id)arg0 ;
-(void)initOperatorDependancies;
-(void)initResponseSemaphore;
-(void)listAllRunningPidsWithBuffer:(*int)arg0 withSizeOfBuffer:(int)arg1 ;
-(void)parseApplicationResults:(id)arg0 ;
-(void)parseCoalitionResults:(id)arg0 ;
-(void)parseDisplayResults:(id)arg0 ;
-(void)parseLocationResults:(id)arg0 ;
-(void)parseProcessMonitorResults:(id)arg0 ;
-(void)parseProcessNetworkResults:(id)arg0 ;
-(void)parseThermalStateCallback:(id)arg0 ;
-(void)registerNotificationWithAgent:(id)arg0 withType:(id)arg1 withTableName:(id)arg2 withCallBackType:(BOOL)arg3 withBlock:(id)arg4 ;
-(void)requestDataFrom:(id)arg0 withType:(int)arg1 ;
-(void)selfExit:(id)arg0 ;
-(void)setLastActiveStartTimeAndLastSuspendTimeWithPid:(int)arg0 withAppState:(int)arg1 withCurrentTime:(id)arg2 ;
-(void)setObjectInMeasurementsWithObject:(id)arg0 withPid:(int)arg1 withCategory:(id)arg2 withKey:(id)arg3 ;
-(void)testGaugeService;
-(void)testGaugeServiceSingleInstance:(id)arg0 ;
-(void)translateProcessIdentifierWithInput:(id)arg0 ;
-(void)triggerAllData;


@end


#endif