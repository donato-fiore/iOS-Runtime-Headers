// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PSRULEMININGMODEL_H
#define _PSRULEMININGMODEL_H

@class BMBehaviorRetriever, NSArray, NSDictionary;
@protocol _DKKnowledgeQuerying;

#import <Foundation/Foundation.h>

#import "_PSContactResolver.h"
#import "_PSRuleRankingMLModel.h"

@interface _PSRuleMiningModel : NSObject

@property (nonatomic) BOOL _PSRuleMiningIsAdaptedMLModelOK; // ivar: __PSRuleMiningIsAdaptedMLModelOK
@property (nonatomic) BOOL _PSRuleMiningIsMLModelInUse; // ivar: __PSRuleMiningIsMLModelInUse
@property (nonatomic) CGFloat _PSRuleMiningMLModelScoreThreshold; // ivar: __PSRuleMiningMLModelScoreThreshold
@property (nonatomic) NSInteger _PSRuleMiningModelDaysToPromoteRecentlyInstalledAppExtensions; // ivar: __PSRuleMiningModelDaysToPromoteRecentlyInstalledAppExtensions
@property (nonatomic) CGFloat _PSRuleMiningModelMinRuleConfidenceForSuggestion; // ivar: __PSRuleMiningModelMinRuleConfidenceForSuggestion
@property (nonatomic) NSInteger _PSRuleMiningModelRegularizingContextOverlapConstraint; // ivar: __PSRuleMiningModelRegularizingContextOverlapConstraint
@property (readonly, nonatomic) BMBehaviorRetriever *behaviorRetriever; // ivar: _behaviorRetriever
@property (retain, nonatomic) NSArray *behaviorRulesConsideringInTheContext; // ivar: _behaviorRulesConsideringInTheContext
@property (readonly, nonatomic) _PSContactResolver *contactResolver; // ivar: _contactResolver
@property (readonly, nonatomic) NSObject<_DKKnowledgeQuerying> *knowledgeStore; // ivar: _knowledgeStore
@property (retain) NSDictionary *psConfigForAdaptableModel; // ivar: _psConfigForAdaptableModel
@property (retain) _PSRuleRankingMLModel *ruleRankingModel; // ivar: _ruleRankingModel
@property (retain, nonatomic) NSArray *scores; // ivar: _scores


-(BOOL)isAdaptedModelCreated;
-(BOOL)isAdaptedModelUsed;
-(id)extractAdaptedModelRecipeID;
-(id)filterByRegularizingRules:(id)arg0 invalidatedByAnyConflictingItems:(id)arg1 containingItemTypes:(id)arg2 ;
-(id)filterByRegularizingRulesByContextOverlap:(id)arg0 regulularizeItems:(id)arg1 queryItems:(id)arg2 regularizationConstraint:(NSUInteger)arg3 ;
-(id)initWithKnowledgeStore:(id)arg0 contactresolver:(id)arg1 withConfig:(id)arg2 ;
-(id)shareExtensionSuggestionsFromContext:(id)arg0 ;
-(id)suggestionArrayWithArray:(id)arg0 appendingUniqueElementsByBundleIdFromArray:(id)arg1 ;
-(id)suggestionProxiesWithPredictionContext:(id)arg0 photoSuggestedPeople:(id)arg1 supportedBundleIDs:(id)arg2 ;
-(void)loadMLModel;
-(void)updateAdaptableModelProperties:(id)arg0 ;
-(void)updateModelProperties:(id)arg0 ;


@end


#endif