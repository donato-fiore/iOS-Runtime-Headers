// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GETACITIVITYSUMMARYINTENTRESPONSE_H
#define GETACITIVITYSUMMARYINTENTRESPONSE_H

@class INIntentResponse, NSMeasurement;



@interface GetAcitivitySummaryIntentResponse : INIntentResponse

@property (nonatomic, copy) NSMeasurement *activeEnergyBurned;
@property (nonatomic, copy) NSMeasurement *activeEnergyBurnedGoal;
@property (nonatomic) CGFloat appleExerciseTime;
@property (nonatomic) CGFloat appleExerciseTimeGoal;
@property (nonatomic) CGFloat appleMoveTime;
@property (nonatomic) CGFloat appleMoveTimeGoal;
@property (nonatomic) CGFloat appleStandHours;
@property (nonatomic) CGFloat appleStandHoursGoal;
@property (nonatomic) NSInteger code; // ivar: code


-(id)init;
-(id)initWithCode:(NSInteger)arg0 userActivity:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;


@end


#endif