// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOPDPLACEREQUESTPARAMETERS_H
#define GEOPDPLACEREQUESTPARAMETERS_H

@class PBCodable, PBDataReader, PBUnknownFields;
@protocol NSCopying;


#import "GEOPDAddressObjectGeocodingParameters.h"
#import "GEOPDAirportEntityPlaceLookupParameters.h"
#import "GEOPDAllCollectionsViewParameters.h"
#import "GEOPDAllGuidesLocationsViewParameters.h"
#import "GEOPDAutocompleteParameters.h"
#import "GEOPDBatchCategoryLookupParameters.h"
#import "GEOPDBatchMerchantLookupBrandParameters.h"
#import "GEOPDBatchPopularNearbySearchParameters.h"
#import "GEOPDBatchReverseGeocodingParameters.h"
#import "GEOPDBatchSpatialLookupParameters.h"
#import "GEOPDBrandLookupParameters.h"
#import "GEOPDSearchBrowseCategorySuggestionParameters.h"
#import "GEOPDCanonicalLocationSearchParameters.h"
#import "GEOPDCategorySearchParameters.h"
#import "GEOPDChildPlaceLookupByCategoryParameters.h"
#import "GEOPDCollectionSuggestionParameters.h"
#import "GEOPDExtendedGeoLookupParameters.h"
#import "GEOPDExternalTransitLookupParameters.h"
#import "GEOPDFeatureIdGeocodingParameters.h"
#import "GEOPDGeocodingParameters.h"
#import "GEOPDGroundViewLabelParameters.h"
#import "GEOPDGuidesHomeParameters.h"
#import "GEOPDIpGeoLookupParameters.h"
#import "GEOPDLocationDirectedSearchParameters.h"
#import "GEOPDMapsHomeParameters.h"
#import "GEOPDMapsIdentifierPlaceLookupParameters.h"
#import "GEOPDMapsSearchHomeParameters.h"
#import "GEOPDMerchantLookupParameters.h"
#import "GEOPDNearbySearchParameters.h"
#import "GEOPDPlaceCollectionLookupParameters.h"
#import "GEOPDPlaceLookupParameters.h"
#import "GEOPDPlaceQuestionnaireLookupParameters.h"
#import "GEOPDPlaceRefinementParameters.h"
#import "GEOPDPopularNearbySearchParameters.h"
#import "GEOPDPublisherViewParameters.h"
#import "GEOPDReverseGeocodingParameters.h"
#import "GEOPDSearchFieldPlaceholderParameters.h"
#import "GEOPDSearchParameters.h"
#import "GEOPDSearchZeroKeywordCategorySuggestionParameters.h"
#import "GEOPDSearchZeroKeywordWithSearchResultsSuggestionParameters.h"
#import "GEOPDSiriSearchParameters.h"
#import "GEOPDTerritoryLookupParameters.h"
#import "GEOPDTransitNearbyScheduleLookupParameters.h"
#import "GEOPBTransitScheduleLookupParameters.h"
#import "GEOPDTransitVehiclePositionParameters.h"
#import "GEOPDVendorSpecificPlaceRefinementParameters.h"
#import "GEOPDWifiFingerprintParameters.h"

@interface GEOPDPlaceRequestParameters : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDAddressObjectGeocodingParameters *_addressObjectGeocodingParameters;
    GEOPDAirportEntityPlaceLookupParameters *_airportEntityPlaceLookupParameters;
    GEOPDAllCollectionsViewParameters *_allCollectionsViewParameters;
    GEOPDAllGuidesLocationsViewParameters *_allGuidesLocationsViewParameters;
    GEOPDAutocompleteParameters *_autocompleteParameters;
    GEOPDBatchCategoryLookupParameters *_batchCategoryLookupParameters;
    GEOPDBatchMerchantLookupBrandParameters *_batchMerchantLookupBrandParameters;
    GEOPDBatchPopularNearbySearchParameters *_batchPopularNearbySearchParameters;
    GEOPDBatchReverseGeocodingParameters *_batchReverseGeocodingParameters;
    GEOPDBatchSpatialLookupParameters *_batchSpatialLookupParameters;
    GEOPDBrandLookupParameters *_brandLookupParameters;
    GEOPDSearchBrowseCategorySuggestionParameters *_browseCategorySuggestionParameters;
    GEOPDCanonicalLocationSearchParameters *_canonicalLocationSearchParameters;
    GEOPDCategorySearchParameters *_categorySearchParameters;
    GEOPDChildPlaceLookupByCategoryParameters *_childPlaceLookupByCategoryParameters;
    GEOPDCollectionSuggestionParameters *_collectionSuggestionParameters;
    GEOPDExtendedGeoLookupParameters *_extendedGeoLookupParameters;
    GEOPDExternalTransitLookupParameters *_externalTransitLookupParameters;
    GEOPDFeatureIdGeocodingParameters *_featureIdGeocodingParameters;
    GEOPDGeocodingParameters *_geocodingParameters;
    GEOPDGroundViewLabelParameters *_groundViewLabelParameters;
    GEOPDGuidesHomeParameters *_guidesHomeParameters;
    GEOPDIpGeoLookupParameters *_ipGeoLookupParameters;
    GEOPDLocationDirectedSearchParameters *_locationDirectedSearchParameters;
    GEOPDMapsHomeParameters *_mapsHomeParameters;
    GEOPDMapsIdentifierPlaceLookupParameters *_mapsIdentifierPlaceLookupParameters;
    GEOPDMapsSearchHomeParameters *_mapsSearchHomeParameters;
    GEOPDMerchantLookupParameters *_merchantLookupParameters;
    GEOPDNearbySearchParameters *_nearbySearchParameters;
    GEOPDPlaceCollectionLookupParameters *_placeCollectionLookupParameter;
    GEOPDPlaceLookupParameters *_placeLookupParameters;
    GEOPDPlaceQuestionnaireLookupParameters *_placeQuestionnaireLookupParameters;
    GEOPDPlaceRefinementParameters *_placeRefinementParameters;
    GEOPDPopularNearbySearchParameters *_popularNearbySearchParameters;
    GEOPDPublisherViewParameters *_publisherViewParameters;
    GEOPDReverseGeocodingParameters *_reverseGeocodingParameters;
    GEOPDSearchFieldPlaceholderParameters *_searchFieldPlaceholderParameters;
    GEOPDSearchParameters *_searchParameters;
    GEOPDSearchZeroKeywordCategorySuggestionParameters *_searchZeroKeywordCategorySuggestionParameters;
    GEOPDSearchZeroKeywordWithSearchResultsSuggestionParameters *_searchZeroKeywordWithSearchResultsSuggestionParameters;
    GEOPDSiriSearchParameters *_siriSearchParameters;
    GEOPDTerritoryLookupParameters *_territoryLookupParameters;
    GEOPDTransitNearbyScheduleLookupParameters *_transitNearbyScheduleLookupParameters;
    GEOPBTransitScheduleLookupParameters *_transitScheduleLookupParameter;
    GEOPDTransitVehiclePositionParameters *_transitVehiclePositionParameters;
    GEOPDVendorSpecificPlaceRefinementParameters *_vendorSpecificPlaceRefinementParameters;
    GEOPDWifiFingerprintParameters *_wifiFingerprintParameters;
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
-(id)initWithAirportCode:(id)arg0 terminalCode:(id)arg1 gateCode:(id)arg2 traits:(id)arg3 ;
-(id)initWithBatchReverseGeocodeLocations:(id)arg0 additionalPlaceTypes:(*int)arg1 additionalPlaceTypesCount:(NSUInteger)arg2 traits:(id)arg3 ;
-(id)initWithBrandMUID:(NSUInteger)arg0 traits:(id)arg1 ;
-(id)initWithCanonicalLocationSearchQueryString:(id)arg0 ;
-(id)initWithData:(id)arg0 ;
-(id)initWithExternalBusinessID:(id)arg0 contentProvider:(id)arg1 ;
-(id)initWithExternalTransitStationCodes:(id)arg0 sourceID:(id)arg1 transactionDate:(id)arg2 transactionLocation:(id)arg3 ;
-(id)initWithForwardGeocodeAddress:(id)arg0 maxResults:(unsigned int)arg1 traits:(id)arg2 ;
-(id)initWithForwardGeocodeAddressString:(id)arg0 maxResults:(unsigned int)arg1 traits:(id)arg2 ;
-(id)initWithIdentifiers:(id)arg0 resultProviderID:(int)arg1 ;
-(id)initWithMapItemToRefine:(id)arg0 coordinate:(struct ? )arg1 traits:(id)arg2 ;
-(id)initWithMapItemToRefine:(id)arg0 traits:(id)arg1 ;
-(id)initWithMerchantCode:(id)arg0 rawMerchantCode:(id)arg1 relyingPartyIdentifier:(id)arg2 industryCategory:(id)arg3 industryCode:(id)arg4 paymentNetwork:(id)arg5 transactionDate:(id)arg6 transactionLocation:(id)arg7 terminalId:(id)arg8 transactionCurrencyCode:(id)arg9 transactionType:(int)arg10 transactionId:(id)arg11 warsawMerchantDomain:(id)arg12 warsawMerchantName:(id)arg13 warsawMerchantId:(id)arg14 adamId:(id)arg15 merchantId:(id)arg16 merchantDoingBizAsName:(id)arg17 merchantEnhancedName:(id)arg18 merchantCity:(id)arg19 merchantRawCity:(id)arg20 merchantState:(id)arg21 merchantRawState:(id)arg22 merchantZip:(id)arg23 merchantAddress:(id)arg24 merchantRawAddress:(id)arg25 merchantCountryCode:(id)arg26 merchantType:(id)arg27 merchantCleanConfidenceLevel:(id)arg28 merchantAdditionalData:(id)arg29 merchantCanl:(id)arg30 brandFallbackSupported:(BOOL)arg31 isSettlement:(BOOL)arg32 isRefund:(BOOL)arg33 fuzzyMatched:(id)arg34 coarseLocationUsed:(id)arg35 ;
-(id)initWithPlaceRefinementParameters:(id)arg0 traits:(id)arg1 ;
-(id)initWithReverseGeocodeCoordinate:(struct ? )arg0 ;
-(id)initWithReverseGeocodeCoordinate:(struct ? )arg0 preserveOriginalLocation:(BOOL)arg1 ;
-(id)initWithReverseGeocodeCoordinate:(struct ? )arg0 preserveOriginalLocation:(BOOL)arg1 floorOrdinal:(int)arg2 ;
-(id)initWithReverseGeocodeLocation:(id)arg0 preserveOriginalLocation:(BOOL)arg1 placeTypeLimit:(int)arg2 ;
-(id)initWithSearchQuery:(id)arg0 entryMetadata:(id)arg1 metadata:(id)arg2 autocompleteEntry:(id)arg3 retainedSearch:(id)arg4 maxResults:(unsigned int)arg5 filters:(id)arg6 traits:(id)arg7 error:(*id)arg8 ;
-(id)initWithSearchURLQuery:(id)arg0 coordinate:(struct ? )arg1 maxResults:(unsigned int)arg2 traits:(id)arg3 ;
-(id)initWithSearchURLQuery:(id)arg0 coordinate:(struct ? )arg1 muid:(NSUInteger)arg2 resultProviderId:(int)arg3 contentProvider:(id)arg4 ;
-(id)initWithSearchURLQuery:(id)arg0 identifier:(id)arg1 ;
-(id)initWithVendorSpecificPlaceRefinementParameters:(id)arg0 traits:(id)arg1 ;
-(id)jsonRepresentation;
-(void)clearLocations;
-(void)writeTo:(id)arg0 ;


@end


#endif