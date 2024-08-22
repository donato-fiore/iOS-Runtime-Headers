// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOWAYPOINTROUTE_H
#define GEOWAYPOINTROUTE_H

@class PBCodable, PBDataReader, PBUnknownFields, NSMutableArray, NSString;
@protocol _GEOEnrouteNoticesProvider, NSCopying;


#import "GEOWaypointRouteFeatures.h"
#import "GEOOutOfMapsAlertsInfo.h"
#import "GEOTrafficBannerText.h"
#import "GEORestrictionZoneInfo.h"
#import "GEORoutePlanningInfo.h"
#import "GEOTraversalTimes.h"

@interface GEOWaypointRoute : PBCodable <_GEOEnrouteNoticesProvider, NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    ? _initialPromptTypes;
    NSMutableArray *_arrivalParameters;
    GEOWaypointRouteFeatures *_feature;
    NSMutableArray *_incidentsOnRouteLegs;
    NSMutableArray *_names;
    GEOOutOfMapsAlertsInfo *_outOfMapsAlertsInfo;
    GEOTrafficBannerText *_rerouteBannerText;
    GEORestrictionZoneInfo *_restrictionZoneInfo;
    NSMutableArray *_routeLegs;
    GEORoutePlanningInfo *_routePlanningInfo;
    NSMutableArray *_trafficCameras;
    NSMutableArray *_trafficSignals;
    GEOTraversalTimes *_traversalTimes;
    GEOTraversalTimes *_tripTimes;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    unsigned int _distanceMeters;
    int _drivingSide;
    unsigned int _identifier;
    int _transportType;
    int _type;
    ? _flags;
}


@property (retain, nonatomic) NSMutableArray *arrivalParameters;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned int distanceMeters;
@property (nonatomic) int drivingSide;
@property (retain, nonatomic) GEOWaypointRouteFeatures *feature;
@property (nonatomic) BOOL hasDistanceMeters;
@property (nonatomic) BOOL hasDrivingSide;
@property (readonly, nonatomic) BOOL hasFeature;
@property (nonatomic) BOOL hasIdentifier;
@property (readonly, nonatomic) BOOL hasOutOfMapsAlertsInfo;
@property (readonly, nonatomic) BOOL hasRerouteBannerText;
@property (readonly, nonatomic) BOOL hasRestrictionZoneInfo;
@property (readonly, nonatomic) BOOL hasRoutePlanningInfo;
@property (nonatomic) BOOL hasTransportType;
@property (readonly, nonatomic) BOOL hasTraversalTimes;
@property (readonly, nonatomic) BOOL hasTripTimes;
@property (nonatomic) BOOL hasType;
@property (readonly) NSUInteger hash;
@property (nonatomic) unsigned int identifier;
@property (retain, nonatomic) NSMutableArray *incidentsOnRouteLegs;
@property (readonly, nonatomic) *int initialPromptTypes;
@property (readonly, nonatomic) NSUInteger initialPromptTypesCount;
@property (retain, nonatomic) NSMutableArray *names;
@property (retain, nonatomic) GEOOutOfMapsAlertsInfo *outOfMapsAlertsInfo;
@property (retain, nonatomic) GEOTrafficBannerText *rerouteBannerText;
@property (retain, nonatomic) GEORestrictionZoneInfo *restrictionZoneInfo;
@property (retain, nonatomic) NSMutableArray *routeLegs;
@property (retain, nonatomic) GEORoutePlanningInfo *routePlanningInfo;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSMutableArray *trafficCameras;
@property (retain, nonatomic) NSMutableArray *trafficSignals;
@property (nonatomic) int transportType;
@property (retain, nonatomic) GEOTraversalTimes *traversalTimes;
@property (retain, nonatomic) GEOTraversalTimes *tripTimes;
@property (nonatomic) int type;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(BOOL)isValid:(id)arg0 ;
+(Class)nameType;
+(Class)routeLegType;
+(Class)trafficCameraType;
+(Class)trafficSignalType;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)_geoTrafficCameras;
-(id)_geoTrafficSignals;
-(id)arrivalParametersAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)drivingSideAsString:(int)arg0 ;
-(id)incidentsOnRouteLegsAtIndex:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)initialPromptTypesAsString:(int)arg0 ;
-(id)jsonRepresentation;
-(id)nameAtIndex:(NSUInteger)arg0 ;
-(id)routeLegAtIndex:(NSUInteger)arg0 ;
-(id)trafficCameraAtIndex:(NSUInteger)arg0 ;
-(id)trafficSignalAtIndex:(NSUInteger)arg0 ;
-(id)transportTypeAsString:(int)arg0 ;
-(id)typeAsString:(int)arg0 ;
-(int)StringAsDrivingSide:(id)arg0 ;
-(int)StringAsInitialPromptTypes:(id)arg0 ;
-(int)StringAsTransportType:(id)arg0 ;
-(int)StringAsType:(id)arg0 ;
-(int)initialPromptTypeAtIndex:(NSUInteger)arg0 ;
-(void)addArrivalParameters:(id)arg0 ;
-(void)addIncidentsOnRouteLegs:(id)arg0 ;
-(void)addInitialPromptType:(int)arg0 ;
-(void)addName:(id)arg0 ;
-(void)addRouteLeg:(id)arg0 ;
-(void)addTrafficCamera:(id)arg0 ;
-(void)addTrafficSignal:(id)arg0 ;
-(void)clearArrivalParameters;
-(void)clearIncidentsOnRouteLegs;
-(void)clearInitialPromptTypes;
-(void)clearNames;
-(void)clearRouteLegs;
-(void)clearTrafficCameras;
-(void)clearTrafficSignals;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif