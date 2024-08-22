// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AAUIACHIEVEMENTSDATAPROVIDER_H
#define AAUIACHIEVEMENTSDATAPROVIDER_H

@class NSMutableDictionary, NSMutableArray, NSDictionary, NSArray, HKHealthStore, NSHashTable, ACHQuery, ACHVisibilityEvaluator;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AAUIAchievementsDataProvider : NSObject

@property (retain, nonatomic) NSMutableDictionary *achievementsByEarnedDateComponents; // ivar: _achievementsByEarnedDateComponents
@property (retain, nonatomic) NSMutableDictionary *achievementsBySection; // ivar: _achievementsBySection
@property (retain, nonatomic) NSMutableDictionary *achievementsByTemplateUniqueName; // ivar: _achievementsByTemplateUniqueName
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *achievementsDataQueue; // ivar: _achievementsDataQueue
@property (retain, nonatomic) NSMutableArray *allAchievementsSortedByEarnedDate; // ivar: _allAchievementsSortedByEarnedDate
@property (retain, nonatomic) NSDictionary *clientAchievementsByEarnedDateComponents; // ivar: _clientAchievementsByEarnedDateComponents
@property (retain, nonatomic) NSDictionary *clientAchievementsBySection; // ivar: _clientAchievementsBySection
@property (retain, nonatomic) NSDictionary *clientAchievementsByTemplateUniqueName; // ivar: _clientAchievementsByTemplateUniqueName
@property (retain, nonatomic) NSArray *clientAllAchievementsSortedByEarnedDate; // ivar: _clientAllAchievementsSortedByEarnedDate
@property (retain, nonatomic) NSDictionary *clientFilteredAchievementsByTemplateUniqueName; // ivar: _clientFilteredAchievementsByTemplateUniqueName
@property (retain, nonatomic) NSArray *clientRecentAchievements; // ivar: _clientRecentAchievements
@property (retain, nonatomic) NSArray *clientRelevantAchievements; // ivar: _clientRelevantAchievements
@property (nonatomic) BOOL didFinishInitialLoad; // ivar: _didFinishInitialLoad
@property (retain, nonatomic) NSMutableDictionary *filteredAchievementsByTemplateUniqueName; // ivar: _filteredAchievementsByTemplateUniqueName
@property (retain, nonatomic) HKHealthStore *healthStore; // ivar: _healthStore
@property (retain, nonatomic) NSHashTable *initialLoadObservers; // ivar: _initialLoadObservers
@property (retain, nonatomic) NSHashTable *mainSectionObservers; // ivar: _mainSectionObservers
@property (nonatomic) os_unfair_lock_s modelLock; // ivar: _modelLock
@property (readonly, nonatomic) NSInteger numberOfRecentAndRelevantSections;
@property (readonly, nonatomic) NSInteger numberOfSections;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *observerQueue; // ivar: _observerQueue
@property (retain, nonatomic) NSArray *orderedMainSectionHeaderStrings; // ivar: _orderedMainSectionHeaderStrings
@property (retain, nonatomic) NSArray *orderedRecentAndRelevantHeaderStrings; // ivar: _orderedRecentAndRelevantHeaderStrings
@property (retain, nonatomic) NSArray *orderedSections; // ivar: _orderedSections
@property (nonatomic) NSInteger overrideDisplayState; // ivar: _overrideDisplayState
@property (retain, nonatomic) ACHQuery *query; // ivar: _query
@property (nonatomic) NSInteger queryRetryCount; // ivar: _queryRetryCount
@property (nonatomic) CGFloat queryRetryDelay; // ivar: _queryRetryDelay
@property (retain, nonatomic) NSMutableArray *recentAchievements; // ivar: _recentAchievements
@property (retain, nonatomic) NSHashTable *recentAndRelevantSectionObservers; // ivar: _recentAndRelevantSectionObservers
@property (retain, nonatomic) NSMutableArray *relevantAchievements; // ivar: _relevantAchievements
@property (retain, nonatomic) ACHVisibilityEvaluator *visibilityEvaluator; // ivar: _visibilityEvaluator


-(BOOL)_achievementBelongsInRecents:(id)arg0 replacingRecent:(*id)arg1 ;
-(BOOL)_achievementBelongsInRelevants:(id)arg0 replacingRelevant:(*id)arg1 ;
-(BOOL)_builtInBelongsInRelevants:(id)arg0 ;
-(BOOL)_monthlyChallengeBelongsInRelevants:(id)arg0 ;
-(BOOL)_remoteAchievementBelongsInRelevants:(id)arg0 ;
-(BOOL)_shouldShowAchievement:(id)arg0 ;
-(BOOL)_shouldShowPerfectWeekAchievement:(CGFloat)arg0 ;
-(NSInteger)_deleteAchievement:(id)arg0 fromUnfiltered:(BOOL)arg1 ;
-(NSInteger)_updateAchievement:(id)arg0 ;
-(NSInteger)numberOfItemsInRecentAndRelevantSection:(NSInteger)arg0 ;
-(NSInteger)numberOfItemsInSection:(NSInteger)arg0 ;
-(id)_achievementsRespectingOverrideDisplayState:(id)arg0 ;
-(id)_mainSectionIndexPathForAchievement:(id)arg0 ;
-(id)_oldestRecentAchievement;
-(id)_recentAndRelevantSectionIndexPathForAchievement:(id)arg0 ;
-(id)achievementAtIndexPath:(id)arg0 ;
-(id)achievementForTemplateUniqueName:(id)arg0 ;
-(id)achievementsForDateComponents:(id)arg0 ;
-(id)headerStringForSection:(NSInteger)arg0 isRecentAndRelevant:(BOOL)arg1 ;
-(id)initWithHealthStore:(id)arg0 layoutMode:(NSUInteger)arg1 ;
-(id)recentAndRelevantAchievementAtIndexPath:(id)arg0 ;
-(id)trophyCaseAchievementForTemplateUniqueName:(id)arg0 ;
-(void)_deepCopyClientFacingModel;
-(void)_handleDeletedAchievements:(id)arg0 ;
-(void)_handleUpdatedAchievements:(id)arg0 ;
-(void)_reload;
-(void)addInitialLoadObserver:(id)arg0 ;
-(void)addMainSectionObserver:(id)arg0 ;
-(void)addRecentAndRelevantSectionObserver:(id)arg0 ;
-(void)cycleQuery;
-(void)removeInitialLoadObserver:(id)arg0 ;
-(void)removeMainSectionObserver:(id)arg0 ;
-(void)removeRecentAndRelevantSectionObserver:(id)arg0 ;
-(void)startFetching;
-(void)stopFetching;


@end


#endif