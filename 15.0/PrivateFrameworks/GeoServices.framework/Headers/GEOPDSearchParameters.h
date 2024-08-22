// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOPDSEARCHPARAMETERS_H
#define GEOPDSEARCHPARAMETERS_H

@class PBCodable, PBDataReader, PBUnknownFields, NSString, NSData;
@protocol NSCopying;


#import "GEOPDETAFilter.h"
#import "GEOPDSSearchEvChargingParameters.h"
#import "GEOPDSInferredSignals.h"
#import "GEOPDViewportInfo.h"
#import "GEOPDRecentRouteInfo.h"
#import "GEOPDResultRefinementQuery.h"
#import "GEOPDRetainedSearchMetadata.h"
#import "GEOPDSSearchFilter.h"
#import "GEOPDSSearchLocationParameters.h"
#import "GEOPDSSearchStructureIntentRequestType.h"
#import "GEOPDAutocompleteEntry.h"

@interface GEOPDSearchParameters : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    ? _knownRefinementTypes;
    ? _supportedPlaceSummaryFormatTypes;
    ? _supportedRelatedEntitySectionTypes;
    ? _supportedSearchSectionTypes;
    ? _supportedSearchTierTypes;
    GEOPDETAFilter *_etaFilter;
    GEOPDSSearchEvChargingParameters *_evChargingParameters;
    GEOPDSInferredSignals *_inferredSignals;
    GEOPDViewportInfo *_previousSearchViewport;
    GEOPDRecentRouteInfo *_recentRouteInfo;
    GEOPDResultRefinementQuery *_resultRefinementQuery;
    GEOPDRetainedSearchMetadata *_retainedSearch;
    GEOPDSSearchFilter *_searchFilter;
    GEOPDSSearchLocationParameters *_searchLocationParameters;
    NSString *_searchString;
    GEOPDSSearchStructureIntentRequestType *_searchStructureIntentType;
    NSData *_suggestionEntryMetadata;
    GEOPDAutocompleteEntry *_suggestionEntry;
    NSData *_suggestionMetadata;
    GEOPDViewportInfo *_viewportInfo;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    unsigned int _auxiliaryTierNumResults;
    unsigned int _maxResults;
    int _placeSummaryRevision;
    int _searchType;
    int _sortDirection;
    int _sortOrder;
    BOOL _supportDirectionIntentSearch;
    BOOL _supportDymSuggestion;
    BOOL _supportSearchResultSection;
    BOOL _supportUnresolvedDirectionIntent;
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
-(id)initWithSearchQuery:(id)arg0 entryMetadata:(id)arg1 metadata:(id)arg2 autocompleteEntry:(id)arg3 retainedSearch:(id)arg4 maxResults:(unsigned int)arg5 traits:(id)arg6 ;
-(id)jsonRepresentation;
-(void)dealloc;
-(void)writeTo:(id)arg0 ;


@end


#endif