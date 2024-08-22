// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXHOMESCREENLAYOUTSELECTOR2_H
#define ATXHOMESCREENLAYOUTSELECTOR2_H

@class NSArray, ATXBlendingLayerHyperParameters, ATXEngagementRecordManager, ATXWidgetSuggestionDismissManager, ATXInformationStore, NSUserDefaults, CHSProactiveService, NSSet, NSString, NSDictionary;
@protocol ATXLayoutSelectorProtocol, ATXSuggestionDeduplicatorProtocol;

#import <Foundation/Foundation.h>

#import "ATXStackStateTracker.h"
#import "ATXSuggestionModeFilter.h"
#import "_ATXHomeScreenState.h"
#import "_ATXHomeScreenTimelineRelevanceFilter.h"
#import "ATXWidgetSuggestionsDenyList.h"

@interface ATXHomeScreenLayoutSelector2 : NSObject <ATXLayoutSelectorProtocol>

 {
    NSArray *_homeScreenPageConfigs;
    ATXBlendingLayerHyperParameters *_hyperParameters;
    id<ATXSuggestionDeduplicatorProtocol> *_suggestionDeduplicator;
    ATXEngagementRecordManager *_engagementRecordManager;
    ATXWidgetSuggestionDismissManager *_widgetDismissManager;
    ATXStackStateTracker *_stackStateTracker;
    ATXInformationStore *_store;
    NSUserDefaults *_defaults;
    ATXSuggestionModeFilter *_modeFilter;
    CHSProactiveService *_chronoService;
    BOOL _isiPad;
    _ATXHomeScreenState *_homeScreen;
    _ATXHomeScreenTimelineRelevanceFilter *_timelineRelevanceFilter;
    ATXWidgetSuggestionsDenyList *_widgetSuggestionDenyList;
    NSSet *_dismissedSuggestionsForSuggestionsWidget;
    NSSet *_dismissedSuggestionsForAppPredictionPanels;
    NSInteger _thresholdConfidenceForSuggestedSG;
    BOOL _shouldLimitWidgetSuggestionPowerCost;
    NSUInteger _numSuggestedWidgetInPastDay;
    NSUInteger _numWidgetReloadForSuggestionInPastDay;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property BOOL hasAskedChronoAboutReloadBudget; // ivar: _hasAskedChronoAboutReloadBudget
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain) NSDictionary *widgetSuggestionReloadBudgetByStackId; // ivar: _widgetSuggestionReloadBudgetByStackId


-(BOOL)_hasEligiblePinnedWidgetStacksForAPPWidget:(id)arg0 forCandidateStack:(id)arg1 ;
-(BOOL)_hasEligiblePinnedWidgetStacksForSuggestionsWidget:(id)arg0 forCandidateStack:(id)arg1 ;
-(BOOL)_hasEligibleWidgetSuggestionsStacksForSuggestion:(id)arg0 onPages:(id)arg1 ignoreDuplicatesInSGWidget:(BOOL)arg2 ignoreDuplicatesInPanels:(BOOL)arg3 ;
-(BOOL)_isBackgroundAppRefreshAllowedForAppBundleId:(id)arg0 ;
-(BOOL)_isStack:(id)arg0 eligibleToShowSuggestionViaWidgetSuggestion:(id)arg1 ;
-(BOOL)_isStackEligibleForSmartRotate:(id)arg0 stack:(id)arg1 ;
-(BOOL)_isStackStale:(id)arg0 ;
-(BOOL)_isSuggestionACandidate:(id)arg0 forStack:(id)arg1 dedupeAppSuggestionsByWidgets:(BOOL)arg2 ignoreDuplicatesInSGWidget:(BOOL)arg3 ignoreDuplicatesInPanels:(BOOL)arg4 ;
-(BOOL)_isSuggestionStillNeededForTopOfStack:(id)arg0 ;
-(BOOL)_shouldConsiderSuggestionForAppPredictionPanel:(id)arg0 ;
-(BOOL)_shouldConsiderSuggestionForSuggestionsWidget:(id)arg0 ;
-(BOOL)_shouldLimitWidgetSuggestionPowerCost;
-(BOOL)_stackHasRemainingReloadBudgetForWidgetSuggestion:(id)arg0 ;
-(BOOL)_widgetBundleIdRequiresWidgetLocationUpdates:(id)arg0 ;
-(CGFloat)_computeScoreForLayout:(id)arg0 ;
-(CGFloat)_weightForConfidenceCategory:(NSInteger)arg0 ;
-(NSInteger)_thresholdConfidenceForSuggestedSG;
-(id)_appPredictionPanelPreviewFromRankedSuggestions:(id)arg0 ;
-(id)_fallbackSuggestions:(id)arg0 ;
-(id)_filterRankedSuggestions:(id)arg0 ;
-(id)_homeScreenCachedSuggestionsFromHomeScreenState:(id)arg0 sortedFallbackSuggestions:(id)arg1 suggestionsWidgetPreviews:(id)arg2 appPredictionPanelPreview:(id)arg3 withUUID:(id)arg4 ;
-(id)_loadHomeScreenState:(id)arg0 ;
-(id)_processedSuggestionLayoutFromWidgetSuggestion:(id)arg0 stack:(id)arg1 blendingUpdateUUID:(id)arg2 ;
-(id)_shortcutConversionOriginalActionSuggestionIndices:(id)arg0 ;
-(id)_sortedPagesByMostRecentUserVisit:(id)arg0 ;
-(id)_suggestionsEligibleForSuggestedSGWidgetOnPages:(id)arg0 amongSuggestions:(id)arg1 ;
-(id)_suggestionsWidgetPreviewsFromRankedSuggestions:(id)arg0 ;
-(id)_suggestionsWidgetSuggestionsByPriorityOnPage:(id)arg0 ;
-(id)initWithHomeScreenPageConfigurations:(id)arg0 blendingLayerHyperParameters:(id)arg1 suggestionDeduplicator:(id)arg2 engagementRecordManager:(id)arg3 widgetDismissManager:(id)arg4 stackStateTracker:(id)arg5 store:(id)arg6 defaults:(id)arg7 modeFilter:(id)arg8 chronoService:(id)arg9 isiPad:(BOOL)arg10 ;
-(id)selectedLayoutForConsumerSubType:(unsigned char)arg0 rankedSuggestions:(id)arg1 ;
-(void)_assignExistingSuggestedSGWidgetsOnPages:(id)arg0 withSuggestions:(id)arg1 suggestionToRankingIndex:(id)arg2 ;
-(void)_assignNewSuggestedWidgetsForPages:(id)arg0 rankedSuggestions:(id)arg1 suggestionToRankingIndex:(id)arg2 ;
-(void)_assignPinnedAPPWidgetForPage:(id)arg0 suggestions:(id)arg1 ;
-(void)_assignPinnedSuggestionsWidgetForPage:(id)arg0 suggestions:(id)arg1 ;
-(void)_assignSuggestion:(id)arg0 toTopOfStack:(id)arg1 ;
-(void)_assignSuggestionsForExistingSuggestedWidgets:(id)arg0 ;
-(void)_assignUnfilledSGWidgetForPage:(id)arg0 suggestions:(id)arg1 ;
-(void)_assignWidgetForTopOfStack:(id)arg0 suggestions:(id)arg1 ;
-(void)_fillSuggestedSGWidgetIfLayoutNotComplete:(id)arg0 withSuggestions:(id)arg1 updatingUsedSuggestionIndexSet:(id)arg2 ;
-(void)_logStackDetail:(id)arg0 ;
-(void)_performSuggestionAllocationWithRankedSuggestions:(id)arg0 ;
-(void)_preservePreviousAppSuggestionPositions;
-(void)_removeSuggestedWidgetWhereNecessary;
-(void)_rotateAwayFromPreviousSystemInitiatedRotationIfNecessary:(id)arg0 ;
-(void)_rotateStackToUpdatedSGSuggestionIfNecessary:(id)arg0 suggestionToRankingIndex:(id)arg1 ;
-(void)_updateSuggestionsWidgetLayoutIfNecessaryWithRankedShortcutSuggestions:(id)arg0 suggestionToRankingIndex:(id)arg1 ;


@end


#endif