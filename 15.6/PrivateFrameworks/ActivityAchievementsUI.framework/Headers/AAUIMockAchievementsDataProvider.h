// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AAUIMOCKACHIEVEMENTSDATAPROVIDER_H
#define AAUIMOCKACHIEVEMENTSDATAPROVIDER_H

@class NSArray;


#import "AAUIAchievementsDataProvider.h"

@interface AAUIMockAchievementsDataProvider : AAUIAchievementsDataProvider {
    NSArray *_achievements;
}




-(NSInteger)numberOfItemsInSection:(NSInteger)arg0 ;
-(NSInteger)numberOfSections;
-(id)_ACHDateComponentIntervalWithMonthOffset:(NSUInteger)arg0 ;
-(id)_achievementForTemplate:(id)arg0 earnedInstanceCount:(NSInteger)arg1 earnedInstanceOffset:(NSInteger)arg2 earnedInstanceValue:(NSInteger)arg3 goalValue:(NSInteger)arg4 progressValue:(NSInteger)arg5 ;
-(id)_currentMonthlyChallengeAchievementForTemplate:(id)arg0 localizableSuffix:(id)arg1 goalValue:(NSInteger)arg2 progressValue:(NSInteger)arg3 isEarned:(BOOL)arg4 ;
-(id)_dateComponentsWithDayOffset:(NSInteger)arg0 ;
-(id)_fitnessUIAssetsURLWithKey:(id)arg0 value:(id)arg1 ;
-(id)_monthStringFromTemplateName:(id)arg0 ;
-(id)achievementAtIndexPath:(id)arg0 ;
-(id)headerStringForSection:(NSInteger)arg0 isRecentAndRelevant:(BOOL)arg1 ;
-(id)init;
-(id)recentAndRelevantAchievementAtIndexPath:(id)arg0 ;
-(void)addInitialLoadObserver:(id)arg0 ;
-(void)addMainSectionObserver:(id)arg0 ;
-(void)addRecentAndRelevantSectionObserver:(id)arg0 ;
-(void)removeInitialLoadObserver:(id)arg0 ;
-(void)removeMainSectionObserver:(id)arg0 ;
-(void)removeRecentAndRelevantSectionObserver:(id)arg0 ;
-(void)startFetching;
-(void)stopFetching;


@end


#endif