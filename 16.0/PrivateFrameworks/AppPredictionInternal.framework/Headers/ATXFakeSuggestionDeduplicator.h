// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXFAKESUGGESTIONDEDUPLICATOR_H
#define ATXFAKESUGGESTIONDEDUPLICATOR_H

@class NSSet, NSString, ATXHomeScreenWidgetIdentifiable, NSArray;
@protocol ATXSuggestionDeduplicatorProtocol;

#import <Foundation/Foundation.h>


@interface ATXFakeSuggestionDeduplicator : NSObject <ATXSuggestionDeduplicatorProtocol>

 {
    BOOL _blanketValueIsSet;
    BOOL _existingSuggestionsReturnValueIsSet;
    BOOL _homeScreenPageReturnValueIsSet;
    BOOL _duplicateWidgetReturnValueIsSet;
}


@property (retain, nonatomic) NSSet *appsOnPage; // ivar: _appsOnPage
@property (nonatomic) BOOL blanketReturnValue; // ivar: _blanketReturnValue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) ATXHomeScreenWidgetIdentifiable *duplicateWidgetReturnValue; // ivar: _duplicateWidgetReturnValue
@property (nonatomic) BOOL existingSuggestionsReturnValue; // ivar: _existingSuggestionsReturnValue
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL homeScreenPageReturnValue; // ivar: _homeScreenPageReturnValue
@property (retain, nonatomic) NSArray *pinnedWidgetSuggestions; // ivar: _pinnedWidgetSuggestions
@property (retain, nonatomic) NSArray *suggestionsInRecentlyEngagedCache; // ivar: _suggestionsInRecentlyEngagedCache
@property (readonly) Class superclass;


-(BOOL)isWidget:(id)arg0 showingIdenticalContentOfSuggestion:(id)arg1 ;
-(BOOL)suggestionIsDuplicate:(id)arg0 appsOnHomeScreenPageAtIndex:(NSUInteger)arg1 ;
-(BOOL)suggestionIsDuplicate:(id)arg0 existingSuggestions:(id)arg1 ;
-(BOOL)suggestionIsDuplicate:(id)arg0 existingSuggestions:(id)arg1 shouldCompareAcrossTypes:(BOOL)arg2 ;
-(BOOL)suggestionIsDuplicate:(id)arg0 homeScreenPageConfig:(id)arg1 ;
-(BOOL)suggestionIsDuplicate:(id)arg0 otherApps:(id)arg1 ;
-(BOOL)suggestionIsDuplicateAppOrWidget:(id)arg0 homeScreenPageConfig:(id)arg1 excludingStackConfigId:(id)arg2 ;
-(BOOL)widgetExtensionIdIsDuplicate:(id)arg0 homeScreenPageConfig:(id)arg1 excludingStackConfigId:(id)arg2 ;
-(BOOL)widgetExtensionIdIsPinned:(id)arg0 homeScreenPageConfig:(id)arg1 excludingStackConfigId:(id)arg2 ;
-(BOOL)widgetSuggestionIsDuplicate:(id)arg0 homeScreenPageConfig:(id)arg1 excludingStackConfigId:(id)arg2 ;
-(BOOL)widgetSuggestionIsPinned:(id)arg0 homeScreenPage:(id)arg1 excludingStackConfigId:(id)arg2 ;
-(id)duplicateWidgetForWidgetSuggestion:(id)arg0 otherWidgets:(id)arg1 ;
-(id)init;
-(id)pinnedWidgetIdentifiablesWithExtensionId:(id)arg0 homeScreenPageConfig:(id)arg1 excludingStackConfigId:(id)arg2 shouldStopAfterFindingFirstOne:(BOOL)arg3 ;


@end


#endif