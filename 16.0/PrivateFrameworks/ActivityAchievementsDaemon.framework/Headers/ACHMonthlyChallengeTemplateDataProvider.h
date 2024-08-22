// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ACHMONTHLYCHALLENGETEMPLATEDATAPROVIDER_H
#define ACHMONTHLYCHALLENGETEMPLATEDATAPROVIDER_H

@class NSDate, NSCalendar, HKHealthStore, HDProfile;
@protocol ACHAchievementStoring;

#import <Foundation/Foundation.h>

#import "ACHActivitySummaryIterator.h"
#import "ACHActivitySummaryUtility.h"
#import "ACHEarnedInstanceStore.h"
#import "ACHTemplateStore.h"

@interface ACHMonthlyChallengeTemplateDataProvider : NSObject {
    NSDate *_currentDateOverride;
    NSCalendar *_currentCalendarOverride;
}


@property (weak, nonatomic) NSObject<ACHAchievementStoring> *achievementStore; // ivar: _achievementStore
@property (retain, nonatomic) ACHActivitySummaryIterator *activitySummaryIterator; // ivar: _activitySummaryIterator
@property (weak, nonatomic) ACHActivitySummaryUtility *activitySummaryUtility; // ivar: _activitySummaryUtility
@property (retain, nonatomic) NSCalendar *currentCalendar; // ivar: _currentCalendar
@property (retain, nonatomic) NSDate *currentDate; // ivar: _currentDate
@property (retain, nonatomic) ACHEarnedInstanceStore *earnedInstanceStore; // ivar: _earnedInstanceStore
@property (retain, nonatomic) HKHealthStore *healthStore; // ivar: _healthStore
@property (readonly, nonatomic) BOOL isUsingNewAwardingSystem;
@property (weak, nonatomic) HDProfile *profile; // ivar: _profile
@property (retain, nonatomic) ACHTemplateStore *templateStore; // ivar: _templateStore


-(BOOL)hasMinimumActiveDays;
-(BOOL)hasMinimumActiveDaysWithError:(*id)arg0 ;
-(BOOL)isDate:(id)arg0 betweenStartDate:(id)arg1 andEndDate:(id)arg2 ;
-(BOOL)isWheelchairUser;
-(BOOL)isWheelchairUserWithError:(*id)arg0 ;
-(BOOL)monthlyChallengeExistsForMonth:(id)arg0 ;
-(NSInteger)currentActivityMoveMode;
-(NSInteger)currentActivityMoveModeWithError:(*id)arg0 ;
-(NSInteger)numberOfEarnedInstancesOfTemplateWithUniqueName:(id)arg0 inDateComponentInterval:(id)arg1 withCalendar:(id)arg2 error:(*id)arg3 ;
-(NSUInteger)currentExperienceType;
-(NSUInteger)currentExperienceTypeWithError:(*id)arg0 ;
-(NSUInteger)monthlyChallengeTypeForMonth:(id)arg0 ;
-(id)existingMonthlyChallengeTemplates;
-(id)initWithHealthStore:(id)arg0 earnedInstanceStore:(id)arg1 templateStore:(id)arg2 activitySummaryIterator:(id)arg3 ;
-(id)initWithProfile:(id)arg0 achievementStore:(id)arg1 activitySummaryUtility:(id)arg2 ;


@end


#endif