// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXHOMESCREENLAYOUTSELECTOR_H
#define ATXHOMESCREENLAYOUTSELECTOR_H

@class NSArray, ATXEngagementRecordManager, ATXWidgetSuggestionDismissManager, ATXInformationStore, NSUserDefaults, CHSProactiveService, ATXBlendingLayerHyperParameters, ATXHomeScreenCachedSuggestions, NSUUID, NSMutableDictionary, NSSet, NSMutableArray, NSString;
@protocol ATXLayoutSelectorProtocol, ATXSuggestionDeduplicatorProtocol;

#import <Foundation/Foundation.h>

#import "ATXStackStateTracker.h"
#import "ATXSuggestionModeFilter.h"

@interface ATXHomeScreenLayoutSelector : NSObject <ATXLayoutSelectorProtocol>

 {
    NSArray *_homeScreenPageConfigs;
    NSArray *_rankedSuggestions;
    BOOL _suggestionsWidgetsShouldBeDisjointOnAPage;
    id<ATXSuggestionDeduplicatorProtocol> *_suggestionDeduplicator;
    ATXEngagementRecordManager *_engagementRecordManager;
    ATXWidgetSuggestionDismissManager *_widgetDismissManager;
    ATXStackStateTracker *_stackStateTracker;
    ATXInformationStore *_store;
    NSUserDefaults *_defaults;
    ATXSuggestionModeFilter *_modeFilter;
    CHSProactiveService *_chronoService;
    ATXBlendingLayerHyperParameters *_hyperParameters;
    BOOL _isiPad;
    ATXHomeScreenCachedSuggestions *_previousHSCache;
    NSUUID *_cacheUpdateUUID;
    NSMutableDictionary *_stackIdToLayoutDictionary;
    NSMutableDictionary *_sgWidgetIdToLayoutDictionary;
    NSMutableDictionary *_appPanelIdToLayoutDictionary;
    NSSet *_dismissedSuggestionsForSGWidget;
    NSSet *_dismissedSuggestionsForAppPanels;
    NSMutableArray *_suggestionsAssignedAsNPlusOne;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sgWidgetsInStack:(id)arg0 ;
-(BOOL)canPlaceSGWidgetOnTopOfStack:(id)arg0 pageState:(id)arg1 ;
-(BOOL)canPlaceWidgetSuggestion:(id)arg0 onTopOfStack:(id)arg1 pageState:(id)arg2 widgetExistsInStack:(*BOOL)arg3 ;
-(BOOL)stackIsPinnedSGWidget:(id)arg0 ;
-(BOOL)stackIsStale:(id)arg0 ;
-(BOOL)suggestionLayoutIsValidForTopOfStack:(id)arg0 stackConfig:(id)arg1 pageConfig:(id)arg2 stackIsStale:(BOOL)arg3 ;
-(id)appPredictionSuggestionsFromSuggestions:(id)arg0 ;
-(id)fallbackCandidatesGivenSelectedCandidates;
-(id)freshPageStateWithPageConfig:(id)arg0 ;
-(id)generateLayoutsWithSuggestions:(id)arg0 consumerSubType:(unsigned char)arg1 stackLayoutSize:(NSUInteger)arg2 ;
-(id)homeScreenPageConfigs;
-(id)init;
-(id)initWithBlendingLayerHyperParameters:(id)arg0 suggestionsWidgetsShouldBeDisjointOnAPage:(BOOL)arg1 ;
-(id)initWithBlendingLayerHyperParameters:(id)arg0 suggestionsWidgetsShouldBeDisjointOnAPage:(BOOL)arg1 suggestionDeduplicator:(id)arg2 engagementRecordManager:(id)arg3 widgetDismissManager:(id)arg4 stackStateTracker:(id)arg5 store:(id)arg6 defaults:(id)arg7 modeFilter:(id)arg8 chronoService:(id)arg9 isiPad:(BOOL)arg10 ;
-(id)regenerateLowConfidenceStackRotationForPreviouslyStaleStackIfNeeded:(id)arg0 stackConfig:(id)arg1 ;
-(id)reorderedSuggestionsBasedOnPreviousLayouts:(id)arg0 panelIndex:(NSUInteger)arg1 pageState:(id)arg2 ;
-(id)selectedLayoutForConsumerSubType:(unsigned char)arg0 rankedSuggestions:(id)arg1 ;
-(id)selectedLayouts;
-(id)validCandidateSuggestionsForAppPanel:(id)arg0 panelIndex:(NSUInteger)arg1 pageState:(id)arg2 ;
-(id)validCandidateSuggestionsForTopOfStack:(id)arg0 pageState:(id)arg1 stackIsStale:(BOOL)arg2 ;
-(id)validCandidateSuggestionsForUnfilledSGWidgetWithPageState:(id)arg0 ;
-(void)removeEngagedWidgetSuggestionsIfApplicableForSuggestions:(id)arg0 stackIsStale:(BOOL)arg1 stackConfig:(id)arg2 ;
-(void)removeSuggestionsWithInferredEngagementIfApplicableFromIndices:(id)arg0 validSuggestions:(id)arg1 ;
-(void)removeWidgetAlreadyOnTopOfStackFromValidSuggestionsForStalenessRotationIfPossible:(id)arg0 stackConfig:(id)arg1 ;
-(void)setLayoutForAppPanelWithConfig:(id)arg0 panelIndex:(NSUInteger)arg1 pageState:(id)arg2 ;
-(void)setLayoutForTopOfStackWithConfig:(id)arg0 pageState:(id)arg1 ;
-(void)setLayoutForUnfilledSGWidget:(id)arg0 pageState:(id)arg1 ;
-(void)setLayoutsForAddWidgetUI;
-(void)setLayoutsForPinnedSGWidgetsOnPage:(id)arg0 ;
-(void)setLayoutsForSuggestionsWidgetsInStack:(id)arg0 selectedLayout:(id)arg1 ;
-(void)trackUnfilledSGWidgetsInStack:(id)arg0 pageState:(id)arg1 ;


@end


#endif