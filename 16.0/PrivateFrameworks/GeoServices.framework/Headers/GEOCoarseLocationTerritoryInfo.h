// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOCOARSELOCATIONTERRITORYINFO_H
#define GEOCOARSELOCATIONTERRITORYINFO_H

@class PBCodable, PBDataReader, NSString;
@protocol NSCopying;


#import "GEOCoarseLocationPolygon.h"

@interface GEOCoarseLocationTerritoryInfo : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    ? _coordinates;
    GEOCoarseLocationLatLng _representativePoint;
    CGFloat _areaDegrees;
    CGFloat _areaRatio;
    NSString *_countryNameStr;
    NSUInteger _featureId;
    CGFloat _maxDistanceMeters;
    GEOCoarseLocationPolygon *_polygon;
    NSString *_regionNameStr;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    unsigned int _countryName;
    unsigned int _regionName;
    int _representativePointQuality;
    unsigned int _revgeoRank;
    int _territoryType;
    BOOL _precise;
    BOOL _shouldRandomize;
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
-(void)dealloc;
-(void)writeTo:(id)arg0 ;


@end


#endif