// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOPDSSEARCHFILTER_H
#define GEOPDSSEARCHFILTER_H

@class PBCodable, PBDataReader, PBUnknownFields;
@protocol NSCopying;


#import "GEOPDSBrandFilter.h"
#import "GEOPDSCategoryFilter.h"
#import "GEOPDPoiIconCategoryFilter.h"
#import "GEOPDSSearchVenueFilter.h"

@interface GEOPDSSearchFilter : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDSBrandFilter *_brandFilter;
    GEOPDSCategoryFilter *_categoryFilter;
    GEOPDPoiIconCategoryFilter *_poiIconCategoryFilter;
    GEOPDSSearchVenueFilter *_venueFilter;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _searchIntentFilter;
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