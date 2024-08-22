// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOPDSEARCHLOCATIONINTENT_H
#define GEOPDSEARCHLOCATIONINTENT_H

@class PBCodable, PBDataReader;
@protocol NSCopying;


#import "GEOLatLng.h"
#import "GEOMapRegion.h"

@interface GEOPDSearchLocationIntent : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    GEOLatLng *_center;
    GEOMapRegion *_displayMapRegion;
    CGFloat _distanceInKm;
    GEOMapRegion *_mapRegion;
    NSUInteger _venueId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _locationType;
    BOOL _isDerivedFromGeoIntent;
    BOOL _isDerivedFromPoiIntent;
    ? _flags;
}




-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)jsonRepresentation;
-(void)writeTo:(id)arg0 ;


@end


#endif