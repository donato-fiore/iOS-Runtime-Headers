// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOCOMPANIONROUTEDETAILS_H
#define GEOCOMPANIONROUTEDETAILS_H

@class PBCodable, PBDataReader, NSString, NSData, NSMutableArray;
@protocol GEOCompanionCompatibility, NSCopying;


#import "GEOTransitDecoderData.h"
#import "GEOMapItemStorage.h"
#import "GEOETATrafficUpdateResponse.h"
#import "GEOTransitSuggestedRoute.h"
#import "GEODirectionsRequest.h"
#import "GEODirectionsResponse.h"
#import "GEOCompanionWaypoint.h"
#import "GEOComposedWaypoint.h"

@interface GEOCompanionRouteDetails : PBCodable <GEOCompanionCompatibility, NSCopying>

 {
    PBDataReader *_reader;
    ? _coordinates;
    ? _trafficColorOffsets;
    ? _trafficColors;
    GEOTransitDecoderData *_decoderData;
    NSString *_destinationName;
    GEOMapItemStorage *_destination;
    GEOETATrafficUpdateResponse *_etaResponse;
    NSString *_name;
    NSData *_originalRouteID;
    GEOTransitSuggestedRoute *_originalSuggestedRoute;
    GEOMapItemStorage *_origin;
    GEODirectionsRequest *_request;
    GEODirectionsResponse *_response;
    NSData *_revisionID;
    NSMutableArray *_routeDescriptions;
    NSData *_routeID;
    NSMutableArray *_steps;
    NSString *_trafficDescription;
    NSMutableArray *_waypoints;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    unsigned int _distance;
    unsigned int _historicalDuration;
    unsigned int _originalDuration;
    unsigned int _routeIndex;
    int _transportType;
    BOOL _canNavigate;
    BOOL _disallowStandaloneFallback;
    BOOL _isTrace;
    BOOL _showTransitSchedules;
    ? _flags;
}


@property (nonatomic) BOOL canNavigate;
@property (readonly, nonatomic) GEOCompanionWaypoint *companionDestination;
@property (readonly, nonatomic) GEOCompanionWaypoint *companionOrigin;
@property (readonly, nonatomic) GEOComposedWaypoint *composedDestination;
@property (readonly, nonatomic) GEOComposedWaypoint *composedOrigin;
@property (readonly, nonatomic) *CGFloat coordinates;
@property (readonly, nonatomic) NSUInteger coordinatesCount;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) GEOTransitDecoderData *decoderData;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) GEOMapItemStorage *destination;
@property (retain, nonatomic) NSString *destinationName;
@property (nonatomic) BOOL disallowStandaloneFallback;
@property (nonatomic) unsigned int distance;
@property (retain, nonatomic) GEOETATrafficUpdateResponse *etaResponse;
@property (nonatomic) BOOL hasCanNavigate;
@property (readonly, nonatomic) BOOL hasDecoderData;
@property (readonly, nonatomic) BOOL hasDestination;
@property (readonly, nonatomic) BOOL hasDestinationName;
@property (nonatomic) BOOL hasDisallowStandaloneFallback;
@property (nonatomic) BOOL hasDistance;
@property (readonly, nonatomic) BOOL hasEtaResponse;
@property (nonatomic) BOOL hasHistoricalDuration;
@property (nonatomic) BOOL hasIsTrace;
@property (readonly, nonatomic) BOOL hasName;
@property (readonly, nonatomic) BOOL hasOrigin;
@property (nonatomic) BOOL hasOriginalDuration;
@property (readonly, nonatomic) BOOL hasOriginalRouteID;
@property (readonly, nonatomic) BOOL hasOriginalSuggestedRoute;
@property (readonly, nonatomic) BOOL hasRequest;
@property (readonly, nonatomic) BOOL hasResponse;
@property (readonly, nonatomic) BOOL hasRevisionID;
@property (readonly, nonatomic) BOOL hasRouteID;
@property (nonatomic) BOOL hasRouteIndex;
@property (nonatomic) BOOL hasShowTransitSchedules;
@property (readonly, nonatomic) BOOL hasTrafficDescription;
@property (nonatomic) BOOL hasTransportType;
@property (readonly) NSUInteger hash;
@property (nonatomic) unsigned int historicalDuration;
@property (readonly, nonatomic) BOOL isSyntheticRoute;
@property (nonatomic) BOOL isTrace;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) GEOMapItemStorage *origin;
@property (nonatomic) unsigned int originalDuration;
@property (retain, nonatomic) NSData *originalRouteID;
@property (retain, nonatomic) GEOTransitSuggestedRoute *originalSuggestedRoute;
@property (retain, nonatomic) GEODirectionsRequest *request;
@property (retain, nonatomic) GEODirectionsResponse *response;
@property (retain, nonatomic) NSData *revisionID;
@property (retain, nonatomic) NSMutableArray *routeDescriptions;
@property (retain, nonatomic) NSData *routeID;
@property (nonatomic) unsigned int routeIndex;
@property (readonly, nonatomic) NSString *shortDescription;
@property (nonatomic) BOOL showTransitSchedules;
@property (retain, nonatomic) NSMutableArray *steps;
@property (readonly) Class superclass;
@property (readonly, nonatomic) *unsigned int trafficColorOffsets;
@property (readonly, nonatomic) NSUInteger trafficColorOffsetsCount;
@property (readonly, nonatomic) *unsigned int trafficColors;
@property (readonly, nonatomic) NSUInteger trafficColorsCount;
@property (retain, nonatomic) NSString *trafficDescription;
@property (nonatomic) int transportType;
@property (retain, nonatomic) NSMutableArray *waypoints;


+(BOOL)isValid:(id)arg0 ;
+(Class)stepType;
+(id)syntheticRouteDetailsWithOrigin:(id)arg0 destination:(id)arg1 transportType:(int)arg2 destinationName:(id)arg3 ;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)needsWaypointRemoval:(NSUInteger)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(CGFloat)coordinatesAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)stepIndexWithID:(NSUInteger)arg0 ;
-(id)companionWaypointAtIndex:(NSUInteger)arg0 ;
-(id)composedWaypointAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)initWithRoute:(id)arg0 destinationName:(id)arg1 stringFormatter:(id)arg2 traffic:(id)arg3 ;
-(id)instanceCompatibleWithProtocolVersion:(NSUInteger)arg0 ;
-(id)jsonRepresentation;
-(id)routeDescriptionsAtIndex:(NSUInteger)arg0 ;
-(id)stepAtIndex:(NSUInteger)arg0 ;
-(id)stepWithID:(NSUInteger)arg0 ;
-(id)transportTypeAsString:(int)arg0 ;
-(id)waypointsAtIndex:(NSUInteger)arg0 ;
-(int)StringAsTransportType:(id)arg0 ;
-(unsigned int)trafficColorAtIndex:(NSUInteger)arg0 ;
-(unsigned int)trafficColorOffsetAtIndex:(NSUInteger)arg0 ;
-(void)_initForPreHunterWithRoute:(id)arg0 stringFormatter:(id)arg1 ;
-(void)addCoordinates:(CGFloat)arg0 ;
-(void)addRouteDescriptions:(id)arg0 ;
-(void)addStep:(id)arg0 ;
-(void)addTrafficColor:(unsigned int)arg0 ;
-(void)addTrafficColorOffset:(unsigned int)arg0 ;
-(void)addWaypoints:(id)arg0 ;
-(void)clearCoordinates;
-(void)clearRouteDescriptions;
-(void)clearSensitiveFields:(NSUInteger)arg0 ;
-(void)clearSteps;
-(void)clearTrafficColorOffsets;
-(void)clearTrafficColors;
-(void)clearWaypoints;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif