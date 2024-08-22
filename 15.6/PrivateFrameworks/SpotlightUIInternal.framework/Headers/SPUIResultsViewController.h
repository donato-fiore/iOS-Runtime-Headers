// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SPUIRESULTSVIEWCONTROLLER_H
#define SPUIRESULTSVIEWCONTROLLER_H

@class SearchUIResultsViewController, SFSearchResult, NSArray, SFResultSection;
@protocol SPSearchAgentDelegate, SPUIResultsViewTestingDelegate, SPUIResultsViewDelegate;



@interface SPUIResultsViewController : SearchUIResultsViewController <SPSearchAgentDelegate, SPUIResultsViewTestingDelegate>

 {
    NSUInteger _startTime;
}


@property (readonly) SFSearchResult *actualSearchSuggestionResult;
@property (weak, nonatomic) NSObject<SPUIResultsViewDelegate> *delegate;
@property (copy, nonatomic) id *didFinishGettingAllResultsHandler; // ivar: didFinishGettingAllResultsHandler
@property (retain, nonatomic) SFSearchResult *goTakeoverResult; // ivar: _goTakeoverResult
@property BOOL hasResultsWaitingToUpdate; // ivar: _hasResultsWaitingToUpdate
@property (retain) SFSearchResult *highlightedResult; // ivar: _highlightedResult
@property (readonly, nonatomic) BOOL isHighlighting; // ivar: _isHighlighting
@property NSUInteger previousQueryId; // ivar: _previousQueryId
@property (retain) NSArray *resultSections; // ivar: _resultSections
@property (retain) SFResultSection *searchThroughSection; // ivar: _searchThroughSection
@property (retain) SFResultSection *suggestionsSection; // ivar: _suggestionsSection


-(BOOL)_hasRealSuggestions;
-(BOOL)isResultOriginalSearchSuggestion:(id)arg0 ;
-(id)asTypedSearchResult;
-(id)initWithSearchModel:(id)arg0 ;
-(id)makeAsYouTypeSuggestionSearchResultWithSearchString:(id)arg0 detailText:(id)arg1 suggestionIdentifier:(id)arg2 queryContext:(id)arg3 ;
-(void)_pushSectionsUpdate;
-(void)changeTextFieldsReturnKeyType:(NSInteger)arg0 withGoTakeoverResult:(id)arg1 ;
-(void)clearSuggestionSection;
-(void)forceHighlightForResult:(id)arg0 ;
-(void)highlightResultAfterUnmarkingText;
-(void)removeCompletionAndHighlightAsTyped:(BOOL)arg0 ;
-(void)searchAgentClearedResults:(id)arg0 ;
-(void)searchAgentFinishedQueryWithoutAdditionalResults:(id)arg0 ;
-(void)searchAgentUpdatedResults:(id)arg0 ;
-(void)searchUpdatedWithString:(id)arg0 tokenEntity:(id)arg1 queryId:(NSUInteger)arg2 wantsCompletions:(BOOL)arg3 keyboardLanguage:(id)arg4 ;


@end


#endif