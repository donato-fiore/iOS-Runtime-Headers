// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOBASEMAPITEM_H
#define GEOBASEMAPITEM_H

@class NSArray, NSDictionary, NSString, NSData, NSDate, NSURL, NSTimeZone;
@protocol GEOMapItem, GEOAnnotatedItemList, GEOEncyclopedicInfo, GEOTransitAttribution, GEOMapItemTransitInfo, GEOTransitVehiclePosition, GEOMapItemVenueInfo;

#import <Foundation/Foundation.h>

#import "GEOAssociatedApp.h"
#import "GEOMapItemPlaceAttribution.h"
#import "GEOPDBusinessClaim.h"
#import "GEOMapItemClientAttributes.h"
#import "GEOMapItemContainedPlace.h"
#import "GEOMapItemDetourInfo.h"
#import "GEOMapRegion.h"
#import "GEOEnclosingPlace.h"
#import "GEOEnhancedPlacement.h"
#import "GEOExploreGuides.h"
#import "GEORestaurantFeaturesLink.h"
#import "GEOPDFlyover.h"
#import "GEOAddress.h"
#import "GEOMapItemIdentifier.h"
#import "GEOLabelGeometry.h"
#import "GEOMessageLink.h"
#import "GEOMiniBrowseCategories.h"
#import "GEOMuninViewState.h"
#import "GEOAppleRating.h"
#import "GEOMapItemPhotosAttribution.h"
#import "GEOPlace.h"
#import "GEOPDPlace.h"
#import "GEOPlaceQuestionnaire.h"
#import "GEOPlaceResult.h"
#import "GEOPlacecardLayoutData.h"
#import "GEOPriceDescription.h"
#import "GEOMapItemReviewsAttribution.h"
#import "GEOStorefrontInfo.h"
#import "GEOStorefrontPresentationInfo.h"
#import "GEOFeatureStyleAttributes.h"
#import "GEOViewportFrame.h"
#import "GEOStyleAttributes.h"

@interface GEOBaseMapItem : NSObject <GEOMapItem>



@property (readonly, nonatomic, getter=_additionalPlaceInfos) NSArray *additionalPlaceInfos;
@property (readonly, nonatomic) NSDictionary *addressDictionary;
@property (readonly, nonatomic, getter=_addressGeocodeAccuracy) int addressGeocodeAccuracy;
@property (readonly, nonatomic, getter=_allPhotoAttributions) NSArray *allPhotoAttributions;
@property (readonly, nonatomic, getter=_alternateSearchableNames) NSArray *alternateSearchableNames;
@property (readonly, nonatomic, getter=_amenities) NSArray *amenities;
@property (readonly, nonatomic, getter=_annotatedItemList) NSObject<GEOAnnotatedItemList> *annotatedItemList;
@property (readonly, nonatomic, getter=_appleRatings) NSArray *appleRatings;
@property (readonly, nonatomic, getter=_areaHighlightId) NSUInteger areaHighlightId;
@property (readonly, nonatomic, getter=_areaInMeters) CGFloat areaInMeters;
@property (readonly, nonatomic) NSArray *areasOfInterest;
@property (readonly, nonatomic, getter=_associatedApp) GEOAssociatedApp *associatedApp;
@property (readonly, nonatomic, getter=_attribution) GEOMapItemPlaceAttribution *attribution;
@property (readonly, nonatomic, getter=_bestAvailableCountryCode) NSString *bestAvailableCountryCode;
@property (readonly, nonatomic, getter=_brandMUID) NSUInteger brandMUID;
@property (readonly, nonatomic, getter=_browseCategories) NSArray *browseCategories;
@property (readonly, nonatomic, getter=_businessClaim) GEOPDBusinessClaim *businessClaim;
@property (readonly, nonatomic, getter=_businessHours) NSArray *businessHours;
@property (readonly, nonatomic, getter=_businessURL) NSString *businessURL;
@property (readonly, nonatomic, getter=_canDownloadMorePhotos) BOOL canDownloadMorePhotos;
@property (readonly, nonatomic, getter=_captionedPhotoAlbums) NSArray *captionedPhotoAlbums;
@property (readonly, nonatomic) ? centerCoordinate;
@property (readonly, nonatomic, getter=_childItems) NSArray *childItems;
@property (readonly, nonatomic, getter=_clientAttributes) GEOMapItemClientAttributes *clientAttributes;
@property (readonly, nonatomic) int contactAddressType;
@property (readonly, nonatomic) BOOL contactIsMe;
@property (readonly, nonatomic) NSString *contactName;
@property (readonly, nonatomic) NSString *contactSpokenName;
@property (readonly, nonatomic, getter=_containedPlace) GEOMapItemContainedPlace *containedPlace;
@property (readonly, nonatomic) ? coordinate;
@property (readonly, nonatomic, getter=_customIconID) NSUInteger customIconID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) GEOMapItemDetourInfo *detourInfo;
@property (readonly, nonatomic, getter=_disambiguationName) NSString *disambiguationName;
@property (readonly, nonatomic) GEOMapRegion *displayMapRegion;
@property (readonly, nonatomic) GEOMapRegion *displayMapRegionOrNil;
@property (readonly, nonatomic) float displayMaxZoom;
@property (readonly, nonatomic) float displayMinZoom;
@property (readonly, nonatomic, getter=isDisputed) BOOL disputed;
@property (readonly, nonatomic, getter=_enableRAPLightweightFeedback) BOOL enableRAPLightweightFeedback;
@property (readonly, nonatomic, getter=_enclosingPlace) GEOEnclosingPlace *enclosingPlace;
@property (readonly, nonatomic) NSData *encodedData;
@property (readonly, nonatomic, getter=_encyclopedicInfo) NSObject<GEOEncyclopedicInfo> *encyclopedicInfo;
@property (readonly, nonatomic, getter=_enhancedPlacement) GEOEnhancedPlacement *enhancedPlacement;
@property (readonly, nonatomic) NSDate *eventDate;
@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic, getter=_exploreGuides) GEOExploreGuides *exploreGuides;
@property (readonly, nonatomic) NSData *externalTransitStationCode;
@property (readonly, nonatomic, getter=_featureLink) GEORestaurantFeaturesLink *featureLink;
@property (readonly, nonatomic, getter=_flyover) GEOPDFlyover *flyover;
@property (readonly, nonatomic, getter=_flyoverAnnouncementMessage) NSString *flyoverAnnouncementMessage;
@property (readonly, nonatomic) GEOAddress *geoAddress;
@property (readonly, nonatomic) GEOMapRegion *geoFenceMapRegion;
@property (readonly, nonatomic) GEOMapRegion *geoFenceMapRegionOrNil;
@property (readonly, nonatomic, getter=_groundViewLocationId) NSUInteger groundViewLocationId;
@property (readonly, nonatomic, getter=_hasAnyAmenities) BOOL hasAnyAmenities;
@property (readonly, nonatomic, getter=_hasAreaHighlightId) BOOL hasAreaHighlightId;
@property (readonly, nonatomic, getter=_hasAreaInMeters) BOOL hasAreaInMeters;
@property (readonly, nonatomic, getter=_hasBrandMUID) BOOL hasBrandMUID;
@property (readonly, nonatomic, getter=_hasBusinessClaim) BOOL hasBusinessClaim;
@property (readonly, nonatomic, getter=_hasBusinessHours) BOOL hasBusinessHours;
@property (readonly, nonatomic, getter=_hasCaptionedPhotoAlbum) BOOL hasCaptionedPhotoAlbum;
@property (readonly, nonatomic, getter=_hasCurrentOperatingHours) BOOL hasCurrentOperatingHours;
@property (readonly, nonatomic) BOOL hasDisplayMaxZoom;
@property (readonly, nonatomic) BOOL hasDisplayMinZoom;
@property (readonly, nonatomic, getter=_hasEnclosingPlace) BOOL hasEnclosingPlace;
@property (readonly, nonatomic, getter=_hasEncyclopedicInfo) BOOL hasEncyclopedicInfo;
@property (readonly, nonatomic) BOOL hasExpiredComponents;
@property (readonly, nonatomic, getter=_hasFeatureLink) BOOL hasFeatureLink;
@property (readonly, nonatomic, getter=_hasFlyover) BOOL hasFlyover;
@property (readonly, nonatomic, getter=_hasGroundViewLocationId) BOOL hasGroundViewLocationId;
@property (readonly, nonatomic, getter=_hasLinkedServices) BOOL hasLinkedServices;
@property (readonly, nonatomic, getter=_hasMUID) BOOL hasMUID;
@property (readonly, nonatomic, getter=_hasOperatingHours) BOOL hasOperatingHours;
@property (readonly, nonatomic, getter=_hasPlaceCollectionPullQuotes) BOOL hasPlaceCollectionPullQuotes;
@property (readonly, nonatomic, getter=_hasPlaceDescription) BOOL hasPlaceDescription;
@property (readonly, nonatomic, getter=_hasPlaceQuestionnaire) BOOL hasPlaceQuestionnaire;
@property (readonly, nonatomic, getter=_hasPriceRange) BOOL hasPriceRange;
@property (readonly, nonatomic, getter=_hasResolvablePartialInformation) BOOL hasResolvablePartialInformation;
@property (readonly, nonatomic, getter=_hasResultProviderID) BOOL hasResultProviderID;
@property (readonly, nonatomic, getter=_hasTelephone) BOOL hasTelephone;
@property (readonly, nonatomic, getter=_hasTransit) BOOL hasTransit;
@property (readonly, nonatomic, getter=_hasUserRatingScore) BOOL hasUserRatingScore;
@property (readonly, nonatomic) BOOL hasVenueCapacity;
@property (readonly, nonatomic, getter=_hasVenueFeatureType) BOOL hasVenueFeatureType;
@property (readonly, nonatomic, getter=_hasWifiFingerprintConfidence) BOOL hasWifiFingerprintConfidence;
@property (readonly, nonatomic, getter=_hasWifiFingerprintLabelStatusCode) BOOL hasWifiFingerprintLabelStatusCode;
@property (readonly, nonatomic, getter=_hasWifiFingerprintLabelType) BOOL hasWifiFingerprintLabelType;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=_identifier) GEOMapItemIdentifier *identifier;
@property (readonly, nonatomic, getter=_identifierHistory) NSArray *identifierHistory;
@property (readonly, nonatomic, getter=_isInLinkedPlaceRelationship) BOOL inLinkedPlaceRelationship;
@property (readonly, nonatomic) BOOL isEventAllDay;
@property (readonly, nonatomic, getter=_isStandaloneBrand) BOOL isStandAloneBrand;
@property (readonly, nonatomic, getter=_isTransitDisplayFeature) BOOL isTransitDisplayFeature;
@property (readonly, nonatomic, getter=_iso3166CountryCode) NSString *iso3166CountryCode;
@property (readonly, nonatomic, getter=_iso3166SubdivisionCode) NSString *iso3166SubdivisionCode;
@property (readonly, nonatomic, getter=_labelGeometry) GEOLabelGeometry *labelGeometry;
@property (readonly, nonatomic, getter=_linkedServices) NSArray *linkedServices;
@property (readonly, nonatomic, getter=_mapsCategoryId) NSString *mapsCategoryId;
@property (readonly, nonatomic, getter=_maxScoreForPriceRange) unsigned int maxScoreForPriceRange;
@property (readonly, nonatomic, getter=_messageLink) GEOMessageLink *messageLink;
@property (readonly, nonatomic, getter=_miniBrowseCategories) GEOMiniBrowseCategories *miniBrowseCategories;
@property (readonly, nonatomic, getter=_muid) NSUInteger muid;
@property (readonly, nonatomic, getter=_muninViewState) GEOMuninViewState *muninViewState;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic, getter=_needsAttribution) BOOL needsAttribution;
@property (readonly, nonatomic, getter=_normalizedUserRatingScore) float normalizedUserRatingScore;
@property (readonly, nonatomic, getter=_openingHoursOptions) NSUInteger openingHoursOptions;
@property (readonly, nonatomic, getter=_optsOutOfTelephoneAds) BOOL optsOutOfTelephoneAds;
@property (readonly, nonatomic, getter=_overallAppleRating) GEOAppleRating *overallRating;
@property (readonly, nonatomic, getter=_parsecSectionType) int parsecSectionType;
@property (readonly, nonatomic, getter=_photos) NSArray *photos;
@property (readonly, nonatomic, getter=_photosAttribution) GEOMapItemPhotosAttribution *photosAttribution;
@property (readonly, nonatomic, getter=_place) GEOPlace *place;
@property (readonly, nonatomic, getter=_placeCollectionPullQuotes) NSArray *placeCollectionPullQuotes;
@property (readonly, nonatomic, getter=_placeCollections) NSArray *placeCollections;
@property (readonly, nonatomic, getter=_placeCollectionsIds) NSArray *placeCollectionsIds;
@property (readonly, nonatomic, getter=_placeData) GEOPDPlace *placeData;
@property (readonly, nonatomic, getter=_placeDataAsData) NSData *placeDataAsData;
@property (readonly, nonatomic, getter=_placeDescription) NSString *placeDescription;
@property (readonly, nonatomic, getter=_placeDisplayStyle) int placeDisplayStyle;
@property (readonly, nonatomic, getter=_placeDisplayType) int placeDisplayType;
@property (readonly, nonatomic, getter=_placeQuestionnaire) GEOPlaceQuestionnaire *placeQuestionnaire;
@property (readonly, nonatomic, getter=_placeResult) GEOPlaceResult *placeResult;
@property (readonly, nonatomic, getter=_placeType) int placeType;
@property (readonly, nonatomic, getter=_placecardLayoutData) GEOPlacecardLayoutData *placecardLayoutData;
@property (readonly, nonatomic, getter=_poiCategory) NSString *poiCategory;
@property (readonly, nonatomic, getter=_poiPinpointURLString) NSString *poiPinpointURLString;
@property (readonly, nonatomic, getter=_poiSurveyURLString) NSString *poiSurveyURLString;
@property (readonly, nonatomic, getter=_priceDescription) GEOPriceDescription *priceDescription;
@property (readonly, nonatomic, getter=_priceRange) unsigned int priceRange;
@property (readonly, copy, nonatomic, getter=_providerURL) NSURL *providerURL;
@property (readonly, nonatomic, getter=_quickLinks) NSArray *quickLinks;
@property (readonly, nonatomic) int referenceFrame;
@property (readonly, nonatomic, getter=_relatedPlaceLists) NSArray *relatedPlaceLists;
@property (readonly, nonatomic, getter=_responseStatusIsIncomplete) BOOL responseStatusIncomplete;
@property (readonly, nonatomic, getter=_resultProviderID) int resultProviderID;
@property (readonly, nonatomic, getter=_resultSnippetDistanceDisplayThreshold) unsigned int resultSnippetDistanceDisplayThreshold;
@property (readonly, nonatomic, getter=_resultSnippetLocationString) NSString *resultSnippetLocationString;
@property (readonly, nonatomic, getter=_reviews) NSArray *reviews;
@property (readonly, nonatomic, getter=_reviewsAttribution) GEOMapItemReviewsAttribution *reviewsAttribution;
@property (readonly, nonatomic, getter=_roadAccessPoints) NSArray *roadAccessPoints;
@property (readonly, nonatomic, getter=_sampleSizeForUserRatingScore) unsigned int sampleSizeForUserRatingScore;
@property (readonly, nonatomic) NSString *secondaryName;
@property (readonly, nonatomic, getter=_secondaryQuickLinks) NSArray *secondaryQuickLinks;
@property (readonly, nonatomic) NSString *secondarySpokenName;
@property (readonly, nonatomic, getter=_showSuggestAnEditButton) BOOL showSuggestAnEditButton;
@property (readonly, nonatomic) NSArray *spatialMappedCategories;
@property (readonly, nonatomic) NSArray *spatialMappedPlaceCategories;
@property (readonly, nonatomic, getter=_storefrontInfo) GEOStorefrontInfo *storefrontInfo;
@property (readonly, nonatomic, getter=_storefrontPresentationInfo) GEOStorefrontPresentationInfo *storefrontPresentationInfo;
@property (readonly, nonatomic, getter=_styleAttributes) GEOFeatureStyleAttributes *styleAttributes;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=_supportsAppleRatings) BOOL supportsAppleRatings;
@property (readonly, nonatomic, getter=_telephone) NSString *telephone;
@property (readonly, nonatomic) NSTimeZone *timezone;
@property (readonly, nonatomic, getter=_tips) NSArray *tips;
@property (readonly, nonatomic, getter=_totalPhotoCount) NSUInteger totalPhotoCount;
@property (readonly, nonatomic, getter=_transitAttribution) NSObject<GEOTransitAttribution> *transitAttribution;
@property (readonly, nonatomic, getter=_transitInfo) NSObject<GEOMapItemTransitInfo> *transitInfo;
@property (readonly, nonatomic, getter=_transitVehiclePosition) NSObject<GEOTransitVehiclePosition> *transitVehiclePosition;
@property (readonly, nonatomic, getter=isValid) BOOL valid;
@property (readonly, copy, nonatomic, getter=_vendorID) NSString *vendorID;
@property (readonly, nonatomic) NSInteger venueCapacity;
@property (readonly, nonatomic, getter=_venueFeatureType) int venueFeatureType;
@property (readonly, nonatomic, getter=_venueInfo) NSObject<GEOMapItemVenueInfo> *venueInfo;
@property (readonly, nonatomic, getter=_viewportFrame) GEOViewportFrame *viewportFrame;
@property (readonly, nonatomic, getter=_walletCategoryIdentifier) NSString *walletCategoryIdentifier;
@property (readonly, nonatomic, getter=_walletCategoryLocalizedString) NSString *walletCategoryLocalizedString;
@property (readonly, nonatomic, getter=_walletCategoryLocalizedStringLocale) NSString *walletCategoryLocalizedStringLocale;
@property (readonly, nonatomic, getter=_walletCategoryStyling) GEOStyleAttributes *walletCategoryStyling;
@property (readonly, nonatomic, getter=_walletMapsCategoryIdentifier) NSString *walletMapsCategoryIdentifier;
@property (readonly, nonatomic, getter=_walletPlaceLocalizedString) NSString *walletPlaceLocalizedString;
@property (readonly, nonatomic, getter=_walletPlaceLocalizedStringLocale) NSString *walletPlaceLocalizedStringLocale;
@property (readonly, nonatomic, getter=_walletPlaceStyling) GEOStyleAttributes *walletPlaceStyling;
@property (readonly, copy, nonatomic, getter=_webURL) NSURL *webURL;
@property (readonly, nonatomic, getter=_wifiFingerprintConfidence) unsigned int wifiFingerprintConfidence;
@property (readonly, nonatomic, getter=_wifiFingerprintLabelStatusCode) int wifiFingerprintLabelStatusCode;
@property (readonly, nonatomic, getter=_wifiFingerprintLabelType) int wifiFingerprintLabelType;


-(BOOL)_hasLocalizedCategoryNamesForType:(unsigned int)arg0 ;
-(BOOL)_hasTravelTimeForTransportType:(int)arg0 ;
-(BOOL)isEqualToMapItem:(id)arg0 ;
-(id)_arrivalMapRegionForTransportType:(int)arg0 ;
-(id)_asPlaceInfo;
-(id)_bestAvatarBrandIconURLForSize:(struct CGSize )arg0 allowSmaller:(BOOL)arg1 ;
-(id)_bestHeroBrandIconURLForSize:(struct CGSize )arg0 allowSmaller:(BOOL)arg1 ;
-(id)_bestNavbarBrandIconURLForSize:(struct CGSize )arg0 allowSmaller:(BOOL)arg1 ;
-(id)_firstRelatedPlaceListForType:(int)arg0 ;
-(id)_localizedCategoryNamesForType:(unsigned int)arg0 ;
-(id)_mapItemByStrippingOptionalData;
-(id)_relatedPlaceListForComponentIdentifier:(int)arg0 ;
-(id)_spokenAddressForLocale:(id)arg0 ;
-(id)_urlForPhotoWithUID:(id)arg0 ;
-(id)_urlForReview:(id)arg0 ;
-(id)_urlForWritingAReview;
-(id)addressObject;
-(id)shortAddress;
-(id)spokenNameForLocale:(id)arg0 ;
-(id)weatherDisplayName;
-(int)_recommendedTransportType;
-(unsigned int)_travelDistanceForTransportType:(int)arg0 ;
-(unsigned int)_travelTimeForTransportType:(int)arg0 ;
-(void)iterateGroundViewsWithBlock:(id)arg0 ;
-(void)loadTransitAttributionDetails:(id)arg0 ;


@end


#endif