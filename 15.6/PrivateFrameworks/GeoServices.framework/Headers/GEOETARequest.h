// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOETAREQUEST_H
#define GEOETAREQUEST_H

@class PBRequest, PBDataReader, PBUnknownFields, NSMutableArray, NSData, NSString;
@protocol NSCopying;


#import "GEOPDABClientDatasetMetadata.h"
#import "GEOAdditionalEnabledMarkets.h"
#import "GEOAutomobileOptions.h"
#import "GEOClientCapabilities.h"
#import "GEOCommonOptions.h"
#import "GEOCyclingOptions.h"
#import "GEOLocation.h"
#import "GEOWaypointTyped.h"
#import "GEOOriginalWaypointRoute.h"
#import "GEOWaypoint.h"
#import "GEOTFTrafficSnapshot.h"
#import "GEOTransitOptions.h"
#import "GEOWalkingOptions.h"

@interface GEOETARequest : PBRequest <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOTimepoint _timepoint;
    GEOSessionID _sessionID;
    GEOPDABClientDatasetMetadata *_abClientMetadata;
    GEOAdditionalEnabledMarkets *_additionalEnabledMarkets;
    GEOAutomobileOptions *_automobileOptions;
    GEOClientCapabilities *_clientCapabilities;
    GEOCommonOptions *_commonOptions;
    GEOCyclingOptions *_cyclingOptions;
    NSMutableArray *_destinationWaypointTypeds;
    NSMutableArray *_destinations;
    NSMutableArray *_deviceHistoricalLocations;
    GEOLocation *_lastKnownRoadLocation;
    GEOWaypointTyped *_originWaypointTyped;
    NSData *_originalRouteID;
    NSMutableArray *_originalRouteZilchPoints;
    GEOOriginalWaypointRoute *_originalWaypointRoute;
    GEOWaypoint *_origin;
    NSString *_phoneticLocaleIdentifier;
    NSString *_requestingAppId;
    NSMutableArray *_serviceTags;
    CGFloat _sessionRelativeTimestamp;
    NSData *_sessionState;
    NSMutableArray *_trafficApiResponses;
    NSMutableArray *_trafficSnapshotIds;
    GEOTFTrafficSnapshot *_trafficSnapshot;
    GEOTransitOptions *_transitOptions;
    GEOWalkingOptions *_walkingOptions;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _transportType;
    unsigned int _walkingLimitMeters;
    BOOL _allowPartialResults;
    BOOL _includeDistance;
    BOOL _includeHistoricTravelTime;
    BOOL _includeEtaRouteIncidents;
    BOOL _includeRouteTrafficDetail;
    BOOL _includeShortTrafficSummary;
    BOOL _isFromAPI;
    BOOL _needServerLatency;
    BOOL _useLiveTrafficAsFallback;
    ? _flags;
}


@property (retain, nonatomic) GEOPDABClientDatasetMetadata *abClientMetadata;
@property (retain, nonatomic) GEOAdditionalEnabledMarkets *additionalEnabledMarkets;
@property (nonatomic) BOOL allowPartialResults;
@property (retain, nonatomic) GEOAutomobileOptions *automobileOptions;
@property (retain, nonatomic) GEOClientCapabilities *clientCapabilities;
@property (retain, nonatomic) GEOCommonOptions *commonOptions;
@property (retain, nonatomic) GEOCyclingOptions *cyclingOptions;
@property (retain, nonatomic) NSMutableArray *destinationWaypointTypeds;
@property (retain, nonatomic) NSMutableArray *destinations;
@property (retain, nonatomic) NSMutableArray *deviceHistoricalLocations;
@property (readonly, nonatomic) BOOL hasAbClientMetadata;
@property (readonly, nonatomic) BOOL hasAdditionalEnabledMarkets;
@property (nonatomic) BOOL hasAllowPartialResults;
@property (readonly, nonatomic) BOOL hasAutomobileOptions;
@property (readonly, nonatomic) BOOL hasClientCapabilities;
@property (readonly, nonatomic) BOOL hasCommonOptions;
@property (readonly, nonatomic) BOOL hasCyclingOptions;
@property (nonatomic) BOOL hasIncludeDistance;
@property (nonatomic) BOOL hasIncludeEtaRouteIncidents;
@property (nonatomic) BOOL hasIncludeHistoricTravelTime;
@property (nonatomic) BOOL hasIncludeRouteTrafficDetail;
@property (nonatomic) BOOL hasIncludeShortTrafficSummary;
@property (nonatomic) BOOL hasIsFromAPI;
@property (readonly, nonatomic) BOOL hasLastKnownRoadLocation;
@property (nonatomic) BOOL hasNeedServerLatency;
@property (readonly, nonatomic) BOOL hasOrigin;
@property (readonly, nonatomic) BOOL hasOriginWaypointTyped;
@property (readonly, nonatomic) BOOL hasOriginalRouteID;
@property (readonly, nonatomic) BOOL hasOriginalWaypointRoute;
@property (readonly, nonatomic) BOOL hasPhoneticLocaleIdentifier;
@property (readonly, nonatomic) BOOL hasRequestingAppId;
@property (nonatomic) BOOL hasSessionID;
@property (nonatomic) BOOL hasSessionRelativeTimestamp;
@property (readonly, nonatomic) BOOL hasSessionState;
@property (nonatomic) BOOL hasTimepoint;
@property (readonly, nonatomic) BOOL hasTrafficSnapshot;
@property (readonly, nonatomic) BOOL hasTransitOptions;
@property (nonatomic) BOOL hasTransportType;
@property (nonatomic) BOOL hasUseLiveTrafficAsFallback;
@property (nonatomic) BOOL hasWalkingLimitMeters;
@property (readonly, nonatomic) BOOL hasWalkingOptions;
@property (nonatomic) BOOL includeDistance;
@property (nonatomic) BOOL includeEtaRouteIncidents;
@property (nonatomic) BOOL includeHistoricTravelTime;
@property (nonatomic) BOOL includeRouteTrafficDetail;
@property (nonatomic) BOOL includeShortTrafficSummary;
@property (nonatomic) BOOL isFromAPI;
@property (retain, nonatomic) GEOLocation *lastKnownRoadLocation;
@property (nonatomic) BOOL needServerLatency;
@property (retain, nonatomic) GEOWaypoint *origin;
@property (retain, nonatomic) GEOWaypointTyped *originWaypointTyped;
@property (retain, nonatomic) NSData *originalRouteID;
@property (retain, nonatomic) NSMutableArray *originalRouteZilchPoints;
@property (retain, nonatomic) GEOOriginalWaypointRoute *originalWaypointRoute;
@property (retain, nonatomic) NSString *phoneticLocaleIdentifier;
@property (retain, nonatomic) NSString *requestingAppId;
@property (retain, nonatomic) NSMutableArray *serviceTags;
@property (nonatomic) GEOSessionID sessionID;
@property (nonatomic) CGFloat sessionRelativeTimestamp;
@property (retain, nonatomic) NSData *sessionState;
@property (nonatomic) GEOTimepoint timepoint;
@property (retain, nonatomic) NSMutableArray *trafficApiResponses;
@property (retain, nonatomic) GEOTFTrafficSnapshot *trafficSnapshot;
@property (retain, nonatomic) NSMutableArray *trafficSnapshotIds;
@property (retain, nonatomic) GEOTransitOptions *transitOptions;
@property (nonatomic) int transportType;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;
@property (nonatomic) BOOL useLiveTrafficAsFallback;
@property (nonatomic) unsigned int walkingLimitMeters;
@property (retain, nonatomic) GEOWalkingOptions *walkingOptions;


+(BOOL)isValid:(id)arg0 ;
+(Class)destinationType;
+(Class)destinationWaypointTypedType;
+(Class)deviceHistoricalLocationType;
+(Class)serviceTagType;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(Class)responseClass;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)destinationAtIndex:(NSUInteger)arg0 ;
-(id)destinationWaypointTypedAtIndex:(NSUInteger)arg0 ;
-(id)deviceHistoricalLocationAtIndex:(NSUInteger)arg0 ;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)initWithQuickETARequest:(id)arg0 ;
-(id)jsonRepresentation;
-(id)originalRouteZilchPointsAtIndex:(NSUInteger)arg0 ;
-(id)serviceTagAtIndex:(NSUInteger)arg0 ;
-(id)trafficApiResponsesAtIndex:(NSUInteger)arg0 ;
-(id)trafficSnapshotIdsAtIndex:(NSUInteger)arg0 ;
-(id)transportTypeAsString:(int)arg0 ;
-(int)StringAsTransportType:(id)arg0 ;
-(unsigned int)requestTypeCode;
-(void)addDestination:(id)arg0 ;
-(void)addDestinationWaypointTyped:(id)arg0 ;
-(void)addDeviceHistoricalLocation:(id)arg0 ;
-(void)addOriginalRouteZilchPoints:(id)arg0 ;
-(void)addServiceTag:(id)arg0 ;
-(void)addTrafficApiResponses:(id)arg0 ;
-(void)addTrafficSnapshotIds:(id)arg0 ;
-(void)clearDestinationWaypointTypeds;
-(void)clearDestinations;
-(void)clearDeviceHistoricalLocations;
-(void)clearOriginalRouteZilchPoints;
-(void)clearSensitiveFields:(NSUInteger)arg0 ;
-(void)clearServiceTags;
-(void)clearTrafficApiResponses;
-(void)clearTrafficSnapshotIds;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif