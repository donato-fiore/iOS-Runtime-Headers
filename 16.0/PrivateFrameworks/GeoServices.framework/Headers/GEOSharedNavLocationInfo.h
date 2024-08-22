// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOSHAREDNAVLOCATIONINFO_H
#define GEOSHAREDNAVLOCATIONINFO_H

@class PBCodable, PBUnknownFields;
@protocol NSCopying;


#import "GEOLatLng.h"

@interface GEOSharedNavLocationInfo : PBCodable <NSCopying>

 {
    PBUnknownFields *_unknownFields;
    GEOLatLng *_coordinate;
    unsigned int _matchedCoordinateIndex;
    float _matchedCoordinateOffset;
    ? _flags;
}


@property (retain, nonatomic) GEOLatLng *coordinate;
@property (readonly, nonatomic) BOOL hasCoordinate;
@property (nonatomic) BOOL hasMatchedCoordinateIndex;
@property (nonatomic) BOOL hasMatchedCoordinateOffset;
@property (nonatomic) unsigned int matchedCoordinateIndex;
@property (nonatomic) float matchedCoordinateOffset;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif