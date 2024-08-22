// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDACTIVITYAWDACTIVITYFITNESSDAILYEVENT_H
#define HDACTIVITYAWDACTIVITYFITNESSDAILYEVENT_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;



@interface HDActivityAWDActivityFitnessDailyEvent : PBCodable <NSCopying>

 {
    ? _standEventMinutesSinceMidnightRoundedTo10s;
    ? _has;
}


@property (retain, nonatomic) NSMutableArray *exerciseMinuteHours; // ivar: _exerciseMinuteHours
@property (nonatomic) BOOL hasMonthsSinceFirstWatchUsage;
@property (nonatomic) BOOL hasMoveRingCompletionPercentage;
@property (nonatomic) BOOL hasTimestamp;
@property (readonly, nonatomic) BOOL hasUserToken;
@property (nonatomic) NSInteger monthsSinceFirstWatchUsage; // ivar: _monthsSinceFirstWatchUsage
@property (nonatomic) NSInteger moveRingCompletionPercentage; // ivar: _moveRingCompletionPercentage
@property (readonly, nonatomic) *NSInteger standEventMinutesSinceMidnightRoundedTo10s;
@property (readonly, nonatomic) NSUInteger standEventMinutesSinceMidnightRoundedTo10sCount;
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp
@property (retain, nonatomic) NSString *userToken; // ivar: _userToken


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSInteger)standEventMinutesSinceMidnightRoundedTo10AtIndex:(NSUInteger)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)exerciseMinuteHoursAtIndex:(NSUInteger)arg0 ;
-(void)addExerciseMinuteHours:(id)arg0 ;
-(void)addStandEventMinutesSinceMidnightRoundedTo10:(NSInteger)arg0 ;
-(void)clearExerciseMinuteHours;
-(void)clearStandEventMinutesSinceMidnightRoundedTo10s;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif