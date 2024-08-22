// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOPDSEARCHLOCATIONSCOPE_H
#define GEOPDSEARCHLOCATIONSCOPE_H

@class PBCodable, PBDataReader, NSString;
@protocol NSCopying;


#import "GEOLatLng.h"
#import "GEOMapRegion.h"
#import "GEOPDSearchMultiMapRegion.h"

@interface GEOPDSearchLocationScope : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    GEOLatLng *_center;
    CGFloat _displayRegionLimitKm;
    GEOMapRegion *_mapRegion;
    GEOPDSearchMultiMapRegion *_multiMapRegion;
    CGFloat _scopeDistanceLimitKm;
    NSString *_winDistanceGeohash4;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _locationScopeType;
    int _scopeDistanceType;
    float _winDistanceKmMean;
    float _winDistanceKmP50;
    float _winDistanceKmP80;
    float _winDistanceKmP90;
    float _winDistanceKmP95;
    float _winDistanceKmP99;
    BOOL _hasBelowStreetGeo;
    BOOL _isBlendingScope;
    BOOL _isMixedIntent;
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