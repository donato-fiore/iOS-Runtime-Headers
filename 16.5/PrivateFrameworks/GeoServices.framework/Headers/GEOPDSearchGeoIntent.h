// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOPDSEARCHGEOINTENT_H
#define GEOPDSEARCHGEOINTENT_H

@class PBCodable, PBDataReader, NSString;
@protocol NSCopying;


#import "GEOStructuredAddress.h"
#import "GEOLatLng.h"
#import "GEOMapRegion.h"
#import "GEOPDSearchTokenSet.h"

@interface GEOPDSearchGeoIntent : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    GEOStructuredAddress *_address;
    GEOLatLng *_center;
    NSString *_countryCode;
    GEOMapRegion *_displayMapRegion;
    NSString *_displayName;
    NSString *_doorNumber;
    NSInteger _geoId;
    GEOMapRegion *_mapRegion;
    NSString *_name;
    GEOPDSearchTokenSet *_tokenSet;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _geoTypeId;
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