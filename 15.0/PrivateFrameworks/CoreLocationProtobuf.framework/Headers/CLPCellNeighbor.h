// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLPCELLNEIGHBOR_H
#define CLPCELLNEIGHBOR_H

@class PBCodable;
@protocol NSCopying;



@interface CLPCellNeighbor : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int ecn0; // ivar: _ecn0
@property (nonatomic) BOOL hasEcn0;
@property (nonatomic) BOOL hasPsc;
@property (nonatomic) BOOL hasRscp;
@property (nonatomic) BOOL hasRssi;
@property (nonatomic) BOOL hasUarfcn;
@property (nonatomic) int psc; // ivar: _psc
@property (nonatomic) int rscp; // ivar: _rscp
@property (nonatomic) int rssi; // ivar: _rssi
@property (nonatomic) int uarfcn; // ivar: _uarfcn


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