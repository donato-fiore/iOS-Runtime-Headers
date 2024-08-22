// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXSPOTLIGHTLAYOUTSELECTOR_H
#define ATXSPOTLIGHTLAYOUTSELECTOR_H

@class NSString;
@protocol ATXLayoutSelectorProtocol, ATXUniversalSuggestionDeduplicatorProtocol, ATXUniversalBlendingLayerHyperParametersProtocol;

#import <Foundation/Foundation.h>


@interface ATXSpotlightLayoutSelector : NSObject <ATXLayoutSelectorProtocol>

 {
    id<ATXUniversalSuggestionDeduplicatorProtocol> *_deduplicator;
    id<ATXUniversalBlendingLayerHyperParametersProtocol> *_hyperParameters;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)_isCommuteMediaSuggestion:(id)arg0 ;
+(BOOL)_isCommuteWildCardSuggestion:(id)arg0 ;
+(id)_commuteWildcardReducer:(id)arg0 ;
-(BOOL)_hasNilTitleForContextCode:(NSInteger)arg0 ;
-(BOOL)_isEligibleForFallbacksWithSuggestions:(id)arg0 ;
-(BOOL)_isValidForReasons:(NSUInteger)arg0 ;
-(CGFloat)_adaptedScoreForSuggestion:(id)arg0 ;
-(NSInteger)_contextReasonCodeWithPredictionReasons:(NSUInteger)arg0 ;
-(NSUInteger)_supportedContextReasons;
-(id)_autoShortcutsForBundleId:(id)arg0 ;
-(id)_clearDuplicateContextsFromSuggestions:(id)arg0 suggestionDict:(id)arg1 ;
-(id)_collectionsWithSuggestions:(id)arg0 ;
-(id)_createFallbackSuggestions;
-(id)_createFallbacksCollectionsWithSuggestions:(id)arg0 ;
-(id)_createPOISuggestionWithMUID:(id)arg0 fromHeroSuggestion:(id)arg1 ;
-(id)_heroDataReducer:(id)arg0 ;
-(id)_insertMediaSuggestion:(id)arg0 consumerSubType:(unsigned char)arg1 ;
-(id)_intervalStringWithCriteria:(id)arg0 ;
-(id)_poiMUIDFromHero:(id)arg0 ;
-(id)_preferredContextWithContextCode:(id)arg0 contextCriteria:(id)arg1 ;
-(id)_rankedReasonCodes;
-(id)_scoresFlattenForCollections:(id)arg0 ;
-(id)_sectionIdentifierForContextCode:(NSInteger)arg0 ;
-(id)_staticTitleForContextCode:(NSInteger)arg0 ;
-(id)_suggestionFromAutoShortcutContextualAction:(id)arg0 predictionReasons:(NSUInteger)arg1 ;
-(id)_titleForContextCode:(NSInteger)arg0 suggestions:(id)arg1 ;
-(id)_validAutoShortcutContextualActionsForBundleId:(id)arg0 limit:(NSUInteger)arg1 ;
-(id)init;
-(id)initWithSuggestionDeduplicator:(id)arg0 hyperParameters:(id)arg1 ;
-(id)selectedLayoutForConsumerSubType:(unsigned char)arg0 rankedSuggestions:(id)arg1 ;
-(void)_dedupeSuggestions:(id)arg0 suggestionDict:(id)arg1 ;
-(void)_indexSpotlightActions:(id)arg0 ;


@end


#endif