// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDAWDHEALTHKITCOACHINGFEATURES_H
#define HDAWDHEALTHKITCOACHINGFEATURES_H

@class PBCodable;
@protocol NSCopying;



@interface HDAWDHealthKitCoachingFeatures : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) unsigned int activeCalories; // ivar: _activeCalories
@property (nonatomic) unsigned int automotive; // ivar: _automotive
@property (nonatomic) unsigned int briskMinutes; // ivar: _briskMinutes
@property (nonatomic) unsigned int cycling; // ivar: _cycling
@property (nonatomic) unsigned int duration; // ivar: _duration
@property (nonatomic) BOOL hasActiveCalories;
@property (nonatomic) BOOL hasAutomotive;
@property (nonatomic) BOOL hasBriskMinutes;
@property (nonatomic) BOOL hasCycling;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) BOOL hasHeartRate;
@property (nonatomic) BOOL hasOther;
@property (nonatomic) BOOL hasRunning;
@property (nonatomic) BOOL hasUnknown;
@property (nonatomic) BOOL hasWalking;
@property (nonatomic) BOOL hasWorkout;
@property (nonatomic) unsigned int heartRate; // ivar: _heartRate
@property (nonatomic) unsigned int other; // ivar: _other
@property (nonatomic) unsigned int running; // ivar: _running
@property (nonatomic) unsigned int unknown; // ivar: _unknown
@property (nonatomic) unsigned int walking; // ivar: _walking
@property (nonatomic) unsigned int workout; // ivar: _workout


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