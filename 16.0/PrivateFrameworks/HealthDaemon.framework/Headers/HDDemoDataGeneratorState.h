// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDDEMODATAGENERATORSTATE_H
#define HDDEMODATAGENERATORSTATE_H

@class NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "HDDemoDataGeneratorWorkoutConfiguration.h"

@interface HDDemoDataGeneratorState : NSObject <NSSecureCoding>

 {
    BOOL _createdFromNSKeyedUnarchiver;
}


@property (readonly, nonatomic) NSInteger calendarDay;
@property (readonly, nonatomic, getter=isCoolingDown) BOOL coolingDown;
@property (readonly, nonatomic, getter=isCoreTraining) BOOL coreTraining; // ivar: _coreTraining
@property (readonly, nonatomic) NSDate *currentDate;
@property (nonatomic) NSInteger currentDay; // ivar: _currentDay
@property (nonatomic) CGFloat currentTime; // ivar: _currentTime
@property (readonly, nonatomic, getter=isCycling) BOOL cycling;
@property (readonly, nonatomic, getter=isDancing) BOOL dancing; // ivar: _dancing
@property (readonly, nonatomic, getter=isDoingElliptical) BOOL doingElliptical;
@property (readonly, nonatomic, getter=isDoingHIIT) BOOL doingHIIT;
@property (readonly, nonatomic, getter=isDoingYoga) BOOL doingYoga;
@property (nonatomic) CGFloat endTime; // ivar: _endTime
@property (readonly, nonatomic, getter=isExercising) BOOL exercising;
@property (nonatomic, getter=isFinished) BOOL finished; // ivar: _finished
@property (nonatomic, getter=isFirstRun) BOOL firstRun; // ivar: _firstRun
@property (retain, nonatomic) NSDate *firstSampleDate; // ivar: _firstSampleDate
@property (readonly, nonatomic, getter=isFunctionalStrengthTraining) BOOL functionalStrengthTraining; // ivar: _functionalStrengthTraining
@property (readonly, nonatomic, getter=isHiking) BOOL hiking;
@property (retain, nonatomic) NSDate *lastRunDate; // ivar: _lastRunDate
@property (retain, nonatomic) NSDate *lastSampleDate; // ivar: _lastSampleDate
@property (readonly, nonatomic, getter=isRunning) BOOL running;
@property (nonatomic) CGFloat startTime; // ivar: _startTime
@property (readonly, nonatomic, getter=isSwimming) BOOL swimming;
@property (readonly, nonatomic, getter=isWalking) BOOL walking;
@property (retain, nonatomic) HDDemoDataGeneratorWorkoutConfiguration *workoutConfiguration; // ivar: _workoutConfiguration


+(BOOL)supportsSecureCoding;
-(BOOL)createdFromNSKeyedUnarchiver;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif