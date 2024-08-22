// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSPPLACEBOOKMARK_H
#define MSPPLACEBOOKMARK_H

@class PBCodable, PBUnknownFields, GEOLatLng, GEOMapItemStorage, NSString;
@protocol NSCopying;



@interface MSPPlaceBookmark : PBCodable <NSCopying>

 {
    PBUnknownFields *_unknownFields;
    ? _has;
}


@property (retain, nonatomic) GEOLatLng *droppedPinCoordinate; // ivar: _droppedPinCoordinate
@property (nonatomic) int droppedPinFloorOrdinal; // ivar: _droppedPinFloorOrdinal
@property (readonly, nonatomic) BOOL hasDroppedPinCoordinate;
@property (nonatomic) BOOL hasDroppedPinFloorOrdinal;
@property (readonly, nonatomic) BOOL hasMapItemStorage;
@property (nonatomic) BOOL hasOrigin;
@property (readonly, nonatomic) BOOL hasTitle;
@property (retain, nonatomic) GEOMapItemStorage *mapItemStorage; // ivar: _mapItemStorage
@property (nonatomic) int origin; // ivar: _origin
@property (retain, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)originAsString:(int)arg0 ;
-(int)StringAsOrigin:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif