// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NWACTIVITYHANDLER_H
#define NWACTIVITYHANDLER_H

@class AnalyticsWorkspace, NWAccumulator, NSMutableArray, NSString, NSDictionary, NSUUID, NSMutableDictionary;
@protocol SymptomsAWDObserverDelegate, ConfigurableObjectProtocol, SymptomAdditionalProtocol, ManagedEventInfoProtocol, OS_dispatch_queue, OS_dispatch_source, OS_nw_activity;

#import <Foundation/Foundation.h>

#import "NWUUIDMapper.h"

@interface NWActivityHandler : NSObject <SymptomsAWDObserverDelegate, ConfigurableObjectProtocol, SymptomAdditionalProtocol, ManagedEventInfoProtocol>

 {
    NSObject<OS_dispatch_queue> *_metricsQueue;
    NSObject<OS_dispatch_source> *_metricCollectionTimer;
    CGFloat _lastCellularTriggerTime;
    CGFloat _lastWiFiTriggerTime;
    unsigned int _outstandingWiFiFragments;
    unsigned short _L2MetricCount;
    AnalyticsWorkspace *_workspace;
    BOOL _cellFragmentRequestOutstanding;
    BOOL _awdObserverConfigured;
    NSObject<OS_nw_activity> *_batteryActivity;
    id *_relayReadyObserver;
    BOOL _completedInitialization;
}


@property (retain, nonatomic) NWAccumulator *batteryAccumulator; // ivar: _batteryAccumulator
@property (retain, nonatomic) NWAccumulator *batteryAccumulatorSnapshot; // ivar: _batteryAccumulatorSnapshot
@property (readonly, nonatomic) NSMutableArray *completeActivities; // ivar: _completeActivities
@property (readonly, nonatomic) NSMutableArray *currentActivities; // ivar: _currentActivities
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDictionary *lastCellularFragment; // ivar: _lastCellularFragment
@property (retain, nonatomic) NSUUID *lastWiFiActivity; // ivar: _lastWiFiActivity
@property (readonly, nonatomic) NSMutableDictionary *mappedMetrics; // ivar: _mappedMetrics
@property (readonly, nonatomic) NSUUID *nullUUID; // ivar: _nullUUID
@property (readonly, nonatomic) NWUUIDMapper *nullUUIDMapper; // ivar: _nullUUIDMapper
@property (readonly) Class superclass;


+(id)configureClass:(id)arg0 ;
+(id)metricNameForAWDMetricID:(unsigned int)arg0 ;
+(id)sharedInstance;
+(id)sharedMetricsQueue;
-(BOOL)_saveMetricWithUUIDS:(id)arg0 parentUUID:(id)arg1 withData:(id)arg2 ofType:(int)arg3 ;
-(BOOL)configuredForMetricStreaming;
-(BOOL)noteSymptom:(id)arg0 ;
-(id)_convertQueueStats:(id)arg0 forInterfaceType:(int)arg1 ;
-(id)_createDeviceReportForActivityType:(int)arg0 andDomain:(unsigned int)arg1 ;
-(id)_createNWL2Report;
-(id)_getBundleNameFromPid:(int)arg0 ;
-(id)analyticsWorkspace;
-(id)createValidJSONObject:(id)arg0 atPath:(id)arg1 ;
-(id)init;
-(id)mapperForUUID:(id)arg0 reason:(int)arg1 ;
-(id)serialNumberForInternalBuilds;
-(int)configureInstance:(id)arg0 ;
-(void)_collectCellularFragment;
-(void)_convertPLMNToDecimal:(id)arg0 mcc:(*int)arg1 mnc:(*int)arg2 ;
-(void)_deliverCellularFragment:(id)arg0 ;
-(void)_dumpState:(int)arg0 ;
-(void)_handleCFNetworkItem:(id)arg0 ;
-(void)_handleCellularItem:(id)arg0 ;
-(void)_handleClientMetric:(id)arg0 forBundleID:(id)arg1 ;
-(void)_handleEpilogue:(id)arg0 ;
-(void)_handleL2Start:(id)arg0 ;
-(void)_handleL2Stop:(id)arg0 ;
-(void)_handleNWConnectionStatistics:(id)arg0 effectivePid:(int)arg1 ;
-(void)_handleStartActivity:(id)arg0 ;
-(void)_handleWiFiItem:(id)arg0 ;
-(void)_pruneActivityLists;
-(void)_pruneOldMappings;
-(void)_reportThermalPressureEvent:(unsigned int)arg0 forActivityEpilogue:(id)arg1 ;
-(void)_sendCAEvent:(id)arg0 forReport:(id)arg1 ;
-(void)_sendMetric:(id)arg0 ofType:(int)arg1 forActivities:(id)arg2 parentActivity:(id)arg3 additionalItems:(id)arg4 ;
-(void)_startL2Streaming;
-(void)_stopL2Streaming;
-(void)_triggerCellMetric;
-(void)_triggerWiFiMetric;
-(void)_updateL2MetricLoggingRequests;
-(void)dealloc;
-(void)generateInfoForId:(NSUInteger)arg0 context:(char *)arg1 uuid:(id)arg2 completionBlock:(id)arg3 ;
-(void)handleEvent:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)powerStateChanged:(BOOL)arg0 ;
-(void)processSymptom:(id)arg0 ;
-(void)setUpBatteryAccumulator;
-(void)streamAWDMetric:(id)arg0 withIdentifier:(unsigned int)arg1 additionalDictionaryItems:(id)arg2 ;
-(void)traverseObject:(id)arg0 atPath:(id)arg1 ;


@end


#endif