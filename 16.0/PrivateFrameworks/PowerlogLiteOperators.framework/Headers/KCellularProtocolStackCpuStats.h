// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef KCELLULARPROTOCOLSTACKCPUSTATS_H
#define KCELLULARPROTOCOLSTACKCPUSTATS_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface KCellularProtocolStackCpuStats : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSMutableArray *cores; // ivar: _cores
@property (nonatomic) unsigned int durationMs; // ivar: _durationMs
@property (nonatomic) BOOL hasDurationMs;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasVoltageVm;
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp
@property (nonatomic) unsigned int voltageVm; // ivar: _voltageVm


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)coresAtIndex:(NSUInteger)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addCores:(id)arg0 ;
-(void)clearCores;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif