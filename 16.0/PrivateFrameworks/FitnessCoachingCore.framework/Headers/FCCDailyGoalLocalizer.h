// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCCDAILYGOALLOCALIZER_H
#define FCCDAILYGOALLOCALIZER_H


#import <Foundation/Foundation.h>


@interface FCCDailyGoalLocalizer : NSObject



+(id)_keyForEventType:(id)arg0 aboveAverage:(BOOL)arg1 ;
+(id)_keyForGoalType:(NSInteger)arg0 ;
+(id)_keyForGoalTypes:(id)arg0 ;
+(id)_keyForTimeOfDayAtDate:(id)arg0 ;
+(id)_localizeCount:(CGFloat)arg0 forKey:(id)arg1 experienceType:(NSUInteger)arg2 ;
+(id)localizedAppName;
+(id)localizedDescriptionForGoalsCompleted:(id)arg0 singleGoalExceeded:(BOOL)arg1 date:(id)arg2 firstName:(id)arg3 isWheelchairUser:(BOOL)arg4 experienceType:(NSUInteger)arg5 isStandalone:(BOOL)arg6 ;
+(id)localizedDescriptionForIncompleteGoalTypes:(id)arg0 percentComplete:(CGFloat)arg1 value:(CGFloat)arg2 valueRemaining:(CGFloat)arg3 date:(id)arg4 firstName:(id)arg5 moveUnit:(id)arg6 isWheelchairUser:(BOOL)arg7 progressEventIdentifier:(id)arg8 minutesToWalkToCompleteRing:(NSInteger)arg9 hasCurrentMoveStreak:(BOOL)arg10 experienceType:(NSUInteger)arg11 isStandalone:(BOOL)arg12 ;
+(id)localizedTitleForGoalsCompleted:(id)arg0 isWheelchairUser:(BOOL)arg1 experienceType:(NSUInteger)arg2 ;
+(id)localizedTitleForIncompleteGoalTypes:(id)arg0 percentComplete:(CGFloat)arg1 valueRemaining:(CGFloat)arg2 progressEventIdentifier:(id)arg3 experienceType:(NSUInteger)arg4 isStandalone:(BOOL)arg5 ;


@end


#endif