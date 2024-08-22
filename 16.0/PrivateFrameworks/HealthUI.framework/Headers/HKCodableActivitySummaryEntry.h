// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKCODABLEACTIVITYSUMMARYENTRY_H
#define HKCODABLEACTIVITYSUMMARYENTRY_H

@class PBCodable;
@protocol NSCopying;


#import "HKCodableQuantity.h"
#import "HKCodableDateComponents.h"

@interface HKCodableActivitySummaryEntry : PBCodable <NSCopying>

 {
    APPLE_169 _has;
}


@property (retain, nonatomic) HKCodableQuantity *activeEnergyBurned; // ivar: _activeEnergyBurned
@property (retain, nonatomic) HKCodableQuantity *activeEnergyBurnedGoal; // ivar: _activeEnergyBurnedGoal
@property (nonatomic) NSInteger activityMoveMode; // ivar: _activityMoveMode
@property (retain, nonatomic) HKCodableQuantity *appleExerciseTime; // ivar: _appleExerciseTime
@property (retain, nonatomic) HKCodableQuantity *appleExerciseTimeGoal; // ivar: _appleExerciseTimeGoal
@property (retain, nonatomic) HKCodableQuantity *appleMoveTime; // ivar: _appleMoveTime
@property (retain, nonatomic) HKCodableQuantity *appleMoveTimeGoal; // ivar: _appleMoveTimeGoal
@property (retain, nonatomic) HKCodableQuantity *appleStandHours; // ivar: _appleStandHours
@property (retain, nonatomic) HKCodableQuantity *appleStandHoursGoal; // ivar: _appleStandHoursGoal
@property (retain, nonatomic) HKCodableDateComponents *gregorianDateComponents; // ivar: _gregorianDateComponents
@property (readonly, nonatomic) BOOL hasActiveEnergyBurned;
@property (readonly, nonatomic) BOOL hasActiveEnergyBurnedGoal;
@property (nonatomic) BOOL hasActivityMoveMode;
@property (readonly, nonatomic) BOOL hasAppleExerciseTime;
@property (readonly, nonatomic) BOOL hasAppleExerciseTimeGoal;
@property (readonly, nonatomic) BOOL hasAppleMoveTime;
@property (readonly, nonatomic) BOOL hasAppleMoveTimeGoal;
@property (readonly, nonatomic) BOOL hasAppleStandHours;
@property (readonly, nonatomic) BOOL hasAppleStandHoursGoal;
@property (readonly, nonatomic) BOOL hasGregorianDateComponents;


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