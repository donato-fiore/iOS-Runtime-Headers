// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXHOMESCREENSUGGESTIONCLIENTGUARDEDDATA_H
#define ATXHOMESCREENSUGGESTIONCLIENTGUARDEDDATA_H

@class NSHashTable, NSSet, ATXHomeScreenCachedSuggestions, NSMutableDictionary, NSDictionary, NSMutableArray, NSString, NSArray;
@protocol OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "ATXInformationStore.h"
#import "ATXHomeScreenEventLogger.h"
#import "ATXWidgetSuggestionDismissManager.h"

@interface ATXHomeScreenSuggestionClientGuardedData : NSObject {
    NSHashTable *observers;
    NSObject<OS_dispatch_source> *rotationSuppressionTimer;
    NSObject<OS_dispatch_source> *layoutUpdateSuppressionTimer;
    BOOL isUserInteractingWithProactiveWidget;
    NSSet *knownHomeScreenProactiveWidgetUniqueIdsAtTimeOfBlending;
    BOOL shouldUpdateKnownHomeScreenWidgetUniqueIdsAtTimeOfBlending;
    NSSet *knownTodayPageProactiveWidgetUniqueIdsAtTimeOfBlending;
    BOOL shouldUpdateKnownTodayPageWidgetUniqueIdsAtTimeOfBlending;
    ATXHomeScreenCachedSuggestions *suppressedSuggestions;
    NSMutableDictionary *appPanelIdentifierToPageIndex;
    NSDictionary *previousSuggestedSuggestionWidgetLayouts;
    NSDictionary *currentSuggestionWidgetLayouts;
    NSDictionary *currentAppPredictionPanelLayouts;
    NSDictionary *currentStackSuggestions;
    NSMutableArray *currentFallbacks;
    NSMutableDictionary *pagesToUsedFallbackAppSuggestions;
    NSString *currentBlendingCacheId;
    NSMutableArray *stacksAffectedByDebugRotation;
    NSArray *stagedHomeScreenPageConfigurations;
    NSSet *stagedDockAppList;
    NSArray *stagedTodayPageStacks;
    NSArray *stagedTodayPagePanels;
    ATXInformationStore *store;
    ATXHomeScreenEventLogger *logger;
    ATXWidgetSuggestionDismissManager *widgetDismissManager;
}






@end


#endif