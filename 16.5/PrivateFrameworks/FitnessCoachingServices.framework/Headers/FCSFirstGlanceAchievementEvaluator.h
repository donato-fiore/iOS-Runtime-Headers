// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCSFIRSTGLANCEACHIEVEMENTEVALUATOR_H
#define FCSFIRSTGLANCEACHIEVEMENTEVALUATOR_H

@class NSString;
@protocol FCSFirstGlanceAchievementEvaluatorDataSource;

#import <Foundation/Foundation.h>


@interface FCSFirstGlanceAchievementEvaluator : NSObject {
    NSString *_progressLocalizationKeyOverride;
    NSString *_yesterdayLocalizationKeyOverride;
}


@property (weak, nonatomic) NSObject<FCSFirstGlanceAchievementEvaluatorDataSource> *dataSource; // ivar: _dataSource


-(id)evaluateYesterdayAchievements:(id)arg0 isStandaloneMode:(BOOL)arg1 ;
-(id)initWithDataSource:(id)arg0 ;
-(id)progressLocalizationKeyForAchievement:(id)arg0 progressMilestone:(id)arg1 experienceType:(NSUInteger)arg2 ;
-(id)yesterdayLocalizationKeyForAchievement:(id)arg0 experienceType:(NSUInteger)arg1 ;
// -(void)_firstAchievementFromAchievements:(id)arg0 passingMilestoneTest:(id)arg1 completion:(unk)arg2  ;
-(void)progressAchievementAndMilestoneWithCurrentDate:(id)arg0 calendar:(id)arg1 experienceType:(NSUInteger)arg2 isStandaloneMode:(BOOL)arg3 completion:(id)arg4 ;
-(void)progressAchievementAndMilestoneWithMonthlyChallengeAchievement:(id)arg0 achievementsMap:(id)arg1 currentDate:(id)arg2 calendar:(id)arg3 experienceType:(NSUInteger)arg4 isStandaloneMode:(BOOL)arg5 completion:(id)arg6 ;
-(void)setLocalizationKeyOverride:(id)arg0 ;


@end


#endif