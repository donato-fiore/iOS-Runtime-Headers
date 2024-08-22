// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WIFIANALYTICSAWDWIFITDMSLICE_H
#define WIFIANALYTICSAWDWIFITDMSLICE_H

@class PBCodable;
@protocol NSCopying;



@interface WiFiAnalyticsAWDWiFiTDMSlice : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) unsigned int ackTxPowerBackoffCount; // ivar: _ackTxPowerBackoffCount
@property (nonatomic) BOOL hasAckTxPowerBackoffCount;
@property (nonatomic) BOOL hasTxDeferDuration;
@property (nonatomic) BOOL hasTxDeferredCount;
@property (nonatomic) BOOL hasTxMuteCount;
@property (nonatomic) BOOL hasTxPathEnableReqCount;
@property (nonatomic) BOOL hasTxPathMuteCount;
@property (nonatomic) BOOL hasTxPriDuration;
@property (nonatomic) BOOL hasTxPriorityCount;
@property (nonatomic) BOOL hasTxaDuration;
@property (nonatomic) BOOL hasTxaONCount;
@property (nonatomic) BOOL hasTxaPORCount;
@property (nonatomic) BOOL hasTxaTimeoutCount;
@property (nonatomic) NSUInteger txDeferDuration; // ivar: _txDeferDuration
@property (nonatomic) unsigned int txDeferredCount; // ivar: _txDeferredCount
@property (nonatomic) unsigned int txMuteCount; // ivar: _txMuteCount
@property (nonatomic) unsigned int txPathEnableReqCount; // ivar: _txPathEnableReqCount
@property (nonatomic) unsigned int txPathMuteCount; // ivar: _txPathMuteCount
@property (nonatomic) NSUInteger txPriDuration; // ivar: _txPriDuration
@property (nonatomic) unsigned int txPriorityCount; // ivar: _txPriorityCount
@property (nonatomic) NSUInteger txaDuration; // ivar: _txaDuration
@property (nonatomic) unsigned int txaONCount; // ivar: _txaONCount
@property (nonatomic) unsigned int txaPORCount; // ivar: _txaPORCount
@property (nonatomic) unsigned int txaTimeoutCount; // ivar: _txaTimeoutCount


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