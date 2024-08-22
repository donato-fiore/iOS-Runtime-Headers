// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef KCELLULARLQMSTATECHANGE_H
#define KCELLULARLQMSTATECHANGE_H

@class PBCodable;
@protocol NSCopying;



@interface KCellularLqmStateChange : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasHiPowerEvent;
@property (nonatomic) BOOL hasHiPowerExitReason;
@property (nonatomic) BOOL hasIsScreenOn;
@property (nonatomic) BOOL hasLqmState;
@property (nonatomic) BOOL hasLteRsrp;
@property (nonatomic) BOOL hasLteRsrq;
@property (nonatomic) BOOL hasLteRssi;
@property (nonatomic) BOOL hasLteRssnr;
@property (nonatomic) BOOL hasPrevIsScreenOn;
@property (nonatomic) BOOL hasPrevLqmState;
@property (nonatomic) BOOL hasPrevStateDurationSec;
@property (nonatomic) BOOL hasPrevSysMode;
@property (nonatomic) BOOL hasSysMode;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasWcdmaEcio;
@property (nonatomic) BOOL hasWcdmaRscp;
@property (nonatomic) int hiPowerEvent; // ivar: _hiPowerEvent
@property (nonatomic) int hiPowerExitReason; // ivar: _hiPowerExitReason
@property (nonatomic) BOOL isScreenOn; // ivar: _isScreenOn
@property (nonatomic) unsigned int lqmState; // ivar: _lqmState
@property (nonatomic) int lteRsrp; // ivar: _lteRsrp
@property (nonatomic) int lteRsrq; // ivar: _lteRsrq
@property (nonatomic) int lteRssi; // ivar: _lteRssi
@property (nonatomic) int lteRssnr; // ivar: _lteRssnr
@property (nonatomic) BOOL prevIsScreenOn; // ivar: _prevIsScreenOn
@property (nonatomic) unsigned int prevLqmState; // ivar: _prevLqmState
@property (nonatomic) unsigned int prevStateDurationSec; // ivar: _prevStateDurationSec
@property (nonatomic) unsigned int prevSysMode; // ivar: _prevSysMode
@property (nonatomic) int sysMode; // ivar: _sysMode
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp
@property (nonatomic) int wcdmaEcio; // ivar: _wcdmaEcio
@property (nonatomic) int wcdmaRscp; // ivar: _wcdmaRscp


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)hiPowerEventAsString:(int)arg0 ;
-(id)hiPowerExitReasonAsString:(int)arg0 ;
-(int)StringAsHiPowerEvent:(id)arg0 ;
-(int)StringAsHiPowerExitReason:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif