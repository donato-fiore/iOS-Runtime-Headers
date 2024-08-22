// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOPDAUTOCOMPLETEPARAMETERSALLENTRIESWITHBROWSE_H
#define GEOPDAUTOCOMPLETEPARAMETERSALLENTRIESWITHBROWSE_H

@class PBCodable, PBDataReader, PBUnknownFields, NSData, NSString;
@protocol NSCopying;


#import "GEOPDAutocompleteEntry.h"
#import "GEOPDSSearchEvChargingParameters.h"
#import "GEOPDRetainedSearchMetadata.h"
#import "GEOPDVenueIdentifier.h"
#import "GEOPDViewportInfo.h"

@interface GEOPDAutocompleteParametersAllEntriesWithBrowse : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    ? _knownRefinementTypes;
    ? _supportedAutocompleteResultCellTypes;
    ? _supportedHighlightTypes;
    ? _supportedListTypes;
    ? _supportedPlaceSummaryFormatTypes;
    NSData *_categorySuggestionEntryMetadata;
    GEOPDAutocompleteEntry *_categorySuggestionEntry;
    GEOPDSSearchEvChargingParameters *_evChargingParameters;
    GEOPDAutocompleteEntry *_querySuggestionEntry;
    NSString *_query;
    GEOPDRetainedSearchMetadata *_retainedSearch;
    GEOPDVenueIdentifier *_venueIdentifier;
    GEOPDViewportInfo *_viewportInfo;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _maxQueryBuilderSuggestions;
    int _maxResults;
    int _placeSummaryRevision;
    BOOL _highlightDiff;
    BOOL _interleaveCategorySuggestions;
    BOOL _supportClientRankingFeatureMetadata;
    BOOL _supportDirectionIntentSuggestions;
    BOOL _supportRapAffordance;
    BOOL _supportSectionHeader;
    BOOL _supportUnresolvedDirectionIntent;
    ? _flags;
}


@property (retain, nonatomic) GEOPDAutocompleteEntry *categorySuggestionEntry;
@property (retain, nonatomic) NSData *categorySuggestionEntryMetadata;
@property (retain, nonatomic) GEOPDSSearchEvChargingParameters *evChargingParameters;
@property (readonly, nonatomic) BOOL hasCategorySuggestionEntry;
@property (readonly, nonatomic) BOOL hasCategorySuggestionEntryMetadata;
@property (readonly, nonatomic) BOOL hasEvChargingParameters;
@property (nonatomic) BOOL hasHighlightDiff;
@property (nonatomic) BOOL hasInterleaveCategorySuggestions;
@property (nonatomic) BOOL hasMaxQueryBuilderSuggestions;
@property (nonatomic) BOOL hasMaxResults;
@property (nonatomic) BOOL hasPlaceSummaryRevision;
@property (readonly, nonatomic) BOOL hasQuery;
@property (readonly, nonatomic) BOOL hasQuerySuggestionEntry;
@property (readonly, nonatomic) BOOL hasRetainedSearch;
@property (nonatomic) BOOL hasSupportClientRankingFeatureMetadata;
@property (nonatomic) BOOL hasSupportDirectionIntentSuggestions;
@property (nonatomic) BOOL hasSupportRapAffordance;
@property (nonatomic) BOOL hasSupportSectionHeader;
@property (nonatomic) BOOL hasSupportUnresolvedDirectionIntent;
@property (readonly, nonatomic) BOOL hasVenueIdentifier;
@property (readonly, nonatomic) BOOL hasViewportInfo;
@property (nonatomic) BOOL highlightDiff;
@property (nonatomic) BOOL interleaveCategorySuggestions;
@property (readonly, nonatomic) *int knownRefinementTypes;
@property (readonly, nonatomic) NSUInteger knownRefinementTypesCount;
@property (nonatomic) int maxQueryBuilderSuggestions;
@property (nonatomic) int maxResults;
@property (nonatomic) int placeSummaryRevision;
@property (retain, nonatomic) NSString *query;
@property (retain, nonatomic) GEOPDAutocompleteEntry *querySuggestionEntry;
@property (retain, nonatomic) GEOPDRetainedSearchMetadata *retainedSearch;
@property (nonatomic) BOOL supportClientRankingFeatureMetadata;
@property (nonatomic) BOOL supportDirectionIntentSuggestions;
@property (nonatomic) BOOL supportRapAffordance;
@property (nonatomic) BOOL supportSectionHeader;
@property (nonatomic) BOOL supportUnresolvedDirectionIntent;
@property (readonly, nonatomic) *int supportedAutocompleteResultCellTypes;
@property (readonly, nonatomic) NSUInteger supportedAutocompleteResultCellTypesCount;
@property (readonly, nonatomic) *int supportedHighlightTypes;
@property (readonly, nonatomic) NSUInteger supportedHighlightTypesCount;
@property (readonly, nonatomic) *int supportedListTypes;
@property (readonly, nonatomic) NSUInteger supportedListTypesCount;
@property (readonly, nonatomic) *int supportedPlaceSummaryFormatTypes;
@property (readonly, nonatomic) NSUInteger supportedPlaceSummaryFormatTypesCount;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;
@property (retain, nonatomic) GEOPDVenueIdentifier *venueIdentifier;
@property (retain, nonatomic) GEOPDViewportInfo *viewportInfo;


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
-(id)knownRefinementTypesAsString:(int)arg0 ;
-(id)placeSummaryRevisionAsString:(int)arg0 ;
-(id)supportedAutocompleteResultCellTypesAsString:(int)arg0 ;
-(id)supportedHighlightTypesAsString:(int)arg0 ;
-(id)supportedListTypesAsString:(int)arg0 ;
-(id)supportedPlaceSummaryFormatTypesAsString:(int)arg0 ;
-(int)StringAsKnownRefinementTypes:(id)arg0 ;
-(int)StringAsPlaceSummaryRevision:(id)arg0 ;
-(int)StringAsSupportedAutocompleteResultCellTypes:(id)arg0 ;
-(int)StringAsSupportedHighlightTypes:(id)arg0 ;
-(int)StringAsSupportedListTypes:(id)arg0 ;
-(int)StringAsSupportedPlaceSummaryFormatTypes:(id)arg0 ;
-(int)knownRefinementTypeAtIndex:(NSUInteger)arg0 ;
-(int)supportedAutocompleteResultCellTypeAtIndex:(NSUInteger)arg0 ;
-(int)supportedHighlightTypeAtIndex:(NSUInteger)arg0 ;
-(int)supportedListTypeAtIndex:(NSUInteger)arg0 ;
-(int)supportedPlaceSummaryFormatTypeAtIndex:(NSUInteger)arg0 ;
-(void)addKnownRefinementType:(int)arg0 ;
-(void)addSupportedAutocompleteResultCellType:(int)arg0 ;
-(void)addSupportedHighlightType:(int)arg0 ;
-(void)addSupportedListType:(int)arg0 ;
-(void)addSupportedPlaceSummaryFormatType:(int)arg0 ;
-(void)clearKnownRefinementTypes;
-(void)clearSensitiveFields:(NSUInteger)arg0 ;
-(void)clearSupportedAutocompleteResultCellTypes;
-(void)clearSupportedHighlightTypes;
-(void)clearSupportedListTypes;
-(void)clearSupportedPlaceSummaryFormatTypes;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif