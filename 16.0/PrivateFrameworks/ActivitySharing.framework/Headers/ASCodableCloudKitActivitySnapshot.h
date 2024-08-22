// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASCODABLECLOUDKITACTIVITYSNAPSHOT_H
#define ASCODABLECLOUDKITACTIVITYSNAPSHOT_H

@class PBCodable, NSData;
@protocol NSCopying;


#import "ASCodableCloudKitSample.h"

@interface ASCodableCloudKitActivitySnapshot : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) CGFloat activeHours; // ivar: _activeHours
@property (nonatomic) CGFloat activeHoursGoal; // ivar: _activeHoursGoal
@property (nonatomic) NSInteger amm; // ivar: _amm
@property (nonatomic) CGFloat briskMinutes; // ivar: _briskMinutes
@property (nonatomic) CGFloat briskMinutesGoal; // ivar: _briskMinutesGoal
@property (nonatomic) CGFloat energyBurned; // ivar: _energyBurned
@property (nonatomic) CGFloat energyBurnedGoal; // ivar: _energyBurnedGoal
@property (nonatomic) BOOL hasActiveHours;
@property (nonatomic) BOOL hasActiveHoursGoal;
@property (nonatomic) BOOL hasAmm;
@property (nonatomic) BOOL hasBriskMinutes;
@property (nonatomic) BOOL hasBriskMinutesGoal;
@property (nonatomic) BOOL hasEnergyBurned;
@property (nonatomic) BOOL hasEnergyBurnedGoal;
@property (nonatomic) BOOL hasMmg;
@property (nonatomic) BOOL hasMmv;
@property (nonatomic) BOOL hasPushCount;
@property (readonly, nonatomic) BOOL hasSample;
@property (nonatomic) BOOL hasSnapshotIndex;
@property (readonly, nonatomic) BOOL hasSourceUUID;
@property (nonatomic) BOOL hasStepCount;
@property (nonatomic) BOOL hasTimeZoneOffsetFromUTCForNoon;
@property (nonatomic) BOOL hasWalkingAndRunningDistance;
@property (nonatomic) BOOL hasWheelchairUse;
@property (nonatomic) CGFloat mmg; // ivar: _mmg
@property (nonatomic) CGFloat mmv; // ivar: _mmv
@property (nonatomic) CGFloat pushCount; // ivar: _pushCount
@property (retain, nonatomic) ASCodableCloudKitSample *sample; // ivar: _sample
@property (nonatomic) NSInteger snapshotIndex; // ivar: _snapshotIndex
@property (retain, nonatomic) NSData *sourceUUID; // ivar: _sourceUUID
@property (nonatomic) CGFloat stepCount; // ivar: _stepCount
@property (nonatomic) NSInteger timeZoneOffsetFromUTCForNoon; // ivar: _timeZoneOffsetFromUTCForNoon
@property (nonatomic) CGFloat walkingAndRunningDistance; // ivar: _walkingAndRunningDistance
@property (nonatomic) NSInteger wheelchairUse; // ivar: _wheelchairUse


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