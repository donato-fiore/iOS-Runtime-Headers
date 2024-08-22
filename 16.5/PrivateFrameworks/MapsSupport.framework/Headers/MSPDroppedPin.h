// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSPDROPPEDPIN_H
#define MSPDROPPEDPIN_H

@class PBCodable, PBUnknownFields, GEOLatLng, GEOMapRegion;
@protocol NSCopying;



@interface MSPDroppedPin : PBCodable <NSCopying>

 {
    PBUnknownFields *_unknownFields;
    ? _has;
}


@property (nonatomic) int floorOrdinal; // ivar: _floorOrdinal
@property (nonatomic) BOOL hasFloorOrdinal;
@property (readonly, nonatomic) BOOL hasLatLng;
@property (readonly, nonatomic) BOOL hasMapRegion;
@property (nonatomic) BOOL hasTimestamp;
@property (retain, nonatomic) GEOLatLng *latLng; // ivar: _latLng
@property (retain, nonatomic) GEOMapRegion *mapRegion; // ivar: _mapRegion
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


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