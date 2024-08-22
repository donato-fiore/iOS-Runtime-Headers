// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SPSUGGESTIONSQUERYTASK_H
#define SPSUGGESTIONSQUERYTASK_H



#import "SPGeneralQueryTask.h"

@interface SPSuggestionsQueryTask : SPGeneralQueryTask



-(BOOL)readyToUpdate;
-(id)_allowListedTopResultFromSection:(id)arg0 ;
-(id)_appResultSection;
-(id)_newSuggestionSection;
-(id)_originalTopResultFromSections:(id)arg0 ;
-(id)_topResultOnlySectionFrom:(id)arg0 ;
-(id)bundleIdentifiersForHiddenSections;
-(id)committedSearchSections;
-(id)displayedText;
-(id)initForSession:(id)arg0 withQuery:(id)arg1 ;
-(id)makeSearchThroughSuggestions;
-(id)searchThroughSection:(id)arg0 ;
-(id)sectionsForCompletions;
-(id)showMoreButtonResultSection;
-(id)unsafeSections;
-(void)addAsYouTypeRelatedSearchResultToSections:(id)arg0 withRelatedSearchSection:(id)arg1 ;
-(void)clearInternal:(int)arg0 invalidate:(BOOL)arg1 ;
-(void)processAppResults:(id)arg0 maxAppResults:(NSUInteger)arg1 section:(id)arg2 topHitsIndex:(*NSUInteger)arg3 ;


@end


#endif