// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOPDAUTOCOMPLETEPARAMETERS_H
#define GEOPDAUTOCOMPLETEPARAMETERS_H

@class PBCodable, PBDataReader, PBUnknownFields;
@protocol NSCopying;


#import "GEOPDAutocompleteParametersAddressOnly.h"
#import "GEOPDAutocompleteParametersAllEntriesWithBrowse.h"
#import "GEOPDAutocompleteParametersAllEntries.h"
#import "GEOPDAutocompleteFilter.h"
#import "GEOPDAutocompleteSessionData.h"
#import "GEOPDAutocompleteParametersBrandProfileSearch.h"
#import "GEOPDAutocompleteParametersCollectionOnly.h"
#import "GEOPDAutocompleteParametersFullEntriesOnly.h"
#import "GEOPDAutocompleteParametersLocalitiesAndLandmarks.h"
#import "GEOPDAutocompleteParametersPoiAddressOnly.h"
#import "GEOPDAutocompleteParametersSiriSearch.h"
#import "GEOPDAutocompleteParametersVenueSearch.h"

@interface GEOPDAutocompleteParameters : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    ? _supportedClientResolvedTypeWithSetupPrompts;
    GEOPDAutocompleteParametersAddressOnly *_addressOnly;
    GEOPDAutocompleteParametersAllEntriesWithBrowse *_allEntriesWithBrowse;
    GEOPDAutocompleteParametersAllEntries *_allEntries;
    GEOPDAutocompleteFilter *_autocompleteFilter;
    GEOPDAutocompleteSessionData *_autocompleteSessionData;
    GEOPDAutocompleteParametersBrandProfileSearch *_brandProfileSearch;
    GEOPDAutocompleteParametersCollectionOnly *_collectionOnly;
    GEOPDAutocompleteParametersFullEntriesOnly *_fullEntries;
    GEOPDAutocompleteParametersLocalitiesAndLandmarks *_localitiesAndLandmarks;
    GEOPDAutocompleteParametersPoiAddressOnly *_poiAddressOnly;
    GEOPDAutocompleteParametersSiriSearch *_siriSearch;
    GEOPDAutocompleteParametersVenueSearch *_venueSearch;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _requestType;
    BOOL _shouldPopulateMapsIdentifier;
    BOOL _supportAutocompleteSessionData;
    ? _flags;
}


@property (retain, nonatomic) GEOPDAutocompleteParametersAddressOnly *addressOnly;
@property (retain, nonatomic) GEOPDAutocompleteParametersAllEntries *allEntries;
@property (retain, nonatomic) GEOPDAutocompleteParametersAllEntriesWithBrowse *allEntriesWithBrowse;
@property (retain, nonatomic) GEOPDAutocompleteFilter *autocompleteFilter;
@property (retain, nonatomic) GEOPDAutocompleteSessionData *autocompleteSessionData;
@property (retain, nonatomic) GEOPDAutocompleteParametersBrandProfileSearch *brandProfileSearch;
@property (retain, nonatomic) GEOPDAutocompleteParametersCollectionOnly *collectionOnly;
@property (retain, nonatomic) GEOPDAutocompleteParametersFullEntriesOnly *fullEntries;
@property (readonly, nonatomic) BOOL hasAddressOnly;
@property (readonly, nonatomic) BOOL hasAllEntries;
@property (readonly, nonatomic) BOOL hasAllEntriesWithBrowse;
@property (readonly, nonatomic) BOOL hasAutocompleteFilter;
@property (readonly, nonatomic) BOOL hasAutocompleteSessionData;
@property (readonly, nonatomic) BOOL hasBrandProfileSearch;
@property (readonly, nonatomic) BOOL hasCollectionOnly;
@property (readonly, nonatomic) BOOL hasFullEntries;
@property (readonly, nonatomic) BOOL hasLocalitiesAndLandmarks;
@property (readonly, nonatomic) BOOL hasPoiAddressOnly;
@property (nonatomic) BOOL hasRequestType;
@property (nonatomic) BOOL hasShouldPopulateMapsIdentifier;
@property (readonly, nonatomic) BOOL hasSiriSearch;
@property (nonatomic) BOOL hasSupportAutocompleteSessionData;
@property (readonly, nonatomic) BOOL hasVenueSearch;
@property (retain, nonatomic) GEOPDAutocompleteParametersLocalitiesAndLandmarks *localitiesAndLandmarks;
@property (retain, nonatomic) GEOPDAutocompleteParametersPoiAddressOnly *poiAddressOnly;
@property (nonatomic) int requestType;
@property (nonatomic) BOOL shouldPopulateMapsIdentifier;
@property (retain, nonatomic) GEOPDAutocompleteParametersSiriSearch *siriSearch;
@property (nonatomic) BOOL supportAutocompleteSessionData;
@property (readonly, nonatomic) *int supportedClientResolvedTypeWithSetupPrompts;
@property (readonly, nonatomic) NSUInteger supportedClientResolvedTypeWithSetupPromptsCount;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;
@property (retain, nonatomic) GEOPDAutocompleteParametersVenueSearch *venueSearch;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
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
-(id)requestTypeAsString:(int)arg0 ;
-(id)supportedClientResolvedTypeWithSetupPromptsAsString:(int)arg0 ;
-(int)StringAsRequestType:(id)arg0 ;
-(int)StringAsSupportedClientResolvedTypeWithSetupPrompts:(id)arg0 ;
-(int)supportedClientResolvedTypeWithSetupPromptAtIndex:(NSUInteger)arg0 ;
-(void)addSupportedClientResolvedTypeWithSetupPrompt:(int)arg0 ;
-(void)clearSensitiveFields:(NSUInteger)arg0 ;
-(void)clearSupportedClientResolvedTypeWithSetupPrompts;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif