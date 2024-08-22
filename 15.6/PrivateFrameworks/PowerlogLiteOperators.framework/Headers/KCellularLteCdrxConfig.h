// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef KCELLULARLTECDRXCONFIG_H
#define KCELLULARLTECDRXCONFIG_H

@class PBCodable;
@protocol NSCopying;



@interface KCellularLteCdrxConfig : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) unsigned int cdrxConfigStatus; // ivar: _cdrxConfigStatus
@property (nonatomic) unsigned int cellStatus; // ivar: _cellStatus
@property (nonatomic) unsigned int drxInactivityMs; // ivar: _drxInactivityMs
@property (nonatomic) unsigned int drxRetxTimerMs; // ivar: _drxRetxTimerMs
@property (nonatomic) unsigned int drxShortCycleNum; // ivar: _drxShortCycleNum
@property (nonatomic) BOOL hasCdrxConfigStatus;
@property (nonatomic) BOOL hasCellStatus;
@property (nonatomic) BOOL hasDrxInactivityMs;
@property (nonatomic) BOOL hasDrxRetxTimerMs;
@property (nonatomic) BOOL hasDrxShortCycleNum;
@property (nonatomic) BOOL hasLongDrxCycleMs;
@property (nonatomic) BOOL hasOnDurationMs;
@property (nonatomic) BOOL hasRrcState;
@property (nonatomic) BOOL hasShortDrxCycleMs;
@property (nonatomic) BOOL hasSubsId;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasTransmissionMode;
@property (nonatomic) unsigned int longDrxCycleMs; // ivar: _longDrxCycleMs
@property (nonatomic) unsigned int onDurationMs; // ivar: _onDurationMs
@property (nonatomic) int rrcState; // ivar: _rrcState
@property (nonatomic) unsigned int shortDrxCycleMs; // ivar: _shortDrxCycleMs
@property (nonatomic) unsigned int subsId; // ivar: _subsId
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp
@property (nonatomic) unsigned int transmissionMode; // ivar: _transmissionMode


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)rrcStateAsString:(int)arg0 ;
-(int)StringAsRrcState:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif