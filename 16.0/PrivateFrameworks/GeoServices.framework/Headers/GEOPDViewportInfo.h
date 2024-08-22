// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOPDVIEWPORTINFO_H
#define GEOPDVIEWPORTINFO_H

@class PBCodable, PBUnknownFields;
@protocol NSCopying;


#import "GEOMapRegion.h"

@interface GEOPDViewportInfo : PBCodable <NSCopying>

 {
    PBUnknownFields *_unknownFields;
    GEOMapRegion *_mapRegion;
    int _mapType;
    unsigned int _timeSinceMapViewportChanged;
    ? _flags;
}


@property (readonly, nonatomic) BOOL hasMapRegion;
@property (nonatomic) BOOL hasMapType;
@property (nonatomic) BOOL hasTimeSinceMapViewportChanged;
@property (retain, nonatomic) GEOMapRegion *mapRegion;
@property (nonatomic) int mapType;
@property (nonatomic) unsigned int timeSinceMapViewportChanged;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(BOOL)isValid:(id)arg0 ;
+(id)viewportInfoForTraits:(id)arg0 ;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)initWithTraits:(id)arg0 ;
-(id)jsonRepresentation;
-(id)mapTypeAsString:(int)arg0 ;
-(int)StringAsMapType:(id)arg0 ;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif