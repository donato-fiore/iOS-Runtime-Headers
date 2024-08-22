// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAHLSTARTWORKOUT_H
#define SAHLSTARTWORKOUT_H

@class NSString;


#import "SADomainCommand.h"
#import "SAHLWorkoutGoal.h"
#import "SAHLWorkoutType.h"

@interface SAHLStartWorkout : SADomainCommand

@property (nonatomic) BOOL isOpenGoal;
@property (nonatomic) BOOL skipActivitySetup;
@property (retain, nonatomic) SAHLWorkoutGoal *workoutGoal;
@property (retain, nonatomic) SAHLWorkoutType *workoutType;
@property (copy, nonatomic) NSString *workoutUserMode;


+(id)startWorkout;
+(id)startWorkoutWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif