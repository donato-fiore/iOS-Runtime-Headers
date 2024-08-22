// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UTRAFDDSTATS_H
#define UTRAFDDSTATS_H

@class PBCodable;
@protocol NSCopying;



@interface UtraFddStats : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) unsigned int activeDuration; // ivar: _activeDuration
@property (nonatomic) unsigned int clkHighDuration; // ivar: _clkHighDuration
@property (nonatomic) unsigned int clkLowDuration; // ivar: _clkLowDuration
@property (nonatomic) unsigned int clkMedDuration; // ivar: _clkMedDuration
@property (nonatomic) unsigned int deepSleepCycleCount; // ivar: _deepSleepCycleCount
@property (nonatomic) unsigned int deepSleepDuration; // ivar: _deepSleepDuration
@property (nonatomic) unsigned int duration; // ivar: _duration
@property (nonatomic) BOOL hasActiveDuration;
@property (nonatomic) BOOL hasClkHighDuration;
@property (nonatomic) BOOL hasClkLowDuration;
@property (nonatomic) BOOL hasClkMedDuration;
@property (nonatomic) BOOL hasDeepSleepCycleCount;
@property (nonatomic) BOOL hasDeepSleepDuration;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) BOOL hasLightSleepCycleCount;
@property (nonatomic) BOOL hasLightSleepDuration;
@property (nonatomic) BOOL hasStartTime;
@property (nonatomic) BOOL hasVoltHighDuration;
@property (nonatomic) BOOL hasVoltLowDuration;
@property (nonatomic) BOOL hasVoltMedDuration;
@property (nonatomic) unsigned int lightSleepCycleCount; // ivar: _lightSleepCycleCount
@property (nonatomic) unsigned int lightSleepDuration; // ivar: _lightSleepDuration
@property (nonatomic) NSUInteger startTime; // ivar: _startTime
@property (nonatomic) unsigned int voltHighDuration; // ivar: _voltHighDuration
@property (nonatomic) unsigned int voltLowDuration; // ivar: _voltLowDuration
@property (nonatomic) unsigned int voltMedDuration; // ivar: _voltMedDuration


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