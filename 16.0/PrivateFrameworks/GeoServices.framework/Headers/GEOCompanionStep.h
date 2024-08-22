// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOCOMPANIONSTEP_H
#define GEOCOMPANIONSTEP_H

@class PBCodable, PBDataReader, NSMutableArray, NSString, NSData;
@protocol GEOCompanionCompatibility, NSCopying;


#import "GEOCompanionCyclingStep.h"
#import "GEOCompanionDriveStep.h"
#import "GEOCompanionFerryStep.h"
#import "GEOCompanionGenericStep.h"
#import "GEOStopWaypoint.h"
#import "GEOCompanionWalkStep.h"

@interface GEOCompanionStep : PBCodable <GEOCompanionCompatibility, NSCopying>

 {
    PBDataReader *_reader;
    GEOCompanionCyclingStep *_cyclingStep;
    GEOCompanionDriveStep *_driveStep;
    GEOCompanionFerryStep *_ferryStep;
    GEOCompanionGenericStep *_genericStep;
    NSMutableArray *_guidanceEvents;
    NSMutableArray *_instructionWithAlternatives;
    NSString *_listInstruction;
    NSMutableArray *_roadDescriptions;
    NSString *_roadName;
    GEOStopWaypoint *_stopWaypoint;
    NSData *_updateID;
    GEOCompanionWalkStep *_walkStep;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    float _distanceMeters;
    unsigned int _distance;
    unsigned int _endCoordinateIndex;
    unsigned int _legID;
    unsigned int _maneuverStartCoordinateIndex;
    unsigned int _startCoordinateIndex;
    unsigned int _stepID;
    unsigned int _time;
    ? _flags;
}


@property (retain, nonatomic) GEOCompanionCyclingStep *cyclingStep;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned int distance;
@property (nonatomic) float distanceMeters;
@property (retain, nonatomic) GEOCompanionDriveStep *driveStep;
@property (nonatomic) unsigned int endCoordinateIndex;
@property (retain, nonatomic) GEOCompanionFerryStep *ferryStep;
@property (retain, nonatomic) GEOCompanionGenericStep *genericStep;
@property (retain, nonatomic) NSMutableArray *guidanceEvents;
@property (readonly, nonatomic) BOOL hasCyclingStep;
@property (nonatomic) BOOL hasDistance;
@property (nonatomic) BOOL hasDistanceMeters;
@property (readonly, nonatomic) BOOL hasDriveStep;
@property (nonatomic) BOOL hasEndCoordinateIndex;
@property (readonly, nonatomic) BOOL hasFerryStep;
@property (readonly, nonatomic) BOOL hasGenericStep;
@property (nonatomic) BOOL hasLegID;
@property (readonly, nonatomic) BOOL hasListInstruction;
@property (nonatomic) BOOL hasManeuverStartCoordinateIndex;
@property (readonly, nonatomic) BOOL hasRoadName;
@property (nonatomic) BOOL hasStartCoordinateIndex;
@property (nonatomic) BOOL hasStepID;
@property (readonly, nonatomic) BOOL hasStopWaypoint;
@property (nonatomic) BOOL hasTime;
@property (readonly, nonatomic) BOOL hasUpdateID;
@property (readonly, nonatomic) BOOL hasWalkStep;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableArray *instructionWithAlternatives;
@property (nonatomic) unsigned int legID;
@property (retain, nonatomic) NSString *listInstruction;
@property (nonatomic) unsigned int maneuverStartCoordinateIndex;
@property (retain, nonatomic) NSMutableArray *roadDescriptions;
@property (retain, nonatomic) NSString *roadName;
@property (nonatomic) unsigned int startCoordinateIndex;
@property (nonatomic) unsigned int stepID;
@property (retain, nonatomic) GEOStopWaypoint *stopWaypoint;
@property (readonly) Class superclass;
@property (nonatomic) unsigned int time;
@property (retain, nonatomic) NSData *updateID;
@property (retain, nonatomic) GEOCompanionWalkStep *walkStep;


+(BOOL)isValid:(id)arg0 ;
+(Class)guidanceEventType;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)geoStep;
-(id)guidanceEventAtIndex:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)initWithStep:(id)arg0 route:(id)arg1 stringFormatter:(id)arg2 ;
-(id)instanceCompatibleWithProtocolVersion:(NSUInteger)arg0 ;
-(id)instructionWithAlternativesAtIndex:(NSUInteger)arg0 ;
-(id)jsonRepresentation;
-(id)maneuverStep;
-(id)roadDescriptionsAtIndex:(NSUInteger)arg0 ;
-(void)addGuidanceEvent:(id)arg0 ;
-(void)addInstructionWithAlternatives:(id)arg0 ;
-(void)addRoadDescriptions:(id)arg0 ;
-(void)clearGuidanceEvents;
-(void)clearInstructionWithAlternatives;
-(void)clearRoadDescriptions;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif