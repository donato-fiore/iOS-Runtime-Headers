// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SPUIRESULTSVIEWCONTROLLER_H
#define SPUIRESULTSVIEWCONTROLLER_H

@class SearchUIResultsViewController, SFSearchResult, NSArray, SFResultSection, UISearchToken;
@protocol SPSearchAgentDelegate, SPUIResultsViewTestingDelegate, SPUIResultsViewDelegate;


#import "SPUISearchModel.h"

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
@property (retain) SPUISearchModel *model; // ivar: _model
@property NSUInteger previousQueryId; // ivar: _previousQueryId
@property (retain) NSArray *resultSections; // ivar: _resultSections
@property (retain) SFResultSection *searchThroughSection; // ivar: _searchThroughSection
@property (readonly) UISearchToken *searchToken; // ivar: _searchToken
@property (retain) SFResultSection *suggestionsSection; // ivar: _suggestionsSection


-(BOOL)_hasRealSuggestions;
-(BOOL)isResultOriginalSearchSuggestion:(id)arg0 ;
-(BOOL)searchAgentHasWindow:(id)arg0 ;
-(id)asTypedSearchResult;
-(id)initWithSearchModel:(id)arg0 ;
-(id)initWithSearchModel:(id)arg0 storeModel:(BOOL)arg1 searchToken:(id)arg2 ;
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