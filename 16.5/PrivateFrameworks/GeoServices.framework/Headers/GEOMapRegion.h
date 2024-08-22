// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOMAPREGION_H
#define GEOMAPREGION_H

@class PBCodable, PBUnknownFields, NSMutableArray;
@protocol NSCopying;



@interface GEOMapRegion : PBCodable <NSCopying>

 {
    PBUnknownFields *_unknownFields;
    CGFloat _eastLng;
    CGFloat _northLat;
    CGFloat _southLat;
    NSMutableArray *_vertexs;
    CGFloat _westLng;
    int _mapRegionSourceType;
    ? _flags;
}


@property (readonly, nonatomic) CGFloat centerLat;
@property (readonly, nonatomic) CGFloat centerLng;
@property (nonatomic) CGFloat eastLng;
@property (nonatomic) BOOL hasEastLng;
@property (nonatomic) BOOL hasMapRegionSourceType;
@property (nonatomic) BOOL hasNorthLat;
@property (readonly, nonatomic) BOOL hasRectangleVertices;
@property (nonatomic) BOOL hasSouthLat;
@property (nonatomic) BOOL hasWestLng;
@property (nonatomic) int mapRegionSourceType;
@property (nonatomic) CGFloat northLat;
@property (nonatomic) CGFloat southLat;
@property (readonly, nonatomic) CGFloat spanLat;
@property (readonly, nonatomic) CGFloat spanLng;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;
@property (retain, nonatomic) NSMutableArray *vertexs;
@property (nonatomic) CGFloat westLng;


+(BOOL)isValid:(id)arg0 ;
+(Class)vertexType;
+(id)_geo_mapRegionForGEOCoordinateRegion:(struct ? )arg0 ;
-(BOOL)containsCoordinate:(struct ? )arg0 ;
-(BOOL)containsCoordinate:(struct ? )arg0 radius:(CGFloat)arg1 ;
-(BOOL)containsMapRect:(struct ? )arg0 ;
-(BOOL)containsRegion:(id)arg0 ;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
-(BOOL)intersectsMapRect:(struct ? )arg0 ;
-(BOOL)intersectsRegion:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isValid;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)coordinates;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithCoordinateRegion:(struct ? )arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)initWithLatitude:(CGFloat)arg0 longitude:(CGFloat)arg1 ;
-(id)initWithMapRect:(struct ? )arg0 ;
-(id)initWithRadialPlace:(id)arg0 ;
-(id)intersectionsOnPolyline:(id)arg0 ;
-(id)jsonRepresentation;
-(id)mapRegionSourceTypeAsString:(int)arg0 ;
-(id)vertexAtIndex:(NSUInteger)arg0 ;
-(int)StringAsMapRegionSourceType:(id)arg0 ;
-(void)addVertex:(id)arg0 ;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)clearVertexs;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)setMapRect:(struct ? )arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif