// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKMAPITEM_H
#define MKMAPITEM_H

@class NSDate, GEOMapItemStorageUserValues, NSString, NSNumberFormatter, NSDictionary, geo_isolater, NSArray, GEOPDBusinessClaim, GEOMapItemDetourInfo, GEOMapRegion, GEOEnhancedPlacement, GEOExploreGuides, NSData, GEOPDFlyover, GEOAddress, GEOMapItemStorage, GEOLabelGeometry, GEOBusinessHours, GEOMiniBrowseCategories, GEOMuninViewState, UIColor, GEOPlace, GEOModuleLayoutEntry, NSNumber, NSURL, GEOFeatureStyleAttributes, NSTimeZone, GEOViewportFrame;
@protocol NSSecureCoding, NSItemProviderReading, NSItemProviderWriting, GEOURLSerializable, GEOMapItem, GEOMapItemTransitInfo, GEOTransitAttribution, NSObject, GEOAnnotatedItemList, GEOEncyclopedicInfo, GEOMapItemPrivate, MKTransitInfoPreload, GEOMapItemVenueInfo;

#import <Foundation/Foundation.h>

#import "MKMapItemIdentifier.h"
#import "_MKMapItemPlaceAttribution.h"
#import "_MKMapItemAttribution.h"
#import "MKMapItemMetadata.h"
#import "_MKMapItemPhotosAttribution.h"
#import "MKPlacemark.h"
#import "_MKPlaceReservationInfo.h"
#import "_MKMapItemReviewsAttribution.h"

@interface MKMapItem : NSObject <NSSecureCoding, NSItemProviderReading, NSItemProviderWriting, GEOURLSerializable>

 {
    id<GEOMapItem> *_geoMapItem;
    MKMapItemIdentifier *_identifier;
    BOOL _isTransitInfoUpdated;
    NSDate *_transitInfoUpdatedDate;
    id<GEOMapItemTransitInfo> *_updatedTransitInfo;
    id<GEOMapItemTransitInfo> *_defaultTransitInfo;
    id<GEOTransitAttribution> *_updatedTransitAttribution;
    GEOMapItemStorageUserValues *_userValues;
    id<NSObject> *_didResolveAttributionToken;
    BOOL _hasLoadedAttribution;
    NSString *_shortAddress;
    NSString *_firstLocalizedCategoryName;
    NSNumberFormatter *_numberFormatterForAdamId;
    NSString *_localizedSampleSizeForUserRatingScoreString;
    NSDictionary *_cachedHoursBuilder;
    geo_isolater *_isolation;
}


@property (readonly, nonatomic, getter=_acceptsApplePay) BOOL acceptsApplePay;
@property (readonly, nonatomic, getter=_allPhotoAttributions) NSArray *allPhotoAttributions; // ivar: _allPhotoAttributions
@property (readonly, nonatomic, getter=_alternativeAppAdamIds) NSArray *alternativeAppAdamIds;
@property (readonly, nonatomic, getter=_amenities) NSArray *amenities;
@property (readonly, nonatomic, getter=_annotatedItemList) NSObject<GEOAnnotatedItemList> *annotatedItemList;
@property (readonly, nonatomic, getter=_attribution) _MKMapItemPlaceAttribution *attribution; // ivar: _attribution
@property (readonly, nonatomic, getter=_brandMUID) NSUInteger brand;
@property (readonly, nonatomic, getter=_browseCategories) NSArray *browseCategories;
@property (readonly, nonatomic, getter=_businessClaim) GEOPDBusinessClaim *businessClaim;
@property (readonly, nonatomic, getter=_businessHours) NSArray *businessHours;
@property (readonly, nonatomic, getter=_chargerNumberString) NSString *chargerNumberString;
@property (readonly, nonatomic, getter=_placeCollectionIds) NSArray *collectionIds;
@property (readonly, nonatomic, getter=_coordinate) CLLocationCoordinate2D coordinate;
@property (readonly, nonatomic, getter=_customIconID) NSUInteger customIconID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=_detourInfo) GEOMapItemDetourInfo *detourInfo;
@property (readonly, nonatomic, getter=_displayMapRegion) GEOMapRegion *displayMapRegion;
@property (readonly, nonatomic, getter=_displayMaxZoom) float displayMaxZoom;
@property (readonly, nonatomic, getter=_displayMinZoom) float displayMinZoom;
@property (readonly, nonatomic, getter=_encyclopedicInfo) NSObject<GEOEncyclopedicInfo> *encyclopedicInfo;
@property (readonly, nonatomic, getter=_encyclopedicInfoAttribution) _MKMapItemAttribution *encyclopedicInfoAttribution; // ivar: _encyclopedicInfoAttribution
@property (readonly, nonatomic, getter=_enhancedPlacement) GEOEnhancedPlacement *enhancedPlacement;
@property (readonly, nonatomic, getter=_exploreGuides) GEOExploreGuides *exploreGuides;
@property (readonly, nonatomic, getter=_externalTransitStationCode) NSData *externalTransitStationCode;
@property (readonly, nonatomic, getter=_firstLocalizedCategoryName) NSString *firstLocalizedCategoryName;
@property (readonly, nonatomic, getter=_flyover) GEOPDFlyover *flyover;
@property (readonly, nonatomic, getter=_flyoverAnnouncementMessage) NSString *flyoverAnnouncementMessage;
@property (readonly, nonatomic) NSString *formattedNumberOfReviews;
@property (readonly, nonatomic) NSString *formattedNumberOfReviewsIncludingProvider;
@property (readonly, nonatomic, getter=_geoAddress) GEOAddress *geoAddress;
@property (readonly, nonatomic, getter=_geoFenceMapRegion) GEOMapRegion *geoFenceMapRegion;
@property (readonly, nonatomic, getter=_geoMapItem) NSObject<GEOMapItemPrivate> *geoMapItem;
@property (readonly, nonatomic, getter=_geoMapItemStorageForDragAndDrop) GEOMapItemStorage *geoMapItemStorageForDragAndDrop;
@property (readonly, nonatomic, getter=_geoMapItemStorageForPersistence) GEOMapItemStorage *geoMapItemStorageForPersistence;
@property (readonly, nonatomic, getter=_handle) NSData *handle;
@property (readonly, nonatomic, getter=_hasAcceptsApplePayAmenity) BOOL hasAcceptsApplePayAmenity;
@property (readonly, nonatomic, getter=_hasAnyAmenities) BOOL hasAnyAmenities;
@property (readonly, nonatomic, getter=_hasBrandMUID) BOOL hasBrandMUID;
@property (readonly, nonatomic, getter=_hasBusinessClaim) BOOL hasBusinessClaim;
@property (readonly, nonatomic, getter=_hasBusinessHours) BOOL hasBusinessHours;
@property (readonly, nonatomic, getter=_hasChargerNumberString) BOOL hasChargerNumberString;
@property (readonly, nonatomic, getter=_hasCorrectedHomeWorkAddress) BOOL hasCorrectedHomeWorkAddress;
@property (readonly, nonatomic, getter=_hasCorrectedHomeWorkCoordinate) BOOL hasCorrectedHomeWorkCoordinate;
@property (readonly, nonatomic, getter=_hasDisplayMaxZoom) BOOL hasDisplayMaxZoom;
@property (readonly, nonatomic, getter=_hasDisplayMinZoom) BOOL hasDisplayMinZoom;
@property (readonly, nonatomic, getter=_hasEncyclopedicInfo) BOOL hasEncyclopedicInfo;
@property (readonly, nonatomic, getter=_hasFlyover) BOOL hasFlyover;
@property (readonly, nonatomic, getter=_hasLinkedServices) BOOL hasLinkedServices;
@property (readonly, nonatomic, getter=_hasLocalizedOperatingHours) BOOL hasLocalizedOperatingHours;
@property (readonly, nonatomic, getter=_hasMUID) BOOL hasMUID;
@property (readonly, nonatomic, getter=_hasMuninStorefront) BOOL hasMuninStorefront;
@property (readonly, nonatomic, getter=_hasMuninViewState) BOOL hasMuninViewState;
@property (readonly, nonatomic, getter=_hasOperatingHours) BOOL hasOperatingHours;
@property (readonly, nonatomic, getter=_hasPriceDescription) BOOL hasPriceDescription;
@property (readonly, nonatomic, getter=_hasPriceRange) BOOL hasPriceRange;
@property (readonly, nonatomic, getter=_hasResolvablePartialInformation) BOOL hasResolvablePartialInformation;
@property (readonly, nonatomic, getter=_hasResultProviderID) BOOL hasResultProviderID;
@property (readonly, nonatomic, getter=_hasTransit) BOOL hasTransit;
@property (readonly, nonatomic, getter=_hasTransitDisplayName) BOOL hasTransitDisplayName;
@property (readonly, nonatomic, getter=_hasTransitLabels) BOOL hasTransitLabels;
@property (readonly, nonatomic, getter=_hasUserRatingScore) BOOL hasUserRatingScore;
@property (readonly, nonatomic, getter=_hasVenueFeatureType) BOOL hasVenueFeatureType;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=_identifier) MKMapItemIdentifier *identifier;
@property (nonatomic) BOOL isCurrentLocation; // ivar: _isCurrentLocation
@property (readonly, getter=_isEmptyContactMapItem) BOOL isEmptyContactMapItem;
@property (readonly, nonatomic, getter=_isMapItemTypeAddress) BOOL isMapItemTypeAddress;
@property (readonly, nonatomic, getter=_isMapItemTypeBrand) BOOL isMapItemTypeBrand;
@property (readonly, nonatomic, getter=_isMapItemTypeBusiness) BOOL isMapItemTypeBusiness;
@property (readonly, nonatomic, getter=_isMapItemTypeSettlement) BOOL isMapItemTypeSettlement;
@property (nonatomic, getter=_isMapItemTypeTransit) BOOL isMapItemTypeTransit; // ivar: _isMapItemTypeTransit
@property (readonly, nonatomic, getter=_isMapItemTypeUnknown) BOOL isMapItemTypeUnknown;
@property (readonly, nonatomic, getter=_isMessageIDVerified) BOOL isMessageIDVerified;
@property (readonly, nonatomic) BOOL isPlaceHolder; // ivar: _isPlaceHolder
@property (readonly, nonatomic, getter=_isStandAloneBrand) BOOL isStandAloneBrand;
@property (readonly, nonatomic, getter=_labelGeometry) GEOLabelGeometry *labelGeometry;
@property (readonly, nonatomic, getter=_linkedServices) NSArray *linkedServices;
@property (readonly, nonatomic, getter=_localizedResponseTime) NSString *localizedResponseTime;
@property (readonly, nonatomic, getter=_localizedSampleSizeForUserRatingScoreString) NSString *localizedSampleSizeForUserRatingScoreString;
@property (readonly, nonatomic, getter=_messageBusinessHours) GEOBusinessHours *messageBusinessHours;
@property (readonly, nonatomic, getter=_messageID) NSString *messageID;
@property (readonly, nonatomic, getter=_messageURLString) NSString *messageURLString;
@property (readonly, nonatomic) MKMapItemMetadata *metadata; // ivar: _metadata
@property (readonly, nonatomic, getter=_miniBrowseCategories) GEOMiniBrowseCategories *miniBrowseCategories;
@property (readonly, nonatomic, getter=_muid) NSUInteger muid;
@property (readonly, nonatomic, getter=_muninViewState) GEOMuninViewState *muninViewState;
@property (copy, nonatomic) NSString *name;
@property (readonly, nonatomic, getter=_navBackgroundbrandColor) UIColor *navBackgroundbrandColor;
@property (readonly, nonatomic, getter=_navTintBrandColor) UIColor *navTintBrandColor;
@property (readonly, nonatomic, getter=_needsAttribution) BOOL needsAttribution;
@property (readonly, nonatomic, getter=_normalizedUserRatingScore) float normalizedUserRatingScore;
@property (readonly, nonatomic, getter=_openingHoursOptions) NSUInteger openingHoursOptions;
@property (readonly, nonatomic, getter=_parsecSectionType) int parsecSectionType;
@property (copy, nonatomic) NSString *phoneNumber;
@property (readonly, nonatomic, getter=_phoneNumberOptsOutOfAds) BOOL phoneNumberOptsOutOfAds;
@property (readonly, nonatomic, getter=_photosAttribution) _MKMapItemPhotosAttribution *photosAttribution; // ivar: _photosAttribution
@property (readonly, nonatomic) GEOPlace *place; // ivar: _place
@property (readonly, nonatomic, getter=_placeCollections) NSArray *placeCollections;
@property (readonly, nonatomic, getter=_placeDataAsData) NSData *placeDataAsData;
@property (readonly, nonatomic, getter=_placeDisplayStyle) int placeDisplayStyle;
@property (readonly, nonatomic, getter=_placecardLayout) GEOModuleLayoutEntry *placecardLayout;
@property (readonly, nonatomic) MKPlacemark *placemark;
@property (readonly, nonatomic, getter=_poiPinpointURLString) NSString *poiPinpointURLString;
@property (readonly, nonatomic, getter=_poiSurveyURLString) NSString *poiSurveyURLString;
@property (copy, nonatomic) NSString *pointOfInterestCategory; // ivar: _pointOfInterestCategory
@property (readonly, nonatomic, getter=_preferedAppAdamID) NSNumber *preferedAppAdamID;
@property (readonly, nonatomic, getter=_preloadedTransitInfo) NSObject<MKTransitInfoPreload> *preloadedTransitInfo; // ivar: _preloadedTransitInfo
@property (readonly, nonatomic, getter=_priceDescription) NSString *priceDescription;
@property (readonly, nonatomic, getter=_priceRangeString) NSString *priceRangeString;
@property (readonly, copy, nonatomic, getter=_providerURL) NSURL *providerURL;
@property (readonly, nonatomic, getter=_quickLinks) NSArray *quickLinks;
@property (readonly, nonatomic, getter=_relatedPlaceLists) NSArray *relatedPlaceLists;
@property (retain, nonatomic) _MKPlaceReservationInfo *reservationInfo; // ivar: _reservationInfo
@property (readonly, nonatomic, getter=_responseStatusIsIncomplete) BOOL responseStatusIncomplete;
@property (readonly, nonatomic, getter=_resultProviderID) int resultProviderID;
@property (readonly, nonatomic, getter=_reviews) NSArray *reviews;
@property (readonly, nonatomic, getter=_reviewsAttribution) _MKMapItemReviewsAttribution *reviewsAttribution; // ivar: _reviewsAttribution
@property (readonly, nonatomic, getter=_reviewsDisplayName) NSString *reviewsDisplayName;
@property (readonly, nonatomic) NSString *reviewsProviderDisplayName;
@property (readonly, nonatomic, getter=_sampleSizeForUserRatingScore) unsigned int sampleSizeForUserRatingScore;
@property (readonly, nonatomic, getter=_secondaryName) NSString *secondaryName;
@property (readonly, nonatomic, getter=_secondaryQuickLinks) NSArray *secondaryQuickLinks;
@property (readonly, nonatomic, getter=_secondarySpokenName) NSString *secondarySpokenName;
@property (readonly, nonatomic, getter=_shortAddress) NSString *shortAddress;
@property (readonly, nonatomic, getter=_styleAttributes) GEOFeatureStyleAttributes *styleAttributes;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSTimeZone *timeZone;
@property (readonly, nonatomic, getter=_tips) NSArray *tips;
@property (readonly, nonatomic, getter=_transitAttribution) NSObject<GEOTransitAttribution> *transitAttribution;
@property (readonly, nonatomic, getter=_transitDisplayName) NSString *transitDisplayName;
@property (readonly, nonatomic, getter=_transitInfo) NSObject<GEOMapItemTransitInfo> *transitInfo;
@property (readonly, nonatomic, getter=_transitInfoUpdatedDate) NSDate *transitInfoUpdatedDate;
@property (retain, nonatomic) NSURL *url;
@property (readonly, nonatomic) GEOMapItemStorageUserValues *userValues;
@property (readonly, copy, nonatomic, getter=_vendorID) NSString *vendorID;
@property (readonly, nonatomic, getter=_venueFeatureType) NSInteger venueFeatureType;
@property (readonly, nonatomic, getter=_venueInfo) NSObject<GEOMapItemVenueInfo> *venueInfo;
@property (readonly, nonatomic, getter=_viewportFrame) GEOViewportFrame *viewportFrame;
@property (readonly, copy, nonatomic, getter=_webURL) NSURL *webURL;
@property (readonly, copy, nonatomic) NSArray *writableTypeIdentifiersForItemProvider;
@property (readonly, nonatomic) NSString *yelpID;


+(BOOL)openMapsWithItems:(id)arg0 launchOptions:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(BOOL)valueIsValid:(id)arg0 forKey:(id)arg1 ;
+(id)_deserializeResourceOptionsFromURL:(id)arg0 error:(*id)arg1 ;
+(id)_itemWithContact:(id)arg0 geoMapItem:(id)arg1 ;
+(id)_itemWithGeoMapItem:(id)arg0 ;
+(id)_launchOptionsFromResourceOptionsDictionary:(id)arg0 ;
+(id)_launchOptionsWithOptions:(id)arg0 ;
+(id)_localizedNextOpeningDayOftheWeekFormatter;
+(id)_localizedNextOpeningHoursFormatter;
+(id)_mapItemBackedByURL:(id)arg0 ;
+(id)_mapItemFromVCardRepresentation:(id)arg0 error:(*id)arg1 ;
+(id)_mapItemWithWithLocation:(id)arg0 addressDictionary:(id)arg1 name:(id)arg2 businessURL:(id)arg3 phoneNumber:(id)arg4 sessionID:(id)arg5 muid:(NSUInteger)arg6 attributionID:(id)arg7 sampleSizeForUserRatingScore:(unsigned int)arg8 normalizedUserRatingScore:(float)arg9 ;
+(id)_sharedSessionURLForPunchoutURL:(id)arg0 ;
+(id)_sharedSessionUserInfoForPunchoutUserInfo:(id)arg0 ;
+(id)_sourceAppIdFromLaunchURL:(id)arg0 ;
+(id)_sourceAppIdFromLaunchUserInfo:(id)arg0 ;
+(id)_urlForLocation:(id)arg0 address:(id)arg1 label:(id)arg2 options:(id)arg3 ;
+(id)_urlForMapItemHandles:(id)arg0 options:(id)arg1 ;
+(id)contactsAddressDictionaryFromGeoAddressDictionary:(id)arg0 ;
+(id)contactsAddressKeysForGeoAddressKeys;
+(id)launchOptionsFromURL:(id)arg0 ;
+(id)mapItemForCurrentLocation;
+(id)mapItemWithDictionary:(id)arg0 ;
+(id)mapItemWithSerializedPlaceData:(id)arg0 ;
+(id)mapItemWithSerializedPlaceData:(id)arg0 serializedDetourInfo:(id)arg1 currentLocation:(BOOL)arg2 ;
+(id)mapItemsFromURL:(id)arg0 options:(*id)arg1 ;
+(id)objectWithItemProviderData:(id)arg0 typeIdentifier:(id)arg1 error:(*id)arg2 ;
+(id)plistCompatibleDictionaryFromStandardOptions:(id)arg0 ;
+(id)readableTypeIdentifiersForItemProvider;
+(id)sanitizeArray:(id)arg0 forKey:(id)arg1 ;
+(id)sanitizeDictionary:(id)arg0 ;
+(id)sanitizeObject:(id)arg0 forKey:(id)arg1 ;
+(id)standardOptionsFromPlistCompatibleDictionary:(id)arg0 ;
+(id)ticketForMapsDataString:(id)arg0 name:(id)arg1 ;
+(id)urlForMapItem:(id)arg0 options:(id)arg1 ;
+(id)urlForMapItems:(id)arg0 options:(id)arg1 ;
+(void)_fillOutRequest:(id)arg0 withMapsDataString:(id)arg1 ;
+(void)_mapItemFromHandle:(id)arg0 completionHandler:(id)arg1 ;
+(void)_mapItemsFromHandleURL:(id)arg0 completionHandler:(id)arg1 ;
+(void)_mapItemsWithSerializedPlaceDataResponse:(id)arg0 handler:(id)arg1 ;
+(void)openMapsWithItems:(id)arg0 launchOptions:(id)arg1 completionHandler:(id)arg2 ;
+(void)openMapsWithItems:(id)arg0 launchOptions:(id)arg1 fromScene:(id)arg2 completionHandler:(id)arg3 ;
-(BOOL)_browseCategory_canDisplayBrowseCategoriesForPlace;
-(BOOL)_browseCategory_canDisplayBrowseCategoriesForVenue;
-(BOOL)_browseCategory_isVenueItem;
-(BOOL)_canGetDirections;
-(BOOL)_hasLocalizedCategoryNamesForType:(unsigned int)arg0 ;
-(BOOL)_hasRestaurantExtensionInfo;
-(BOOL)_isEquivalentURLRepresentationTo:(id)arg0 ;
-(BOOL)_mapkit_canAtLeastOneAttributionShowAddPhotosLocally;
-(BOOL)_mapkit_canAtLeastOneAttributionShowPhotosLocally;
-(BOOL)_mapkit_hasFlatListOfPhotos;
-(BOOL)_mapkit_hasMultiplePhotoVendors;
-(BOOL)_mapkit_hasSinglePhotoVendor;
-(BOOL)_mapkit_supportsFullScreenExperience;
-(BOOL)_restaurantLink_hasFeatureType:(NSUInteger)arg0 ;
-(BOOL)hasAmenityType:(int)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)openInMapsWithLaunchOptions:(id)arg0 ;
-(BOOL)valueForAmenityType:(int)arg0 ;
-(NSUInteger)_mapkit_numberOfPhotosAvailableForFlatList;
-(NSUInteger)_restaurantExtensionModeForFirstProvider;
-(id)_activityURL;
-(id)_activityURLWithMuninViewState:(id)arg0 ;
-(id)_addressFormattedAsCity;
-(id)_addressFormattedAsLocation;
-(id)_addressFormattedAsMultilineAddress;
-(id)_addressFormattedAsName;
-(id)_addressFormattedAsShortenedAddress;
-(id)_addressFormattedAsSinglelineAddress;
-(id)_addressFormattedAsStreetOnly;
-(id)_addressFormattedAsTitlesForMapRect:(struct ? )arg0 ;
-(id)_addressFormattedAsWeatherDisplayName;
-(id)_addressFormattedAsWeatherLocationName;
-(id)_addressOrNil:(id)arg0 ;
-(id)_attributionFor:(id)arg0 sourceStringFormat:(id)arg1 moreSourceStringFormat:(id)arg2 imageTintColor:(id)arg3 ;
-(id)_attributionWithDisplayName:(id)arg0 attributionFormat:(id)arg1 logo:(id)arg2 isSnippetLogo:(BOOL)arg3 ;
-(id)_bestBrandIconURLForSize:(struct CGSize )arg0 allowSmaller:(BOOL)arg1 ;
-(id)_bestNavbarBrandIconURLForSize:(struct CGSize )arg0 allowSmaller:(BOOL)arg1 ;
-(id)_cnPostalAddress;
-(id)_firstRelatedPlaceListForType:(int)arg0 ;
-(id)_formatterForAdamId;
-(id)_fullAddressWithMultiline:(BOOL)arg0 ;
-(id)_getBusiness;
-(id)_htmlRepresentation;
-(id)_initWithLabelMarker:(id)arg0 ;
-(id)_isolatedPlace;
-(id)_localizedCategoryNamesForType:(unsigned int)arg0 ;
-(id)_localizedNextOpeningStringShort:(BOOL)arg0 ;
-(id)_mapkit_preferredFirstPhotoVendor;
-(id)_mapkit_resolvedFlatPhotoList;
-(id)_mapsDataString;
-(id)_postalAddressFromMeCardUsingAddressIdentifier:(id)arg0 ;
-(id)_relatedPlaceListForComponentIdentifier:(int)arg0 ;
-(id)_restaurantLink_firstProviderDisplayName;
-(id)_restaurantLink_firstProviderIdentifier;
-(id)_restaurantLink_firstProviderPlaceIdentifier;
-(id)_restaurantLink_firstVendorID;
-(id)_restaurantLink_overridenBundleIDsForVendorIDs;
-(id)_reviewForIdentifier:(id)arg0 ;
-(id)_vCardRepresentation;
-(id)_weatherDisplayName;
-(id)_weatherLocationName;
-(id)defaultHoursBuilderForSearchResultCell;
-(id)dictionaryRepresentation;
-(id)formattedNumberOfReviewsIncludingProvider:(BOOL)arg0 formatter:(id)arg1 ;
-(id)hoursBuilderForSearchResultCellForOptions:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithAddressDictionary:(id)arg0 ;
-(id)initWithCLLocation:(id)arg0 ;
-(id)initWithCLLocation:(id)arg0 placeType:(int)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContact:(id)arg0 ;
-(id)initWithGeoMapItem:(id)arg0 isPlaceHolderPlace:(BOOL)arg1 ;
-(id)initWithGeoMapItemAsCurrentLocation:(id)arg0 ;
-(id)initWithPlace:(id)arg0 ;
-(id)initWithPlace:(id)arg0 isPlaceHolderPlace:(BOOL)arg1 ;
-(id)initWithPlacemark:(id)arg0 ;
-(id)initWithUrlRepresentation:(id)arg0 ;
-(id)loadDataWithTypeIdentifier:(id)arg0 forItemProviderCompletionHandler:(id)arg1 ;
-(id)sharingURL;
-(id)thumbnailWithSize:(struct CGSize )arg0 annotationView:(id)arg1 ;
-(id)venueLabelWithContext:(NSUInteger)arg0 ;
-(void)_getFirstAvailableAppClipLinkFromQuickLinks:(id)arg0 completion:(id)arg1 ;
-(void)_getFirstAvailableAppClipLinkWithCompletion:(id)arg0 ;
-(void)_getFirstAvailableSecondaryAppClipLinkWithCompletion:(id)arg0 ;
-(void)_getHasAvailableAppClipWithCompletion:(id)arg0 ;
-(void)_getHasAvailableSecondaryAppClipWithCompletion:(id)arg0 ;
-(void)_launchActivityForBrandItem;
-(void)_markTransitInfoUpdated;
-(void)_refreshAttribution;
-(void)_updateTransitInfoWithMapItem:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)openInMapsWithLaunchOptions:(id)arg0 completionHandler:(id)arg1 ;
-(void)openInMapsWithLaunchOptions:(id)arg0 fromScene:(id)arg1 completionHandler:(id)arg2 ;
-(void)preloadTransitInfoWithCompletion:(id)arg0 ;


@end


#endif