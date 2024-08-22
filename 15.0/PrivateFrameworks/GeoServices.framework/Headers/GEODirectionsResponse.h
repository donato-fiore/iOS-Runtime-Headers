// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEODIRECTIONSRESPONSE_H
#define GEODIRECTIONSRESPONSE_H

@class PBCodable, PBDataReader, PBUnknownFields, NSMutableArray, NSString, NSData;
@protocol GEOCompanionCompatibility, _GEOEnrouteNoticesProvider, NSCopying;


#import "GEOClientMetrics.h"
#import "GEOPDDatasetABStatus.h"
#import "GEOTransitDecoderData.h"
#import "GEORouteDisplayHints.h"
#import "GEOETAServiceResponseSummary.h"
#import "GEOAlert.h"
#import "GEOSnapScoreMetadata.h"
#import "GEOStyleAttributes.h"
#import "GEOPBTransitRoutingIncidentMessage.h"
#import "GEOTransitRouteUpdateConfiguration.h"

@interface GEODirectionsResponse : PBCodable <GEOCompanionCompatibility, _GEOEnrouteNoticesProvider, NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    *GEOProblemDetail _problemDetails;
    NSUInteger _problemDetailsCount;
    NSUInteger _problemDetailsSpace;
    ? _supportedTransportTypes;
    GEOTimepoint _timepointUsed;
    NSMutableArray *_arrivalParameters;
    GEOClientMetrics *_clientMetrics;
    NSString *_dataVersion;
    GEOPDDatasetABStatus *_datasetAbStatus;
    NSString *_debugData;
    NSUInteger _debugLatencyMs;
    GEOTransitDecoderData *_decoderData;
    NSData *_directionsResponseID;
    GEORouteDisplayHints *_displayHints;
    GEOETAServiceResponseSummary *_etaServiceSummary;
    GEOAlert *_failureAlert;
    NSMutableArray *_incidentsOffRoutes;
    NSMutableArray *_incidentsOnRoutes;
    NSMutableArray *_internalErrors;
    NSData *_nonRecommendedRoutesCache;
    NSMutableArray *_placeSearchResponses;
    NSMutableArray *_routes;
    NSMutableArray *_serviceGaps;
    NSString *_serviceVersion;
    NSData *_sessionState;
    GEOSnapScoreMetadata *_snapScoreMetadataDebug;
    GEOStyleAttributes *_styleAttributes;
    NSMutableArray *_suggestedRoutes;
    NSMutableArray *_trafficCameras;
    NSMutableArray *_trafficSignals;
    NSString *_transitDataVersion;
    GEOPBTransitRoutingIncidentMessage *_transitIncidentMessage;
    GEOTransitRouteUpdateConfiguration *_transitRouteUpdateConfiguration;
    NSMutableArray *_waypointRoutes;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _instructionSignFillColor;
    int _liveRouteSavingsSeconds;
    int _localDistanceUnits;
    unsigned int _selectedRouteIndex;
    int _status;
    BOOL _hasKhSegments;
    BOOL _isNavigable;
    BOOL _isOfflineResponse;
    BOOL _routeDeviatesFromOriginal;
    ? _flags;
}


@property (retain, nonatomic) NSMutableArray *arrivalParameters;
@property (retain, nonatomic) GEOClientMetrics *clientMetrics;
@property (retain, nonatomic) NSString *dataVersion;
@property (retain, nonatomic) GEOPDDatasetABStatus *datasetAbStatus;
@property (retain, nonatomic) NSString *debugData;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSUInteger debugLatencyMs;
@property (retain, nonatomic) GEOTransitDecoderData *decoderData;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSData *directionsResponseID;
@property (retain, nonatomic) GEORouteDisplayHints *displayHints;
@property (retain, nonatomic) GEOETAServiceResponseSummary *etaServiceSummary;
@property (retain, nonatomic) GEOAlert *failureAlert;
@property (readonly, nonatomic) BOOL hasClientMetrics;
@property (readonly, nonatomic) BOOL hasDataVersion;
@property (readonly, nonatomic) BOOL hasDatasetAbStatus;
@property (readonly, nonatomic) BOOL hasDebugData;
@property (nonatomic) BOOL hasDebugLatencyMs;
@property (readonly, nonatomic) BOOL hasDecoderData;
@property (readonly, nonatomic) BOOL hasDirectionsResponseID;
@property (readonly, nonatomic) BOOL hasDisplayHints;
@property (readonly, nonatomic) BOOL hasEtaServiceSummary;
@property (readonly, nonatomic) BOOL hasFailureAlert;
@property (nonatomic) BOOL hasHasKhSegments;
@property (nonatomic) BOOL hasInstructionSignFillColor;
@property (nonatomic) BOOL hasIsNavigable;
@property (nonatomic) BOOL hasIsOfflineResponse;
@property (nonatomic) BOOL hasKhSegments;
@property (nonatomic) BOOL hasLiveRouteSavingsSeconds;
@property (nonatomic) BOOL hasLocalDistanceUnits;
@property (readonly, nonatomic) BOOL hasNonRecommendedRoutesCache;
@property (nonatomic) BOOL hasRouteDeviatesFromOriginal;
@property (nonatomic) BOOL hasSelectedRouteIndex;
@property (readonly, nonatomic) BOOL hasServiceVersion;
@property (readonly, nonatomic) BOOL hasSessionState;
@property (readonly, nonatomic) BOOL hasSnapScoreMetadataDebug;
@property (readonly, nonatomic) BOOL hasStyleAttributes;
@property (nonatomic) BOOL hasTimepointUsed;
@property (readonly, nonatomic) BOOL hasTransitDataVersion;
@property (readonly, nonatomic) BOOL hasTransitIncidentMessage;
@property (readonly, nonatomic) BOOL hasTransitRouteUpdateConfiguration;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableArray *incidentsOffRoutes;
@property (retain, nonatomic) NSMutableArray *incidentsOnRoutes;
@property (nonatomic) int instructionSignFillColor;
@property (retain, nonatomic) NSMutableArray *internalErrors;
@property (nonatomic) BOOL isNavigable;
@property (nonatomic) BOOL isOfflineResponse;
@property (nonatomic) int liveRouteSavingsSeconds;
@property (nonatomic) int localDistanceUnits;
@property (retain, nonatomic) NSData *nonRecommendedRoutesCache;
@property (retain, nonatomic) NSMutableArray *placeSearchResponses;
@property (readonly, nonatomic) *GEOProblemDetail problemDetails;
@property (readonly, nonatomic) NSUInteger problemDetailsCount;
@property (nonatomic) BOOL routeDeviatesFromOriginal;
@property (retain, nonatomic) NSMutableArray *routes;
@property (nonatomic) unsigned int selectedRouteIndex;
@property (retain, nonatomic) NSMutableArray *serviceGaps;
@property (retain, nonatomic) NSString *serviceVersion;
@property (retain, nonatomic) NSData *sessionState;
@property (retain, nonatomic) GEOSnapScoreMetadata *snapScoreMetadataDebug;
@property (nonatomic) int status;
@property (retain, nonatomic) GEOStyleAttributes *styleAttributes;
@property (retain, nonatomic) NSMutableArray *suggestedRoutes;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic) *int supportedTransportTypes;
@property (readonly, nonatomic) NSUInteger supportedTransportTypesCount;
@property (nonatomic) GEOTimepoint timepointUsed;
@property (retain, nonatomic) NSMutableArray *trafficCameras;
@property (retain, nonatomic) NSMutableArray *trafficSignals;
@property (retain, nonatomic) NSString *transitDataVersion;
@property (retain, nonatomic) GEOPBTransitRoutingIncidentMessage *transitIncidentMessage;
@property (retain, nonatomic) GEOTransitRouteUpdateConfiguration *transitRouteUpdateConfiguration;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;
@property (retain, nonatomic) NSMutableArray *waypointRoutes;


+(BOOL)isValid:(id)arg0 ;
+(Class)internalErrorType;
+(Class)placeSearchResponseType;
+(Class)routeType;
+(Class)serviceGapType;
+(Class)suggestedRouteType;
+(Class)trafficCameraType;
+(Class)trafficSignalType;
+(Class)waypointRouteType;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)_geoTrafficCameras;
-(id)_geoTrafficSignals;
-(id)arrivalParametersAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)incidentsOffRoutesAtIndex:(NSUInteger)arg0 ;
-(id)incidentsOnRoutesAtIndex:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)instanceCompatibleWithProtocolVersion:(NSUInteger)arg0 ;
-(id)instructionSignFillColorAsString:(int)arg0 ;
-(id)internalErrorAtIndex:(NSUInteger)arg0 ;
-(id)jsonRepresentation;
-(id)localDistanceUnitsAsString:(int)arg0 ;
-(id)placeSearchResponseAtIndex:(NSUInteger)arg0 ;
-(id)preJupiterCompatibleDirectionsResponseWithRoute:(id)arg0 ;
-(id)routeAtIndex:(NSUInteger)arg0 ;
-(id)serviceGapAtIndex:(NSUInteger)arg0 ;
-(id)statusAsString:(int)arg0 ;
-(id)suggestedRouteAtIndex:(NSUInteger)arg0 ;
-(id)supportedTransportTypesAsString:(int)arg0 ;
-(id)trafficCameraAtIndex:(NSUInteger)arg0 ;
-(id)trafficSignalAtIndex:(NSUInteger)arg0 ;
-(id)waypointRouteAtIndex:(NSUInteger)arg0 ;
-(int)StringAsInstructionSignFillColor:(id)arg0 ;
-(int)StringAsLocalDistanceUnits:(id)arg0 ;
-(int)StringAsStatus:(id)arg0 ;
-(int)StringAsSupportedTransportTypes:(id)arg0 ;
-(int)supportedTransportTypeAtIndex:(NSUInteger)arg0 ;
-(struct GEOProblemDetail )problemDetailAtIndex:(NSUInteger)arg0 ;
-(void)_clearJupiterFieldsForTesting;
-(void)addArrivalParameters:(id)arg0 ;
-(void)addIncidentsOffRoutes:(id)arg0 ;
-(void)addIncidentsOnRoutes:(id)arg0 ;
-(void)addInternalError:(id)arg0 ;
-(void)addPlaceSearchResponse:(id)arg0 ;
-(void)addProblemDetail:(struct GEOProblemDetail )arg0 ;
-(void)addRoute:(id)arg0 ;
-(void)addServiceGap:(id)arg0 ;
-(void)addSuggestedRoute:(id)arg0 ;
-(void)addSupportedTransportType:(int)arg0 ;
-(void)addTrafficCamera:(id)arg0 ;
-(void)addTrafficSignal:(id)arg0 ;
-(void)addWaypointRoute:(id)arg0 ;
-(void)clearArrivalParameters;
-(void)clearIncidentsOffRoutes;
-(void)clearIncidentsOnRoutes;
-(void)clearInternalErrors;
-(void)clearLocations;
-(void)clearPlaceSearchResponses;
-(void)clearProblemDetails;
-(void)clearRoutes;
-(void)clearSensitiveFields:(NSUInteger)arg0 ;
-(void)clearServiceGaps;
-(void)clearSuggestedRoutes;
-(void)clearSupportedTransportTypes;
-(void)clearTrafficCameras;
-(void)clearTrafficSignals;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)clearWaypointRoutes;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif