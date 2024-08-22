// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOETAROUTE_H
#define GEOETAROUTE_H

@class PBCodable, PBDataReader, PBUnknownFields, NSMutableArray, NSData;
@protocol NSCopying;


#import "GEOWaypointInfo.h"
#import "GEONavigabilityInfo.h"
#import "GEOTrafficBannerText.h"

@interface GEOETARoute : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    ? _incidentEndOffsetsInETARoutes;
    ? _incidentIndexs;
    ? _trafficColorOffsets;
    ? _trafficColors;
    GEOWaypointInfo *_destinationWaypointInfo;
    NSMutableArray *_enrouteNotices;
    NSMutableArray *_guidanceEvents;
    NSMutableArray *_incidentOnRouteInfos;
    NSMutableArray *_incidentsOffReRoutes;
    NSMutableArray *_incidentsOnETARoutes;
    NSMutableArray *_incidentsOnReRoutes;
    NSMutableArray *_invalidSectionZilchPoints;
    GEONavigabilityInfo *_navigabilityInfo;
    GEOWaypointInfo *_originWaypointInfo;
    NSData *_pathLeg;
    NSMutableArray *_reroutedRoutes;
    NSData *_routeID;
    NSMutableArray *_routeCameraInputInfos;
    NSMutableArray *_routeLineStyleInfos;
    NSMutableArray *_steps;
    GEOTrafficBannerText *_trafficBannerText;
    NSMutableArray *_trafficColorInfos;
    NSMutableArray *_zilchPoints;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    unsigned int _historicTravelTime;
    unsigned int _staticTravelTime;
    unsigned int _travelTimeAggressiveEstimate;
    unsigned int _travelTimeBestEstimate;
    unsigned int _travelTimeConservativeEstimate;
    BOOL _routeNoLongerValid;
    ? _flags;
}


@property (retain, nonatomic) GEOWaypointInfo *destinationWaypointInfo;
@property (retain, nonatomic) NSMutableArray *enrouteNotices;
@property (readonly, nonatomic) CGFloat expectedTime;
@property (retain, nonatomic) NSMutableArray *guidanceEvents;
@property (readonly, nonatomic) BOOL hasDestinationWaypointInfo;
@property (nonatomic) BOOL hasHistoricTravelTime;
@property (readonly, nonatomic) BOOL hasNavigabilityInfo;
@property (readonly, nonatomic) BOOL hasOriginWaypointInfo;
@property (readonly, nonatomic) BOOL hasPathLeg;
@property (readonly, nonatomic) BOOL hasRouteID;
@property (nonatomic) BOOL hasRouteNoLongerValid;
@property (nonatomic) BOOL hasStaticTravelTime;
@property (readonly, nonatomic) BOOL hasTrafficBannerText;
@property (nonatomic) BOOL hasTravelTimeAggressiveEstimate;
@property (nonatomic) BOOL hasTravelTimeBestEstimate;
@property (nonatomic) BOOL hasTravelTimeConservativeEstimate;
@property (nonatomic) unsigned int historicTravelTime;
@property (readonly, nonatomic) *unsigned int incidentEndOffsetsInETARoutes;
@property (readonly, nonatomic) NSUInteger incidentEndOffsetsInETARoutesCount;
@property (readonly, nonatomic) *unsigned int incidentIndexs;
@property (readonly, nonatomic) NSUInteger incidentIndexsCount;
@property (retain, nonatomic) NSMutableArray *incidentOnRouteInfos;
@property (retain, nonatomic) NSMutableArray *incidentsOffReRoutes;
@property (retain, nonatomic) NSMutableArray *incidentsOnETARoutes;
@property (retain, nonatomic) NSMutableArray *incidentsOnReRoutes;
@property (retain, nonatomic) NSMutableArray *invalidSectionZilchPoints;
@property (retain, nonatomic) GEONavigabilityInfo *navigabilityInfo;
@property (retain, nonatomic) GEOWaypointInfo *originWaypointInfo;
@property (retain, nonatomic) NSData *pathLeg;
@property (retain, nonatomic) NSMutableArray *reroutedRoutes;
@property (retain, nonatomic) NSMutableArray *routeCameraInputInfos;
@property (retain, nonatomic) NSData *routeID;
@property (retain, nonatomic) NSMutableArray *routeLineStyleInfos;
@property (nonatomic) BOOL routeNoLongerValid;
@property (nonatomic) unsigned int staticTravelTime;
@property (retain, nonatomic) NSMutableArray *steps;
@property (retain, nonatomic) GEOTrafficBannerText *trafficBannerText;
@property (retain, nonatomic) NSMutableArray *trafficColorInfos;
@property (readonly, nonatomic) *unsigned int trafficColorOffsets;
@property (readonly, nonatomic) NSUInteger trafficColorOffsetsCount;
@property (readonly, nonatomic) *unsigned int trafficColors;
@property (readonly, nonatomic) NSUInteger trafficColorsCount;
@property (nonatomic) unsigned int travelTimeAggressiveEstimate;
@property (nonatomic) unsigned int travelTimeBestEstimate;
@property (nonatomic) unsigned int travelTimeConservativeEstimate;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;
@property (retain, nonatomic) NSMutableArray *zilchPoints;


+(BOOL)isValid:(id)arg0 ;
+(Class)enrouteNoticeType;
+(Class)guidanceEventType;
+(Class)incidentOnRouteInfoType;
+(Class)incidentsOnETARouteType;
+(Class)reroutedRouteType;
+(Class)routeCameraInputInfoType;
+(Class)routeLineStyleInfoType;
+(Class)stepType;
+(Class)trafficColorInfoType;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(CGFloat)remainingTimeAlongRoute:(unsigned int)arg0 currentStepRemainingDistance:(CGFloat)arg1 ;
-(CGFloat)remainingTimeFromStepID:(unsigned int)arg0 toEndStepID:(unsigned int)arg1 currentStepRemainingDistance:(CGFloat)arg2 ;
-(NSUInteger)hash;
-(NSUInteger)stepIndexOfStepWithID:(unsigned int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)enrouteNoticeAtIndex:(NSUInteger)arg0 ;
-(id)guidanceEventAtIndex:(NSUInteger)arg0 ;
-(id)incidentOnRouteInfoAtIndex:(NSUInteger)arg0 ;
-(id)incidentsOffReRoutesAtIndex:(NSUInteger)arg0 ;
-(id)incidentsOnETARouteAtIndex:(NSUInteger)arg0 ;
-(id)incidentsOnReRoutesAtIndex:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)invalidSectionZilchPointsAtIndex:(NSUInteger)arg0 ;
-(id)jsonRepresentation;
-(id)reroutedRouteAtIndex:(NSUInteger)arg0 ;
-(id)routeCameraInputInfoAtIndex:(NSUInteger)arg0 ;
-(id)routeLineStyleInfoAtIndex:(NSUInteger)arg0 ;
-(id)stepAtIndex:(NSUInteger)arg0 ;
-(id)trafficColorInfoAtIndex:(NSUInteger)arg0 ;
-(id)zilchPointsAtIndex:(NSUInteger)arg0 ;
-(unsigned int)incidentEndOffsetsInETARouteAtIndex:(NSUInteger)arg0 ;
-(unsigned int)incidentIndexAtIndex:(NSUInteger)arg0 ;
-(unsigned int)trafficColorAtIndex:(NSUInteger)arg0 ;
-(unsigned int)trafficColorOffsetAtIndex:(NSUInteger)arg0 ;
-(void)addEnrouteNotice:(id)arg0 ;
-(void)addGuidanceEvent:(id)arg0 ;
-(void)addIncidentEndOffsetsInETARoute:(unsigned int)arg0 ;
-(void)addIncidentIndex:(unsigned int)arg0 ;
-(void)addIncidentOnRouteInfo:(id)arg0 ;
-(void)addIncidentsOffReRoutes:(id)arg0 ;
-(void)addIncidentsOnETARoute:(id)arg0 ;
-(void)addIncidentsOnReRoutes:(id)arg0 ;
-(void)addInvalidSectionZilchPoints:(id)arg0 ;
-(void)addReroutedRoute:(id)arg0 ;
-(void)addRouteCameraInputInfo:(id)arg0 ;
-(void)addRouteLineStyleInfo:(id)arg0 ;
-(void)addStep:(id)arg0 ;
-(void)addTrafficColor:(unsigned int)arg0 ;
-(void)addTrafficColorInfo:(id)arg0 ;
-(void)addTrafficColorOffset:(unsigned int)arg0 ;
-(void)addZilchPoints:(id)arg0 ;
-(void)clearEnrouteNotices;
-(void)clearGuidanceEvents;
-(void)clearIncidentEndOffsetsInETARoutes;
-(void)clearIncidentIndexs;
-(void)clearIncidentOnRouteInfos;
-(void)clearIncidentsOffReRoutes;
-(void)clearIncidentsOnETARoutes;
-(void)clearIncidentsOnReRoutes;
-(void)clearInvalidSectionZilchPoints;
-(void)clearReroutedRoutes;
-(void)clearRouteCameraInputInfos;
-(void)clearRouteLineStyleInfos;
-(void)clearSteps;
-(void)clearTrafficColorInfos;
-(void)clearTrafficColorOffsets;
-(void)clearTrafficColors;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)clearZilchPoints;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif