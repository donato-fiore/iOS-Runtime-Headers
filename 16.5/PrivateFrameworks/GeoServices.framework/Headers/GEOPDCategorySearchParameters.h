// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOPDCATEGORYSEARCHPARAMETERS_H
#define GEOPDCATEGORYSEARCHPARAMETERS_H

@class PBCodable, PBDataReader, PBUnknownFields, NSString, NSData;
@protocol NSCopying;


#import "GEOPDETAFilter.h"
#import "GEOPDSSearchEvChargingParameters.h"
#import "GEOPDViewportInfo.h"
#import "GEOPDRecentRouteInfo.h"
#import "GEOPDResultRefinementQuery.h"
#import "GEOPDSearchOriginationInfo.h"

@interface GEOPDCategorySearchParameters : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    ? _knownRefinementTypes;
    ? _supportedPlaceSummaryFormatTypes;
    ? _supportedRelatedEntitySectionTypes;
    ? _supportedSearchSectionTypes;
    ? _supportedSearchTierTypes;
    NSString *_enrichmentCampaignNamespace;
    GEOPDETAFilter *_etaFilter;
    GEOPDSSearchEvChargingParameters *_evChargingParameters;
    GEOPDViewportInfo *_previousSearchViewport;
    GEOPDRecentRouteInfo *_recentRouteInfo;
    GEOPDResultRefinementQuery *_resultRefinementQuery;
    GEOPDSearchOriginationInfo *_searchOriginationInfo;
    NSData *_suggestionEntryMetadata;
    GEOPDViewportInfo *_viewportInfo;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    unsigned int _auxiliaryTierNumResults;
    unsigned int _blurredHourOfDay;
    unsigned int _dayOfWeek;
    unsigned int _maxResults;
    int _placeSummaryRevision;
    int _searchType;
    BOOL _supportCategorySearchResultSection;
    BOOL _supportSearchEnrichment;
    BOOL _supportStructuredRapAffordance;
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