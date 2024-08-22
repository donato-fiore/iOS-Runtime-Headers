// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLAWDBB_H
#define PLAWDBB_H

@class PLEntryNotificationOperatorComposition, NSDate, NSLock, NSMutableArray;


#import "PLAWDAuxMetrics.h"
#import "LTEPoint.h"

@interface PLAWDBB : PLAWDAuxMetrics

@property (retain) PLEntryNotificationOperatorComposition *accountingGroupEventCallback; // ivar: _accountingGroupEventCallback
@property (retain) PLEntryNotificationOperatorComposition *bbEventCallback; // ivar: _bbEventCallback
@property (retain) PLEntryNotificationOperatorComposition *bbLqmCellularActiveCallback; // ivar: _bbLqmCellularActiveCallback
@property (retain) PLEntryNotificationOperatorComposition *bbLqmCumulativeNetworkCallback; // ivar: _bbLqmCumulativeNetworkCallback
@property (retain) PLEntryNotificationOperatorComposition *bbProtocolRailCallback; // ivar: _bbProtocolRailCallback
@property (retain) PLEntryNotificationOperatorComposition *bbRfLTECallback; // ivar: _bbRfLTECallback
@property (retain) PLEntryNotificationOperatorComposition *bbTelephonyActivityCallback; // ivar: _bbTelephonyActivityCallback
@property (retain) PLEntryNotificationOperatorComposition *connectedPowerRailCallback; // ivar: _connectedPowerRailCallback
@property int currQuality; // ivar: _currQuality
@property (retain) LTEPoint *currThreshold; // ivar: _currThreshold
@property unsigned int downBytes; // ivar: _downBytes
@property unsigned int downBytesLTE; // ivar: _downBytesLTE
@property (retain) NSDate *endLTECall; // ivar: _endLTECall
@property (retain) PLEntryNotificationOperatorComposition *iceStatsEventCallback; // ivar: _iceStatsEventCallback
@property (retain) NSLock *lock; // ivar: _lock
@property (retain) NSMutableArray *lteCallArray; // ivar: _lteCallArray
@property int newQuality; // ivar: _newQuality
@property (retain) LTEPoint *point; // ivar: _point
@property (retain) NSDate *startLTECall; // ivar: _startLTECall
@property (retain) NSDate *startTimeAppBB; // ivar: _startTimeAppBB
@property (retain) NSDate *startTimeBBLqm; // ivar: _startTimeBBLqm
@property short telActivityState; // ivar: _telActivityState
@property (retain) NSMutableArray *unhandledRFLTEEntries; // ivar: _unhandledRFLTEEntries
@property unsigned int upBytes; // ivar: _upBytes
@property unsigned int upBytesLTE; // ivar: _upBytesLTE


+(id)entryAggregateDefinitionAwdBBQlm;
+(id)entryAggregateDefinitionAwdBBQlmCounter;
+(id)entryAggregateDefinitionAwdConnectedPower;
+(id)entryAggregateDefinitionAwdVolte;
+(id)entryAggregateDefinitions;
+(id)getSharedObjWithOperator:(id)arg0 ;
-(BOOL)submitConnectedPower:(id)arg0 withAwdConn:(id)arg1 ;
-(BOOL)submitDataToAWDServer:(id)arg0 withAwdConn:(id)arg1 ;
-(CGFloat)getIntervalSinceLastUpdateWithEntryName:(id)arg0 ;
-(int)convertQualityWithLinkQuality:(CGFloat)arg0 ;
-(void)bbLTEWriteAggregatedTableWithRFLTEEntry:(id)arg0 withPoint:(id)arg1 ;
-(void)finalizePeriodWithUpBytes:(unsigned int)arg0 withDownBytes:(unsigned int)arg1 ;
-(void)finalizeTableWithEntry:(id)arg0 ;
-(void)handleAcountGroupCallback:(id)arg0 ;
-(void)handleBBConnectedPowerRail:(id)arg0 ;
-(void)handleBBLqmCellularActiveCallback:(id)arg0 ;
-(void)handleBBLqmCumulativeNetworkCallback:(id)arg0 ;
-(void)handleBBRailCallbackBBICE:(id)arg0 ;
-(void)handleBBRailCallbackBBProtocol:(id)arg0 ;
-(void)handleBBRailCallbackBBTx:(id)arg0 ;
-(void)handleBBRailCallbackLTESleep:(id)arg0 ;
-(void)handleBBRailCallbackOos:(id)arg0 ;
-(void)handleBBRailCallbackTxCdma2K:(id)arg0 ;
-(void)handleBBRailCallbackTxCdma:(id)arg0 ;
-(void)handleBBRailCallbackTxEvdo:(id)arg0 ;
-(void)handleBBRailCallbackTxGsm:(id)arg0 ;
-(void)handleBBRailCallbackTxLte:(id)arg0 ;
-(void)handleBBRailCallbackTxUtran:(id)arg0 ;
-(void)handleBBRailCallbackWrapper:(id)arg0 ;
-(void)handleIceStatsCallback:(id)arg0 ;
-(void)handleRfLTE:(id)arg0 ;
-(void)handleRfLTEOffline;
-(void)handleTelephonyActiveCallback:(id)arg0 ;
-(void)resetAllBBLqmTables;
-(void)resetBBLqmCounterTable;
-(void)resetBBLqmTable;
-(void)resetBBVoLTETable;
-(void)resetConnectedPowerTable;
-(void)startAppBB;
-(void)startAppRrc;
-(void)startBBLqm;
-(void)startBBPower;
-(void)startConnectedPower;
-(void)startMetricCollection:(id)arg0 ;
-(void)stopAppBB;
-(void)stopAppRrc;
-(void)stopBBLqm;
-(void)stopBBPower;
-(void)stopConnectedPower;
-(void)stopMetricCollection:(id)arg0 ;
-(void)submitAppBB:(id)arg0 withAwdConn:(id)arg1 ;
-(void)submitAppRrc:(id)arg0 withAwdConn:(id)arg1 ;
-(void)submitBBLqm:(id)arg0 withAwdConn:(id)arg1 ;
-(void)updateCurrLqmState;
-(void)updateLQMTableWithQuality:(int)arg0 withTime:(CGFloat)arg1 withRX:(CGFloat)arg2 withTX:(CGFloat)arg3 ;


@end


#endif