// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOTRANSITSUGGESTEDROUTE_H
#define GEOTRANSITSUGGESTEDROUTE_H

@class PBCodable, PBDataReader, PBUnknownFields, NSData, NSMutableArray, NSString;
@protocol GEOCompanionCompatibility, NSCopying;


#import "GEOAdvisoriesInfo.h"
#import "GEOTransitRouteDisplayStrings.h"
#import "GEOTransitEngineDebugData.h"
#import "GEOPBTransitRoutingIncidentMessage.h"

@interface GEOTransitSuggestedRoute : PBCodable <GEOCompanionCompatibility, NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    ? _routeBadges;
    GEOAdvisoriesInfo *_advisoriesInfo;
    GEOTransitRouteDisplayStrings *_displayStrings;
    GEOTransitEngineDebugData *_engineDebugData;
    NSData *_routeHandle;
    NSMutableArray *_routePlanningArtworks;
    NSMutableArray *_sectionOptions;
    NSMutableArray *_sections;
    NSMutableArray *_steps;
    GEOPBTransitRoutingIncidentMessage *_transitIncidentMessage;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    unsigned int _absEndTime;
    unsigned int _absStartTime;
    unsigned int _rank;
    unsigned int _travelTimeAggressiveEstimate;
    unsigned int _travelTimeConservativeEstimate;
    BOOL _supportsRouteUpdates;
    ? _flags;
}


@property (nonatomic) unsigned int absEndTime;
@property (nonatomic) unsigned int absStartTime;
@property (retain, nonatomic) GEOAdvisoriesInfo *advisoriesInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) GEOTransitRouteDisplayStrings *displayStrings;
@property (retain, nonatomic) GEOTransitEngineDebugData *engineDebugData;
@property (nonatomic) BOOL hasAbsEndTime;
@property (nonatomic) BOOL hasAbsStartTime;
@property (readonly, nonatomic) BOOL hasAdvisoriesInfo;
@property (readonly, nonatomic) BOOL hasDisplayStrings;
@property (readonly, nonatomic) BOOL hasEngineDebugData;
@property (nonatomic) BOOL hasRank;
@property (readonly, nonatomic) BOOL hasRouteHandle;
@property (nonatomic) BOOL hasSupportsRouteUpdates;
@property (readonly, nonatomic) BOOL hasTransitIncidentMessage;
@property (nonatomic) BOOL hasTravelTimeAggressiveEstimate;
@property (nonatomic) BOOL hasTravelTimeConservativeEstimate;
@property (readonly) NSUInteger hash;
@property (nonatomic) unsigned int rank;
@property (readonly, nonatomic) *int routeBadges;
@property (readonly, nonatomic) NSUInteger routeBadgesCount;
@property (retain, nonatomic) NSData *routeHandle;
@property (retain, nonatomic) NSMutableArray *routePlanningArtworks;
@property (retain, nonatomic) NSMutableArray *sectionOptions;
@property (retain, nonatomic) NSMutableArray *sections;
@property (retain, nonatomic) NSMutableArray *steps;
@property (readonly) Class superclass;
@property (nonatomic) BOOL supportsRouteUpdates;
@property (retain, nonatomic) GEOPBTransitRoutingIncidentMessage *transitIncidentMessage;
@property (nonatomic) unsigned int travelTimeAggressiveEstimate;
@property (nonatomic) unsigned int travelTimeConservativeEstimate;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;
@property (readonly, nonatomic, getter=isWalkingOnlyRoute) BOOL walkingOnlyRoute;


+(BOOL)isValid:(id)arg0 ;
+(Class)routePlanningArtworkType;
+(Class)sectionOptionType;
+(Class)sectionType;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)instanceCompatibleWithProtocolVersion:(NSUInteger)arg0 ;
-(id)jsonRepresentation;
-(id)nextOptionForOption:(id)arg0 withRideIndex:(NSUInteger)arg1 ;
-(id)routeBadgesAsString:(int)arg0 ;
-(id)routePlanningArtworkAtIndex:(NSUInteger)arg0 ;
-(id)sectionAtIndex:(NSUInteger)arg0 ;
-(id)sectionOptionAtIndex:(NSUInteger)arg0 ;
-(id)stepsAtIndex:(NSUInteger)arg0 ;
-(int)StringAsRouteBadges:(id)arg0 ;
-(int)routeBadgeAtIndex:(NSUInteger)arg0 ;
-(void)addRouteBadge:(int)arg0 ;
-(void)addRoutePlanningArtwork:(id)arg0 ;
-(void)addSection:(id)arg0 ;
-(void)addSectionOption:(id)arg0 ;
-(void)addSteps:(id)arg0 ;
-(void)clearRouteBadges;
-(void)clearRoutePlanningArtworks;
-(void)clearSectionOptions;
-(void)clearSections;
-(void)clearSteps;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif