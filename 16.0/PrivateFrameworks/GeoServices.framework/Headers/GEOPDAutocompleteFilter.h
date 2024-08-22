// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOPDAUTOCOMPLETEFILTER_H
#define GEOPDAUTOCOMPLETEFILTER_H

@class PBCodable, PBDataReader, PBUnknownFields;
@protocol NSCopying;


#import "GEOPDPoiIconCategoryFilter.h"

@interface GEOPDAutocompleteFilter : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    ? _placeTypeFilters;
    ? _requestedEntryTypes;
    GEOPDPoiIconCategoryFilter *_poiIconCategoryFilter;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    ? _flags;
}


@property (readonly, nonatomic) BOOL hasPoiIconCategoryFilter;
@property (readonly, nonatomic) *int placeTypeFilters;
@property (readonly, nonatomic) NSUInteger placeTypeFiltersCount;
@property (retain, nonatomic) GEOPDPoiIconCategoryFilter *poiIconCategoryFilter;
@property (readonly, nonatomic) *int requestedEntryTypes;
@property (readonly, nonatomic) NSUInteger requestedEntryTypesCount;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)placeTypeFiltersAsString:(int)arg0 ;
-(id)requestedEntryTypesAsString:(int)arg0 ;
-(int)StringAsPlaceTypeFilters:(id)arg0 ;
-(int)StringAsRequestedEntryTypes:(id)arg0 ;
-(int)placeTypeFilterAtIndex:(NSUInteger)arg0 ;
-(int)requestedEntryTypeAtIndex:(NSUInteger)arg0 ;
-(void)addPlaceTypeFilter:(int)arg0 ;
-(void)addRequestedEntryType:(int)arg0 ;
-(void)clearPlaceTypeFilters;
-(void)clearRequestedEntryTypes;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif