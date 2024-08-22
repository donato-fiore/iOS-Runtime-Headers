// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXDEGENERATESTACKANALYZER_H
#define ATXDEGENERATESTACKANALYZER_H

@class ATXInformationStore;

#import <Foundation/Foundation.h>

#import "ATXSuggestionDeduplicator.h"

@interface ATXDegenerateStackAnalyzer : NSObject {
    ATXInformationStore *_informationStore;
    ATXSuggestionDeduplicator *_deduplicator;
}




-(BOOL)_hasWidgetHadTimelineDonations:(id)arg0 startDate:(id)arg1 ;
-(BOOL)_isWidgetEligibleForHeuristicFallback:(id)arg0 ;
-(BOOL)_wouldBlendingDeduplicateWidget:(id)arg0 inStack:(id)arg1 againstOtherWidgetsOnPage:(id)arg2 ;
-(BOOL)areAllSmartStacksPossiblyDegenerateInPages:(id)arg0 usingTimelineEntriesSinceDate:(id)arg1 ;
-(BOOL)isSmartStackPossiblyDegenerate:(id)arg0 onPage:(id)arg1 usingTimelineEntriesSinceDate:(id)arg2 ;
-(id)_simulatedInfoSuggestionForWidget:(id)arg0 ;
-(id)init;
-(id)initWithInformationStore:(id)arg0 ;


@end


#endif