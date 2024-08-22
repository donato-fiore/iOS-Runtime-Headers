// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOCLIENTCAPABILITIES_H
#define GEOCLIENTCAPABILITIES_H

@class PBCodable, PBDataReader, PBUnknownFields, NSString, NSMutableArray;
@protocol NSCopying;


#import "GEOAbAssignInfo.h"
#import "GEOAdvisoryClientCapabilities.h"
#import "GEOFormattedStringClientCapabilities.h"
#import "GEOLocalizationCapabilities.h"
#import "GEOLocalTime.h"
#import "GEOWalkingSupportedFeatures.h"

@interface GEOClientCapabilities : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    ? _supportedTransitFeatures;
    ? _supportsMultipointRoutings;
    GEOAbAssignInfo *_abAssignInfo;
    GEOAdvisoryClientCapabilities *_advisoryClientCapabilities;
    NSString *_appMajorVersion;
    NSString *_appMinorVersion;
    NSString *_deviceCountryCode;
    NSString *_deviceSku;
    NSMutableArray *_displayLanguages;
    NSString *_displayRegion;
    GEOFormattedStringClientCapabilities *_formattedStringClientCapabilities;
    NSString *_hardwareModel;
    GEOLocalizationCapabilities *_localizationCapabilities;
    NSString *_osVersion;
    GEOLocalTime *_requestTime;
    NSString *_userCurrentTimezone;
    GEOWalkingSupportedFeatures *_walkingSupportedFeatures;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _maxFormatterSupported;
    int _maxManeuverTypeSupported;
    int _maxRouteIncidentSupported;
    unsigned int _maxTrafficSpeedSupported;
    int _maxSupportedTransitFareVersion;
    unsigned int _maxZilchMessageVersionSupported;
    int _transitMarketSupport;
    BOOL _clusteredTransitRoutesSupported;
    BOOL _includeCrossLanguagePhonetics;
    BOOL _internalInstall;
    BOOL _internalTool;
    BOOL _isAdvancedMap;
    BOOL _isGlobeProjection;
    BOOL _replaceAccidentStringWithCrash;
    BOOL _routeOptionsSupported;
    BOOL _snapToClosestStopSupported;
    BOOL _supportsAdvancedMap;
    BOOL _supportsAreaEventsEnhancements;
    BOOL _supportsArrivalMapRegion;
    BOOL _supportsCongestionZones;
    BOOL _supportsDefaultToNewRouteFlag;
    BOOL _supportsElectricVehicleRoutes;
    BOOL _supportsGuidanceEventImportanceInfo;
    BOOL _supportsGuidanceEventPrivacyFilters;
    BOOL _supportsGuidanceEventsInlineShields;
    BOOL _supportsGuidanceEvents;
    BOOL _supportsJunctionView;
    BOOL _supportsLicensePlateRestrictions;
    BOOL _supportsLongShieldStrings;
    BOOL _supportsNaturalGuidance;
    BOOL _supportsRoadComplexities;
    BOOL _supportsSilentRouteUpdates;
    BOOL _supportsSpeedTrapAnnouncements;
    BOOL _supportsTrafficCameras;
    BOOL _supportsUserIncidentReports;
    BOOL _supportsWaypointRoutes;
    BOOL _willSendEvDirectionsFeedback;
    ? _flags;
}


@property (retain, nonatomic) GEOAbAssignInfo *abAssignInfo;
@property (retain, nonatomic) GEOAdvisoryClientCapabilities *advisoryClientCapabilities;
@property (retain, nonatomic) NSString *appMajorVersion;
@property (retain, nonatomic) NSString *appMinorVersion;
@property (nonatomic) BOOL clusteredTransitRoutesSupported;
@property (retain, nonatomic) NSString *deviceCountryCode;
@property (retain, nonatomic) NSString *deviceSku;
@property (retain, nonatomic) NSMutableArray *displayLanguages;
@property (retain, nonatomic) NSString *displayRegion;
@property (retain, nonatomic) GEOFormattedStringClientCapabilities *formattedStringClientCapabilities;
@property (retain, nonatomic) NSString *hardwareModel;
@property (readonly, nonatomic) BOOL hasAbAssignInfo;
@property (readonly, nonatomic) BOOL hasAdvisoryClientCapabilities;
@property (readonly, nonatomic) BOOL hasAppMajorVersion;
@property (readonly, nonatomic) BOOL hasAppMinorVersion;
@property (nonatomic) BOOL hasClusteredTransitRoutesSupported;
@property (readonly, nonatomic) BOOL hasDeviceCountryCode;
@property (readonly, nonatomic) BOOL hasDeviceSku;
@property (readonly, nonatomic) BOOL hasDisplayRegion;
@property (readonly, nonatomic) BOOL hasFormattedStringClientCapabilities;
@property (readonly, nonatomic) BOOL hasHardwareModel;
@property (nonatomic) BOOL hasIncludeCrossLanguagePhonetics;
@property (nonatomic) BOOL hasInternalInstall;
@property (nonatomic) BOOL hasInternalTool;
@property (nonatomic) BOOL hasIsAdvancedMap;
@property (nonatomic) BOOL hasIsGlobeProjection;
@property (readonly, nonatomic) BOOL hasLocalizationCapabilities;
@property (nonatomic) BOOL hasMaxFormatterSupported;
@property (nonatomic) BOOL hasMaxManeuverTypeSupported;
@property (nonatomic) BOOL hasMaxRouteIncidentSupported;
@property (nonatomic) BOOL hasMaxSupportedTransitFareVersion;
@property (nonatomic) BOOL hasMaxTrafficSpeedSupported;
@property (nonatomic) BOOL hasMaxZilchMessageVersionSupported;
@property (readonly, nonatomic) BOOL hasOsVersion;
@property (nonatomic) BOOL hasReplaceAccidentStringWithCrash;
@property (readonly, nonatomic) BOOL hasRequestTime;
@property (nonatomic) BOOL hasRouteOptionsSupported;
@property (nonatomic) BOOL hasSnapToClosestStopSupported;
@property (nonatomic) BOOL hasSupportsAdvancedMap;
@property (nonatomic) BOOL hasSupportsAreaEventsEnhancements;
@property (nonatomic) BOOL hasSupportsArrivalMapRegion;
@property (nonatomic) BOOL hasSupportsCongestionZones;
@property (nonatomic) BOOL hasSupportsDefaultToNewRouteFlag;
@property (nonatomic) BOOL hasSupportsElectricVehicleRoutes;
@property (nonatomic) BOOL hasSupportsGuidanceEventImportanceInfo;
@property (nonatomic) BOOL hasSupportsGuidanceEventPrivacyFilters;
@property (nonatomic) BOOL hasSupportsGuidanceEvents;
@property (nonatomic) BOOL hasSupportsGuidanceEventsInlineShields;
@property (nonatomic) BOOL hasSupportsJunctionView;
@property (nonatomic) BOOL hasSupportsLicensePlateRestrictions;
@property (nonatomic) BOOL hasSupportsLongShieldStrings;
@property (nonatomic) BOOL hasSupportsNaturalGuidance;
@property (nonatomic) BOOL hasSupportsRoadComplexities;
@property (nonatomic) BOOL hasSupportsSilentRouteUpdates;
@property (nonatomic) BOOL hasSupportsSpeedTrapAnnouncements;
@property (nonatomic) BOOL hasSupportsTrafficCameras;
@property (nonatomic) BOOL hasSupportsUserIncidentReports;
@property (nonatomic) BOOL hasSupportsWaypointRoutes;
@property (nonatomic) BOOL hasTransitMarketSupport;
@property (readonly, nonatomic) BOOL hasUserCurrentTimezone;
@property (readonly, nonatomic) BOOL hasWalkingSupportedFeatures;
@property (nonatomic) BOOL hasWillSendEvDirectionsFeedback;
@property (nonatomic) BOOL includeCrossLanguagePhonetics;
@property (nonatomic) BOOL internalInstall;
@property (nonatomic) BOOL internalTool;
@property (nonatomic) BOOL isAdvancedMap;
@property (nonatomic) BOOL isGlobeProjection;
@property (retain, nonatomic) GEOLocalizationCapabilities *localizationCapabilities;
@property (nonatomic) int maxFormatterSupported;
@property (nonatomic) int maxManeuverTypeSupported;
@property (nonatomic) int maxRouteIncidentSupported;
@property (nonatomic) int maxSupportedTransitFareVersion;
@property (nonatomic) unsigned int maxTrafficSpeedSupported;
@property (nonatomic) unsigned int maxZilchMessageVersionSupported;
@property (retain, nonatomic) NSString *osVersion;
@property (nonatomic) BOOL replaceAccidentStringWithCrash;
@property (retain, nonatomic) GEOLocalTime *requestTime;
@property (nonatomic) BOOL routeOptionsSupported;
@property (nonatomic) BOOL snapToClosestStopSupported;
@property (readonly, nonatomic) *int supportedTransitFeatures;
@property (readonly, nonatomic) NSUInteger supportedTransitFeaturesCount;
@property (nonatomic) BOOL supportsAdvancedMap;
@property (nonatomic) BOOL supportsAreaEventsEnhancements;
@property (nonatomic) BOOL supportsArrivalMapRegion;
@property (nonatomic) BOOL supportsCongestionZones;
@property (nonatomic) BOOL supportsDefaultToNewRouteFlag;
@property (nonatomic) BOOL supportsElectricVehicleRoutes;
@property (nonatomic) BOOL supportsGuidanceEventImportanceInfo;
@property (nonatomic) BOOL supportsGuidanceEventPrivacyFilters;
@property (nonatomic) BOOL supportsGuidanceEvents;
@property (nonatomic) BOOL supportsGuidanceEventsInlineShields;
@property (nonatomic) BOOL supportsJunctionView;
@property (nonatomic) BOOL supportsLicensePlateRestrictions;
@property (nonatomic) BOOL supportsLongShieldStrings;
@property (readonly, nonatomic) *int supportsMultipointRoutings;
@property (readonly, nonatomic) NSUInteger supportsMultipointRoutingsCount;
@property (nonatomic) BOOL supportsNaturalGuidance;
@property (nonatomic) BOOL supportsRoadComplexities;
@property (nonatomic) BOOL supportsSilentRouteUpdates;
@property (nonatomic) BOOL supportsSpeedTrapAnnouncements;
@property (nonatomic) BOOL supportsTrafficCameras;
@property (nonatomic) BOOL supportsUserIncidentReports;
@property (nonatomic) BOOL supportsWaypointRoutes;
@property (nonatomic) int transitMarketSupport;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;
@property (retain, nonatomic) NSString *userCurrentTimezone;
@property (retain, nonatomic) GEOWalkingSupportedFeatures *walkingSupportedFeatures;
@property (nonatomic) BOOL willSendEvDirectionsFeedback;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)displayLanguagesAtIndex:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)maxManeuverTypeSupportedAsString:(int)arg0 ;
-(id)maxSupportedTransitFareVersionAsString:(int)arg0 ;
-(id)supportedTransitFeaturesAsString:(int)arg0 ;
-(id)supportsMultipointRoutingsAsString:(int)arg0 ;
-(id)transitMarketSupportAsString:(int)arg0 ;
-(int)StringAsMaxManeuverTypeSupported:(id)arg0 ;
-(int)StringAsMaxSupportedTransitFareVersion:(id)arg0 ;
-(int)StringAsSupportedTransitFeatures:(id)arg0 ;
-(int)StringAsSupportsMultipointRoutings:(id)arg0 ;
-(int)StringAsTransitMarketSupport:(id)arg0 ;
-(int)supportedTransitFeatureAtIndex:(NSUInteger)arg0 ;
-(int)supportsMultipointRoutingAtIndex:(NSUInteger)arg0 ;
-(void)_updateWithAutomobileOptions:(id)arg0 ;
-(void)addDisplayLanguages:(id)arg0 ;
-(void)addSupportedTransitFeature:(int)arg0 ;
-(void)addSupportsMultipointRouting:(int)arg0 ;
-(void)clearDisplayLanguages;
-(void)clearSupportedTransitFeatures;
-(void)clearSupportsMultipointRoutings;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)updateWithDirectionsRequest:(id)arg0 ;
-(void)updateWithETARequest:(id)arg0 ;
-(void)updateWithETATrafficUpdateRequest:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif