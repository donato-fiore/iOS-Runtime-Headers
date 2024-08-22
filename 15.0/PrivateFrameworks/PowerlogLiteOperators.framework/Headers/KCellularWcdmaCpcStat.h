// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef KCELLULARWCDMACPCSTAT_H
#define KCELLULARWCDMACPCSTAT_H

@class PBCodable;
@protocol NSCopying;



@interface KCellularWcdmaCpcStat : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) unsigned int energy; // ivar: _energy
@property (nonatomic) BOOL hasEnergy;
@property (nonatomic) BOOL hasRxOnDurationMs;
@property (nonatomic) BOOL hasRxTxOffDurationMs;
@property (nonatomic) BOOL hasSubsId;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasTotalDurationMs;
@property (nonatomic) unsigned int rxOnDurationMs; // ivar: _rxOnDurationMs
@property (nonatomic) unsigned int rxTxOffDurationMs; // ivar: _rxTxOffDurationMs
@property (nonatomic) unsigned int subsId; // ivar: _subsId
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp
@property (nonatomic) unsigned int totalDurationMs; // ivar: _totalDurationMs


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