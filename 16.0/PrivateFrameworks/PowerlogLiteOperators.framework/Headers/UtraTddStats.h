// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UTRATDDSTATS_H
#define UTRATDDSTATS_H

@class PBCodable;
@protocol NSCopying;



@interface UtraTddStats : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) unsigned int activeDuration; // ivar: _activeDuration
@property (nonatomic) unsigned int deepSleepCycleCount; // ivar: _deepSleepCycleCount
@property (nonatomic) unsigned int deepSleepDuration; // ivar: _deepSleepDuration
@property (nonatomic) unsigned int duration; // ivar: _duration
@property (nonatomic) BOOL hasActiveDuration;
@property (nonatomic) BOOL hasDeepSleepCycleCount;
@property (nonatomic) BOOL hasDeepSleepDuration;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) BOOL hasNormalSleepDuration;
@property (nonatomic) BOOL hasStartTime;
@property (nonatomic) BOOL hasThClkOpt0Duration;
@property (nonatomic) BOOL hasThClkOpt1Duration;
@property (nonatomic) BOOL hasVoltHighDuration;
@property (nonatomic) BOOL hasVoltLowDuration;
@property (nonatomic) BOOL hasVoltMedDuration;
@property (nonatomic) BOOL hasZspClkOpt0Duration;
@property (nonatomic) BOOL hasZspClkOpt1Duration;
@property (nonatomic) BOOL hasZspClkOpt2Duration;
@property (nonatomic) BOOL hasZspClkOpt3Duration;
@property (nonatomic) BOOL hasZspClkOpt4Duration;
@property (nonatomic) BOOL hasZspClkOpt5Duration;
@property (nonatomic) unsigned int normalSleepDuration; // ivar: _normalSleepDuration
@property (nonatomic) NSUInteger startTime; // ivar: _startTime
@property (nonatomic) unsigned int thClkOpt0Duration; // ivar: _thClkOpt0Duration
@property (nonatomic) unsigned int thClkOpt1Duration; // ivar: _thClkOpt1Duration
@property (nonatomic) unsigned int voltHighDuration; // ivar: _voltHighDuration
@property (nonatomic) unsigned int voltLowDuration; // ivar: _voltLowDuration
@property (nonatomic) unsigned int voltMedDuration; // ivar: _voltMedDuration
@property (nonatomic) unsigned int zspClkOpt0Duration; // ivar: _zspClkOpt0Duration
@property (nonatomic) unsigned int zspClkOpt1Duration; // ivar: _zspClkOpt1Duration
@property (nonatomic) unsigned int zspClkOpt2Duration; // ivar: _zspClkOpt2Duration
@property (nonatomic) unsigned int zspClkOpt3Duration; // ivar: _zspClkOpt3Duration
@property (nonatomic) unsigned int zspClkOpt4Duration; // ivar: _zspClkOpt4Duration
@property (nonatomic) unsigned int zspClkOpt5Duration; // ivar: _zspClkOpt5Duration


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