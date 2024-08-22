// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GERASTATS_H
#define GERASTATS_H

@class PBCodable;
@protocol NSCopying;



@interface GeraStats : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) unsigned int duration; // ivar: _duration
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) BOOL hasSleepCycleCount;
@property (nonatomic) BOOL hasSleepDuration;
@property (nonatomic) BOOL hasStartTime;
@property (nonatomic) unsigned int sleepCycleCount; // ivar: _sleepCycleCount
@property (nonatomic) unsigned int sleepDuration; // ivar: _sleepDuration
@property (nonatomic) NSUInteger startTime; // ivar: _startTime


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