// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WIFIANALYTICSAWDWIFINWACTIVITYAGGREGATEMETRICS_H
#define WIFIANALYTICSAWDWIFINWACTIVITYAGGREGATEMETRICS_H

@class PBCodable;
@protocol NSCopying;



@interface WiFiAnalyticsAWDWiFiNWActivityAggregateMetrics : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasKCtlTxCTS;
@property (nonatomic) BOOL hasKCtlTxRTS;
@property (nonatomic) BOOL hasKMACRxControlFrameMatchingRA;
@property (nonatomic) BOOL hasKMACRxControlFrameOtherRA;
@property (nonatomic) BOOL hasKMACRxDataFrameMatchingRA;
@property (nonatomic) BOOL hasKMACRxDataFrameOtherRA;
@property (nonatomic) BOOL hasKMACRxUnicastCTStoMAC;
@property (nonatomic) BOOL hasKMACRxUnicastCTStoOther;
@property (nonatomic) BOOL hasKMACRxUnicastRTStoMAC;
@property (nonatomic) BOOL hasKMACRxUnicastRTStoOther;
@property (nonatomic) BOOL hasKRxBadFCS;
@property (nonatomic) BOOL hasKRxBadPLCP;
@property (nonatomic) BOOL hasKRxCRCGlitch;
@property (nonatomic) BOOL hasKRxDataErrors;
@property (nonatomic) BOOL hasKRxFrames;
@property (nonatomic) BOOL hasKRxGoodPLCP;
@property (nonatomic) BOOL hasKRxRetryBitSet;
@property (nonatomic) BOOL hasKTxFrames;
@property (nonatomic) BOOL hasKTxRetransmission;
@property (nonatomic) BOOL hasKdot11MultipleRetryCount;
@property (nonatomic) BOOL hasKdot11RTSFailureCount;
@property (nonatomic) BOOL hasKdot11RTSSuccessCount;
@property (nonatomic) BOOL hasKdot11RetryCount;
@property (nonatomic) NSUInteger kCtlTxCTS; // ivar: _kCtlTxCTS
@property (nonatomic) NSUInteger kCtlTxRTS; // ivar: _kCtlTxRTS
@property (nonatomic) unsigned int kMACRxControlFrameMatchingRA; // ivar: _kMACRxControlFrameMatchingRA
@property (nonatomic) unsigned int kMACRxControlFrameOtherRA; // ivar: _kMACRxControlFrameOtherRA
@property (nonatomic) NSUInteger kMACRxDataFrameMatchingRA; // ivar: _kMACRxDataFrameMatchingRA
@property (nonatomic) NSUInteger kMACRxDataFrameOtherRA; // ivar: _kMACRxDataFrameOtherRA
@property (nonatomic) NSUInteger kMACRxUnicastCTStoMAC; // ivar: _kMACRxUnicastCTStoMAC
@property (nonatomic) NSUInteger kMACRxUnicastCTStoOther; // ivar: _kMACRxUnicastCTStoOther
@property (nonatomic) NSUInteger kMACRxUnicastRTStoMAC; // ivar: _kMACRxUnicastRTStoMAC
@property (nonatomic) NSUInteger kMACRxUnicastRTStoOther; // ivar: _kMACRxUnicastRTStoOther
@property (nonatomic) NSUInteger kRxBadFCS; // ivar: _kRxBadFCS
@property (nonatomic) NSUInteger kRxBadPLCP; // ivar: _kRxBadPLCP
@property (nonatomic) NSUInteger kRxCRCGlitch; // ivar: _kRxCRCGlitch
@property (nonatomic) NSUInteger kRxDataErrors; // ivar: _kRxDataErrors
@property (nonatomic) NSUInteger kRxFrames; // ivar: _kRxFrames
@property (nonatomic) NSUInteger kRxGoodPLCP; // ivar: _kRxGoodPLCP
@property (nonatomic) NSUInteger kRxRetryBitSet; // ivar: _kRxRetryBitSet
@property (nonatomic) NSUInteger kTxFrames; // ivar: _kTxFrames
@property (nonatomic) NSUInteger kTxRetransmission; // ivar: _kTxRetransmission
@property (nonatomic) NSUInteger kdot11MultipleRetryCount; // ivar: _kdot11MultipleRetryCount
@property (nonatomic) NSUInteger kdot11RTSFailureCount; // ivar: _kdot11RTSFailureCount
@property (nonatomic) NSUInteger kdot11RTSSuccessCount; // ivar: _kdot11RTSSuccessCount
@property (nonatomic) NSUInteger kdot11RetryCount; // ivar: _kdot11RetryCount


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif