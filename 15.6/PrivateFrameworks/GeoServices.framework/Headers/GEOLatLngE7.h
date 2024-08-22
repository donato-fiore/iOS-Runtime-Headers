// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOLATLNGE7_H
#define GEOLATLNGE7_H

@class PBCodable, PBUnknownFields;
@protocol NSCopying;


#import "GEOLatLng.h"

@interface GEOLatLngE7 : PBCodable <NSCopying>

 {
    PBUnknownFields *_unknownFields;
    int _latE7;
    int _lngE7;
}


@property (readonly, nonatomic) ? coordinate;
@property (nonatomic) int latE7;
@property (readonly, nonatomic) GEOLatLng *latLng;
@property (nonatomic) int lngE7;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(BOOL)isValid:(id)arg0 ;
+(CGFloat)fromE7Coordinate:(int)arg0 ;
+(int)toE7Coordinate:(CGFloat)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithCoordinate:(struct ? )arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithE7Latitude:(int)arg0 longitude:(int)arg1 ;
-(id)initWithJSON:(id)arg0 ;
-(id)initWithLatLng:(id)arg0 ;
-(id)initWithLatitude:(CGFloat)arg0 longitude:(CGFloat)arg1 ;
-(id)jsonRepresentation;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif