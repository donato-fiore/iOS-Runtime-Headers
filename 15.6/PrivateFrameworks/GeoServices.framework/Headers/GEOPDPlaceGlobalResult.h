// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOPDPLACEGLOBALRESULT_H
#define GEOPDPLACEGLOBALRESULT_H

@class PBCodable, PBDataReader, PBUnknownFields;
@protocol NSCopying;


#import "GEOPDAddressObjectGeocodingResult.h"
#import "GEOPDAirportEntityPlaceLookupResult.h"
#import "GEOPDAllCollectionsViewResult.h"
#import "GEOPDAllGuidesLocationsViewResult.h"
#import "GEOPDAutocompleteResult.h"
#import "GEOPDBatchCategoryLookupResult.h"
#import "GEOPDBatchMerchantLookupBrandResult.h"
#import "GEOPDBatchPopularNearbySearchResult.h"
#import "GEOPDBatchReverseGeocodingResult.h"
#import "GEOPDBatchSpatialLookupResult.h"
#import "GEOPDBrandLookupResult.h"
#import "GEOPDSearchBrowseCategorySuggestionResult.h"
#import "GEOPDCanonicalLocationSearchResult.h"
#import "GEOPDCategorySearchResult.h"
#import "GEOPDChildPlaceLookupByCategoryResult.h"
#import "GEOPDCollectionSuggestionResult.h"
#import "GEOPDExtendedGeoLookupResult.h"
#import "GEOPDExternalTransitLookupResult.h"
#import "GEOPDFeatureIdGeocodingResult.h"
#import "GEOPDGeocodingResult.h"
#import "GEOPDGroundViewLabelResult.h"
#import "GEOPDGuidesHomeResult.h"
#import "GEOPDIpGeoLookupResult.h"
#import "GEOPDLocationDirectedSearchResult.h"
#import "GEOPDMapsHomeResult.h"
#import "GEOPDMapsIdentifierPlaceLookupResult.h"
#import "GEOPDMapsSearchHomeResult.h"
#import "GEOPDMerchantLookupResult.h"
#import "GEOPDNearbySearchResult.h"
#import "GEOPDPlaceCollectionLookupResult.h"
#import "GEOPDPlaceGlobalCommonResult.h"
#import "GEOPDPlaceLookupResult.h"
#import "GEOPDPlaceRefinementResult.h"
#import "GEOPDPopularNearbySearchResult.h"
#import "GEOPDPublisherViewResult.h"
#import "GEOPDReverseGeocodingResult.h"
#import "GEOPDSearchFieldPlaceholderResult.h"
#import "GEOPDSearchResult.h"
#import "GEOPDSearchZeroKeywordCategorySuggestionResult.h"
#import "GEOPDSearchZeroKeywordWithSearchResultsSuggestionResult.h"
#import "GEOPDSiriSearchResult.h"
#import "GEOPDTerritoryLookupResult.h"
#import "GEOPDTransitScheduleLookupResult.h"
#import "GEOPDVendorSpecificPlaceRefinementResult.h"
#import "GEOPDWifiFingerprintResult.h"

@interface GEOPDPlaceGlobalResult : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDAddressObjectGeocodingResult *_addressObjectGeocodingResult;
    GEOPDAirportEntityPlaceLookupResult *_airportEntityPlaceLookupResult;
    GEOPDAllCollectionsViewResult *_allCollectionsViewResult;
    GEOPDAllGuidesLocationsViewResult *_allGuidesLocationsViewresult;
    GEOPDAutocompleteResult *_autocompleteResult;
    GEOPDBatchCategoryLookupResult *_batchCategoryLookupResult;
    GEOPDBatchMerchantLookupBrandResult *_batchMerchantLookupBrandResult;
    GEOPDBatchPopularNearbySearchResult *_batchPopularNearbySearchResult;
    GEOPDBatchReverseGeocodingResult *_batchReverseGeocodingResult;
    GEOPDBatchSpatialLookupResult *_batchSpatialLookupResult;
    GEOPDBrandLookupResult *_brandLookupResult;
    GEOPDSearchBrowseCategorySuggestionResult *_browseCategorySuggestionResult;
    GEOPDCanonicalLocationSearchResult *_canonicalSearchResult;
    GEOPDCategorySearchResult *_categorySearchResult;
    GEOPDChildPlaceLookupByCategoryResult *_childPlaceLookupByCategoryResult;
    GEOPDCollectionSuggestionResult *_collectionSuggestionResult;
    GEOPDExtendedGeoLookupResult *_extendedGeoLookupResult;
    GEOPDExternalTransitLookupResult *_externalTransitLookupResult;
    GEOPDFeatureIdGeocodingResult *_featureIdGeocodingResult;
    GEOPDGeocodingResult *_geocodingResult;
    GEOPDGroundViewLabelResult *_groundViewLabelResult;
    GEOPDGuidesHomeResult *_guidesHomeResult;
    GEOPDIpGeoLookupResult *_ipGeoLookupResult;
    GEOPDLocationDirectedSearchResult *_locationDirectedSearchResult;
    GEOPDMapsHomeResult *_mapsHomeResult;
    GEOPDMapsIdentifierPlaceLookupResult *_mapsIdentifierPlaceLookupResult;
    GEOPDMapsSearchHomeResult *_mapsSearchHomeResult;
    GEOPDMerchantLookupResult *_merchantLookupResult;
    GEOPDNearbySearchResult *_nearbySearchResult;
    GEOPDPlaceCollectionLookupResult *_placeCollectionLookupResult;
    GEOPDPlaceGlobalCommonResult *_placeGlobalCommonResult;
    GEOPDPlaceLookupResult *_placeLookupResult;
    GEOPDPlaceRefinementResult *_placeRefinementResult;
    GEOPDPopularNearbySearchResult *_popularNearbySearchResult;
    GEOPDPublisherViewResult *_publisherViewResult;
    GEOPDReverseGeocodingResult *_reverseGeocodingResult;
    GEOPDSearchFieldPlaceholderResult *_searchFieldPlaceholderResult;
    GEOPDSearchResult *_searchResult;
    GEOPDSearchZeroKeywordCategorySuggestionResult *_searchZeroKeywordCategorySuggestionResult;
    GEOPDSearchZeroKeywordWithSearchResultsSuggestionResult *_searchZeroKeywordWithSearchResultsSuggestionResult;
    GEOPDSiriSearchResult *_siriSearchResult;
    GEOPDTerritoryLookupResult *_territoryLookupResult;
    GEOPDTransitScheduleLookupResult *_transitScheduleLookupResult;
    GEOPDVendorSpecificPlaceRefinementResult *_vendorSpecificPlaceRefinementResult;
    GEOPDWifiFingerprintResult *_wifiFingerprintResult;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
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