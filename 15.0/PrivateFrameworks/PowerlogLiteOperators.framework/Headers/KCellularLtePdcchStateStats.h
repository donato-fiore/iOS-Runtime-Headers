// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef KCELLULARLTEPDCCHSTATESTATS_H
#define KCELLULARLTEPDCCHSTATESTATS_H

@class PBCodable;
@protocol NSCopying;



@interface KCellularLtePdcchStateStats : PBCodable <NSCopying>

 {
    ? _pccPdcchStates;
    ? _scc0PdcchStates;
    ? _scc1PdcchStates;
    ? _scc2PdcchStates;
    ? _scc3PdcchStates;
    ? _has;
}


@property (nonatomic) unsigned int durationMs; // ivar: _durationMs
@property (nonatomic) BOOL hasDurationMs;
@property (nonatomic) BOOL hasSubsId;
@property (nonatomic) BOOL hasTimestamp;
@property (readonly, nonatomic) *unsigned int pccPdcchStates;
@property (readonly, nonatomic) NSUInteger pccPdcchStatesCount;
@property (readonly, nonatomic) *unsigned int scc0PdcchStates;
@property (readonly, nonatomic) NSUInteger scc0PdcchStatesCount;
@property (readonly, nonatomic) *unsigned int scc1PdcchStates;
@property (readonly, nonatomic) NSUInteger scc1PdcchStatesCount;
@property (readonly, nonatomic) *unsigned int scc2PdcchStates;
@property (readonly, nonatomic) NSUInteger scc2PdcchStatesCount;
@property (readonly, nonatomic) *unsigned int scc3PdcchStates;
@property (readonly, nonatomic) NSUInteger scc3PdcchStatesCount;
@property (nonatomic) unsigned int subsId; // ivar: _subsId
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(unsigned int)pccPdcchStateAtIndex:(NSUInteger)arg0 ;
-(unsigned int)scc0PdcchStateAtIndex:(NSUInteger)arg0 ;
-(unsigned int)scc1PdcchStateAtIndex:(NSUInteger)arg0 ;
-(unsigned int)scc2PdcchStateAtIndex:(NSUInteger)arg0 ;
-(unsigned int)scc3PdcchStateAtIndex:(NSUInteger)arg0 ;
-(void)addPccPdcchState:(unsigned int)arg0 ;
-(void)addScc0PdcchState:(unsigned int)arg0 ;
-(void)addScc1PdcchState:(unsigned int)arg0 ;
-(void)addScc2PdcchState:(unsigned int)arg0 ;
-(void)addScc3PdcchState:(unsigned int)arg0 ;
-(void)clearPccPdcchStates;
-(void)clearScc0PdcchStates;
-(void)clearScc1PdcchStates;
-(void)clearScc2PdcchStates;
-(void)clearScc3PdcchStates;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif