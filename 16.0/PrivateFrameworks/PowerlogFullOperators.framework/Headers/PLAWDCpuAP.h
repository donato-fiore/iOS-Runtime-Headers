// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLAWDCPUAP_H
#define PLAWDCPUAP_H

@class PLEntryNotificationOperatorComposition, NSDate;


#import "PLAWDAuxMetrics.h"

@interface PLAWDCpuAP : PLAWDAuxMetrics

@property NSInteger apSubmitCnt; // ivar: _apSubmitCnt
@property NSInteger cpuLoadSubmitCnt; // ivar: _cpuLoadSubmitCnt
@property (retain) PLEntryNotificationOperatorComposition *ioreportEnergyEventCallback; // ivar: _ioreportEnergyEventCallback
@property BOOL isIoreportEnergy; // ivar: _isIoreportEnergy
@property (retain) PLEntryNotificationOperatorComposition *monitorEventCallback; // ivar: _monitorEventCallback
@property (retain) NSDate *sleepStartTime; // ivar: _sleepStartTime
@property (retain) PLEntryNotificationOperatorComposition *wakeEventCallback; // ivar: _wakeEventCallback


+(id)entryAggregateDefinitionAwdAp;
+(id)entryAggregateDefinitionAwdCpu;
+(id)entryAggregateDefinitions;
+(id)getSharedObjWithOperator:(id)arg0 ;
-(BOOL)submitApDataToAWDServer:(id)arg0 withAwdConn:(id)arg1 ;
-(BOOL)submitCpuDataToAWDServer:(id)arg0 withAwdConn:(id)arg1 ;
-(BOOL)submitDataToAWDServer:(id)arg0 withAwdConn:(id)arg1 ;
-(void)addEntryToApMetricsTable:(id)arg0 withValue:(CGFloat)arg1 ;
-(void)handleIOReportEnergyCallback:(id)arg0 ;
-(void)handleMonitorCallback:(id)arg0 ;
-(void)handleWakeCallback:(id)arg0 ;
-(void)resetApTable;
-(void)startApMetricCollection:(id)arg0 ;
-(void)startCpuMetricCollection:(id)arg0 ;
-(void)startMetricCollection:(id)arg0 ;
-(void)stopMetricCollection:(id)arg0 ;


@end


#endif