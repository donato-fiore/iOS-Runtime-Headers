// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HRETEMPLATERECOMMENDATIONGENERATORPROCESS_H
#define HRETEMPLATERECOMMENDATIONGENERATORPROCESS_H

@class NSArray;


#import "HREStandardAsyncRecommendationGenerationProcess.h"

@interface HRETemplateRecommendationGeneratorProcess : HREStandardAsyncRecommendationGenerationProcess

@property (retain, nonatomic) NSArray *activeTemplates; // ivar: _activeTemplates
@property (retain, nonatomic) NSArray *homeTriggerBuilders; // ivar: _homeTriggerBuilders
@property (retain, nonatomic) NSArray *rooms; // ivar: _rooms


-(BOOL)shouldGenerateRecommendations;
-(NSInteger)_diffScoreForTriggerComparison:(id)arg0 ;
-(id)_actionsForDerivingForTemplate:(id)arg0 recommendation:(id)arg1 ;
-(id)_createInitialRecommendations:(id)arg0 withRecommendation:(id)arg1 ;
-(id)_defineActionsWithActionMap:(id)arg0 withActionableObjects:(id)arg1 ;
-(id)_defineProfileActionsForActionableObjects:(id)arg0 withActionMap:(id)arg1 ;
-(id)_existingActionSetForTemplate:(id)arg0 recommendation:(id)arg1 ;
-(id)_filterRecommendations:(id)arg0 fromTemplate:(id)arg1 ;
-(id)_filterSplitRecommendations:(id)arg0 characteristicTypePriority:(id)arg1 ;
-(id)_filterToAllowedObjects:(id)arg0 withSourceObjects:(id)arg1 withTrigger:(id)arg2 template:(id)arg3 ;
-(id)_initialRecommendationsForTemplate:(id)arg0 ;
-(id)_splitRecommendationsBySplitStrategy:(id)arg0 ;
-(id)_triggerWithSameConfigurationAsTrigger:(id)arg0 ;
-(id)characteristicActionsForObject:(id)arg0 actionMap:(id)arg1 ;
-(id)definiteActionsForCharacteristicActionMap:(id)arg0 object:(id)arg1 ;
-(id)generateRecommendations;
-(id)recommendationsWithTemplate:(id)arg0 ;


@end


#endif