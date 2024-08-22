// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOSTEP_H
#define GEOSTEP_H

@class PBCodable, PBDataReader, PBUnknownFields, NSMutableArray, NSString;
@protocol NSCopying;


#import "GEOPBTransitArtwork.h"
#import "GEOEVChargeInfo.h"
#import "GEOEVStepInfo.h"
#import "GEOEVStateInfo.h"
#import "GEONameInfo.h"
#import "GEOInstructionSet.h"
#import "GEOStopWaypoint.h"
#import "GEOTimeCheckpoints.h"

@interface GEOStep : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    *GEOJunctionElement _junctionElements;
    NSUInteger _junctionElementsCount;
    NSUInteger _junctionElementsSpace;
    GEOPBTransitArtwork *_artworkOverride;
    GEOEVChargeInfo *_chargingInfo;
    GEOEVStepInfo *_evInfo;
    GEOEVStateInfo *_evStateInfo;
    GEONameInfo *_exitNumber;
    NSMutableArray *_guidanceEvents;
    GEOInstructionSet *_instructionSet;
    NSString *_instructions;
    NSMutableArray *_maneuverNames;
    NSString *_notice;
    NSMutableArray *_roadDescriptions;
    NSMutableArray *_signposts;
    GEOStopWaypoint *_stopWaypoint;
    GEOTimeCheckpoints *_timeCheckpoints;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    unsigned int _arrivalParameterIndex;
    unsigned int _distanceCm;
    float _distanceMeters;
    unsigned int _distance;
    unsigned int _expectedTime;
    int _hintFirstAnnouncementZilchIndex;
    int _junctionType;
    int _maneuverEndBasicIndex;
    int _maneuverEndZilchIndex;
    int _maneuverStartZilchIndex;
    int _maneuverType;
    unsigned int _maneuverStartPointOffsetCm;
    int _overrideDrivingSide;
    int _overrideTransportType;
    unsigned int _stepID;
    unsigned int _zilchPathIndex;
    BOOL _endsOnFwy;
    BOOL _maneuverLaneGuidanceSuppressed;
    BOOL _shouldChainManeuver;
    BOOL _stayOn;
    BOOL _toFreeway;
    BOOL _tollAhead;
    BOOL _tollPrior;
    ? _flags;
}


@property (nonatomic) unsigned int arrivalParameterIndex;
@property (retain, nonatomic) GEOPBTransitArtwork *artworkOverride;
@property (retain, nonatomic) GEOEVChargeInfo *chargingInfo;
@property (nonatomic) unsigned int distance;
@property (nonatomic) unsigned int distanceCm;
@property (nonatomic) float distanceMeters;
@property (nonatomic) BOOL endsOnFwy;
@property (retain, nonatomic) GEOEVStepInfo *evInfo;
@property (retain, nonatomic) GEOEVStateInfo *evStateInfo;
@property (retain, nonatomic) GEONameInfo *exitNumber;
@property (nonatomic) unsigned int expectedTime;
@property (retain, nonatomic) NSMutableArray *guidanceEvents;
@property (nonatomic) BOOL hasArrivalParameterIndex;
@property (readonly, nonatomic) BOOL hasArtworkOverride;
@property (readonly, nonatomic) BOOL hasChargingInfo;
@property (nonatomic) BOOL hasDistance;
@property (nonatomic) BOOL hasDistanceCm;
@property (nonatomic) BOOL hasDistanceMeters;
@property (nonatomic) BOOL hasEndsOnFwy;
@property (readonly, nonatomic) BOOL hasEvInfo;
@property (readonly, nonatomic) BOOL hasEvStateInfo;
@property (readonly, nonatomic) BOOL hasExitNumber;
@property (nonatomic) BOOL hasExpectedTime;
@property (readonly, nonatomic) BOOL hasHintFirstAnnouncementIndex;
@property (nonatomic) BOOL hasHintFirstAnnouncementZilchIndex;
@property (readonly, nonatomic) BOOL hasInstructionSet;
@property (readonly, nonatomic) BOOL hasInstructions;
@property (nonatomic) BOOL hasJunctionType;
@property (nonatomic) BOOL hasManeuverEndBasicIndex;
@property (nonatomic) BOOL hasManeuverEndZilchIndex;
@property (nonatomic) BOOL hasManeuverLaneGuidanceSuppressed;
@property (nonatomic) BOOL hasManeuverStartPointOffsetCm;
@property (nonatomic) BOOL hasManeuverStartZilchIndex;
@property (nonatomic) BOOL hasManeuverType;
@property (readonly, nonatomic) BOOL hasNotice;
@property (nonatomic) BOOL hasOverrideDrivingSide;
@property (nonatomic) BOOL hasOverrideTransportType;
@property (nonatomic) BOOL hasShouldChainManeuver;
@property (nonatomic) BOOL hasStayOn;
@property (nonatomic) BOOL hasStepID;
@property (readonly, nonatomic) BOOL hasStopWaypoint;
@property (readonly, nonatomic) BOOL hasTimeCheckpoints;
@property (nonatomic) BOOL hasToFreeway;
@property (nonatomic) BOOL hasTollAhead;
@property (nonatomic) BOOL hasTollPrior;
@property (nonatomic) BOOL hasZilchPathIndex;
@property (readonly, nonatomic) int hintFirstAnnouncementIndex;
@property (nonatomic) int hintFirstAnnouncementZilchIndex;
@property (retain, nonatomic) GEOInstructionSet *instructionSet;
@property (retain, nonatomic) NSString *instructions;
@property (readonly, nonatomic) *GEOJunctionElement junctionElements;
@property (readonly, nonatomic) NSUInteger junctionElementsCount;
@property (nonatomic) int junctionType;
@property (nonatomic) int maneuverEndBasicIndex;
@property (readonly, nonatomic) unsigned int maneuverEndIndex;
@property (nonatomic) int maneuverEndZilchIndex;
@property (nonatomic) BOOL maneuverLaneGuidanceSuppressed;
@property (retain, nonatomic) NSMutableArray *maneuverNames;
@property (readonly, nonatomic) unsigned int maneuverStartIndex;
@property (nonatomic) unsigned int maneuverStartPointOffsetCm;
@property (nonatomic) int maneuverStartZilchIndex;
@property (nonatomic) int maneuverType;
@property (retain, nonatomic) NSString *notice;
@property (nonatomic) int overrideDrivingSide;
@property (nonatomic) int overrideTransportType;
@property (retain, nonatomic) NSMutableArray *roadDescriptions;
@property (nonatomic) BOOL shouldChainManeuver;
@property (retain, nonatomic) NSMutableArray *signposts;
@property (nonatomic) BOOL stayOn;
@property (nonatomic) unsigned int stepID;
@property (retain, nonatomic) GEOStopWaypoint *stopWaypoint;
@property (retain, nonatomic) GEOTimeCheckpoints *timeCheckpoints;
@property (nonatomic) BOOL toFreeway;
@property (nonatomic) BOOL tollAhead;
@property (nonatomic) BOOL tollPrior;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;
@property (nonatomic) unsigned int zilchPathIndex;


+(BOOL)isValid:(id)arg0 ;
+(Class)guidanceEventType;
+(Class)maneuverNameType;
+(Class)roadDescriptionType;
+(Class)signpostType;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)maneuverIsHighwayExit;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)continueInstructionForSpoken;
-(id)continueInstructionsForSignView;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)executionInstructionsForSpoken;
-(id)firstNameInfo;
-(id)guidanceEventAtIndex:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)initialInstructionForSpoken;
-(id)intersectionNameInfo;
-(id)jsonRepresentation;
-(id)junctionTypeAsString:(int)arg0 ;
-(id)maneuverDescription;
-(id)maneuverNameAtIndex:(NSUInteger)arg0 ;
-(id)maneuverTypeAsString:(int)arg0 ;
-(id)mergeInstructionsForSignView;
-(id)normalInstructionsForSignView;
-(id)overrideDrivingSideAsString:(int)arg0 ;
-(id)overrideTransportTypeAsString:(int)arg0 ;
-(id)prepareInstructionForSpoken;
-(id)proceedInstructionForSpoken;
-(id)roadDescriptionAtIndex:(NSUInteger)arg0 ;
-(id)roadName;
-(id)signpostAtIndex:(NSUInteger)arg0 ;
-(int)StringAsJunctionType:(id)arg0 ;
-(int)StringAsManeuverType:(id)arg0 ;
-(int)StringAsOverrideDrivingSide:(id)arg0 ;
-(int)StringAsOverrideTransportType:(id)arg0 ;
-(struct GEOJunctionElement )junctionElementAtIndex:(NSUInteger)arg0 ;
-(void)addGuidanceEvent:(id)arg0 ;
-(void)addJunctionElement:(struct GEOJunctionElement )arg0 ;
-(void)addManeuverName:(id)arg0 ;
-(void)addRoadDescription:(id)arg0 ;
-(void)addSignpost:(id)arg0 ;
-(void)clearGuidanceEvents;
-(void)clearJunctionElements;
-(void)clearManeuverNames;
-(void)clearRoadDescriptions;
-(void)clearSignposts;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)shieldInfo:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif