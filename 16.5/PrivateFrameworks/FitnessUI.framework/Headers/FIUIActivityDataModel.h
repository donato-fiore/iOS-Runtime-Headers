// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FIUIACTIVITYDATAMODEL_H
#define FIUIACTIVITYDATAMODEL_H

@class NSArray, HKQuantity, NSDate;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface FIUIActivityDataModel : NSObject <NSCopying>



@property (copy, nonatomic) NSArray *activeEnergyChartData; // ivar: _activeEnergyChartData
@property (retain, nonatomic) HKQuantity *activeEnergyGoal; // ivar: _activeEnergyGoal
@property (retain, nonatomic) HKQuantity *activeEnergyTotal; // ivar: _activeEnergyTotal
@property (nonatomic) NSInteger activityMoveMode; // ivar: _activityMoveMode
@property (copy, nonatomic) NSArray *appleExerciseTimeChartData; // ivar: _appleExerciseTimeChartData
@property (nonatomic) CGFloat appleExerciseTimeGoal; // ivar: _appleExerciseTimeGoal
@property (nonatomic) CGFloat appleExerciseTimeTotal; // ivar: _appleExerciseTimeTotal
@property (copy, nonatomic) NSArray *appleMoveTimeChartData; // ivar: _appleMoveTimeChartData
@property (nonatomic) CGFloat appleMoveTimeGoal; // ivar: _appleMoveTimeGoal
@property (nonatomic) CGFloat appleMoveTimeTotal; // ivar: _appleMoveTimeTotal
@property (copy, nonatomic) NSArray *appleStandHourChartData; // ivar: _appleStandHourChartData
@property (nonatomic) NSInteger appleStandHoursGoal; // ivar: _appleStandHoursGoal
@property (nonatomic) NSInteger appleStandHoursTotal; // ivar: _appleStandHoursTotal
@property (nonatomic) BOOL areFitnessAppsRestricted; // ivar: _areFitnessAppsRestricted
@property (nonatomic) BOOL databaseLoading; // ivar: _databaseLoading
@property (retain, nonatomic) NSDate *date; // ivar: _date
@property (readonly, nonatomic) BOOL deviceLocked; // ivar: _deviceLocked
@property (readonly, nonatomic) BOOL userHasDoneActivitySetup;
@property (nonatomic) BOOL wheelchairUser; // ivar: _wheelchairUser


+(id)formattingManager;
+(id)idealizedModel;
+(id)lockedModel;
-(CGFloat)activeEnergyCompletionPercentage;
-(CGFloat)appleExerciseTimeCompletionPercentage;
-(CGFloat)appleMoveTimeCompletionPercentage;
-(CGFloat)appleStandHourCompletionPercentage;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)loggingString;


@end


#endif