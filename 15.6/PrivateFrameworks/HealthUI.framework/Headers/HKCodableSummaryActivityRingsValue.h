// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKCODABLESUMMARYACTIVITYRINGSVALUE_H
#define HKCODABLESUMMARYACTIVITYRINGSVALUE_H

@class PBCodable;
@protocol NSCopying;


#import "HKCodableQuantity.h"

@interface HKCodableSummaryActivityRingsValue : PBCodable <NSCopying>

 {
    ? _has;
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
@property (nonatomic) CGFloat creationDate; // ivar: _creationDate
@property (nonatomic) CGFloat dateData; // ivar: _dateData
@property (nonatomic) CGFloat endDate; // ivar: _endDate
@property (readonly, nonatomic) BOOL hasActiveEnergyBurned;
@property (readonly, nonatomic) BOOL hasActiveEnergyBurnedGoal;
@property (nonatomic) BOOL hasActivityMoveMode;
@property (readonly, nonatomic) BOOL hasAppleExerciseTime;
@property (readonly, nonatomic) BOOL hasAppleExerciseTimeGoal;
@property (readonly, nonatomic) BOOL hasAppleMoveTime;
@property (readonly, nonatomic) BOOL hasAppleMoveTimeGoal;
@property (readonly, nonatomic) BOOL hasAppleStandHours;
@property (readonly, nonatomic) BOOL hasAppleStandHoursGoal;
@property (nonatomic) BOOL hasCreationDate;
@property (nonatomic) BOOL hasDateData;
@property (nonatomic) BOOL hasEndDate;
@property (nonatomic) BOOL hasStartDate;
@property (nonatomic) CGFloat startDate; // ivar: _startDate


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