// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AWDPROACTIVEAPPPREDICTIONSESSION_H
#define AWDPROACTIVEAPPPREDICTIONSESSION_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;



@interface AWDProactiveAppPredictionSession : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *aBGroup; // ivar: _aBGroup
@property (retain, nonatomic) NSString *aPREngagementType; // ivar: _aPREngagementType
@property (retain, nonatomic) NSString *aPRFeedbackSource; // ivar: _aPRFeedbackSource
@property (retain, nonatomic) NSString *aPRSiriExperience; // ivar: _aPRSiriExperience
@property (retain, nonatomic) NSMutableArray *appSequences; // ivar: _appSequences
@property (nonatomic) int consumerSubType; // ivar: _consumerSubType
@property (retain, nonatomic) NSString *consumerType; // ivar: _consumerType
@property (nonatomic) int coreMotionCurrentMotionLaunches; // ivar: _coreMotionCurrentMotionLaunches
@property (nonatomic) int coreMotionLaunches; // ivar: _coreMotionLaunches
@property (nonatomic) int currentLOIType; // ivar: _currentLOIType
@property (nonatomic) int dayOfWeek; // ivar: _dayOfWeek
@property (nonatomic) int engagedApp; // ivar: _engagedApp
@property (readonly, nonatomic) BOOL hasABGroup;
@property (readonly, nonatomic) BOOL hasAPREngagementType;
@property (readonly, nonatomic) BOOL hasAPRFeedbackSource;
@property (readonly, nonatomic) BOOL hasAPRSiriExperience;
@property (nonatomic) BOOL hasConsumerSubType;
@property (readonly, nonatomic) BOOL hasConsumerType;
@property (nonatomic) BOOL hasCoreMotionCurrentMotionLaunches;
@property (nonatomic) BOOL hasCoreMotionLaunches;
@property (nonatomic) BOOL hasCurrentLOIType;
@property (nonatomic) BOOL hasDayOfWeek;
@property (nonatomic) BOOL hasEngagedApp;
@property (nonatomic) BOOL hasInAirplaneMode;
@property (readonly, nonatomic) BOOL hasIntentType;
@property (nonatomic) BOOL hasIsInternalBuild;
@property (nonatomic) BOOL hasLocationDistanceFromGym;
@property (nonatomic) BOOL hasLocationDistanceFromHome;
@property (nonatomic) BOOL hasLocationDistanceFromSchool;
@property (nonatomic) BOOL hasLocationDistanceFromWork;
@property (nonatomic) BOOL hasOutcome;
@property (nonatomic) BOOL hasPredictionCacheAge;
@property (readonly, nonatomic) BOOL hasSessionId;
@property (nonatomic) BOOL hasSessionLogVersion;
@property (nonatomic) BOOL hasTimeOfDayInterval;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasTotalAirplaneModeLaunches;
@property (nonatomic) BOOL hasTotalCurrentDayOfWeekLaunches;
@property (nonatomic) BOOL hasTotalDayOfWeekLaunches;
@property (nonatomic) BOOL hasTotalLaunchSequences;
@property (nonatomic) BOOL hasTotalLaunches;
@property (nonatomic) BOOL hasTotalSSIDLaunches;
@property (nonatomic) BOOL hasTotalSpotlightLaunches;
@property (nonatomic) BOOL hasTotalSpotlightTimeOfDayLaunches;
@property (nonatomic) BOOL hasTotalTimeOfDayLaunches;
@property (nonatomic) BOOL hasTotalTrendingLaunches;
@property (nonatomic) BOOL hasTotalWifiLaunches;
@property (nonatomic) BOOL inAirplaneMode; // ivar: _inAirplaneMode
@property (retain, nonatomic) NSString *intentType; // ivar: _intentType
@property (nonatomic) BOOL isInternalBuild; // ivar: _isInternalBuild
@property (nonatomic) int locationDistanceFromGym; // ivar: _locationDistanceFromGym
@property (nonatomic) int locationDistanceFromHome; // ivar: _locationDistanceFromHome
@property (nonatomic) int locationDistanceFromSchool; // ivar: _locationDistanceFromSchool
@property (nonatomic) int locationDistanceFromWork; // ivar: _locationDistanceFromWork
@property (nonatomic) int outcome; // ivar: _outcome
@property (nonatomic) int predictionCacheAge; // ivar: _predictionCacheAge
@property (retain, nonatomic) NSString *sessionId; // ivar: _sessionId
@property (nonatomic) int sessionLogVersion; // ivar: _sessionLogVersion
@property (nonatomic) int timeOfDayInterval; // ivar: _timeOfDayInterval
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp
@property (nonatomic) int totalAirplaneModeLaunches; // ivar: _totalAirplaneModeLaunches
@property (nonatomic) int totalCurrentDayOfWeekLaunches; // ivar: _totalCurrentDayOfWeekLaunches
@property (nonatomic) int totalDayOfWeekLaunches; // ivar: _totalDayOfWeekLaunches
@property (nonatomic) int totalLaunchSequences; // ivar: _totalLaunchSequences
@property (nonatomic) int totalLaunches; // ivar: _totalLaunches
@property (nonatomic) int totalSSIDLaunches; // ivar: _totalSSIDLaunches
@property (nonatomic) int totalSpotlightLaunches; // ivar: _totalSpotlightLaunches
@property (nonatomic) int totalSpotlightTimeOfDayLaunches; // ivar: _totalSpotlightTimeOfDayLaunches
@property (nonatomic) int totalTimeOfDayLaunches; // ivar: _totalTimeOfDayLaunches
@property (nonatomic) int totalTrendingLaunches; // ivar: _totalTrendingLaunches
@property (nonatomic) int totalWifiLaunches; // ivar: _totalWifiLaunches


+(Class)appSequenceType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)appSequenceAtIndex:(NSUInteger)arg0 ;
-(id)consumerSubTypeAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)currentLOITypeAsString:(int)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)outcomeAsString:(int)arg0 ;
-(int)StringAsConsumerSubType:(id)arg0 ;
-(int)StringAsCurrentLOIType:(id)arg0 ;
-(int)StringAsOutcome:(id)arg0 ;
-(void)addAppSequence:(id)arg0 ;
-(void)clearAppSequences;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif