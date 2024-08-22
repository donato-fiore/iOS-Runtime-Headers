// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AWDPROACTIVEAPPPREDICTIONINTENTPREDICTIONSESSION_H
#define AWDPROACTIVEAPPPREDICTIONINTENTPREDICTIONSESSION_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;


#import "AWDProactiveAppPredictionAppActionSequence.h"
#import "AWDProactiveAppPredictionAppLaunchSequence.h"

@interface AWDProactiveAppPredictionIntentPredictionSession : PBCodable <NSCopying>

 {
    ? _engagedActionCacheIndices;
    ? _has;
}


@property (retain, nonatomic) NSString *abGroup; // ivar: _abGroup
@property (retain, nonatomic) NSMutableArray *actionDatas; // ivar: _actionDatas
@property (nonatomic) int appActionCoreMotionCurrentMotionLaunches; // ivar: _appActionCoreMotionCurrentMotionLaunches
@property (retain, nonatomic) AWDProactiveAppPredictionAppActionSequence *appActionSequence; // ivar: _appActionSequence
@property (nonatomic) int appForAllActionsCoreMotionCurrentMotionLaunches; // ivar: _appForAllActionsCoreMotionCurrentMotionLaunches
@property (retain, nonatomic) AWDProactiveAppPredictionAppLaunchSequence *appSequence; // ivar: _appSequence
@property (nonatomic) int consumerSubType; // ivar: _consumerSubType
@property (nonatomic) int currentLOIType; // ivar: _currentLOIType
@property (nonatomic) int dayOfWeek; // ivar: _dayOfWeek
@property (readonly, nonatomic) *int engagedActionCacheIndices;
@property (readonly, nonatomic) NSUInteger engagedActionCacheIndicesCount;
@property (nonatomic) int engagementType; // ivar: _engagementType
@property (readonly, nonatomic) BOOL hasAbGroup;
@property (nonatomic) BOOL hasAppActionCoreMotionCurrentMotionLaunches;
@property (readonly, nonatomic) BOOL hasAppActionSequence;
@property (nonatomic) BOOL hasAppForAllActionsCoreMotionCurrentMotionLaunches;
@property (readonly, nonatomic) BOOL hasAppSequence;
@property (nonatomic) BOOL hasConsumerSubType;
@property (nonatomic) BOOL hasCurrentLOIType;
@property (nonatomic) BOOL hasDayOfWeek;
@property (nonatomic) BOOL hasEngagementType;
@property (nonatomic) BOOL hasInAirplaneMode;
@property (nonatomic) BOOL hasIntentDonationDelay;
@property (nonatomic) BOOL hasIsInternalBuild;
@property (nonatomic) BOOL hasLocationDistanceFromHome;
@property (nonatomic) BOOL hasLocationDistanceFromWork;
@property (nonatomic) BOOL hasLogType;
@property (nonatomic) BOOL hasPredictionAge;
@property (readonly, nonatomic) BOOL hasSessionId;
@property (nonatomic) BOOL hasSessionLogVersion;
@property (nonatomic) BOOL hasTimeOfDayInterval;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasTotalAppActionAirplaneModeLaunches;
@property (nonatomic) BOOL hasTotalAppActionCoarseTimeOfDayLaunches;
@property (nonatomic) BOOL hasTotalAppActionCurrentDayOfWeekLaunches;
@property (nonatomic) BOOL hasTotalAppActionTimeOfDayLaunches;
@property (nonatomic) BOOL hasTotalAppForAllActionTimeOfDayLaunches;
@property (nonatomic) BOOL hasTotalAppForAllActionsAirplaneModeLaunches;
@property (nonatomic) BOOL hasTotalAppForAllActionsCoarseTimeOfDayLaunches;
@property (nonatomic) BOOL hasTotalAppForAllActionsCurrentDayOfWeekLaunches;
@property (nonatomic) BOOL hasUiFeedbackDelay;
@property (nonatomic) BOOL inAirplaneMode; // ivar: _inAirplaneMode
@property (nonatomic) int intentDonationDelay; // ivar: _intentDonationDelay
@property (nonatomic) BOOL isInternalBuild; // ivar: _isInternalBuild
@property (nonatomic) int locationDistanceFromHome; // ivar: _locationDistanceFromHome
@property (nonatomic) int locationDistanceFromWork; // ivar: _locationDistanceFromWork
@property (nonatomic) int logType; // ivar: _logType
@property (nonatomic) int predictionAge; // ivar: _predictionAge
@property (retain, nonatomic) NSString *sessionId; // ivar: _sessionId
@property (nonatomic) int sessionLogVersion; // ivar: _sessionLogVersion
@property (nonatomic) int timeOfDayInterval; // ivar: _timeOfDayInterval
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp
@property (nonatomic) int totalAppActionAirplaneModeLaunches; // ivar: _totalAppActionAirplaneModeLaunches
@property (nonatomic) int totalAppActionCoarseTimeOfDayLaunches; // ivar: _totalAppActionCoarseTimeOfDayLaunches
@property (nonatomic) int totalAppActionCurrentDayOfWeekLaunches; // ivar: _totalAppActionCurrentDayOfWeekLaunches
@property (nonatomic) int totalAppActionTimeOfDayLaunches; // ivar: _totalAppActionTimeOfDayLaunches
@property (nonatomic) int totalAppForAllActionTimeOfDayLaunches; // ivar: _totalAppForAllActionTimeOfDayLaunches
@property (nonatomic) int totalAppForAllActionsAirplaneModeLaunches; // ivar: _totalAppForAllActionsAirplaneModeLaunches
@property (nonatomic) int totalAppForAllActionsCoarseTimeOfDayLaunches; // ivar: _totalAppForAllActionsCoarseTimeOfDayLaunches
@property (nonatomic) int totalAppForAllActionsCurrentDayOfWeekLaunches; // ivar: _totalAppForAllActionsCurrentDayOfWeekLaunches
@property (nonatomic) int uiFeedbackDelay; // ivar: _uiFeedbackDelay


+(Class)actionDataType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)actionDataAtIndex:(NSUInteger)arg0 ;
-(id)consumerSubTypeAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)currentLOITypeAsString:(int)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)engagementTypeAsString:(int)arg0 ;
-(int)StringAsConsumerSubType:(id)arg0 ;
-(int)StringAsCurrentLOIType:(id)arg0 ;
-(int)StringAsEngagementType:(id)arg0 ;
-(int)engagedActionCacheIndicesAtIndex:(NSUInteger)arg0 ;
-(void)addActionData:(id)arg0 ;
-(void)addEngagedActionCacheIndices:(int)arg0 ;
-(void)clearActionDatas;
-(void)clearEngagedActionCacheIndices;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif