// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLAWDWIFIBT_H
#define PLAWDWIFIBT_H

@class PLEntryNotificationOperatorComposition;


#import "PLAWDAuxMetrics.h"

@interface PLAWDWifiBT : PLAWDAuxMetrics

@property (retain) PLEntryNotificationOperatorComposition *btEventCallback; // ivar: _btEventCallback
@property (retain) PLEntryNotificationOperatorComposition *btPowerCallback; // ivar: _btPowerCallback
@property (retain) PLEntryNotificationOperatorComposition *btRailCallback; // ivar: _btRailCallback
@property NSInteger btSubmitCnt; // ivar: _btSubmitCnt
@property BOOL isBTRailStart; // ivar: _isBTRailStart
@property BOOL isBTStart; // ivar: _isBTStart
@property BOOL isWiFiRailStart; // ivar: _isWiFiRailStart
@property BOOL isWiFiStart; // ivar: _isWiFiStart
@property (retain) PLEntryNotificationOperatorComposition *wifiEventCallback; // ivar: _wifiEventCallback
@property (retain) PLEntryNotificationOperatorComposition *wifiRailCallback; // ivar: _wifiRailCallback
@property NSInteger wifiSubmitCnt; // ivar: _wifiSubmitCnt


+(id)entryAggregateDefinitionAwdBT;
+(id)entryAggregateDefinitionAwdWifi;
+(id)entryAggregateDefinitions;
+(id)getSharedObjWithOperator:(id)arg0 ;
-(BOOL)submitBtDataToAWDServer:(id)arg0 withAwdConn:(id)arg1 ;
-(BOOL)submitDataToAWDServer:(id)arg0 withAwdConn:(id)arg1 ;
-(BOOL)submitWiFiDataToAWDServer:(id)arg0 withAwdConn:(id)arg1 ;
-(void)addEntryToBTTable:(id)arg0 withValue:(CGFloat)arg1 ;
-(void)addEntryToWiFiTable:(id)arg0 withValue:(CGFloat)arg1 andBand:(id)arg2 ;
-(void)handleBTCallback:(id)arg0 ;
-(void)handleBTPowerCallback:(id)arg0 ;
-(void)handleBTRailCallback:(id)arg0 ;
-(void)handleWifiCallback:(id)arg0 ;
-(void)handleWifiRailCallback:(id)arg0 ;
-(void)resetBTTable;
-(void)resetWifiTable;
-(void)startBtMetricCollection;
-(void)startMetricCollection:(id)arg0 ;
-(void)startWifiMetricCollection;
-(void)stopMetricCollection:(id)arg0 ;


@end


#endif