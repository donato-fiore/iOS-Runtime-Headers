// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOPDCOMPONENTFILTER_H
#define GEOPDCOMPONENTFILTER_H

@class PBCodable, PBDataReader, PBUnknownFields;
@protocol NSCopying;


#import "GEOPDAboutFilter.h"
#import "GEOPDRoadAccessInfoFilter.h"
#import "GEOPDActionDataFilter.h"
#import "GEOPDAddressFilter.h"
#import "GEOPDAddressObjectFilter.h"
#import "GEOPDAmenitiesFilter.h"
#import "GEOPDAnnotatedItemListFilter.h"
#import "GEOPDAssociatedAppFilter.h"
#import "GEOPDBoundsFilter.h"
#import "GEOPDBrowseCategoriesFilter.h"
#import "GEOPDBusinessClaimFilter.h"
#import "GEOPDBusinessHoursFilter.h"
#import "GEOPDCaptionedPhotoFilter.h"
#import "GEOPDCategorizedPhotosFilter.h"
#import "GEOPDCollectionIdsFilter.h"
#import "GEOPDContainedPlaceFilter.h"
#import "GEOPDContainmentPlaceFilter.h"
#import "GEOPDEnhancedPlacementFilter.h"
#import "GEOPDEnrichmentDataFilter.h"
#import "GEOPDEnrichmentInfoFilter.h"
#import "GEOPDEntityFilter.h"
#import "GEOPDETAFilter.h"
#import "GEOPDExploreGuidesFilter.h"
#import "GEOPDExternalActionFilter.h"
#import "GEOPDFactoidFilter.h"
#import "GEOPDFlyoverFilter.h"
#import "GEOPDGroundViewLabelFilter.h"
#import "GEOPDGuideGroupFilter.h"
#import "GEOPDHoursFilter.h"
#import "GEOPDIconFilter.h"
#import "GEOPDISO3166CodeFilter.h"
#import "GEOPDLabelGeometryFilter.h"
#import "GEOPDLinkedServiceFilter.h"
#import "GEOPDLocationEventFilter.h"
#import "GEOPDMessageLinkFilter.h"
#import "GEOPDPhotoFilter.h"
#import "GEOPDPlaceCollectionFilter.h"
#import "GEOPDPlaceCollectionItemFilter.h"
#import "GEOPDPlaceInfoFilter.h"
#import "GEOPDPlaceQuestionnaireFilter.h"
#import "GEOPDPlacecardLayoutConfigurationFilter.h"
#import "GEOPDPlacecardURLFilter.h"
#import "GEOPDPOIClaimFilter.h"
#import "GEOPDPoiEventFilter.h"
#import "GEOPDPriceDescriptionFilter.h"
#import "GEOPDPrototypeContainerFilter.h"
#import "GEOPDPublisherFilter.h"
#import "GEOPDQuickLinkFilter.h"
#import "GEOPDRapFilter.h"
#import "GEOPDRatingFilter.h"
#import "GEOPDRawAttributeFilter.h"
#import "GEOPDRelatedPlaceFilter.h"
#import "GEOPDRestaurantReservationLinkFilter.h"
#import "GEOPDResultSnippetFilter.h"
#import "GEOPDReviewFilter.h"
#import "GEOPDSimpleRestaurantMenuTextFilter.h"
#import "GEOPDSpatialLookupFilter.h"
#import "GEOPDStorefrontFacesFilter.h"
#import "GEOPDStorefrontFilter.h"
#import "GEOPDStorefrontPresentationFilter.h"
#import "GEOPDStyleAttributesFilter.h"
#import "GEOPDTemplatePlaceFilter.h"
#import "GEOPDTextBlockFilter.h"
#import "GEOPDTipFilter.h"
#import "GEOPDTransitAttributionFilter.h"
#import "GEOPDTransitIncidentFilter.h"
#import "GEOPDTransitInfoFilter.h"
#import "GEOPDTransitInfoSnippetFilter.h"
#import "GEOPDTransitPaymentMethodInfoFilter.h"
#import "GEOPDTransitScheduleFilter.h"
#import "GEOPDTransitTripGeometryFilter.h"
#import "GEOPDTransitTripStopFilter.h"
#import "GEOPDTransitTripStopTimeFilter.h"
#import "GEOPDVehiclePositionFilter.h"
#import "GEOPDVendorAmenitiesFilter.h"
#import "GEOPDVenueInfoFilter.h"
#import "GEOPDWalletCategoryInformationFilter.h"
#import "GEOPDWifiFingerprintFilter.h"

@interface GEOPDComponentFilter : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDAboutFilter *_aboutFilter;
    GEOPDRoadAccessInfoFilter *_accessInfoFilter;
    GEOPDActionDataFilter *_actionDataFilter;
    GEOPDAddressFilter *_addressFilter;
    GEOPDAddressObjectFilter *_addressObjectFilter;
    GEOPDAmenitiesFilter *_amenitiesFilter;
    GEOPDAnnotatedItemListFilter *_annotatedItemListFilter;
    GEOPDAssociatedAppFilter *_associatedAppFilter;
    GEOPDBoundsFilter *_boundsFilter;
    GEOPDBrowseCategoriesFilter *_browseCategoriesFilter;
    GEOPDBusinessClaimFilter *_businessClaimFilter;
    GEOPDBusinessHoursFilter *_businessHoursFilter;
    GEOPDCaptionedPhotoFilter *_captionedPhotoFilter;
    GEOPDCategorizedPhotosFilter *_categorizedPhotosFilter;
    GEOPDCollectionIdsFilter *_collectionIdsFilter;
    GEOPDContainedPlaceFilter *_containedPlaceFilter;
    GEOPDContainmentPlaceFilter *_containmentPlaceFilter;
    GEOPDEnhancedPlacementFilter *_enhancedPlacementFilter;
    GEOPDEnrichmentDataFilter *_enrichmentDataFilter;
    GEOPDEnrichmentInfoFilter *_enrichmentInfoFilter;
    GEOPDEntityFilter *_entityFilter;
    GEOPDETAFilter *_etaFilter;
    GEOPDExploreGuidesFilter *_exploreGuidesFilter;
    GEOPDExternalActionFilter *_externalActionFilter;
    GEOPDFactoidFilter *_factoidFilter;
    GEOPDFlyoverFilter *_flyoverFilter;
    GEOPDGroundViewLabelFilter *_groundViewLabelFilter;
    GEOPDGuideGroupFilter *_guideGroupFilter;
    GEOPDHoursFilter *_hoursFilter;
    GEOPDIconFilter *_iconFilter;
    GEOPDISO3166CodeFilter *_iso3166CodeFilter;
    GEOPDLabelGeometryFilter *_labelGeometryFilter;
    GEOPDLinkedServiceFilter *_linkedServiceFilter;
    GEOPDLocationEventFilter *_locationEventFilter;
    GEOPDMessageLinkFilter *_messageLinkFilter;
    GEOPDPhotoFilter *_photoFilter;
    GEOPDPlaceCollectionFilter *_placeCollectionFilter;
    GEOPDPlaceCollectionItemFilter *_placeCollectionItemFilter;
    GEOPDPlaceInfoFilter *_placeInfoFilter;
    GEOPDPlaceQuestionnaireFilter *_placeQuestionnaireFilter;
    GEOPDPlacecardLayoutConfigurationFilter *_placecardLayoutConfigurationFilter;
    GEOPDPlacecardURLFilter *_placecardUrlFilter;
    GEOPDPOIClaimFilter *_poiClaimFilter;
    GEOPDPoiEventFilter *_poiEventFilter;
    GEOPDPriceDescriptionFilter *_priceDescriptionFilter;
    GEOPDPrototypeContainerFilter *_protoTypeContainerFilter;
    GEOPDPublisherFilter *_publisherFilter;
    GEOPDQuickLinkFilter *_quickLinkFilter;
    GEOPDRapFilter *_rapFilter;
    GEOPDRatingFilter *_ratingFilter;
    GEOPDRawAttributeFilter *_rawAttributeFilter;
    GEOPDRelatedPlaceFilter *_relatedPlaceFilter;
    GEOPDRestaurantReservationLinkFilter *_restaurantReservationLinkFilter;
    GEOPDResultSnippetFilter *_resultSnippetFilter;
    GEOPDReviewFilter *_reviewFilter;
    GEOPDSimpleRestaurantMenuTextFilter *_simpleRestaurantMenuTextFilter;
    GEOPDSpatialLookupFilter *_spatialLookupFilter;
    GEOPDStorefrontFacesFilter *_storefrontFacesFilter;
    GEOPDStorefrontFilter *_storefrontFilter;
    GEOPDStorefrontPresentationFilter *_storefrontPresentationFilter;
    GEOPDStyleAttributesFilter *_styleAttributesFilter;
    GEOPDTemplatePlaceFilter *_templatePlaceFilter;
    GEOPDTextBlockFilter *_textBlockFilter;
    GEOPDTipFilter *_tipFilter;
    GEOPDTransitAttributionFilter *_transitAttributionFilter;
    GEOPDTransitIncidentFilter *_transitIncidentFilter;
    GEOPDTransitInfoFilter *_transitInfoFilter;
    GEOPDTransitInfoSnippetFilter *_transitInfoSnippetFilter;
    GEOPDTransitPaymentMethodInfoFilter *_transitPaymentMethodInfoFilter;
    GEOPDTransitScheduleFilter *_transitScheduleFilter;
    GEOPDTransitTripGeometryFilter *_transitTripGeometryFilter;
    GEOPDTransitTripStopFilter *_transitTripStopFilter;
    GEOPDTransitTripStopTimeFilter *_transitTripStopTimeFilter;
    GEOPDVehiclePositionFilter *_transitVehiclePositionFilter;
    GEOPDVendorAmenitiesFilter *_vendorAmenitiesFilter;
    GEOPDVenueInfoFilter *_venueInfoFilter;
    GEOPDWalletCategoryInformationFilter *_walletCategoryInformationFilter;
    GEOPDWifiFingerprintFilter *_wifiFingerprintFilter;
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
-(id)initAddressObjectFilterWithLibraryVersion:(id)arg0 ;
-(id)initAnnotatedItemListFilterWithTraits:(id)arg0 ;
-(id)initCaptionedPhotoFilterWithTraits:(id)arg0 ;
-(id)initEntityFilterWithSpokenNames;
-(id)initPhotoFilterWithTraits:(id)arg0 ;
-(id)initRestaurantReservationLinkFilterWithTraits:(id)arg0 ;
-(id)initResultSnippetFilterWithTraits:(id)arg0 ;
-(id)initReviewUserPhotoFilterWithTraits:(id)arg0 ;
-(id)initTipUserPhotoFilterWithTraits:(id)arg0 ;
-(id)initTransitScheduleFilterWithTraits:(id)arg0 ;
-(id)initTransitTripStopTimeFilterWithTraits:(id)arg0 ;
-(id)initWithData:(id)arg0 ;
-(id)jsonRepresentation;
-(void)writeTo:(id)arg0 ;


@end


#endif