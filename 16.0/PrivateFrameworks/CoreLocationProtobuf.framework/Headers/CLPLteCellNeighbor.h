// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLPLTECELLNEIGHBOR_H
#define CLPLTECELLNEIGHBOR_H

@class PBCodable;
@protocol NSCopying;



@interface CLPLteCellNeighbor : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) unsigned int bandwidth; // ivar: _bandwidth
@property (nonatomic) int ecn0; // ivar: _ecn0
@property (nonatomic) BOOL hasBandwidth;
@property (nonatomic) BOOL hasEcn0;
@property (nonatomic) BOOL hasMaxThroughput;
@property (nonatomic) BOOL hasNeighborType;
@property (nonatomic) BOOL hasPid;
@property (nonatomic) BOOL hasRscp;
@property (nonatomic) BOOL hasRssi;
@property (nonatomic) BOOL hasUarfcn;
@property (nonatomic) unsigned int maxThroughput; // ivar: _maxThroughput
@property (nonatomic) unsigned int neighborType; // ivar: _neighborType
@property (nonatomic) int pid; // ivar: _pid
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