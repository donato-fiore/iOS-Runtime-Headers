// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UPLINKSEGMENT_H
#define UPLINKSEGMENT_H

@class NSMutableDictionary, NSNumber;


#import "MultiwaySegment.h"

@interface UplinkSegment : MultiwaySegment {
    NSMutableDictionary *_streamQualityAggregator;
    NSMutableDictionary *_streamGroupStats;
}


@property BOOL isCenterStageEnabled; // ivar: _isCenterStageEnabled
@property BOOL isFullScreenCapture; // ivar: _isFullScreenCapture
@property BOOL isPortraitBlurEnabled; // ivar: _isPortraitBlurEnabled
@property (nonatomic) BOOL isUplinkScreenEnabled; // ivar: _isUplinkScreenEnabled
@property NSUInteger packetSendFailureCounter; // ivar: _packetSendFailureCounter
@property NSUInteger packetSendSuccessCounter; // ivar: _packetSendSuccessCounter
@property NSUInteger totalCellDupTxDataBytes; // ivar: _totalCellDupTxDataBytes
@property NSUInteger totalCellTxDataBytes; // ivar: _totalCellTxDataBytes
@property NSNumber *wrmLinkTypeCellServingCellType; // ivar: _wrmLinkTypeCellServingCellType
@property NSNumber *wrmLinkTypeCellSignalBar; // ivar: _wrmLinkTypeCellSignalBar
@property NSNumber *wrmLinkTypeCellSignalStrength; // ivar: _wrmLinkTypeCellSignalStrength
@property NSNumber *wrmLinkTypeChangeReasonCode; // ivar: _wrmLinkTypeChangeReasonCode
@property NSNumber *wrmLinkTypeSuggestion; // ivar: _wrmLinkTypeSuggestion
@property NSNumber *wrmLinkTypeWifiCCA; // ivar: _wrmLinkTypeWifiCCA
@property NSNumber *wrmLinkTypeWifiPacketLoss; // ivar: _wrmLinkTypeWifiPacketLoss
@property NSNumber *wrmLinkTypeWifiRSSI; // ivar: _wrmLinkTypeWifiRSSI
@property NSNumber *wrmLinkTypeWifiSNR; // ivar: _wrmLinkTypeWifiSNR


-(id)calculateBitrate:(id)arg0 sumKey:(id)arg1 counterKey:(id)arg2 ;
-(id)calculateFramerate:(id)arg0 forKey:(id)arg1 ;
-(id)initWithSegmentName:(id)arg0 previousSegmentName:(id)arg1 segmentStreamGroups:(unsigned int)arg2 previousSegmentStreamGroups:(unsigned int)arg3 nwActivity:(id)arg4 localSwitches:(unsigned int)arg5 conversationTimeBase:(id)arg6 delegate:(id)arg7 ;
-(id)segmentReport;
-(void)addCellByteCountStats:(id)arg0 ;
-(void)addMediaQueueStats:(id)arg0 ;
-(void)addSegmentWRMReportStats:(id)arg0 ;
-(void)collectStreamQualityAggregator:(id)arg0 ;
-(void)collectStreamTemporalStats:(id)arg0 ;
-(void)dealloc;
-(void)processBitrateEvent:(id)arg0 forMetrics:(id)arg1 withStreamGroup:(id)arg2 withQuality:(id)arg3 sumKey:(id)arg4 counterKey:(id)arg5 ;
-(void)processFramerateEvent:(id)arg0 forMetrics:(id)arg1 withStreamGroup:(id)arg2 withQuality:(id)arg3 sumKey:(id)arg4 ;
-(void)processMediaQueueTelemetry:(id)arg0 ;
-(void)processVideoTransmitterStats:(id)arg0 ;


@end


#endif