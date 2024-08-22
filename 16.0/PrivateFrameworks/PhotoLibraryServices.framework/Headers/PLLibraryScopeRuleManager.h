// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLLIBRARYSCOPERULEMANAGER_H
#define PLLIBRARYSCOPERULEMANAGER_H


#import <Foundation/Foundation.h>

#import "PLManagedAssetRuleInterpreter.h"
#import "PLLibraryScope.h"
#import "PLLibraryScopeRuleEvaluator.h"

@interface PLLibraryScopeRuleManager : NSObject

@property (retain, nonatomic) PLManagedAssetRuleInterpreter *interpreter; // ivar: _interpreter
@property (retain, nonatomic) PLLibraryScope *libraryScope; // ivar: _libraryScope
@property (retain, nonatomic) PLLibraryScopeRuleEvaluator *ruleEvaluator; // ivar: _ruleEvaluator


-(BOOL)_shouldTryToPropagateResultsToMomentWithInclusiveMatchedConditions:(id)arg0 ;
-(BOOL)evaluateAssetObjectIDs:(id)arg0 simulate:(BOOL)arg1 withResultEnumerationBlock:(id)arg2 ;
-(BOOL)evaluateAssetObjectIDs:(id)arg0 withResultEnumerationBlock:(id)arg1 ;
-(BOOL)evaluateFaceObjectIDs:(id)arg0 simulate:(BOOL)arg1 withResultEnumerationBlock:(id)arg2 ;
-(BOOL)evaluateFaceObjectIDs:(id)arg0 withResultEnumerationBlock:(id)arg1 ;
-(id)_fetchAssetObjectIDsContainedInMomentObjectIDs:(id)arg0 excludingAssetObjectIDs:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(id)_fetchAssetObjectIDsContainedInMomentsToPropagateForMomentIdByAssetId:(id)arg0 inManagedObjectContext:(id)arg1 ;
-(id)_personUUIDsUsedInRules;
-(id)_predicateToIncludeAssetsCapturedByCamera;
-(id)_predicateToIncludeAssetsSuggestedByCamera;
-(id)initWithLibraryScope:(id)arg0 ;


@end


#endif