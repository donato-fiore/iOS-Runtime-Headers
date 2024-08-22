// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSRANKINGMANAGER_H
#define SSRANKINGMANAGER_H

@class NSSet, NSMutableString, NSString;

#import <Foundation/Foundation.h>

#import "PRSRankingConfiguration.h"

@interface SSRankingManager : NSObject

@property (retain) NSSet *allowedTopHitSections; // ivar: _allowedTopHitSections
@property (nonatomic) CGFloat blendingTime; // ivar: _blendingTime
@property (nonatomic) BOOL bullseyeRankingEnabled; // ivar: _bullseyeRankingEnabled
@property BOOL isCancelled; // ivar: _isCancelled
@property (retain, nonatomic) NSMutableString *logValues; // ivar: _logValues
@property (retain) NSString *query; // ivar: _query
@property (retain, nonatomic) PRSRankingConfiguration *rankingConfiguration; // ivar: _rankingConfiguration


+(id)getCoreDuetValues;
+(id)getSuggestionsRankingThresholds;
+(id)keyForIntervalType:(NSInteger)arg0 ;
+(void)determineTopHitsForSafariSection:(id)arg0 forQuery:(id)arg1 ;
+(void)extractThresholdABValues:(id)arg0 forLanguage:(id)arg1 ;
+(void)fetchDuetValues;
+(void)initialize;
+(void)moveSafariTopHitsToTopOfSection:(id)arg0 ;
+(void)prepareTopHitsParametersForLanguage:(id)arg0 ;
+(void)reloadCommittedSearchParametersFromTrial;
+(void)reloadLocaleSpecificMatchingParameters;
+(void)reloadRankingParametersFromTrial;
+(void)reloadRecencyThresholds;
+(void)reloadSuggestionsRankingThresholds;
+(void)reloadTopHitsParametersFromTrial;
-(BOOL)sectionContainsOnlyStaleApps:(id)arg0 ;
-(BOOL)sectionDoesNotContainMoreRecentlyUsedApps:(id)arg0 lastUsedDate:(id)arg1 ;
-(BOOL)sectionsContainsOnlyOneAppSection:(id)arg0 ;
-(BOOL)sectionsContainsShortcutResult:(id)arg0 shortcutResult:(id)arg1 ;
-(CGFloat)roundedValueForScore:(CGFloat)arg0 ;
-(NSInteger)compareDate:(id)arg0 withDate:(id)arg1 ;
-(id)CEPValuesForTTR;
-(id)applyTopSectionPolicy:(id)arg0 withTopHitSection:(id)arg1 isPeopleSearch:(BOOL)arg2 queryKind:(NSUInteger)arg3 correction:(id)arg4 queryLength:(NSUInteger)arg5 ranker:(id)arg6 ;
-(id)groupSectionsByCategory:(id)arg0 genreMap:(id)arg1 topSections:(id)arg2 ;
-(id)initWithQuery:(id)arg0 ;
-(id)keyForSection:(id)arg0 ;
-(id)makeTopHitSectionUsingSections:(id)arg0 withItemRanker:(id)arg1 sectionHeader:(id)arg2 shortcutResult:(id)arg3 isBullseyeNonCommittedSearch:(BOOL)arg4 isBullseyeCommittedSearch:(BOOL)arg5 parsecEnabled:(BOOL)arg6 maxNumAppsInTopHitSection:(NSUInteger)arg7 ;
-(id)rankAppsAtTopForScopedSearchWithSections:(id)arg0 ;
-(id)rankSectionsUsingBundleIDToSectionMapping:(id)arg0 withRanker:(id)arg1 preferredBundleIds:(id)arg2 isScopedSearch:(BOOL)arg3 queryId:(NSUInteger)arg4 isCJK:(BOOL)arg5 isBullseyeNonCommittedSearch:(BOOL)arg6 isBullseyeCommittedSearch:(BOOL)arg7 isPeopleSearch:(BOOL)arg8 ;
-(id)relativeRankWithAbsRank:(id)arg0 numberValues:(NSUInteger)arg1 ;
-(id)removeBlockListedSectionsForMapping:(id)arg0 ;
-(id)removeBlockListedSectionsForMapping:(id)arg0 withRankingConfiguration:(id)arg1 ;
-(id)suggestionResultScoreWithFeatures:(id)arg0 options:(id)arg1 ;
-(void)addCEPValuesForTTR;
-(void)applyTopHitRankingPolicyToSection:(id)arg0 topResultSection:(id)arg1 maxTopHitCount:(NSInteger)arg2 isShortcut:(BOOL)arg3 ;
-(void)cancel;
-(void)finalizeLog;
-(void)refineSectionShowingVisibleResultsWithBetterTextMatches:(id)arg0 ;
-(void)sendTTRLogsWithSections:(id)arg0 searchString:(id)arg1 queryKind:(NSUInteger)arg2 isCommittedSearch:(BOOL)arg3 parsecCameLaterThanSRT:(BOOL)arg4 ;
-(void)updateServerScoresUsingBlockOrder:(id)arg0 bundleFeatures:(id)arg1 ;
-(void)updateWithNewRankingInfo:(id)arg0 ;


@end


#endif