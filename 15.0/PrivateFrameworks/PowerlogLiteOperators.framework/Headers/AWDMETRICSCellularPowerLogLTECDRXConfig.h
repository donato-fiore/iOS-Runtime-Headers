// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AWDMETRICSCELLULARPOWERLOGLTECDRXCONFIG_H
#define AWDMETRICSCELLULARPOWERLOGLTECDRXCONFIG_H

@class PBCodable;
@protocol NSCopying;



@interface AWDMETRICSCellularPowerLogLTECDRXConfig : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL cdrxEnable; // ivar: _cdrxEnable
@property (nonatomic) unsigned int cycleStartOffset; // ivar: _cycleStartOffset
@property (nonatomic) unsigned int drxInactivity; // ivar: _drxInactivity
@property (nonatomic) unsigned int drxRetxTimer; // ivar: _drxRetxTimer
@property (nonatomic) unsigned int drxShortCycleNum; // ivar: _drxShortCycleNum
@property (nonatomic) BOOL hasCdrxEnable;
@property (nonatomic) BOOL hasCycleStartOffset;
@property (nonatomic) BOOL hasDrxInactivity;
@property (nonatomic) BOOL hasDrxRetxTimer;
@property (nonatomic) BOOL hasDrxShortCycleNum;
@property (nonatomic) BOOL hasLongDrxCycle;
@property (nonatomic) BOOL hasOnDuration;
@property (nonatomic) BOOL hasShortDrxCycle;
@property (nonatomic) BOOL hasShortDrxCycleEnable;
@property (nonatomic) BOOL hasSubsId;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned int longDrxCycle; // ivar: _longDrxCycle
@property (nonatomic) unsigned int onDuration; // ivar: _onDuration
@property (nonatomic) unsigned int shortDrxCycle; // ivar: _shortDrxCycle
@property (nonatomic) BOOL shortDrxCycleEnable; // ivar: _shortDrxCycleEnable
@property (nonatomic) unsigned int subsId; // ivar: _subsId
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp


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