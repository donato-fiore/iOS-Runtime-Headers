// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOETATRAFFICUPDATEREQUEST_H
#define GEOETATRAFFICUPDATEREQUEST_H

@class PBRequest, PBDataReader, PBUnknownFields, NSMutableArray, NSData, NSString;
@protocol NSCopying;


#import "GEOPDABClientDatasetMetadata.h"
#import "GEOAdditionalEnabledMarkets.h"
#import "GEOClientCapabilities.h"
#import "GEOCommonOptions.h"
#import "GEOLocation.h"
#import "GEORouteAttributes.h"
#import "GEOTFTrafficSnapshot.h"
#import "GEOETATrafficUpdateWaypointRoute.h"

@interface GEOETATrafficUpdateRequest : PBRequest <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOTimepoint _clientTimepoint;
    GEOSessionID _sessionID;
    GEOPDABClientDatasetMetadata *_abClientMetadata;
    GEOAdditionalEnabledMarkets *_additionalEnabledMarkets;
    GEOClientCapabilities *_clientCapabilities;
    GEOCommonOptions *_commonOptions;
    GEOLocation *_currentUserLocation;
    NSMutableArray *_destinationWaypointTypeds;
    NSData *_directionsResponseID;
    NSString *_displayedBannerId;
    NSData *_etauResponseID;
    NSString *_requestingAppId;
    GEORouteAttributes *_routeAttributes;
    NSMutableArray *_routes;
    NSMutableArray *_serviceTags;
    CGFloat _sessionRelativeTimestamp;
    NSData *_sessionState;
    NSMutableArray *_trafficApiResponses;
    NSMutableArray *_trafficSnapshotIds;
    GEOTFTrafficSnapshot *_trafficSnapshot;
    NSData *_tripID;
    GEOLocation *_tripOrigin;
    GEOETATrafficUpdateWaypointRoute *_waypointRoute;
    NSString *_xpcUuid;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    unsigned int _maxAlternateRouteCount;
    unsigned int _previouslyRejectedRerouteSavings;
    int _rerouteStatus;
    BOOL _includeBetterRouteSuggestion;
    BOOL _needServerLatency;
    BOOL _useClientTimepointAsNow;
    BOOL _useLiveTrafficAsFallback;
    ? _flags;
}


@property (retain, nonatomic) GEOPDABClientDatasetMetadata *abClientMetadata;
@property (retain, nonatomic) GEOAdditionalEnabledMarkets *additionalEnabledMarkets;
@property (retain, nonatomic) GEOClientCapabilities *clientCapabilities;
@property (nonatomic) GEOTimepoint clientTimepoint;
@property (retain, nonatomic) GEOCommonOptions *commonOptions;
@property (retain, nonatomic) GEOLocation *currentUserLocation;
@property (retain, nonatomic) NSMutableArray *destinationWaypointTypeds;
@property (retain, nonatomic) NSData *directionsResponseID;
@property (retain, nonatomic) NSString *displayedBannerId;
@property (retain, nonatomic) NSData *etauResponseID;
@property (readonly, nonatomic) BOOL hasAbClientMetadata;
@property (readonly, nonatomic) BOOL hasAdditionalEnabledMarkets;
@property (readonly, nonatomic) BOOL hasClientCapabilities;
@property (nonatomic) BOOL hasClientTimepoint;
@property (readonly, nonatomic) BOOL hasCommonOptions;
@property (readonly, nonatomic) BOOL hasCurrentUserLocation;
@property (readonly, nonatomic) BOOL hasDirectionsResponseID;
@property (readonly, nonatomic) BOOL hasDisplayedBannerId;
@property (readonly, nonatomic) BOOL hasEtauResponseID;
@property (nonatomic) BOOL hasIncludeBetterRouteSuggestion;
@property (nonatomic) BOOL hasMaxAlternateRouteCount;
@property (nonatomic) BOOL hasNeedServerLatency;
@property (nonatomic) BOOL hasPreviouslyRejectedRerouteSavings;
@property (readonly, nonatomic) BOOL hasRequestingAppId;
@property (nonatomic) BOOL hasRerouteStatus;
@property (readonly, nonatomic) BOOL hasRouteAttributes;
@property (nonatomic) BOOL hasSessionID;
@property (nonatomic) BOOL hasSessionRelativeTimestamp;
@property (readonly, nonatomic) BOOL hasSessionState;
@property (readonly, nonatomic) BOOL hasTrafficSnapshot;
@property (readonly, nonatomic) BOOL hasTripID;
@property (readonly, nonatomic) BOOL hasTripOrigin;
@property (nonatomic) BOOL hasUseClientTimepointAsNow;
@property (nonatomic) BOOL hasUseLiveTrafficAsFallback;
@property (readonly, nonatomic) BOOL hasWaypointRoute;
@property (readonly, nonatomic) BOOL hasXpcUuid;
@property (nonatomic) BOOL includeBetterRouteSuggestion;
@property (nonatomic) unsigned int maxAlternateRouteCount;
@property (nonatomic) BOOL needServerLatency;
@property (nonatomic) unsigned int previouslyRejectedRerouteSavings;
@property (retain, nonatomic) NSString *requestingAppId;
@property (nonatomic) int rerouteStatus;
@property (retain, nonatomic) GEORouteAttributes *routeAttributes;
@property (retain, nonatomic) NSMutableArray *routes;
@property (retain, nonatomic) NSMutableArray *serviceTags;
@property (nonatomic) GEOSessionID sessionID;
@property (nonatomic) CGFloat sessionRelativeTimestamp;
@property (retain, nonatomic) NSData *sessionState;
@property (retain, nonatomic) NSMutableArray *trafficApiResponses;
@property (retain, nonatomic) GEOTFTrafficSnapshot *trafficSnapshot;
@property (retain, nonatomic) NSMutableArray *trafficSnapshotIds;
@property (retain, nonatomic) NSData *tripID;
@property (retain, nonatomic) GEOLocation *tripOrigin;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;
@property (nonatomic) BOOL useClientTimepointAsNow;
@property (nonatomic) BOOL useLiveTrafficAsFallback;
@property (retain, nonatomic) GEOETATrafficUpdateWaypointRoute *waypointRoute;
@property (retain, nonatomic) NSString *xpcUuid;


+(BOOL)isValid:(id)arg0 ;
+(Class)destinationWaypointTypedType;
+(Class)routeType;
+(Class)serviceTagType;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(Class)responseClass;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)destinationWaypointTypedAtIndex:(NSUInteger)arg0 ;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)rerouteStatusAsString:(int)arg0 ;
-(id)routeAtIndex:(NSUInteger)arg0 ;
-(id)serviceTagAtIndex:(NSUInteger)arg0 ;
-(id)trafficApiResponsesAtIndex:(NSUInteger)arg0 ;
-(id)trafficSnapshotIdsAtIndex:(NSUInteger)arg0 ;
-(int)StringAsRerouteStatus:(id)arg0 ;
-(unsigned int)requestTypeCode;
-(void)addDestinationWaypointTyped:(id)arg0 ;
-(void)addRoute:(id)arg0 ;
-(void)addServiceTag:(id)arg0 ;
-(void)addTrafficApiResponses:(id)arg0 ;
-(void)addTrafficSnapshotIds:(id)arg0 ;
-(void)clearDestinationWaypointTypeds;
-(void)clearRoutes;
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