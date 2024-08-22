// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAHLWORKOUTGOAL_H
#define SAHLWORKOUTGOAL_H

@class NSString;
@protocol SAAceSerializable;


#import "AceObject.h"

@interface SAHLWorkoutGoal : AceObject <SAAceSerializable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat goalValue;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *workoutGoalUnitType;


+(id)workoutGoal;
+(id)workoutGoalWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif