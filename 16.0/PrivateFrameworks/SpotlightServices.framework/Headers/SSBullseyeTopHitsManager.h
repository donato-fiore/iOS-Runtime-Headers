// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSBULLSEYETOPHITSMANAGER_H
#define SSBULLSEYETOPHITSMANAGER_H

@class NSDictionary;

#import <Foundation/Foundation.h>

#import "SFMutableResultSection.h"
#import "SPSearchQueryContext.h"
#import "PRSRankingItemRanker.h"

@interface SSBullseyeTopHitsManager : NSObject {
    NSDictionary *_categoryToResultMapping;
    NSInteger _queryID;
    SFMutableResultSection *_topHitSection;
    BOOL _haveBullseyeTopHitSection;
    SPSearchQueryContext *_queryContext;
    NSInteger _initiallyVisibleSectionSentCount;
    NSInteger _initiallyHiddenSectionSentCount;
    PRSRankingItemRanker *_ranker;
}




+(id)dedupeWebURLSuggestionsFromSections:(id)arg0 ;
-(id)bullseyeSectionForTopHit:(id)arg0 initiallyHidden:(BOOL)arg1 checkForTopHit:(BOOL)arg2 thresholdCounter:(int)arg3 ;
-(id)bullseyeTopHitSection;
-(id)bullseyeTopHitSections:(id)arg0 maxTopHitsCount:(int)arg1 minThresholdForBigResult:(CGFloat)arg2 needExceptionForSafariSection:(BOOL)arg3 ;
-(id)initWithQueryId:(NSInteger)arg0 categoryToResultMapping:(id)arg1 currentTopHitSection:(id)arg2 queryContext:(id)arg3 ranker:(id)arg4 ;
-(id)tagOrFilterHiddenSectionsForClient:(id)arg0 isCommittedSearch:(BOOL)arg1 maxVisibleSections:(NSInteger)arg2 maxTopHitsCount:(int)arg3 minThresholdForBigResult:(CGFloat)arg4 topHitSection:(*id)arg5 ;
-(void)resetVisibilityCounts;


@end


#endif