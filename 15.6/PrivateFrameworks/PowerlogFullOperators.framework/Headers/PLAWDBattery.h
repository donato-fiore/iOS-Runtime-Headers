// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLAWDBATTERY_H
#define PLAWDBATTERY_H

@class PLEntryNotificationOperatorComposition;


#import "PLAWDAuxMetrics.h"

@interface PLAWDBattery : PLAWDAuxMetrics

@property (retain) PLEntryNotificationOperatorComposition *batteryEventCallback; // ivar: _batteryEventCallback
@property NSInteger batterySubmitCnt; // ivar: _batterySubmitCnt
@property NSInteger dispOnOffCnt; // ivar: _dispOnOffCnt
@property (retain) PLEntryNotificationOperatorComposition *displayEventCallback; // ivar: _displayEventCallback
@property CGFloat prevCapacity; // ivar: _prevCapacity
@property BOOL prevDeviceCharging; // ivar: _prevDeviceCharging
@property CGFloat prevDispTimeStamp; // ivar: _prevDispTimeStamp
@property BOOL prevDisplayON; // ivar: _prevDisplayON
@property CGFloat prevVoltage; // ivar: _prevVoltage


+(id)entryAggregateDefinitionAwdBattery;
+(id)entryAggregateDefinitions;
+(id)getSharedObjWithOperator:(id)arg0 ;
-(BOOL)isDeviceCharging:(id)arg0 ;
-(BOOL)submitDataToAWDServer:(id)arg0 withAwdConn:(id)arg1 ;
-(void)addEntryToBatteryTable:(id)arg0 withValue:(CGFloat)arg1 ;
-(void)finalizeBatteryTable;
-(void)handleBatteryCallback:(id)arg0 ;
-(void)handleDisplayCallback:(id)arg0 ;
-(void)initBatteryStats;
-(void)processEnergyConsumedAndAddEntry:(CGFloat)arg0 withVoltage:(CGFloat)arg1 ;
-(void)reInitBatteryStats;
-(void)resetBatteryTable;
-(void)startMetricCollection:(id)arg0 ;
-(void)stopMetricCollection:(id)arg0 ;


@end


#endif