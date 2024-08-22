// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOTRANSITSTEP_H
#define GEOTRANSITSTEP_H

@class PBCodable, PBDataReader, PBUnknownFields, NSMutableArray, NSData, NSString;
@protocol GEOCompanionCompatibility, NSCopying, GEOTransitVehicleEntries;


#import "GEOAdvisoriesInfo.h"
#import "GEOTransitArrivalInfo.h"
#import "GEOTransitBaseFare.h"
#import "GEOTransitBoardingInfo.h"
#import "GEOInstructionSet.h"
#import "GEOLatLng.h"
#import "GEOTransitScheduleInfo.h"
#import "GEOTransitSurcharge.h"
#import "GEOTransitVehiclePositionInfo.h"

@interface GEOTransitStep : PBCodable <GEOCompanionCompatibility, NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    ? _routeDetailsPrimaryArtworkIndexs;
    ? _steppingArtworkIndexs;
    GEOAdvisoriesInfo *_advisoriesInfo;
    GEOTransitArrivalInfo *_arrivalInfo;
    NSMutableArray *_badges;
    GEOTransitBaseFare *_baseFare;
    GEOTransitBoardingInfo *_boardingInfo;
    NSMutableArray *_enterExitInfos;
    GEOInstructionSet *_instructions;
    GEOLatLng *_location;
    NSMutableArray *_regionAlerts;
    GEOTransitScheduleInfo *_scheduleInfo;
    GEOTransitSurcharge *_surcharge;
    NSMutableArray *_transferInfos;
    NSData *_updateIdentifier;
    NSMutableArray *_vehicleInfos;
    GEOTransitVehiclePositionInfo *_vehiclePositionInfo;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    unsigned int _accessPointZilchIndex;
    unsigned int _defaultVehicleInfoIndex;
    unsigned int _departureFrequency;
    unsigned int _distanceInMeters;
    unsigned int _endingStopIndex;
    unsigned int _listTransitIncidentMessageIndex;
    int _maneuverType;
    unsigned int _routeDetailsSecondaryArtworkIndex;
    int _significanceForEndNode;
    unsigned int _startingStopIndex;
    unsigned int _startingTime;
    unsigned int _steppingTransitIncidentMessageIndex;
    unsigned int _walkingIndex;
    unsigned int _zilchIndex;
    BOOL _prioritizeTilesPreloading;
    ? _flags;
}


@property (nonatomic) unsigned int accessPointZilchIndex;
@property (retain, nonatomic) GEOAdvisoriesInfo *advisoriesInfo;
@property (retain, nonatomic) GEOTransitArrivalInfo *arrivalInfo;
@property (retain, nonatomic) NSMutableArray *badges;
@property (retain, nonatomic) GEOTransitBaseFare *baseFare;
@property (retain, nonatomic) GEOTransitBoardingInfo *boardingInfo;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned int defaultVehicleInfoIndex;
@property (nonatomic) unsigned int departureFrequency;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned int distanceInMeters;
@property (nonatomic) unsigned int endingStopIndex;
@property (retain, nonatomic) NSMutableArray *enterExitInfos;
@property (nonatomic) BOOL hasAccessPointZilchIndex;
@property (readonly, nonatomic) BOOL hasAdvisoriesInfo;
@property (readonly, nonatomic) BOOL hasArrivalInfo;
@property (readonly, nonatomic) BOOL hasBaseFare;
@property (readonly, nonatomic) BOOL hasBoardingInfo;
@property (nonatomic) BOOL hasDefaultVehicleInfoIndex;
@property (nonatomic) BOOL hasDepartureFrequency;
@property (nonatomic) BOOL hasDistanceInMeters;
@property (nonatomic) BOOL hasEndingStopIndex;
@property (readonly, nonatomic) BOOL hasInstructions;
@property (nonatomic) BOOL hasListTransitIncidentMessageIndex;
@property (readonly, nonatomic) BOOL hasLocation;
@property (nonatomic) BOOL hasManeuverType;
@property (nonatomic) BOOL hasPrioritizeTilesPreloading;
@property (nonatomic) BOOL hasRouteDetailsSecondaryArtworkIndex;
@property (readonly, nonatomic) BOOL hasScheduleInfo;
@property (nonatomic) BOOL hasSignificanceForEndNode;
@property (nonatomic) BOOL hasStartingStopIndex;
@property (nonatomic) BOOL hasStartingTime;
@property (nonatomic) BOOL hasSteppingTransitIncidentMessageIndex;
@property (readonly, nonatomic) BOOL hasSurcharge;
@property (readonly, nonatomic) BOOL hasUpdateIdentifier;
@property (readonly, nonatomic) BOOL hasVehiclePositionInfo;
@property (nonatomic) BOOL hasWalkingIndex;
@property (nonatomic) BOOL hasZilchIndex;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) GEOInstructionSet *instructions;
@property (nonatomic) unsigned int listTransitIncidentMessageIndex;
@property (retain, nonatomic) GEOLatLng *location;
@property (nonatomic) int maneuverType;
@property (nonatomic) BOOL prioritizeTilesPreloading;
@property (retain, nonatomic) NSMutableArray *regionAlerts;
@property (readonly, nonatomic) *unsigned int routeDetailsPrimaryArtworkIndexs;
@property (readonly, nonatomic) NSUInteger routeDetailsPrimaryArtworkIndexsCount;
@property (nonatomic) unsigned int routeDetailsSecondaryArtworkIndex;
@property (retain, nonatomic) GEOTransitScheduleInfo *scheduleInfo;
@property (nonatomic) int significanceForEndNode;
@property (nonatomic) unsigned int startingStopIndex;
@property (nonatomic) unsigned int startingTime;
@property (readonly, nonatomic) *unsigned int steppingArtworkIndexs;
@property (readonly, nonatomic) NSUInteger steppingArtworkIndexsCount;
@property (nonatomic) unsigned int steppingTransitIncidentMessageIndex;
@property (readonly) Class superclass;
@property (retain, nonatomic) GEOTransitSurcharge *surcharge;
@property (retain, nonatomic) NSMutableArray *transferInfos;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;
@property (retain, nonatomic) NSData *updateIdentifier;
@property (readonly, nonatomic) NSObject<GEOTransitVehicleEntries> *vehicleEntries;
@property (retain, nonatomic) NSMutableArray *vehicleInfos;
@property (retain, nonatomic) GEOTransitVehiclePositionInfo *vehiclePositionInfo;
@property (nonatomic) unsigned int walkingIndex;
@property (nonatomic) unsigned int zilchIndex;


+(BOOL)isValid:(id)arg0 ;
+(Class)badgeType;
+(Class)enterExitInfoType;
+(Class)regionAlertType;
+(Class)transferInfoType;
+(Class)vehicleInfoType;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSInteger)segmentTypeForManeuver;
-(id)badgeAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)enterExitInfoAtIndex:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)instanceCompatibleWithProtocolVersion:(NSUInteger)arg0 ;
-(id)jsonRepresentation;
-(id)maneuverTypeAsString:(int)arg0 ;
-(id)regionAlertAtIndex:(NSUInteger)arg0 ;
-(id)significanceForEndNodeAsString:(int)arg0 ;
-(id)transferInfoAtIndex:(NSUInteger)arg0 ;
-(id)vehicleInfoAtIndex:(NSUInteger)arg0 ;
-(int)StringAsManeuverType:(id)arg0 ;
-(int)StringAsSignificanceForEndNode:(id)arg0 ;
-(unsigned int)routeDetailsPrimaryArtworkIndexAtIndex:(NSUInteger)arg0 ;
-(unsigned int)steppingArtworkIndexAtIndex:(NSUInteger)arg0 ;
-(void)addBadge:(id)arg0 ;
-(void)addEnterExitInfo:(id)arg0 ;
-(void)addRegionAlert:(id)arg0 ;
-(void)addRouteDetailsPrimaryArtworkIndex:(unsigned int)arg0 ;
-(void)addSteppingArtworkIndex:(unsigned int)arg0 ;
-(void)addTransferInfo:(id)arg0 ;
-(void)addVehicleInfo:(id)arg0 ;
-(void)clearBadges;
-(void)clearEnterExitInfos;
-(void)clearRegionAlerts;
-(void)clearRouteDetailsPrimaryArtworkIndexs;
-(void)clearSteppingArtworkIndexs;
-(void)clearTransferInfos;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)clearVehicleInfos;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)updateTransitStep:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif