// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef KVSPANMATCHRESULTINTERPRETER_H
#define KVSPANMATCHRESULTINTERPRETER_H

@class NSMutableDictionary;
@protocol KVPriorRetriever;

#import <Foundation/Foundation.h>

#import "KVSpanMatchPolicy.h"

@interface KVSpanMatchResultInterpreter : NSObject {
    NSObject<KVPriorRetriever> *_priorRetriever;
    NSMutableDictionary *_policyOverrides;
}


@property (readonly, nonatomic) KVSpanMatchPolicy *exactPolicy; // ivar: _exactPolicy
@property (readonly, nonatomic) KVSpanMatchPolicy *exactWithAliasPolicy; // ivar: _exactWithAliasPolicy
@property (readonly, nonatomic) KVSpanMatchPolicy *exactWithPriorsPolicy; // ivar: _exactWithPriorsPolicy
@property (readonly, nonatomic) KVSpanMatchPolicy *fuzzyPolicy; // ivar: _fuzzyPolicy
@property (readonly, nonatomic) KVSpanMatchPolicy *fuzzyWithAliasPolicy; // ivar: _fuzzyWithAliasPolicy
@property (readonly, nonatomic) KVSpanMatchPolicy *fuzzyWithPriorsPolicy; // ivar: _fuzzyWithPriorsPolicy


-(BOOL)_checkEligibilityOfSpanMatch:(id)arg0 allowPartialMatch:(BOOL)arg1 allowApproxMatch:(BOOL)arg2 allowAliasMatch:(BOOL)arg3 query:(id)arg4 ;
-(float)_scoreSpanMatch:(id)arg0 policy:(id)arg1 ;
-(id)_applyRegionalSpanRankingToSortedGroupMatches:(id)arg0 regionalThresholdScalar:(float)arg1 globalThresholdScalar:(float)arg2 maximalScore:(float)arg3 ;
-(id)_filterRankAndThresholdCandidates:(id)arg0 ofQuery:(id)arg1 withPolicy:(id)arg2 ;
-(id)_groupKeyForFieldMatches:(id)arg0 itemType:(NSInteger)arg1 ;
-(id)_rankerPolicyForGroupKey:(id)arg0 ;
-(id)_sortCandidatesAndPopulatePriors:(id)arg0 ;
-(id)init;
-(id)initWithPriorRetriever:(id)arg0 ;
-(id)interpretSpanMatchResults:(id)arg0 ofQuery:(id)arg1 ;
-(void)_addScoredMatch:(id)arg0 toSortedArray:(id)arg1 ;
-(void)addPolicyOverride:(id)arg0 forItemType:(NSInteger)arg1 ;


@end


#endif