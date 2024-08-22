// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AWDMETRICSCELLULARPOWERLOGNRCDRXCONFIG_H
#define AWDMETRICSCELLULARPOWERLOGNRCDRXCONFIG_H

@class PBCodable;
@protocol NSCopying;



@interface AWDMETRICSCellularPowerLogNRCDRXConfig : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL cdrxEnable; // ivar: _cdrxEnable
@property (nonatomic) unsigned int drxSlotOffset; // ivar: _drxSlotOffset
@property (nonatomic) int fr; // ivar: _fr
@property (nonatomic) unsigned int harqRttTimerDl; // ivar: _harqRttTimerDl
@property (nonatomic) unsigned int harqRttTimerUl; // ivar: _harqRttTimerUl
@property (nonatomic) BOOL hasCdrxEnable;
@property (nonatomic) BOOL hasDrxSlotOffset;
@property (nonatomic) BOOL hasFr;
@property (nonatomic) BOOL hasHarqRttTimerDl;
@property (nonatomic) BOOL hasHarqRttTimerUl;
@property (nonatomic) BOOL hasInactivityTimerMs;
@property (nonatomic) BOOL hasLongCycle;
@property (nonatomic) BOOL hasLongCycleOffset;
@property (nonatomic) BOOL hasOnDurationTimerFraction;
@property (nonatomic) BOOL hasOnDurationTimerMs;
@property (nonatomic) BOOL hasRetransmissionTimerDl;
@property (nonatomic) BOOL hasRetransmissionTimerUl;
@property (nonatomic) BOOL hasShortCycle;
@property (nonatomic) BOOL hasShortCycleEnable;
@property (nonatomic) BOOL hasShortCycleTimer;
@property (nonatomic) BOOL hasSubsId;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned int inactivityTimerMs; // ivar: _inactivityTimerMs
@property (nonatomic) unsigned int longCycle; // ivar: _longCycle
@property (nonatomic) unsigned int longCycleOffset; // ivar: _longCycleOffset
@property (nonatomic) unsigned int onDurationTimerFraction; // ivar: _onDurationTimerFraction
@property (nonatomic) unsigned int onDurationTimerMs; // ivar: _onDurationTimerMs
@property (nonatomic) unsigned int retransmissionTimerDl; // ivar: _retransmissionTimerDl
@property (nonatomic) unsigned int retransmissionTimerUl; // ivar: _retransmissionTimerUl
@property (nonatomic) unsigned int shortCycle; // ivar: _shortCycle
@property (nonatomic) BOOL shortCycleEnable; // ivar: _shortCycleEnable
@property (nonatomic) unsigned int shortCycleTimer; // ivar: _shortCycleTimer
@property (nonatomic) unsigned int subsId; // ivar: _subsId
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)frAsString:(int)arg0 ;
-(int)StringAsFr:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif