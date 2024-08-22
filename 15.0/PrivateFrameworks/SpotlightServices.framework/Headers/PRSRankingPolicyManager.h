// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PRSRANKINGPOLICYMANAGER_H
#define PRSRANKINGPOLICYMANAGER_H


#import <Foundation/Foundation.h>


@interface PRSRankingPolicyManager : NSObject



+(CGFloat)termFrequencyComponentFor:(id)arg0 matchingString:(id)arg1 weighted:(BOOL)arg2 ;
+(CGFloat)termFrequencyComponentForWord:(id)arg0 inString:(id)arg1 ;
+(id)getSharedRankingPolicyManager;
-(BOOL)doesOrderedSpanExistWithStartingIndex:(NSUInteger)arg0 nextArray:(id)arg1 arrayOfIndexArrays:(id)arg2 level:(NSUInteger)arg3 currentOrderedSpan:(*NSInteger)arg4 ;
-(id)cookSQFOnClientWithServerProbabilities:(id)arg0 qiCEPValues:(id)arg1 localResultOrder:(id)arg2 poorTextMatchCategories:(id)arg3 minimumBagCEP:(CGFloat)arg4 cook_sqf_topdown:(BOOL)arg5 cook_sqf_fallback_qi_cep:(BOOL)arg6 ;
-(id)cosineComponentsUsingWordMatches:(id)arg0 withField:(id)arg1 withCorpusCount:(CGFloat)arg2 prefixVersion:(BOOL)arg3 ;
-(void)computeNewFeaturesForProperty:(id)arg0 query:(id)arg1 qr_prop_query_norm_min_ordered_span:(*CGFloat)arg2 qr_prop_query_norm_min_unordered_span:(*CGFloat)arg3 qr_query_min_pair_dist_in_title:(*CGFloat)arg4 prefix_match_norm_count:(*CGFloat)arg5 ;
-(void)computeNewFeaturesForProperty:(id)arg0 query:(id)arg1 qr_prop_query_norm_min_ordered_span:(*CGFloat)arg2 qr_prop_query_norm_min_unordered_span:(*CGFloat)arg3 qr_query_min_pair_dist_in_title:(*CGFloat)arg4 prefix_match_norm_count:(*CGFloat)arg5 ordered_first_term_position:(*CGFloat)arg6 prefixMatch:(BOOL)arg7 queryBreakDown:(id)arg8 isVirtualField:(BOOL)arg9 locale:(id)arg10 ;
-(void)computeNewFeaturesForProperty:(id)arg0 query:(id)arg1 qr_prop_query_norm_min_ordered_span:(*CGFloat)arg2 qr_prop_query_norm_min_unordered_span:(*CGFloat)arg3 qr_query_min_pair_dist_in_title:(*CGFloat)arg4 prefix_match_norm_count:(*CGFloat)arg5 prefixMatch:(BOOL)arg6 ;
-(void)minimumAnyOrderSpanWithStartingIndex:(NSInteger)arg0 nextArray:(id)arg1 arrayOfIndexArrays:(id)arg2 level:(NSUInteger)arg3 currentAnyOrderSpan:(NSInteger)arg4 minimumSpan:(*NSInteger)arg5 minimumDistancePair:(*NSInteger)arg6 currentMinimumIndex:(NSInteger)arg7 currentMaximumIndex:(NSInteger)arg8 ;


@end


#endif