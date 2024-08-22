// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEODIRECTIONSREQUEST_H
#define GEODIRECTIONSREQUEST_H

@class PBRequest, PBDataReader, PBUnknownFields, NSMutableArray, NSString, NSData;
@protocol NSCopying;


#import "GEOPDABClientDatasetMetadata.h"
#import "GEOAdditionalEnabledMarkets.h"
#import "GEOClientCapabilities.h"
#import "GEOCommonOptions.h"
#import "GEOMapRegion.h"
#import "GEOLocation.h"
#import "GEODirectionsRequestFeedback.h"
#import "GEOOriginalRoute.h"
#import "GEOOriginalWaypointRoute.h"
#import "GEORouteAttributes.h"
#import "GEOTFTrafficSnapshot.h"

@interface GEODirectionsRequest : PBRequest <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOSessionID _sessionID;
    GEOPDABClientDatasetMetadata *_abClientMetadata;
    GEOAdditionalEnabledMarkets *_additionalEnabledMarkets;
    GEOClientCapabilities *_clientCapabilities;
    GEOCommonOptions *_commonOptions;
    GEOMapRegion *_currentMapRegion;
    GEOLocation *_currentUserLocation;
    NSMutableArray *_deviceHistoricalLocations;
    GEODirectionsRequestFeedback *_feedback;
    GEOLocation *_lastKnownRoadLocation;
    NSString *_loggedAbExperiment;
    NSData *_nonRecommendedRoutesCache;
    NSData *_originalDirectionsResponseID;
    NSData *_originalRouteID;
    NSMutableArray *_originalRouteZilchPoints;
    GEOOriginalRoute *_originalRoute;
    NSMutableArray *_originalRouteEvInfos;
    GEOOriginalWaypointRoute *_originalWaypointRoute;
    CGFloat _requestTime;
    GEORouteAttributes *_routeAttributes;
    NSMutableArray *_serviceTags;
    CGFloat _sessionRelativeTimestamp;
    NSData *_sessionState;
    NSMutableArray *_trafficApiResponses;
    NSMutableArray *_trafficSnapshotIds;
    GEOTFTrafficSnapshot *_trafficSnapshot;
    NSMutableArray *_waypointTypeds;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _departureTime;
    unsigned int _lastEtaDisplayed;
    unsigned int _mainTransportTypeMaxRouteCount;
    int _nonRecommendedRoutesOption;
    int _originalRoutePurpose;
    unsigned int _sequenceNumber;
    unsigned int _timeSinceLastRerouteRequest;
    BOOL _getRouteForZilchPoints;
    BOOL _isFromAPI;
    BOOL _needLatency;
    BOOL _useLiveTrafficAsFallback;
    ? _flags;
}


@property (retain, nonatomic) GEOPDABClientDatasetMetadata *abClientMetadata;
@property (retain, nonatomic) GEOAdditionalEnabledMarkets *additionalEnabledMarkets;
@property (retain, nonatomic) GEOClientCapabilities *clientCapabilities;
@property (retain, nonatomic) GEOCommonOptions *commonOptions;
@property (retain, nonatomic) GEOMapRegion *currentMapRegion;
@property (retain, nonatomic) GEOLocation *currentUserLocation;
@property (nonatomic) int departureTime;
@property (retain, nonatomic) NSMutableArray *deviceHistoricalLocations;
@property (retain, nonatomic) GEODirectionsRequestFeedback *feedback;
@property (nonatomic) BOOL getRouteForZilchPoints;
@property (readonly, nonatomic) BOOL hasAbClientMetadata;
@property (readonly, nonatomic) BOOL hasAdditionalEnabledMarkets;
@property (readonly, nonatomic) BOOL hasClientCapabilities;
@property (readonly, nonatomic) BOOL hasCommonOptions;
@property (readonly, nonatomic) BOOL hasCurrentMapRegion;
@property (readonly, nonatomic) BOOL hasCurrentUserLocation;
@property (nonatomic) BOOL hasDepartureTime;
@property (readonly, nonatomic) BOOL hasFeedback;
@property (nonatomic) BOOL hasGetRouteForZilchPoints;
@property (nonatomic) BOOL hasIsFromAPI;
@property (nonatomic) BOOL hasLastEtaDisplayed;
@property (readonly, nonatomic) BOOL hasLastKnownRoadLocation;
@property (readonly, nonatomic) BOOL hasLoggedAbExperiment;
@property (nonatomic) BOOL hasMainTransportTypeMaxRouteCount;
@property (nonatomic) BOOL hasNeedLatency;
@property (readonly, nonatomic) BOOL hasNonRecommendedRoutesCache;
@property (nonatomic) BOOL hasNonRecommendedRoutesOption;
@property (readonly, nonatomic) BOOL hasOriginalDirectionsResponseID;
@property (readonly, nonatomic) BOOL hasOriginalRoute;
@property (readonly, nonatomic) BOOL hasOriginalRouteID;
@property (nonatomic) BOOL hasOriginalRoutePurpose;
@property (readonly, nonatomic) BOOL hasOriginalWaypointRoute;
@property (nonatomic) BOOL hasRequestTime;
@property (readonly, nonatomic) BOOL hasRouteAttributes;
@property (nonatomic) BOOL hasSequenceNumber;
@property (nonatomic) BOOL hasSessionID;
@property (nonatomic) BOOL hasSessionRelativeTimestamp;
@property (readonly, nonatomic) BOOL hasSessionState;
@property (nonatomic) BOOL hasTimeSinceLastRerouteRequest;
@property (readonly, nonatomic) BOOL hasTrafficSnapshot;
@property (nonatomic) BOOL hasUseLiveTrafficAsFallback;
@property (nonatomic) BOOL isFromAPI;
@property (nonatomic) unsigned int lastEtaDisplayed;
@property (retain, nonatomic) GEOLocation *lastKnownRoadLocation;
@property (retain, nonatomic) NSString *loggedAbExperiment;
@property (nonatomic) unsigned int mainTransportTypeMaxRouteCount;
@property (nonatomic) BOOL needLatency;
@property (retain, nonatomic) NSData *nonRecommendedRoutesCache;
@property (nonatomic) int nonRecommendedRoutesOption;
@property (retain, nonatomic) NSData *originalDirectionsResponseID;
@property (retain, nonatomic) GEOOriginalRoute *originalRoute;
@property (retain, nonatomic) NSMutableArray *originalRouteEvInfos;
@property (retain, nonatomic) NSData *originalRouteID;
@property (nonatomic) int originalRoutePurpose;
@property (retain, nonatomic) NSMutableArray *originalRouteZilchPoints;
@property (retain, nonatomic) GEOOriginalWaypointRoute *originalWaypointRoute;
@property (nonatomic) CGFloat requestTime;
@property (retain, nonatomic) GEORouteAttributes *routeAttributes;
@property (nonatomic) unsigned int sequenceNumber;
@property (retain, nonatomic) NSMutableArray *serviceTags;
@property (nonatomic) GEOSessionID sessionID;
@property (nonatomic) CGFloat sessionRelativeTimestamp;
@property (retain, nonatomic) NSData *sessionState;
@property (nonatomic) unsigned int timeSinceLastRerouteRequest;
@property (retain, nonatomic) NSMutableArray *trafficApiResponses;
@property (retain, nonatomic) GEOTFTrafficSnapshot *trafficSnapshot;
@property (retain, nonatomic) NSMutableArray *trafficSnapshotIds;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;
@property (nonatomic) BOOL useLiveTrafficAsFallback;
@property (retain, nonatomic) NSMutableArray *waypointTypeds;


+(BOOL)isValid:(id)arg0 ;
+(Class)deviceHistoricalLocationType;
+(Class)serviceTagType;
+(Class)waypointTypedType;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(Class)responseClass;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)deviceHistoricalLocationAtIndex:(NSUInteger)arg0 ;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithFeedback:(id)arg0 ;
-(id)initWithFeedback:(id)arg0 sessionID:(struct GEOSessionID )arg1 ;
-(id)initWithJSON:(id)arg0 ;
-(id)initWithQuickETARequest:(id)arg0 withFeedback:(id)arg1 ;
-(id)jsonRepresentation;
-(id)nonRecommendedRoutesOptionAsString:(int)arg0 ;
-(id)originalRouteEvInfoAtIndex:(NSUInteger)arg0 ;
-(id)originalRoutePurposeAsString:(int)arg0 ;
-(id)originalRouteZilchPointsAtIndex:(NSUInteger)arg0 ;
-(id)serviceTagAtIndex:(NSUInteger)arg0 ;
-(id)trafficApiResponsesAtIndex:(NSUInteger)arg0 ;
-(id)trafficSnapshotIdsAtIndex:(NSUInteger)arg0 ;
-(id)waypointTypedAtIndex:(NSUInteger)arg0 ;
-(int)StringAsNonRecommendedRoutesOption:(id)arg0 ;
-(int)StringAsOriginalRoutePurpose:(id)arg0 ;
-(unsigned int)requestTypeCode;
-(void)addDeviceHistoricalLocation:(id)arg0 ;
-(void)addOriginalRouteEvInfo:(id)arg0 ;
-(void)addOriginalRouteZilchPoints:(id)arg0 ;
-(void)addServiceTag:(id)arg0 ;
-(void)addTrafficApiResponses:(id)arg0 ;
-(void)addTrafficSnapshotIds:(id)arg0 ;
-(void)addWaypointTyped:(id)arg0 ;
-(void)clearDeviceHistoricalLocations;
-(void)clearLocations;
-(void)clearOriginalRouteEvInfos;
-(void)clearOriginalRouteZilchPoints;
-(void)clearSensitiveFields:(NSUInteger)arg0 ;
-(void)clearServiceTags;
-(void)clearSessionId;
-(void)clearTrafficApiResponses;
-(void)clearTrafficSnapshotIds;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)clearWaypointTypeds;
-(void)copyTo:(id)arg0 ;
-(void)initDefaultFeedbackInfo;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif