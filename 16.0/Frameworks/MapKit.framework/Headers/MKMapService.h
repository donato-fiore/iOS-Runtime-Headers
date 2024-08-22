// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MKMAPSERVICE_H
#define MKMAPSERVICE_H

@class NSString;
@protocol GEOLogContextDelegate;

#import <Foundation/Foundation.h>


@interface MKMapService : NSObject <GEOLogContextDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property int deviceOrientation; // ivar: _deviceOrientation
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedService;
-(id)_mk_ticketForSearchQuery:(id)arg0 completionItem:(id)arg1 traits:(id)arg2 filters:(id)arg3 ;
-(id)_ticketForReverseGeocodeCoordinate:(struct CLLocationCoordinate2D )arg0 floorOrdinal:(int)arg1 includeEntryPoints:(BOOL)arg2 preserveOriginalLocation:(BOOL)arg3 traits:(id)arg4 ;
-(id)_ticketForReverseGeocodeCoordinate:(struct CLLocationCoordinate2D )arg0 includeEntryPoints:(BOOL)arg1 preserveOriginalLocation:(BOOL)arg2 traits:(id)arg3 ;
-(id)_ticketForReverseGeocodeDroppedPinCoordinate:(struct CLLocationCoordinate2D )arg0 floorOrdinal:(id)arg1 traits:(id)arg2 ;
-(id)defaultTraits;
-(id)defaultTraitsForAnalyticsWithTraits:(id)arg0 ;
-(id)defaultTraitsWithTraits:(id)arg0 ;
-(id)defaultTraitsWithTransportType:(NSUInteger)arg0 ;
-(id)feedbackTicketForWalletRAPReport:(id)arg0 ;
-(id)mapItemsForPlacesInDetails:(id)arg0 ;
-(id)stylingForWalletCategory:(id)arg0 ;
-(id)ticketForAllCollectionViewWithBatchSize:(unsigned int)arg0 keywordFilter:(id)arg1 addressFilter:(id)arg2 withTraits:(id)arg3 ;
-(id)ticketForBrandLookupWithIMessageUid:(id)arg0 traits:(id)arg1 ;
-(id)ticketForCanonicalLocationSearchQueryString:(id)arg0 traits:(id)arg1 ;
-(id)ticketForCategory:(id)arg0 maxResults:(unsigned int)arg1 traits:(id)arg2 ;
-(id)ticketForCategoryListWithTraits:(id)arg0 isFromNoQueryState:(BOOL)arg1 ;
-(id)ticketForChildPlace:(id)arg0 traits:(id)arg1 ;
-(id)ticketForCitySelectorViewWithTraits:(id)arg0 batchSize:(unsigned int)arg1 ;
-(id)ticketForCuratedCollectionItems:(id)arg0 collection:(id)arg1 traits:(id)arg2 ;
-(id)ticketForCuratedCollections:(id)arg0 isBatchLookup:(BOOL)arg1 overrideSuppress:(BOOL)arg2 traits:(id)arg3 ;
-(id)ticketForCuratedCollections:(id)arg0 isBatchLookup:(BOOL)arg1 traits:(id)arg2 ;
-(id)ticketForExternalBusinessID:(id)arg0 contentProvider:(id)arg1 traits:(id)arg2 ;
-(id)ticketForExternalTransitStationCodes:(id)arg0 sourceID:(id)arg1 transactionDate:(id)arg2 transactionLocation:(id)arg3 traits:(id)arg4 ;
-(id)ticketForFeedbackRequest:(id)arg0 traits:(id)arg1 ;
-(id)ticketForFeedbackRequestData:(id)arg0 traits:(id)arg1 ;
-(id)ticketForFeedbackRequestParameters:(id)arg0 mapItemForProblemContext:(id)arg1 userCredentials:(id)arg2 pushToken:(id)arg3 allowContactBackAtEmailAddress:(id)arg4 traits:(id)arg5 ;
-(id)ticketForForwardGeocodeAddress:(id)arg0 traits:(id)arg1 ;
-(id)ticketForForwardGeocodeAddressDictionary:(id)arg0 traits:(id)arg1 ;
-(id)ticketForForwardGeocodeString:(id)arg0 traits:(id)arg1 ;
-(id)ticketForFreshBusinessClaimComponentWithIdentifier:(id)arg0 resultProviderID:(int)arg1 traits:(id)arg2 ;
-(id)ticketForFreshIdentifier:(id)arg0 resultProviderID:(int)arg1 contentProvider:(id)arg2 traits:(id)arg3 ;
-(id)ticketForGuideHomeWithFilter:(id)arg0 guideLocation:(id)arg1 withTraits:(id)arg2 ;
-(id)ticketForIdentifiers:(id)arg0 resultProviderID:(int)arg1 contentProvider:(id)arg2 traits:(id)arg3 ;
-(id)ticketForIdentifiers:(id)arg0 traits:(id)arg1 ;
-(id)ticketForMUIDs:(id)arg0 resultProviderID:(int)arg1 contentProvider:(id)arg2 traits:(id)arg3 ;
-(id)ticketForMUIDs:(id)arg0 traits:(id)arg1 ;
-(id)ticketForMapItemToRefine:(id)arg0 traits:(id)arg1 ;
-(id)ticketForMerchantCode:(id)arg0 rawMerchantCode:(id)arg1 industryCategory:(id)arg2 industryCode:(id)arg3 paymentNetwork:(id)arg4 transactionDate:(id)arg5 transactionLocation:(id)arg6 traits:(id)arg7 ;
-(id)ticketForNearbyTransitDeparturesWithLookupOrigin:(id)arg0 userLocation:(id)arg1 traits:(id)arg2 ;
-(id)ticketForNearestTransitStation:(id)arg0 coordinate:(struct CLLocationCoordinate2D )arg1 traits:(id)arg2 ;
-(id)ticketForNonExpiredIdentifier:(id)arg0 resultProviderID:(int)arg1 contentProvider:(id)arg2 traits:(id)arg3 ;
-(id)ticketForPhoneNumbers:(id)arg0 allowCellularDataForLookup:(BOOL)arg1 traits:(id)arg2 ;
-(id)ticketForPlaceEnrichmentWithEnrichmentInfo:(id)arg0 mapsIdentifier:(id)arg1 traits:(id)arg2 ;
-(id)ticketForPlaceLookupWithSearchCategory:(id)arg0 parentMuid:(NSUInteger)arg1 traits:(id)arg2 ;
-(id)ticketForPlaceRefinementRequestWithCoordinate:(struct CLLocationCoordinate2D *)arg0 addressLine:(id)arg1 placeName:(id)arg2 traits:(id)arg3 ;
-(id)ticketForPublisherViewPublisherIdentifier:(id)arg0 keywordFilter:(id)arg1 addressFilter:(id)arg2 batchSize:(unsigned int)arg3 withTraits:(id)arg4 ;
-(id)ticketForRelatedPlaceList:(id)arg0 traits:(id)arg1 ;
-(id)ticketForReverseGeocodeCoordinate:(struct CLLocationCoordinate2D )arg0 traits:(id)arg1 ;
-(id)ticketForReverseGeocodeDroppedPinCoordinate:(struct CLLocationCoordinate2D )arg0 floorOrdinal:(int)arg1 traits:(id)arg2 ;
-(id)ticketForReverseGeocodeDroppedPinCoordinate:(struct CLLocationCoordinate2D )arg0 traits:(id)arg1 ;
-(id)ticketForReverseGeocodeLocation:(id)arg0 traits:(id)arg1 ;
-(id)ticketForSearchAlongRouteWithCategory:(id)arg0 searchQuery:(id)arg1 completionItem:(id)arg2 originalWaypointRouteData:(id)arg3 zilchData:(id)arg4 sessionState:(id)arg5 routeId:(id)arg6 routeAttributes:(id)arg7 maxResults:(unsigned int)arg8 traits:(id)arg9 ;
-(id)ticketForSearchCategory:(id)arg0 venueIdentifier:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3 ;
-(id)ticketForSearchFieldPlaceholderWithTraits:(id)arg0 ;
-(id)ticketForSearchHomeWithTraits:(id)arg0 ;
-(id)ticketForSearchPoisForBrandMUID:(NSUInteger)arg0 traits:(id)arg1 ;
-(id)ticketForSearchQuery:(id)arg0 completionItem:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3 ;
-(id)ticketForSearchQuery:(id)arg0 completionItem:(id)arg1 relatedSearchSuggestion:(id)arg2 maxResults:(unsigned int)arg3 traits:(id)arg4 ;
-(id)ticketForSearchQuery:(id)arg0 completionItem:(id)arg1 retainedSearch:(id)arg2 maxResults:(unsigned int)arg3 traits:(id)arg4 ;
-(id)ticketForSearchQuery:(id)arg0 filters:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3 ;
-(id)ticketForSpatialPlaceLookupWithCenterCoordinate:(struct CLLocationCoordinate2D )arg0 radius:(CGFloat)arg1 pointOfInterestFilter:(id)arg2 ;
-(id)ticketForSpatialPlaceLookupWithMapRegion:(id)arg0 pointOfInterestFilter:(id)arg1 ;
-(id)ticketForTransitDeparturesAtStation:(NSUInteger)arg0 line:(NSUInteger)arg1 referenceTripID:(NSUInteger)arg2 includeAllDirectionNames:(BOOL)arg3 traits:(id)arg4 ;
-(id)ticketForTransitLines:(id)arg0 traits:(id)arg1 ;
-(id)ticketForTransitScheduleAtStation:(NSUInteger)arg0 line:(NSUInteger)arg1 referenceTripID:(NSUInteger)arg2 includeAllDirectionNames:(BOOL)arg3 routingParameters:(id)arg4 traits:(id)arg5 ;
-(id)ticketForTransitTripDetailsAtStation:(NSUInteger)arg0 line:(NSUInteger)arg1 referenceTripID:(NSUInteger)arg2 includeAllDirectionNames:(BOOL)arg3 routingParameters:(id)arg4 traits:(id)arg5 ;
-(id)ticketForURLQuery:(id)arg0 identifier:(id)arg1 resultProviderId:(int)arg2 contentProvider:(id)arg3 maxResults:(unsigned int)arg4 traits:(id)arg5 ;
-(id)ticketForUpdatedTransitScheduleDetailsAtStation:(NSUInteger)arg0 line:(NSUInteger)arg1 referenceTripID:(NSUInteger)arg2 includeAllDirectionNames:(BOOL)arg3 routingParameters:(id)arg4 traits:(id)arg5 ;
-(id)ticketForWalletMerchantLookupRequest:(id)arg0 traits:(id)arg1 ;
-(void)_captureUserAction:(int)arg0 onTarget:(int)arg1 withAnalyticsMessageValues:(id)arg2 ;
-(void)_mapItemsForResponseData:(id)arg0 handler:(id)arg1 ;
-(void)capturePlaceCardUserAction:(int)arg0 onTarget:(int)arg1 eventValue:(id)arg2 mapItem:(id)arg3 timestamp:(CGFloat)arg4 placeCardType:(int)arg5 categoriesDisplayed:(id)arg6 categorySelected:(id)arg7 ;
-(void)capturePlaceCardUserAction:(int)arg0 onTarget:(int)arg1 eventValue:(id)arg2 mapItem:(id)arg3 timestamp:(CGFloat)arg4 resultIndex:(int)arg5 targetID:(NSUInteger)arg6 providerID:(id)arg7 animationID:(NSUInteger)arg8 actionURL:(id)arg9 photoID:(id)arg10 placeCardType:(int)arg11 localizedMapItemCategory:(id)arg12 availableActions:(id)arg13 unactionableUIElements:(id)arg14 ;
-(void)capturePlaceCardUserAction:(int)arg0 onTarget:(int)arg1 eventValue:(id)arg2 mapItem:(id)arg3 timestamp:(CGFloat)arg4 resultIndex:(int)arg5 targetID:(NSUInteger)arg6 providerID:(id)arg7 animationID:(NSUInteger)arg8 actionURL:(id)arg9 photoID:(id)arg10 placeCardType:(int)arg11 localizedMapItemCategory:(id)arg12 availableActions:(id)arg13 unactionableUIElements:(id)arg14 modules:(id)arg15 commingledPhotoProviderIDs:(id)arg16 ;
-(void)captureTransitPlaceCardUserAction:(int)arg0 onTarget:(int)arg1 eventValue:(id)arg2 mapItem:(id)arg3 timestamp:(CGFloat)arg4 resultIndex:(int)arg5 targetID:(NSUInteger)arg6 providerID:(id)arg7 animationID:(NSUInteger)arg8 transitCardCategory:(int)arg9 transitSystem:(id)arg10 transitDepartureSequence:(id)arg11 transitIncident:(id)arg12 ;
-(void)captureUserAction:(int)arg0 flyoverAnimationID:(NSUInteger)arg1 ;
-(void)captureUserAction:(int)arg0 onTarget:(int)arg1 eventValue:(id)arg2 ;
-(void)captureUserAction:(int)arg0 onTarget:(int)arg1 eventValue:(id)arg2 categoriesDisplayed:(id)arg3 categorySelected:(id)arg4 ;
-(void)captureUserAction:(int)arg0 onTarget:(int)arg1 eventValue:(id)arg2 mapItem:(id)arg3 timestamp:(CGFloat)arg4 resultIndex:(int)arg5 ;
-(void)captureUserAction:(int)arg0 onTarget:(int)arg1 eventValue:(id)arg2 mapItem:(id)arg3 timestamp:(CGFloat)arg4 resultIndex:(int)arg5 mapRegion:(id)arg6 zoomLevel:(CGFloat)arg7 mapType:(int)arg8 ;
-(void)captureUserAction:(int)arg0 onTarget:(int)arg1 eventValue:(id)arg2 mapRegion:(id)arg3 zoomLevel:(CGFloat)arg4 mapType:(int)arg5 ;
-(void)captureUserAction:(int)arg0 onTarget:(int)arg1 eventValue:(id)arg2 placeActionDetails:(id)arg3 ;
-(void)captureUserAction:(int)arg0 onTarget:(int)arg1 eventValue:(id)arg2 routeDetails:(id)arg3 ;
-(void)captureUserAction:(int)arg0 onTarget:(int)arg1 eventValue:(id)arg2 transitStep:(id)arg3 ;
-(void)captureUserAction:(int)arg0 onTarget:(int)arg1 forAdvisory:(id)arg2 ;
-(void)captureUserAction:(int)arg0 onTarget:(int)arg1 forAdvisoryItem:(id)arg2 ;
-(void)captureUserAction:(int)arg0 onTarget:(int)arg1 forAdvisoryItems:(id)arg2 ;
-(void)captureUserAction:(int)arg0 onTarget:(int)arg1 placeActionDetails:(id)arg2 mapItem:(id)arg3 resultIndex:(int)arg4 ;
-(void)captureUserAction:(int)arg0 onTarget:(int)arg1 queryString:(id)arg2 ;
-(void)siriAnalyticsDonation:(int)arg0 target:(int)arg1 resultIndex:(int)arg2 mapItem:(id)arg3 searchCategory:(id)arg4 searchQueryString:(id)arg5 ;


@end


#endif