// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLPCDMACELLNEIGHBOR_H
#define CLPCDMACELLNEIGHBOR_H

@class PBCodable;
@protocol NSCopying;



@interface CLPCdmaCellNeighbor : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int channel; // ivar: _channel
@property (nonatomic) int ecn0; // ivar: _ecn0
@property (nonatomic) BOOL hasChannel;
@property (nonatomic) BOOL hasEcn0;
@property (nonatomic) BOOL hasPilotPhase;
@property (nonatomic) BOOL hasPnoffset;
@property (nonatomic) BOOL hasRscp;
@property (nonatomic) int pilotPhase; // ivar: _pilotPhase
@property (nonatomic) int pnoffset; // ivar: _pnoffset
@property (nonatomic) int rscp; // ivar: _rscp


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