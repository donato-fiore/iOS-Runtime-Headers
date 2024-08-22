// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOLATLNG_H
#define GEOLATLNG_H

@class PBCodable, PBUnknownFields;
@protocol NSCopying;



@interface GEOLatLng : PBCodable <NSCopying>

 {
    PBUnknownFields *_unknownFields;
    CGFloat _elevationM;
    CGFloat _lat;
    CGFloat _lng;
    BOOL _gtLog;
    ? _flags;
}


@property (readonly, nonatomic) ? coordinate;
@property (nonatomic) CGFloat elevationM;
@property (nonatomic) BOOL gtLog;
@property (nonatomic) BOOL hasElevationM;
@property (nonatomic) BOOL hasGtLog;
@property (nonatomic) CGFloat lat;
@property (nonatomic) CGFloat lng;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithCoordinate:(struct ? )arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)initWithLatitude:(CGFloat)arg0 longitude:(CGFloat)arg1 ;
-(id)jsonRepresentation;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif