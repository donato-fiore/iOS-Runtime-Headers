// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ACHMONTHLYCHALLENGETEMPLATEDATAPROVIDER_H
#define ACHMONTHLYCHALLENGETEMPLATEDATAPROVIDER_H

@class NSDate, NSCalendar, HDProfile;

#import <Foundation/Foundation.h>

#import "ACHAchievementStore.h"
#import "ACHActivitySummaryUtility.h"

@interface ACHMonthlyChallengeTemplateDataProvider : NSObject {
    NSDate *_currentDateOverride;
    NSCalendar *_currentCalendarOverride;
}


@property (weak, nonatomic) ACHAchievementStore *achievementStore; // ivar: _achievementStore
@property (weak, nonatomic) ACHActivitySummaryUtility *activitySummaryUtility; // ivar: _activitySummaryUtility
@property (retain, nonatomic) NSCalendar *currentCalendar; // ivar: _currentCalendar
@property (retain, nonatomic) NSDate *currentDate; // ivar: _currentDate
@property (weak, nonatomic) HDProfile *profile; // ivar: _profile


-(BOOL)hasMinimumActiveDays;
-(BOOL)isDate:(id)arg0 betweenStartDate:(id)arg1 andEndDate:(id)arg2 ;
-(BOOL)isWheelchairUser;
-(BOOL)monthlyChallengeExistsForMonth:(id)arg0 ;
-(NSInteger)currentActivityMoveMode;
-(NSInteger)numberOfEarnedInstancesOfTemplateWithUniqueName:(id)arg0 inDateComponentInterval:(id)arg1 withCalendar:(id)arg2 ;
-(NSUInteger)currentExperienceType;
-(NSUInteger)monthlyChallengeTypeForMonth:(id)arg0 ;
-(id)existingMonthlyChallengeTemplates;
-(id)initWithProfile:(id)arg0 achievementStore:(id)arg1 activitySummaryUtility:(id)arg2 ;


@end


#endif