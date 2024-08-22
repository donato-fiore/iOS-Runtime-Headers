// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOURLINFOSET_H
#define GEOURLINFOSET_H

@class PBCodable, PBDataReader, PBUnknownFields, NSMutableArray, NSArray, NSURL;
@protocol NSCopying;


#import "GEOURLInfo.h"

@interface GEOURLInfoSet : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOURLInfo *_abExperimentURL;
    GEOURLInfo *_addressCorrectionInitURL;
    GEOURLInfo *_addressCorrectionTaggedLocationURL;
    GEOURLInfo *_addressCorrectionUpdateURL;
    NSMutableArray *_alternateResourcesURLs;
    GEOURLInfo *_analyticsCohortSessionURL;
    GEOURLInfo *_analyticsLongSessionURL;
    GEOURLInfo *_analyticsSessionlessURL;
    GEOURLInfo *_analyticsShortSessionURL;
    GEOURLInfo *_announcementsURL;
    GEOURLInfo *_authProxyURL;
    GEOURLInfo *_authenticatedClientFeatureFlagURL;
    GEOURLInfo *_backgroundDispatcherURL;
    GEOURLInfo *_backgroundRevGeoURL;
    GEOURLInfo *_batchReverseGeocoderPlaceRequestURL;
    GEOURLInfo *_batchReverseGeocoderURL;
    GEOURLInfo *_batchTrafficProbeURL;
    GEOURLInfo *_bluePOIDispatcherURL;
    GEOURLInfo *_businessPortalBaseURL;
    GEOURLInfo *_directionsURL;
    GEOURLInfo *_dispatcherURL;
    GEOURLInfo *_enrichmentSubmissionURL;
    GEOURLInfo *_etaURL;
    GEOURLInfo *_feedbackLookupURL;
    GEOURLInfo *_feedbackSubmissionURL;
    GEOURLInfo *_junctionImageServiceURL;
    GEOURLInfo *_logMessageUsageURL;
    GEOURLInfo *_logMessageUsageV3URL;
    GEOURLInfo *_muninBaseURL;
    GEOURLInfo *_poiBusynessActivityCollectionURL;
    GEOURLInfo *_polyLocationShiftURL;
    GEOURLInfo *_pressureProbeDataURL;
    GEOURLInfo *_proactiveAppClipURL;
    GEOURLInfo *_proactiveRoutingURL;
    GEOURLInfo *_problemCategoriesURL;
    GEOURLInfo *_problemOptInURL;
    GEOURLInfo *_problemStatusURL;
    GEOURLInfo *_problemSubmissionURL;
    GEOURLInfo *_rapWebBundleURL;
    GEOURLInfo *_realtimeTrafficProbeURL;
    GEOURLInfo *_resourcesURL;
    GEOURLInfo *_reverseGeocoderVersionsURL;
    GEOURLInfo *_searchAttributionManifestURL;
    GEOURLInfo *_simpleETAURL;
    GEOURLInfo *_spatialLookupURL;
    GEOURLInfo *_tokenAuthenticationURL;
    GEOURLInfo *_ugcLogDiscardURL;
    GEOURLInfo *_webModuleBaseURL;
    GEOURLInfo *_wifiConnectionQualityProbeURL;
    GEOURLInfo *_wifiQualityTileURL;
    GEOURLInfo *_wifiQualityURL;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    unsigned int _dataSet;
    ? _flags;
}


@property (retain, nonatomic) GEOURLInfo *abExperimentURL;
@property (retain, nonatomic) GEOURLInfo *addressCorrectionInitURL;
@property (retain, nonatomic) GEOURLInfo *addressCorrectionTaggedLocationURL;
@property (retain, nonatomic) GEOURLInfo *addressCorrectionUpdateURL;
@property (readonly, nonatomic) NSArray *alternateResourcesNSURLs;
@property (retain, nonatomic) NSMutableArray *alternateResourcesURLs;
@property (retain, nonatomic) GEOURLInfo *analyticsCohortSessionURL;
@property (retain, nonatomic) GEOURLInfo *analyticsLongSessionURL;
@property (retain, nonatomic) GEOURLInfo *analyticsSessionlessURL;
@property (retain, nonatomic) GEOURLInfo *analyticsShortSessionURL;
@property (retain, nonatomic) GEOURLInfo *announcementsURL;
@property (retain, nonatomic) GEOURLInfo *authProxyURL;
@property (retain, nonatomic) GEOURLInfo *authenticatedClientFeatureFlagURL;
@property (retain, nonatomic) GEOURLInfo *backgroundDispatcherURL;
@property (retain, nonatomic) GEOURLInfo *backgroundRevGeoURL;
@property (retain, nonatomic) GEOURLInfo *batchReverseGeocoderPlaceRequestURL;
@property (retain, nonatomic) GEOURLInfo *batchReverseGeocoderURL;
@property (retain, nonatomic) GEOURLInfo *batchTrafficProbeURL;
@property (retain, nonatomic) GEOURLInfo *bluePOIDispatcherURL;
@property (retain, nonatomic) GEOURLInfo *businessPortalBaseURL;
@property (nonatomic) unsigned int dataSet;
@property (retain, nonatomic) GEOURLInfo *directionsURL;
@property (retain, nonatomic) GEOURLInfo *dispatcherURL;
@property (retain, nonatomic) GEOURLInfo *enrichmentSubmissionURL;
@property (retain, nonatomic) GEOURLInfo *etaURL;
@property (retain, nonatomic) GEOURLInfo *feedbackLookupURL;
@property (retain, nonatomic) GEOURLInfo *feedbackSubmissionURL;
@property (readonly, nonatomic) BOOL hasAbExperimentURL;
@property (readonly, nonatomic) BOOL hasAddressCorrectionInitURL;
@property (readonly, nonatomic) BOOL hasAddressCorrectionTaggedLocationURL;
@property (readonly, nonatomic) BOOL hasAddressCorrectionUpdateURL;
@property (readonly, nonatomic) BOOL hasAnalyticsCohortSessionURL;
@property (readonly, nonatomic) BOOL hasAnalyticsLongSessionURL;
@property (readonly, nonatomic) BOOL hasAnalyticsSessionlessURL;
@property (readonly, nonatomic) BOOL hasAnalyticsShortSessionURL;
@property (readonly, nonatomic) BOOL hasAnnouncementsURL;
@property (readonly, nonatomic) BOOL hasAuthProxyURL;
@property (readonly, nonatomic) BOOL hasAuthenticatedClientFeatureFlagURL;
@property (readonly, nonatomic) BOOL hasBackgroundDispatcherURL;
@property (readonly, nonatomic) BOOL hasBackgroundRevGeoURL;
@property (readonly, nonatomic) BOOL hasBatchReverseGeocoderPlaceRequestURL;
@property (readonly, nonatomic) BOOL hasBatchReverseGeocoderURL;
@property (readonly, nonatomic) BOOL hasBatchTrafficProbeURL;
@property (readonly, nonatomic) BOOL hasBluePOIDispatcherURL;
@property (readonly, nonatomic) BOOL hasBusinessPortalBaseURL;
@property (nonatomic) BOOL hasDataSet;
@property (readonly, nonatomic) BOOL hasDirectionsURL;
@property (readonly, nonatomic) BOOL hasDispatcherURL;
@property (readonly, nonatomic) BOOL hasEnrichmentSubmissionURL;
@property (readonly, nonatomic) BOOL hasEtaURL;
@property (readonly, nonatomic) BOOL hasFeedbackLookupURL;
@property (readonly, nonatomic) BOOL hasFeedbackSubmissionURL;
@property (readonly, nonatomic) BOOL hasJunctionImageServiceURL;
@property (readonly, nonatomic) BOOL hasLogMessageUsageURL;
@property (readonly, nonatomic) BOOL hasLogMessageUsageV3URL;
@property (readonly, nonatomic) BOOL hasMuninBaseURL;
@property (readonly, nonatomic) BOOL hasPoiBusynessActivityCollectionURL;
@property (readonly, nonatomic) BOOL hasPolyLocationShiftURL;
@property (readonly, nonatomic) BOOL hasPressureProbeDataURL;
@property (readonly, nonatomic) BOOL hasProactiveAppClipURL;
@property (readonly, nonatomic) BOOL hasProactiveRoutingURL;
@property (readonly, nonatomic) BOOL hasProblemCategoriesURL;
@property (readonly, nonatomic) BOOL hasProblemOptInURL;
@property (readonly, nonatomic) BOOL hasProblemStatusURL;
@property (readonly, nonatomic) BOOL hasProblemSubmissionURL;
@property (readonly, nonatomic) BOOL hasRapWebBundleURL;
@property (readonly, nonatomic) BOOL hasRealtimeTrafficProbeURL;
@property (readonly, nonatomic) BOOL hasResourcesURL;
@property (readonly, nonatomic) BOOL hasReverseGeocoderVersionsURL;
@property (readonly, nonatomic) BOOL hasSearchAttributionManifestURL;
@property (readonly, nonatomic) BOOL hasSimpleETAURL;
@property (readonly, nonatomic) BOOL hasSpatialLookupURL;
@property (readonly, nonatomic) BOOL hasTokenAuthenticationURL;
@property (readonly, nonatomic) BOOL hasUgcLogDiscardURL;
@property (readonly, nonatomic) BOOL hasWebModuleBaseURL;
@property (readonly, nonatomic) BOOL hasWifiConnectionQualityProbeURL;
@property (readonly, nonatomic) BOOL hasWifiQualityTileURL;
@property (readonly, nonatomic) BOOL hasWifiQualityURL;
@property (retain, nonatomic) GEOURLInfo *junctionImageServiceURL;
@property (retain, nonatomic) GEOURLInfo *logMessageUsageURL;
@property (retain, nonatomic) GEOURLInfo *logMessageUsageV3URL;
@property (retain, nonatomic) GEOURLInfo *muninBaseURL;
@property (retain, nonatomic) GEOURLInfo *poiBusynessActivityCollectionURL;
@property (retain, nonatomic) GEOURLInfo *polyLocationShiftURL;
@property (retain, nonatomic) GEOURLInfo *pressureProbeDataURL;
@property (retain, nonatomic) GEOURLInfo *proactiveAppClipURL;
@property (retain, nonatomic) GEOURLInfo *proactiveRoutingURL;
@property (retain, nonatomic) GEOURLInfo *problemCategoriesURL;
@property (retain, nonatomic) GEOURLInfo *problemOptInURL;
@property (retain, nonatomic) GEOURLInfo *problemStatusURL;
@property (retain, nonatomic) GEOURLInfo *problemSubmissionURL;
@property (retain, nonatomic) GEOURLInfo *rapWebBundleURL;
@property (retain, nonatomic) GEOURLInfo *realtimeTrafficProbeURL;
@property (readonly, nonatomic) NSURL *resourcesProxyURL;
@property (retain, nonatomic) GEOURLInfo *resourcesURL;
@property (retain, nonatomic) GEOURLInfo *reverseGeocoderVersionsURL;
@property (retain, nonatomic) GEOURLInfo *searchAttributionManifestURL;
@property (retain, nonatomic) GEOURLInfo *simpleETAURL;
@property (retain, nonatomic) GEOURLInfo *spatialLookupURL;
@property (retain, nonatomic) GEOURLInfo *tokenAuthenticationURL;
@property (retain, nonatomic) GEOURLInfo *ugcLogDiscardURL;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;
@property (retain, nonatomic) GEOURLInfo *webModuleBaseURL;
@property (retain, nonatomic) GEOURLInfo *wifiConnectionQualityProbeURL;
@property (retain, nonatomic) GEOURLInfo *wifiQualityTileURL;
@property (retain, nonatomic) GEOURLInfo *wifiQualityURL;


+(BOOL)isValid:(id)arg0 ;
+(Class)alternateResourcesURLType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)alternateResourcesURLAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(void)addAlternateResourcesURL:(id)arg0 ;
-(void)clearAlternateResourcesURLs;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif