// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOMAPSERVICE_H
#define GEOMAPSERVICE_H

@class NSArray, NSCache;
@protocol NSCacheDelegate;

#import <Foundation/Foundation.h>


@interface GEOMapService : NSObject {
    os_unfair_lock_s _preferredLanguagesLock;
    NSArray *_preferredLanguages;
    int _overriddenResultProviderID;
    int _additionalEnabledMarketsChangedToken;
    int _experimentsChangedToken;
    NSCache *_handleCache;
    id<NSCacheDelegate> *_handleCacheDelegate;
}




+(id)sharedService;
+(void)_attributedGeoMapItemsForPlaceDatasWithType:(int)arg0 placeDatas:(id)arg1 disambiguationLabels:(id)arg2 handler:(id)arg3 ;
-(CGFloat)wiFiQualitySearchRadiusMeters;
-(CGFloat)wiFiQualitySmallSearchRadiusMeters;
-(NSInteger)wiFiQualitySearchZoomLevel;
-(NSUInteger)maxParametersCountForSpatialEventLookup;
-(NSUInteger)maxParametersCountForSpatialPlaceLookup;
-(id)_cachedMapItemForHandle:(id)arg0 enforceMaxAge:(BOOL)arg1 ;
-(id)_cl_ticketForForwardGeocodeAddressDictionary:(id)arg0 maxResults:(unsigned int)arg1 traits:(id)arg2 ;
-(id)_cl_ticketForForwardGeocodePostalAddress:(id)arg0 maxResults:(unsigned int)arg1 traits:(id)arg2 ;
-(id)_cl_ticketForForwardGeocodeString:(id)arg0 maxResults:(unsigned int)arg1 traits:(id)arg2 ;
-(id)_cl_ticketForReverseGeocodeLocation:(id)arg0 traits:(id)arg1 ;
-(id)_geoMapItemForData:(id)arg0 ;
-(id)_geoMapItemsForPlacesInDetails:(id)arg0 ;
-(id)_preferredLanguages;
-(id)_searchable_ticketForReverseGeocodeCoordinate:(struct ? )arg0 floor:(int)arg1 includeEntryPoints:(BOOL)arg2 shiftLocationsIfNeeded:(BOOL)arg3 preserveOriginalLocation:(BOOL)arg4 traits:(id)arg5 ;
-(id)_searchable_ticketForReverseGeocodeCoordinate:(struct ? )arg0 includeEntryPoints:(BOOL)arg1 shiftLocationsIfNeeded:(BOOL)arg2 preserveOriginalLocation:(BOOL)arg3 traits:(id)arg4 ;
-(id)_ticketForAutocompleteFragment:(id)arg0 type:(int)arg1 traits:(id)arg2 filters:(id)arg3 retainedSearch:(id)arg4 tappedQuerySuggestion:(id)arg5 sessionData:(id)arg6 ;
// -(id)_ticketForLegacyBatchReverseGeocodeLocations:(id)arg0 locationShifter:(id)arg1 additionalPlaceTypes:(unk)arg2 additionalPlaceTypesCount:(*int)arg3 placeTypeLimit:(unsigned int)arg4 traits:(int)arg5  ;
-(id)_ticketForRefreshingHandle:(id)arg0 traits:(id)arg1 ;
-(id)defaultBackgroundTraits;
-(id)defaultTraits;
-(id)handleForMapItem:(id)arg0 ;
-(id)init;
-(id)locallyResolvedMapItemFromHandle:(id)arg0 error:(*id)arg1 ;
-(id)serializedClientMetadataForParsec;
-(id)serializedClientMetadataForSiri;
-(id)serializedClientMetadataForTraits:(id)arg0 ;
-(id)serializedETAFilterForSiriWithRouteAttributes:(id)arg0 ;
-(id)serializedSearchEvChargingParametersForSiriFromPorts:(id)arg0 ;
-(id)ticketForAirportCode:(id)arg0 terminalCode:(id)arg1 gateCode:(id)arg2 traits:(id)arg3 ;
-(id)ticketForAllCollectionViewWithBatchSize:(unsigned int)arg0 keywordFilter:(id)arg1 addressFilter:(id)arg2 withTraits:(id)arg3 ;
-(id)ticketForBatchPopularNearbyForSearchCategories:(id)arg0 maxResults:(unsigned int)arg1 traits:(id)arg2 ;
// -(id)ticketForBatchReverseGeocodeLocations:(id)arg0 locationShifter:(id)arg1 additionalPlaceTypes:(unk)arg2 additionalPlaceTypesCount:(*int)arg3 placeTypeLimit:(unsigned int)arg4 traits:(int)arg5  ;
-(id)ticketForBatchReverseGeocodeLocations:(id)arg0 shiftLocationsIfNeeded:(BOOL)arg1 additionalPlaceTypes:(*int)arg2 additionalPlaceTypesCount:(unsigned int)arg3 placeTypeLimit:(int)arg4 traits:(id)arg5 ;
-(id)ticketForBatchReverseGeocodeLocations:(id)arg0 shiftLocationsIfNeeded:(BOOL)arg1 additionalPlaceTypes:(*int)arg2 additionalPlaceTypesCount:(unsigned int)arg3 traits:(id)arg4 ;
-(id)ticketForBatchReverseGeocodeLocations:(id)arg0 shiftLocationsIfNeeded:(BOOL)arg1 traits:(id)arg2 ;
-(id)ticketForBrandLookupWithIMessageUid:(id)arg0 traits:(id)arg1 ;
-(id)ticketForCanonicalLocationSearchQueryString:(id)arg0 traits:(id)arg1 ;
-(id)ticketForCategoryIdentifier:(id)arg0 mapItemIdentifier:(id)arg1 range:(struct _NSRange )arg2 traits:(id)arg3 ;
-(id)ticketForCategoryListWithTraits:(id)arg0 isFromNoQueryState:(BOOL)arg1 ;
-(id)ticketForCitySelectorViewWithTraits:(id)arg0 batchSize:(unsigned int)arg1 ;
-(id)ticketForCuratedCollectionItems:(id)arg0 collection:(id)arg1 traits:(id)arg2 ;
-(id)ticketForCuratedCollections:(id)arg0 isBatchLookup:(BOOL)arg1 overrideSuppress:(BOOL)arg2 traits:(id)arg3 ;
-(id)ticketForDFRCategoryListWithTraits:(id)arg0 ;
-(id)ticketForDatasetCheckWithTraits:(id)arg0 ;
-(id)ticketForExternalBusinessID:(id)arg0 contentProvider:(id)arg1 traits:(id)arg2 ;
-(id)ticketForExternalTransitStationCodes:(id)arg0 sourceID:(id)arg1 transactionDate:(id)arg2 transactionLocation:(id)arg3 traits:(id)arg4 ;
-(id)ticketForFeedbackRequest:(id)arg0 traits:(id)arg1 ;
-(id)ticketForFeedbackRequestData:(id)arg0 traits:(id)arg1 ;
-(id)ticketForFeedbackRequestParameters:(id)arg0 placeForProblemContext:(id)arg1 userCredentials:(id)arg2 pushToken:(id)arg3 allowContactBackAtEmailAddress:(id)arg4 traits:(id)arg5 ;
-(id)ticketForForwardGeocodeAddress:(id)arg0 maxResults:(unsigned int)arg1 traits:(id)arg2 ;
-(id)ticketForForwardGeocodeAddressDictionary:(id)arg0 maxResults:(unsigned int)arg1 traits:(id)arg2 ;
-(id)ticketForForwardGeocodePostalAddress:(id)arg0 maxResults:(unsigned int)arg1 traits:(id)arg2 ;
-(id)ticketForForwardGeocodeString:(id)arg0 maxResults:(unsigned int)arg1 traits:(id)arg2 ;
-(id)ticketForFreshBusinessClaimComponentWithIdentifier:(id)arg0 resultProviderID:(int)arg1 traits:(id)arg2 ;
-(id)ticketForFreshComponents:(id)arg0 identifier:(id)arg1 resultProviderID:(int)arg2 contentProvider:(id)arg3 traits:(id)arg4 ;
-(id)ticketForFreshIdentifier:(id)arg0 resultProviderID:(int)arg1 contentProvider:(id)arg2 traits:(id)arg3 ;
-(id)ticketForGeoIpLookupForIpAddr:(id)arg0 ;
-(id)ticketForGuideHomeWithFilter:(id)arg0 guideLocation:(id)arg1 withTraits:(id)arg2 ;
-(id)ticketForGuideLocationLookupWithIds:(id)arg0 identifiers:(id)arg1 traits:(id)arg2 ;
-(id)ticketForIdentifiers:(id)arg0 resultProviderID:(int)arg1 contentProvider:(id)arg2 traits:(id)arg3 ;
-(id)ticketForIdentifiers:(id)arg0 traits:(id)arg1 ;
-(id)ticketForInterleavedAutoCompletePoiAddressOnly:(id)arg0 sessionData:(id)arg1 traits:(id)arg2 ;
-(id)ticketForInterleavedAutoCompleteSearchFragment:(id)arg0 filters:(id)arg1 sessionData:(id)arg2 traits:(id)arg3 ;
-(id)ticketForInterleavedAutoCompleteWithBrowseSearchFragment:(id)arg0 filters:(id)arg1 retainedSearch:(id)arg2 tappedQuerySuggestion:(id)arg3 sessionData:(id)arg4 traits:(id)arg5 ;
-(id)ticketForInterleavedInstantSearchFragment:(id)arg0 filters:(id)arg1 sessionData:(id)arg2 traits:(id)arg3 ;
-(id)ticketForInterleavedLocalitiesAndLandmarksSearchFragment:(id)arg0 sessionData:(id)arg1 traits:(id)arg2 ;
-(id)ticketForMUIDs:(id)arg0 resultProviderID:(int)arg1 contentProvider:(id)arg2 traits:(id)arg3 ;
-(id)ticketForMUIDs:(id)arg0 traits:(id)arg1 ;
-(id)ticketForMapItemToRefine:(id)arg0 traits:(id)arg1 ;
-(id)ticketForMapsHomeWithTraits:(id)arg0 ;
-(id)ticketForMerchantCode:(id)arg0 rawMerchantCode:(id)arg1 industryCategory:(id)arg2 industryCode:(id)arg3 paymentNetwork:(id)arg4 transactionDate:(id)arg5 transactionLocation:(id)arg6 traits:(id)arg7 ;
-(id)ticketForMerchantCode:(id)arg0 rawMerchantCode:(id)arg1 relyingPartyIdentifier:(id)arg2 industryCategory:(id)arg3 industryCode:(id)arg4 paymentNetwork:(id)arg5 transactionDate:(id)arg6 transactionLocation:(id)arg7 terminalId:(id)arg8 transactionCurrencyCode:(id)arg9 transactionType:(int)arg10 transactionId:(id)arg11 warsawMerchantDomain:(id)arg12 warsawMerchantName:(id)arg13 warsawMerchantId:(id)arg14 adamId:(id)arg15 merchantId:(id)arg16 merchantDoingBizAsName:(id)arg17 merchantEnhancedName:(id)arg18 merchantCity:(id)arg19 merchantRawCity:(id)arg20 merchantState:(id)arg21 merchantRawState:(id)arg22 merchantZip:(id)arg23 merchantAddress:(id)arg24 merchantRawAddress:(id)arg25 merchantCountryCode:(id)arg26 merchantType:(id)arg27 merchantCleanConfidenceLevel:(id)arg28 merchantAdditionalData:(id)arg29 merchantCanl:(id)arg30 fuzzyMatched:(id)arg31 coarseLocationUsed:(id)arg32 traits:(id)arg33 ;
-(id)ticketForNearbyTransitDeparturesWithLookupOrigin:(id)arg0 userLocation:(id)arg1 traits:(id)arg2 ;
-(id)ticketForNearestTransitStation:(id)arg0 coordinate:(struct ? )arg1 traits:(id)arg2 ;
-(id)ticketForNonExpiredIdentifier:(id)arg0 resultProviderID:(int)arg1 contentProvider:(id)arg2 traits:(id)arg3 ;
-(id)ticketForPhoneNumbers:(id)arg0 allowCellularDataForLookup:(BOOL)arg1 traits:(id)arg2 ;
-(id)ticketForPlaceLookupWithSearchCategory:(id)arg0 parentMuid:(NSUInteger)arg1 traits:(id)arg2 ;
-(id)ticketForPlaceRefinementRequestParameters:(id)arg0 traits:(id)arg1 ;
-(id)ticketForPlaceRefinementRequestWithCoordinate:(struct ? *)arg0 addressLine:(id)arg1 placeName:(id)arg2 traits:(id)arg3 ;
-(id)ticketForPopularNearbyForSearchCategory:(id)arg0 maxResults:(unsigned int)arg1 traits:(id)arg2 ;
-(id)ticketForPublisherViewPublisherIdentifier:(id)arg0 keywordFilter:(id)arg1 addressFilter:(id)arg2 batchSize:(unsigned int)arg3 withTraits:(id)arg4 ;
-(id)ticketForReverseGeocodeCoordinate:(struct ? )arg0 floor:(int)arg1 includeEntryPoints:(BOOL)arg2 shiftLocationsIfNeeded:(BOOL)arg3 preserveOriginalLocation:(BOOL)arg4 traits:(id)arg5 ;
-(id)ticketForReverseGeocodeCoordinate:(struct ? )arg0 includeEntryPoints:(BOOL)arg1 shiftLocationsIfNeeded:(BOOL)arg2 preserveOriginalLocation:(BOOL)arg3 traits:(id)arg4 ;
-(id)ticketForReverseGeocodeCoordinate:(struct ? )arg0 includeEntryPoints:(BOOL)arg1 shiftLocationsIfNeeded:(BOOL)arg2 traits:(id)arg3 ;
-(id)ticketForReverseGeocodeCoordinate:(struct ? )arg0 shiftLocationsIfNeeded:(BOOL)arg1 preserveOriginalLocation:(BOOL)arg2 traits:(id)arg3 ;
-(id)ticketForReverseGeocodeCoordinate:(struct ? )arg0 shiftLocationsIfNeeded:(BOOL)arg1 traits:(id)arg2 ;
-(id)ticketForReverseGeocodeLocation:(id)arg0 placeTypeLimit:(int)arg1 traits:(id)arg2 ;
-(id)ticketForReverseGeocodeLocation:(id)arg0 preserveOriginalLocation:(BOOL)arg1 placeTypeLimit:(int)arg2 traits:(id)arg3 ;
-(id)ticketForReverseGeocodeLocation:(id)arg0 traits:(id)arg1 ;
-(id)ticketForSearchAlongRouteWithCategory:(id)arg0 originalWaypointRouteData:(id)arg1 zilchData:(id)arg2 sessionState:(id)arg3 routeId:(id)arg4 routeAttributes:(id)arg5 maxResults:(unsigned int)arg6 traits:(id)arg7 ;
-(id)ticketForSearchCategory:(id)arg0 venueIdentifier:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3 ;
-(id)ticketForSearchFieldPlaceholderWithTraits:(id)arg0 ;
-(id)ticketForSearchHomeWithTraits:(id)arg0 ;
-(id)ticketForSearchPoisForBrandMUID:(NSUInteger)arg0 traits:(id)arg1 ;
-(id)ticketForSearchQuery:(id)arg0 completionItem:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3 ;
-(id)ticketForSearchQuery:(id)arg0 completionItem:(id)arg1 relatedSearchSuggestion:(id)arg2 retainedSearch:(id)arg3 maxResults:(unsigned int)arg4 traits:(id)arg5 ;
-(id)ticketForSearchQuery:(id)arg0 completionItem:(id)arg1 retainedSearch:(id)arg2 maxResults:(unsigned int)arg3 suppressResultsRequiringAttribution:(BOOL)arg4 traits:(id)arg5 ;
-(id)ticketForSearchQuery:(id)arg0 completionItem:(id)arg1 retainedSearch:(id)arg2 maxResults:(unsigned int)arg3 traits:(id)arg4 ;
-(id)ticketForSearchQuery:(id)arg0 filters:(id)arg1 completionItem:(id)arg2 retainedSearch:(id)arg3 maxResults:(unsigned int)arg4 suppressResultsRequiringAttribution:(BOOL)arg5 traits:(id)arg6 ;
-(id)ticketForSearchQuery:(id)arg0 filters:(id)arg1 maxResults:(unsigned int)arg2 suppressResultsRequiringAttribution:(BOOL)arg3 traits:(id)arg4 ;
-(id)ticketForSearchQuery:(id)arg0 filters:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3 ;
-(id)ticketForSectionedAutoCompleteSearchFragment:(id)arg0 filters:(id)arg1 sessionData:(id)arg2 traits:(id)arg3 ;
-(id)ticketForSectionedInstantSearchFragment:(id)arg0 filters:(id)arg1 sessionData:(id)arg2 traits:(id)arg3 ;
-(id)ticketForSectionedLocalitiesAndLandmarksSearchFragment:(id)arg0 sessionData:(id)arg1 traits:(id)arg2 ;
-(id)ticketForSpatialEventLookupParameters:(id)arg0 traits:(id)arg1 ;
-(id)ticketForSpatialLookupParameters:(id)arg0 traits:(id)arg1 ;
-(id)ticketForSpatialPlaceLookupParameters:(id)arg0 traits:(id)arg1 ;
-(id)ticketForTerritoryForLocations:(id)arg0 shiftLocationsIfNeeded:(BOOL)arg1 traits:(id)arg2 ;
-(id)ticketForTransitDeparturesAtStation:(NSUInteger)arg0 line:(NSUInteger)arg1 referenceTripID:(NSUInteger)arg2 includeAllDirectionNames:(BOOL)arg3 traits:(id)arg4 ;
-(id)ticketForTransitIdentifiers:(id)arg0 endDateForPlacecardSchedulesForThisBatch:(id)arg1 traits:(id)arg2 ;
-(id)ticketForTransitLines:(id)arg0 withTraits:(id)arg1 ;
-(id)ticketForTransitScheduleAtStation:(NSUInteger)arg0 line:(NSUInteger)arg1 referenceTripID:(NSUInteger)arg2 includeAllDirectionNames:(BOOL)arg3 routingParameters:(id)arg4 traits:(id)arg5 ;
-(id)ticketForTransitTripDetailsAtStation:(NSUInteger)arg0 line:(NSUInteger)arg1 referenceTripID:(NSUInteger)arg2 includeAllDirectionNames:(BOOL)arg3 routingParameters:(id)arg4 traits:(id)arg5 ;
-(id)ticketForTransitTripIdentifiers:(id)arg0 traits:(id)arg1 ;
-(id)ticketForURLQuery:(id)arg0 identifier:(id)arg1 resultProviderId:(int)arg2 contentProvider:(id)arg3 maxResults:(unsigned int)arg4 traits:(id)arg5 ;
-(id)ticketForUpdatedTransitScheduleDetailsAtStation:(NSUInteger)arg0 line:(NSUInteger)arg1 referenceTripID:(NSUInteger)arg2 includeAllDirectionNames:(BOOL)arg3 routingParameters:(id)arg4 traits:(id)arg5 ;
-(id)ticketForVendorIdentifier:(id)arg0 mapItemIdentifier:(id)arg1 range:(struct _NSRange )arg2 traits:(id)arg3 ;
-(id)ticketForVendorSpecificPlaceRefinementRequestParameters:(id)arg0 traits:(id)arg1 ;
-(id)ticketForWiFiQualityLocationServiceRequest:(id)arg0 ;
-(id)ticketForWiFiQualityNetworkServiceRequest:(id)arg0 ;
-(id)ticketForWiFiQualityTileLoadForKey:(id)arg0 eTag:(id)arg1 ;
-(id)ticketForWifiFingerprintWithLocations:(id)arg0 wifiAccessPoints:(id)arg1 maxLabels:(unsigned int)arg2 entryTime:(NSUInteger)arg3 exitTime:(NSUInteger)arg4 traits:(id)arg5 ;
-(id)ticketForWifiFingerprintWithLocations:(id)arg0 wifiAccessPoints:(id)arg1 maxLabels:(unsigned int)arg2 traits:(id)arg3 ;
-(id)ticketforCategory:(id)arg0 maxResults:(unsigned int)arg1 traits:(id)arg2 ;
-(int)_loadOverriddenResultProviderID;
-(int)localSearchProviderID;
-(void)_countryCodeChanged:(id)arg0 ;
-(void)_geoMapItemsForResponseData:(id)arg0 handler:(id)arg1 ;
-(void)_localeChanged:(id)arg0 ;
-(void)_resolveMapItemFromHandle:(id)arg0 withTraits:(id)arg1 cachePolicy:(NSUInteger)arg2 completionHandler:(id)arg3 ;
-(void)_resolveMapItemFromHandle:(id)arg0 withTraits:(id)arg1 cachePolicy:(NSUInteger)arg2 coordinateOnlyRefinement:(BOOL)arg3 completionHandler:(id)arg4 ;
-(void)_sendInvalidateDataToSiriAndParSec;
-(void)dealloc;
-(void)resolveMapItemFromHandle:(id)arg0 completionHandler:(id)arg1 ;
-(void)resolveMapItemFromHandle:(id)arg0 traits:(id)arg1 completionHandler:(id)arg2 ;
-(void)resolveMapItemFromHandle:(id)arg0 withTraits:(id)arg1 useCache:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)resolveMapItemFromHandle:(id)arg0 withTraits:(id)arg1 useCache:(BOOL)arg2 coordinateOnlyRefinement:(BOOL)arg3 completionHandler:(id)arg4 ;
-(void)resolveMapItemLocallyFromHandle:(id)arg0 completionHandler:(id)arg1 ;
-(void)trackMapItem:(id)arg0 ;
-(void)trackSerializedPlaceData:(id)arg0 ;


@end


#endif