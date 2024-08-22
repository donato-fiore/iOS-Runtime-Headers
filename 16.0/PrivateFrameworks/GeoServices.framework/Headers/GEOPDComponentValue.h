// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOPDCOMPONENTVALUE_H
#define GEOPDCOMPONENTVALUE_H

@class PBCodable, PBUnknownFields;
@protocol NSCopying;


#import "GEOPDAbout.h"
#import "GEOPDRoadAccessInfo.h"
#import "GEOPDActionData.h"
#import "GEOPDAddressObject.h"
#import "GEOPDAddress.h"
#import "GEOPDAmenities.h"
#import "GEOPDAnnotatedItemList.h"
#import "GEOPDAssociatedApp.h"
#import "GEOPDBounds.h"
#import "GEOPDBrowseCategories.h"
#import "GEOPDBusinessAssets.h"
#import "GEOPDBusinessClaim.h"
#import "GEOPDBusinessHours.h"
#import "GEOPDCaptionedPhoto.h"
#import "GEOPDCategorizedPhotos.h"
#import "GEOPDCollectionIds.h"
#import "GEOPDContainedPlace.h"
#import "GEOPDContainmentPlace.h"
#import "GEOPDEnhancedPlacement.h"
#import "GEOPDEnrichmentData.h"
#import "GEOPDEnrichmentInfo.h"
#import "GEOPDEntity.h"
#import "GEOPDETA.h"
#import "GEOPDExploreGuides.h"
#import "GEOPDExternalAction.h"
#import "GEOPDFactoid.h"
#import "GEOPDFlyover.h"
#import "GEOPDGroundViewLabel.h"
#import "GEOPDGuideGroup.h"
#import "GEOPDHours.h"
#import "GEOPDIcon.h"
#import "GEOPDISO3166Code.h"
#import "GEOPDLabelGeometry.h"
#import "GEOPDLinkedService.h"
#import "GEOPDLocationEvent.h"
#import "GEOPDMessageLink.h"
#import "GEOPDMiniBrowseCategories.h"
#import "GEOPDPhoto.h"
#import "GEOPDPlaceCollectionItem.h"
#import "GEOPDPlaceCollection.h"
#import "GEOPDPlaceInfo.h"
#import "GEOPDPlaceQuestionnaireResult.h"
#import "GEOPDPlacecardLayoutConfiguration.h"
#import "GEOPDPlacecardURL.h"
#import "GEOPDPOIClaim.h"
#import "GEOPDPoiEvent.h"
#import "GEOPDPriceDescription.h"
#import "GEOPDPrototypeContainer.h"
#import "GEOPDPublisher.h"
#import "GEOPDQuickLink.h"
#import "GEOPDRap.h"
#import "GEOPDRating.h"
#import "GEOPDRawAttribute.h"
#import "GEOPDRelatedPlace.h"
#import "GEOPDRestaurantReservationLink.h"
#import "GEOPDResultSnippet.h"
#import "GEOPDReview.h"
#import "GEOPDSimpleRestaurantMenuText.h"
#import "GEOPDSpatialLookupResult.h"
#import "GEOPDStorefrontFaces.h"
#import "GEOPDStorefrontPresentation.h"
#import "GEOPDStorefront.h"
#import "GEOStyleAttributes.h"
#import "GEOPDTemplatePlace.h"
#import "GEOPDTextBlock.h"
#import "GEOPDTip.h"
#import "GEOPDTransitAttribution.h"
#import "GEOPDTransitIncident.h"
#import "GEOPDTransitInfoSnippet.h"
#import "GEOPDTransitInfo.h"
#import "GEOPDTransitNearbySchedule.h"
#import "GEOPDTransitPaymentMethodInfo.h"
#import "GEOPDTransitSchedule.h"
#import "GEOPDTransitTripGeometry.h"
#import "GEOPDTransitTripStopTime.h"
#import "GEOPDTransitTripStop.h"
#import "GEOPBTransitVehiclePosition.h"
#import "GEOPDVenueInfo.h"
#import "GEOPDWifiFingerprint.h"

@interface GEOPDComponentValue : PBCodable <NSCopying>

 {
    PBUnknownFields *_unknownFields;
    GEOPDAbout *_about;
    GEOPDRoadAccessInfo *_accessInfo;
    GEOPDActionData *_actionData;
    GEOPDAddressObject *_addressObject;
    GEOPDAddress *_address;
    GEOPDAmenities *_amenities;
    GEOPDAnnotatedItemList *_annotatedItemList;
    GEOPDAssociatedApp *_associatedApp;
    GEOPDBounds *_bounds;
    GEOPDBrowseCategories *_browseCategories;
    GEOPDBusinessAssets *_businessAssets;
    GEOPDBusinessClaim *_businessClaim;
    GEOPDBusinessHours *_businessHours;
    GEOPDCaptionedPhoto *_captionedPhoto;
    GEOPDCategorizedPhotos *_categorizedPhotos;
    GEOPDCollectionIds *_collectionIds;
    GEOPDContainedPlace *_containedPlace;
    GEOPDContainmentPlace *_containmentPlace;
    GEOPDEnhancedPlacement *_enhancedPlacement;
    GEOPDEnrichmentData *_enrichmentData;
    GEOPDEnrichmentInfo *_enrichmentInfo;
    GEOPDEntity *_entity;
    GEOPDETA *_eta;
    GEOPDExploreGuides *_exploreGuides;
    GEOPDExternalAction *_externalAction;
    GEOPDFactoid *_factoid;
    GEOPDFlyover *_flyover;
    GEOPDGroundViewLabel *_groundViewLabel;
    GEOPDGuideGroup *_guideGroup;
    GEOPDHours *_hours;
    GEOPDIcon *_icon;
    GEOPDISO3166Code *_iso3166Code;
    GEOPDLabelGeometry *_labelGeometry;
    GEOPDLinkedService *_linkedService;
    GEOPDLocationEvent *_locationEvent;
    GEOPDMessageLink *_messageLink;
    GEOPDMiniBrowseCategories *_miniPlaceBrowseCategories;
    GEOPDPhoto *_photo;
    GEOPDBrowseCategories *_placeBrowseCategories;
    GEOPDPlaceCollectionItem *_placeCollectionItem;
    GEOPDPlaceCollection *_placeCollection;
    GEOPDPlaceInfo *_placeInfo;
    GEOPDPlaceQuestionnaireResult *_placeQuestionnaire;
    GEOPDPlacecardLayoutConfiguration *_placecardLayoutConfiguration;
    GEOPDPlacecardURL *_placecardUrl;
    GEOPDPOIClaim *_poiClaim;
    GEOPDPoiEvent *_poiEvent;
    GEOPDPriceDescription *_priceDescription;
    GEOPDPrototypeContainer *_prototypeContainer;
    GEOPDPublisher *_publisher;
    GEOPDQuickLink *_quickLink;
    GEOPDRap *_rap;
    GEOPDRating *_rating;
    GEOPDRawAttribute *_rawAttribute;
    GEOPDRelatedPlace *_relatedPlace;
    GEOPDRestaurantReservationLink *_restaurantReservationLink;
    GEOPDResultSnippet *_resultSnippet;
    GEOPDReview *_review;
    GEOPDSimpleRestaurantMenuText *_simpleRestaurantMenuText;
    GEOPDSpatialLookupResult *_spatialLookupResult;
    GEOPDStorefrontFaces *_storefrontFaces;
    GEOPDStorefrontPresentation *_storefrontPresentation;
    GEOPDStorefront *_storefront;
    GEOStyleAttributes *_styleAttributes;
    GEOPDTemplatePlace *_templatePlace;
    GEOPDTextBlock *_textBlock;
    GEOPDTip *_tip;
    GEOPDTransitAttribution *_transitAttribution;
    GEOPDTransitIncident *_transitIncident;
    GEOPDTransitInfoSnippet *_transitInfoSnippet;
    GEOPDTransitInfo *_transitInfo;
    GEOPDTransitNearbySchedule *_transitNearbySchedule;
    GEOPDTransitPaymentMethodInfo *_transitPaymentMethodInfo;
    GEOPDTransitSchedule *_transitSchedule;
    GEOPDTransitTripGeometry *_transitTripGeometry;
    GEOPDTransitTripStopTime *_transitTripStopTime;
    GEOPDTransitTripStop *_transitTripStop;
    GEOPBTransitVehiclePosition *_transitVehiclePosition;
    GEOPDAmenities *_vendorAmenities;
    GEOPDVenueInfo *_venueInfo;
    GEOPDWifiFingerprint *_wifiFingerprint;
}




-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)jsonRepresentation;
-(void)writeTo:(id)arg0 ;


@end


#endif