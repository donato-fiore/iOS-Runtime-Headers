// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDAWDHEALTHKITACTIVITYRINGEVENT_H
#define HDAWDHEALTHKITACTIVITYRINGEVENT_H

@class PBCodable;
@protocol NSCopying;



@interface HDAWDHealthKitActivityRingEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) unsigned int activeSeconds; // ivar: _activeSeconds
@property (nonatomic) unsigned int age; // ivar: _age
@property (nonatomic) unsigned int biologicalSex; // ivar: _biologicalSex
@property (nonatomic) unsigned int briskMinutes; // ivar: _briskMinutes
@property (nonatomic) unsigned int energyBurned; // ivar: _energyBurned
@property (nonatomic) unsigned int energyBurnedGoal; // ivar: _energyBurnedGoal
@property (nonatomic) NSUInteger eventTimestamp; // ivar: _eventTimestamp
@property (nonatomic) BOOL hasActiveSeconds;
@property (nonatomic) BOOL hasAge;
@property (nonatomic) BOOL hasBiologicalSex;
@property (nonatomic) BOOL hasBriskMinutes;
@property (nonatomic) BOOL hasEnergyBurned;
@property (nonatomic) BOOL hasEnergyBurnedGoal;
@property (nonatomic) BOOL hasEventTimestamp;
@property (nonatomic) BOOL hasHeight;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasWeight;
@property (nonatomic) unsigned int height; // ivar: _height
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp
@property (nonatomic) unsigned int weight; // ivar: _weight


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif