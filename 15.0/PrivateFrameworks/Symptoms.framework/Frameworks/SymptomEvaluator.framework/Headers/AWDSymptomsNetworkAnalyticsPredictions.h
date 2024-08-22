// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AWDSYMPTOMSNETWORKANALYTICSPREDICTIONS_H
#define AWDSYMPTOMSNETWORKANALYTICSPREDICTIONS_H

@class PBCodable;
@protocol NSCopying;



@interface AWDSymptomsNetworkAnalyticsPredictions : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) unsigned int calendarTypeMarker; // ivar: _calendarTypeMarker
@property (nonatomic) unsigned int dayAlikeGroups; // ivar: _dayAlikeGroups
@property (nonatomic) BOOL hasCalendarTypeMarker;
@property (nonatomic) BOOL hasDayAlikeGroups;
@property (nonatomic) BOOL hasLifetimeOldestItemSecs;
@property (nonatomic) BOOL hasModelGraphPullups;
@property (nonatomic) BOOL hasModelRecalls;
@property (nonatomic) BOOL hasNetworkType;
@property (nonatomic) BOOL hasPredictionErrorOver24hr1000;
@property (nonatomic) BOOL hasPredictionQueries;
@property (nonatomic) BOOL hasTimeSinceLastTrainedSecs;
@property (nonatomic) BOOL hasTimeZoneMarker;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasTrainingCompletionCode;
@property (nonatomic) BOOL hasTrainingProgress1000;
@property (nonatomic) BOOL hasUniquePredictionClients;
@property (nonatomic) NSUInteger lifetimeOldestItemSecs; // ivar: _lifetimeOldestItemSecs
@property (nonatomic) NSUInteger modelGraphPullups; // ivar: _modelGraphPullups
@property (nonatomic) NSUInteger modelRecalls; // ivar: _modelRecalls
@property (nonatomic) int networkType; // ivar: _networkType
@property (nonatomic) unsigned int predictionErrorOver24hr1000; // ivar: _predictionErrorOver24hr1000
@property (nonatomic) NSUInteger predictionQueries; // ivar: _predictionQueries
@property (nonatomic) NSUInteger timeSinceLastTrainedSecs; // ivar: _timeSinceLastTrainedSecs
@property (nonatomic) unsigned int timeZoneMarker; // ivar: _timeZoneMarker
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp
@property (nonatomic) int trainingCompletionCode; // ivar: _trainingCompletionCode
@property (nonatomic) unsigned int trainingProgress1000; // ivar: _trainingProgress1000
@property (nonatomic) NSUInteger uniquePredictionClients; // ivar: _uniquePredictionClients


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)networkTypeAsString:(int)arg0 ;
-(id)trainingCompletionCodeAsString:(int)arg0 ;
-(int)StringAsNetworkType:(id)arg0 ;
-(int)StringAsTrainingCompletionCode:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif