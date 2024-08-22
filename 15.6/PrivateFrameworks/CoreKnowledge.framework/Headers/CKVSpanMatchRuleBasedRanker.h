// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKVSPANMATCHRULEBASEDRANKER_H
#define CKVSPANMATCHRULEBASEDRANKER_H

@class NSString;
@protocol CKVSpanMatchResultInterpreter, CKVPriorRetriever;

#import <Foundation/Foundation.h>

#import "CKVSettings.h"
#import "CKVSpanMatchRankerPolicy.h"

@interface CKVSpanMatchRuleBasedRanker : NSObject <CKVSpanMatchResultInterpreter>

 {
    CKVSettings *_settings;
    NSObject<CKVPriorRetriever> *_priorRetriever;
    CKVSpanMatchRankerPolicy *_contactFuzzyWithPriorsPolicy;
    CKVSpanMatchRankerPolicy *_contactExactWithPriorsPolicy;
    CKVSpanMatchRankerPolicy *_contactFuzzyWithoutPriorsPolicy;
    CKVSpanMatchRankerPolicy *_appPolicy;
    CKVSpanMatchRankerPolicy *_generalExactPolicy;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_checkEligibilityOfSpanMatch:(id)arg0 priorInfo:(id)arg1 allowPartialMatch:(BOOL)arg2 allowApproxMatch:(BOOL)arg3 locale:(id)arg4 ;
-(float)_scoreSpanMatch:(id)arg0 priorInfo:(id)arg1 policy:(id)arg2 ;
-(id)_applyRegionalSpanRankingToSortedGroupMatches:(id)arg0 regionalThresholdScalar:(float)arg1 globalThresholdScalar:(float)arg2 maximalScore:(float)arg3 ;
-(id)_filterRankAndThresholdCandidates:(id)arg0 ofTokenChain:(id)arg1 withPolicy:(id)arg2 priorInfoMap:(id)arg3 ;
-(id)_groupKeyForSpanMatch:(id)arg0 itemType:(NSInteger)arg1 ;
-(id)_rankAndThresholdResults:(id)arg0 ofTokenChain:(id)arg1 ;
-(id)_rankerPolicyForGroupKey:(id)arg0 ;
-(id)_sortCandidatesFromResults:(id)arg0 andPopulatePriors:(*id)arg1 ;
-(id)init;
-(id)initWithPriorRetriever:(id)arg0 settings:(id)arg1 ;
-(id)interpretSpanMatchResults:(id)arg0 ofTokenChain:(id)arg1 ;
-(void)_addScoredMatch:(id)arg0 toSortedArray:(id)arg1 ;


@end


#endif