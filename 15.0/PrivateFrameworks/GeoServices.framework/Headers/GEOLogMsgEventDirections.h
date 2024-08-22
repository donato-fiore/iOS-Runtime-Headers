// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOLOGMSGEVENTDIRECTIONS_H
#define GEOLOGMSGEVENTDIRECTIONS_H

@class PBCodable, PBDataReader, NSMutableArray, NSString;
@protocol NSCopying;


#import "GEOLocation.h"
#import "GEOLatLng.h"

@interface GEOLogMsgEventDirections : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    GEONavigationAudioFeedback _navigationAudioFeedback;
    GEOSessionID _navSessionId;
    NSMutableArray *_directionsFeedbacks;
    NSMutableArray *_durationInNavigationModes;
    CGFloat _durationOfTrip;
    NSString *_evChargingMode;
    NSString *_evConsumptionModel;
    GEOLocation *_finalLocation;
    GEOLatLng *_tripOrigin;
    NSMutableArray *_waypoints;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _activeNavMode;
    unsigned int _originalEta;
    unsigned int _stateOfChargeAtDestActual;
    unsigned int _stateOfChargeAtDestPredicted;
    unsigned int _stateOfChargeAtOrigin;
    unsigned int _stateOfChargeDiffAtDest;
    int _voiceGuidanceLevel;
    BOOL _hFPEnabled;
    BOOL _acceptedCyclingWorkout;
    BOOL _arWalkingUsedInNavigation;
    BOOL _arWalkingUsedInRoutePlanning;
    BOOL _arrivedAtDestination;
    BOOL _batteryDied;
    BOOL _chargingStopAdded;
    BOOL _isBadEvExperience;
    BOOL _isCoarseLocationUsed;
    BOOL _isCyclingNlgAvailable;
    BOOL _isEvSampleTrip;
    BOOL _isSiriEngaged;
    BOOL _isVlfImprovementUsed;
    BOOL _preArrival;
    ? _flags;
}


@property (nonatomic) BOOL acceptedCyclingWorkout;
@property (nonatomic) int activeNavMode;
@property (nonatomic) BOOL arWalkingUsedInNavigation;
@property (nonatomic) BOOL arWalkingUsedInRoutePlanning;
@property (nonatomic) BOOL arrivedAtDestination;
@property (nonatomic) BOOL batteryDied;
@property (nonatomic) BOOL chargingStopAdded;
@property (retain, nonatomic) NSMutableArray *directionsFeedbacks;
@property (retain, nonatomic) NSMutableArray *durationInNavigationModes;
@property (nonatomic) CGFloat durationOfTrip;
@property (retain, nonatomic) NSString *evChargingMode;
@property (retain, nonatomic) NSString *evConsumptionModel;
@property (retain, nonatomic) GEOLocation *finalLocation;
@property (nonatomic) BOOL hFPEnabled;
@property (nonatomic) BOOL hasAcceptedCyclingWorkout;
@property (nonatomic) BOOL hasActiveNavMode;
@property (nonatomic) BOOL hasArWalkingUsedInNavigation;
@property (nonatomic) BOOL hasArWalkingUsedInRoutePlanning;
@property (nonatomic) BOOL hasArrivedAtDestination;
@property (nonatomic) BOOL hasBatteryDied;
@property (nonatomic) BOOL hasChargingStopAdded;
@property (nonatomic) BOOL hasDurationOfTrip;
@property (readonly, nonatomic) BOOL hasEvChargingMode;
@property (readonly, nonatomic) BOOL hasEvConsumptionModel;
@property (readonly, nonatomic) BOOL hasFinalLocation;
@property (nonatomic) BOOL hasHFPEnabled;
@property (nonatomic) BOOL hasIsBadEvExperience;
@property (nonatomic) BOOL hasIsCoarseLocationUsed;
@property (nonatomic) BOOL hasIsCyclingNlgAvailable;
@property (nonatomic) BOOL hasIsEvSampleTrip;
@property (nonatomic) BOOL hasIsSiriEngaged;
@property (nonatomic) BOOL hasIsVlfImprovementUsed;
@property (nonatomic) BOOL hasNavSessionId;
@property (nonatomic) BOOL hasNavigationAudioFeedback;
@property (nonatomic) BOOL hasOriginalEta;
@property (nonatomic) BOOL hasPreArrival;
@property (nonatomic) BOOL hasStateOfChargeAtDestActual;
@property (nonatomic) BOOL hasStateOfChargeAtDestPredicted;
@property (nonatomic) BOOL hasStateOfChargeAtOrigin;
@property (nonatomic) BOOL hasStateOfChargeDiffAtDest;
@property (readonly, nonatomic) BOOL hasTripOrigin;
@property (nonatomic) BOOL hasVoiceGuidanceLevel;
@property (nonatomic) BOOL isBadEvExperience;
@property (nonatomic) BOOL isCoarseLocationUsed;
@property (nonatomic) BOOL isCyclingNlgAvailable;
@property (nonatomic) BOOL isEvSampleTrip;
@property (nonatomic) BOOL isSiriEngaged;
@property (nonatomic) BOOL isVlfImprovementUsed;
@property (nonatomic) GEOSessionID navSessionId;
@property (nonatomic) GEONavigationAudioFeedback navigationAudioFeedback;
@property (nonatomic) unsigned int originalEta;
@property (nonatomic) BOOL preArrival;
@property (nonatomic) unsigned int stateOfChargeAtDestActual;
@property (nonatomic) unsigned int stateOfChargeAtDestPredicted;
@property (nonatomic) unsigned int stateOfChargeAtOrigin;
@property (nonatomic) unsigned int stateOfChargeDiffAtDest;
@property (retain, nonatomic) GEOLatLng *tripOrigin;
@property (nonatomic) int voiceGuidanceLevel;
@property (retain, nonatomic) NSMutableArray *waypoints;


+(BOOL)isValid:(id)arg0 ;
+(Class)directionsFeedbackType;
+(Class)durationInNavigationModeType;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)activeNavModeAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)directionsFeedbackAtIndex:(NSUInteger)arg0 ;
-(id)durationInNavigationModeAtIndex:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)voiceGuidanceLevelAsString:(int)arg0 ;
-(id)waypointsAtIndex:(NSUInteger)arg0 ;
-(int)StringAsActiveNavMode:(id)arg0 ;
-(int)StringAsVoiceGuidanceLevel:(id)arg0 ;
-(void)addDirectionsFeedback:(id)arg0 ;
-(void)addDurationInNavigationMode:(id)arg0 ;
-(void)addWaypoints:(id)arg0 ;
-(void)clearDirectionsFeedbacks;
-(void)clearDurationInNavigationModes;
-(void)clearSensitiveFields:(NSUInteger)arg0 ;
-(void)clearWaypoints;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif