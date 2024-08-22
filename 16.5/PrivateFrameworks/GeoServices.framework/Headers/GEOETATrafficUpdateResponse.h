// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOETATRAFFICUPDATERESPONSE_H
#define GEOETATRAFFICUPDATERESPONSE_H

@class PBCodable, PBDataReader, PBUnknownFields, NSMutableArray, NSString, NSData;
@protocol _GEOEnrouteNoticesProvider, NSCopying;


#import "GEOClientMetrics.h"
#import "GEOPDDatasetABStatus.h"
#import "GEOETATrafficUpdateWaypointRoute.h"

@interface GEOETATrafficUpdateResponse : PBCodable <_GEOEnrouteNoticesProvider, NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    *GEOProblemDetail _problemDetails;
    NSUInteger _problemDetailsCount;
    NSUInteger _problemDetailsSpace;
    NSMutableArray *_arrivalParameters;
    NSMutableArray *_cameras;
    GEOClientMetrics *_clientMetrics;
    GEOPDDatasetABStatus *_datasetAbStatus;
    NSString *_debugData;
    NSData *_responseId;
    NSMutableArray *_routes;
    NSData *_sessionState;
    NSMutableArray *_trafficSignals;
    GEOETATrafficUpdateWaypointRoute *_waypointRoute;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    unsigned int _displayedEta;
    int _status;
    ? _flags;
}


@property (retain, nonatomic) NSMutableArray *arrivalParameters;
@property (retain, nonatomic) NSMutableArray *cameras;
@property (retain, nonatomic) GEOClientMetrics *clientMetrics;
@property (retain, nonatomic) GEOPDDatasetABStatus *datasetAbStatus;
@property (retain, nonatomic) NSString *debugData;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned int displayedEta;
@property (readonly, nonatomic) BOOL hasClientMetrics;
@property (readonly, nonatomic) BOOL hasDatasetAbStatus;
@property (readonly, nonatomic) BOOL hasDebugData;
@property (nonatomic) BOOL hasDisplayedEta;
@property (readonly, nonatomic) BOOL hasResponseId;
@property (readonly, nonatomic) BOOL hasSessionState;
@property (nonatomic) BOOL hasStatus;
@property (readonly, nonatomic) BOOL hasWaypointRoute;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) *GEOProblemDetail problemDetails;
@property (readonly, nonatomic) NSUInteger problemDetailsCount;
@property (retain, nonatomic) NSData *responseId;
@property (retain, nonatomic) NSMutableArray *routes;
@property (retain, nonatomic) NSData *sessionState;
@property (nonatomic) int status;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSMutableArray *trafficSignals;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;
@property (retain, nonatomic) GEOETATrafficUpdateWaypointRoute *waypointRoute;


+(BOOL)isValid:(id)arg0 ;
+(Class)cameraType;
+(Class)routeType;
+(Class)trafficSignalType;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)_geoTrafficCameras;
-(id)_geoTrafficSignals;
-(id)arrivalParametersAtIndex:(NSUInteger)arg0 ;
-(id)cameraAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)routeAtIndex:(NSUInteger)arg0 ;
-(id)statusAsString:(int)arg0 ;
-(id)trafficSignalAtIndex:(NSUInteger)arg0 ;
-(int)StringAsStatus:(id)arg0 ;
-(struct GEOProblemDetail )problemDetailAtIndex:(NSUInteger)arg0 ;
-(void)addArrivalParameters:(id)arg0 ;
-(void)addCamera:(id)arg0 ;
-(void)addProblemDetail:(struct GEOProblemDetail )arg0 ;
-(void)addRoute:(id)arg0 ;
-(void)addTrafficSignal:(id)arg0 ;
-(void)clearArrivalParameters;
-(void)clearCameras;
-(void)clearProblemDetails;
-(void)clearRoutes;
-(void)clearTrafficSignals;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif