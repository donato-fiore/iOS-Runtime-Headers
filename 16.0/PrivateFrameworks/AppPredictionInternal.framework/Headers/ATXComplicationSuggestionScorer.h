// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXCOMPLICATIONSUGGESTIONSCORER_H
#define ATXCOMPLICATIONSUGGESTIONSCORER_H


#import <Foundation/Foundation.h>

#import "ATXComplicationAppBundleIdsScorer.h"
#import "ATXComplicationSuggestionHeuristics.h"

@interface ATXComplicationSuggestionScorer : NSObject {
    ATXComplicationAppBundleIdsScorer *_bundleIdsScorer;
    ATXComplicationSuggestionHeuristics *_heuristics;
}




-(BOOL)_isNewlyInstalledWidget:(id)arg0 additionalData:(id)arg1 ;
-(BOOL)_modularSetIsSuggestibleGivenAppScoreDictionary:(id)arg0 ;
-(id)_appBundleIdsForComplicationDescriptors:(id)arg0 ;
-(id)_decaySubsequentScoresFromSameBundleId:(id)arg0 decayFactor:(CGFloat)arg1 ;
-(id)_scoredComplicationsForInlineSetGivenDescriptors:(id)arg0 ;
-(id)_scoredComplicationsForModularSetGivenDescriptors:(id)arg0 appBundleIdScores:(id)arg1 heuristicScores:(id)arg2 ;
-(id)complicationDescriptorsForInlineSetGivenComplicationDescriptors:(id)arg0 ;
-(id)complicationDescriptorsForModularSetGivenComplicationDescriptors:(id)arg0 ;
-(id)init;
-(id)inputDescriptionForSignal:(id)arg0 complicationDescriptors:(id)arg1 ;
-(id)modelDescription;
-(id)scoredComplicationDescriptorsForInlineSetGivenComplicationDescriptors:(id)arg0 ;
-(id)scoredComplicationDescriptorsForModularSetGivenComplicationDescriptors:(id)arg0 checkEligibility:(BOOL)arg1 ;


@end


#endif