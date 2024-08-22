// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOMAPREGIONE7_H
#define GEOMAPREGIONE7_H

@class PBCodable, PBUnknownFields, NSMutableArray;
@protocol NSCopying;


#import "GEOMapRegion.h"

@interface GEOMapRegionE7 : PBCodable <NSCopying>

 {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_vertexE7s;
    int _eastLngE7;
    int _northLatE7;
    int _southLatE7;
    int _westLngE7;
    ? _flags;
}


@property (readonly, nonatomic) int centerLatE7;
@property (readonly, nonatomic) int centerLngE7;
@property (nonatomic) int eastLngE7;
@property (nonatomic) BOOL hasEastLngE7;
@property (nonatomic) BOOL hasNorthLatE7;
@property (readonly, nonatomic) BOOL hasRectangleVertices;
@property (nonatomic) BOOL hasSouthLatE7;
@property (nonatomic) BOOL hasWestLngE7;
@property (readonly, nonatomic) GEOMapRegion *mapRegion;
@property (nonatomic) int northLatE7;
@property (nonatomic) int southLatE7;
@property (readonly, nonatomic) int spanLatE7;
@property (readonly, nonatomic) int spanLngE7;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;
@property (retain, nonatomic) NSMutableArray *vertexE7s;
@property (nonatomic) int westLngE7;


+(BOOL)isValid:(id)arg0 ;
+(Class)vertexE7Type;
+(id)_geo_mapRegionForGEOCoordinateRegion:(struct ? )arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isValid;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)coordinatesE7;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithCoordinateRegion:(struct ? )arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)initWithLatitude:(CGFloat)arg0 longitude:(CGFloat)arg1 ;
-(id)initWithMapRect:(struct ? )arg0 ;
-(id)initWithMapRegion:(id)arg0 ;
-(id)initWithRadialPlace:(id)arg0 ;
-(id)jsonRepresentation;
-(id)vertexE7AtIndex:(NSUInteger)arg0 ;
-(void)addVertexE7:(id)arg0 ;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)clearVertexE7s;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)setMapRect:(struct ? )arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif