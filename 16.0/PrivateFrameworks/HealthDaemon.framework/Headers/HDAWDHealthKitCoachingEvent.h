// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDAWDHEALTHKITCOACHINGEVENT_H
#define HDAWDHEALTHKITCOACHINGEVENT_H

@class PBCodable;
@protocol NSCopying;


#import "HDAWDHealthKitCoachingFeatureGroup.h"

@interface HDAWDHealthKitCoachingEvent : PBCodable <NSCopying>

 {
    ? _goalTypes;
    ? _has;
}


@property (nonatomic) unsigned int dismissReason; // ivar: _dismissReason
@property (nonatomic) NSUInteger duration; // ivar: _duration
@property (nonatomic) NSUInteger eventTimestamp; // ivar: _eventTimestamp
@property (nonatomic) unsigned int eventType; // ivar: _eventType
@property (retain, nonatomic) HDAWDHealthKitCoachingFeatureGroup *features; // ivar: _features
@property (readonly, nonatomic) *unsigned int goalTypes;
@property (readonly, nonatomic) NSUInteger goalTypesCount;
@property (nonatomic) BOOL hasDismissReason;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) BOOL hasEventTimestamp;
@property (nonatomic) BOOL hasEventType;
@property (readonly, nonatomic) BOOL hasFeatures;
@property (nonatomic) BOOL hasNewGoal;
@property (nonatomic) BOOL hasRecommendedGoal;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned int newGoal; // ivar: _newGoal
@property (nonatomic) unsigned int recommendedGoal; // ivar: _recommendedGoal
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(unsigned int)goalTypeAtIndex:(NSUInteger)arg0 ;
-(void)addGoalType:(unsigned int)arg0 ;
-(void)clearGoalTypes;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif