// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXSUGGESTIONDEDUPLICATOR_H
#define ATXSUGGESTIONDEDUPLICATOR_H

@class NSDictionary, NSString;
@protocol ATXSuggestionDeduplicatorProtocol;

#import <Foundation/Foundation.h>


@interface ATXSuggestionDeduplicator : NSObject <ATXSuggestionDeduplicatorProtocol>

 {
    NSDictionary *_visibleAppsByPage;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_isContactsWidgetIntent:(id)arg0 overlappingContactsWithOtherContactsWidgetIntent:(id)arg1 ;
-(BOOL)_isWidget:(id)arg0 showingContentOfAction:(id)arg1 ;
-(BOOL)_isWidget:(id)arg0 showingContentOfInfoSuggestion:(id)arg1 ;
-(BOOL)executableSpecsAreDuplicates:(id)arg0 otherExecutableSpec:(id)arg1 ;
-(BOOL)isWidget:(id)arg0 showingIdenticalContentOfSuggestion:(id)arg1 ;
-(BOOL)suggestionIsDuplicate:(id)arg0 appsOnHomeScreenPageAtIndex:(NSUInteger)arg1 ;
-(BOOL)suggestionIsDuplicate:(id)arg0 existingSuggestions:(id)arg1 ;
-(BOOL)suggestionIsDuplicate:(id)arg0 existingSuggestions:(id)arg1 shouldCompareAcrossTypes:(BOOL)arg2 ;
-(BOOL)suggestionIsDuplicate:(id)arg0 homeScreenPageConfig:(id)arg1 ;
-(BOOL)suggestionIsDuplicate:(id)arg0 otherApps:(id)arg1 ;
-(BOOL)suggestionIsDuplicateAppOrWidget:(id)arg0 homeScreenPageConfig:(id)arg1 excludingStackConfigId:(id)arg2 ;
-(BOOL)suggestionIsDuplicateOfDeweyUI:(id)arg0 ;
-(BOOL)suggestionsAreDuplicateAppAndAction:(id)arg0 otherSuggestion:(id)arg1 ;
-(BOOL)suggestionsAreDuplicateWidgetAndAction:(id)arg0 otherSuggestion:(id)arg1 ;
-(BOOL)widgetExtensionIdIsDuplicate:(id)arg0 homeScreenPageConfig:(id)arg1 excludingStackConfigId:(id)arg2 ;
-(BOOL)widgetExtensionIdIsPinned:(id)arg0 homeScreenPageConfig:(id)arg1 excludingStackConfigId:(id)arg2 ;
-(BOOL)widgetSuggestionIsDuplicate:(id)arg0 homeScreenPageConfig:(id)arg1 excludingStackConfigId:(id)arg2 ;
-(BOOL)widgetSuggestionIsPinned:(id)arg0 homeScreenPage:(id)arg1 excludingStackConfigId:(id)arg2 ;
-(id)_initWithVisibleAppsByPage:(id)arg0 ;
-(id)duplicateWidgetForWidgetSuggestion:(id)arg0 otherWidgets:(id)arg1 ;
-(id)executableClassStringsToUnarchiveDuringComparison;
-(id)init;
-(id)pinnedWidgetIdentifiablesWithExtensionId:(id)arg0 homeScreenPageConfig:(id)arg1 excludingStackConfigId:(id)arg2 shouldStopAfterFindingFirstOne:(BOOL)arg3 ;
-(id)stacksToConsiderForLeftOfHomeForStackId:(id)arg0 stacksOnPage:(id)arg1 ;
-(id)stacksWithDuplicateWidgetExtensionId:(id)arg0 homeScreenPageConfig:(id)arg1 excludingStackConfigId:(id)arg2 ;
-(id)stacksWithDuplicateWidgetSuggestion:(id)arg0 homeScreenPageConfig:(id)arg1 excludingStackConfigId:(id)arg2 ;


@end


#endif