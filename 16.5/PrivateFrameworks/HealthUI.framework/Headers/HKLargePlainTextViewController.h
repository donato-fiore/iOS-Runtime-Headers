// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKLARGEPLAINTEXTVIEWCONTROLLER_H
#define HKLARGEPLAINTEXTVIEWCONTROLLER_H

@class NSMutableArray, UIColor, NSData, NSString, NSOperationQueue, UITextView;
@protocol HKIncrementalSearchBarDelegate;


#import "HKViewController.h"
#import "_IncrementalSearchOperation.h"
#import "HKIncrementalSearchBar.h"

@interface HKLargePlainTextViewController : HKViewController <HKIncrementalSearchBarDelegate>



@property (nonatomic) CGFloat currentKeyboardHeight; // ivar: _currentKeyboardHeight
@property (retain, nonatomic) NSMutableArray *currentRanges; // ivar: _currentRanges
@property (retain) _IncrementalSearchOperation *currentSearch; // ivar: _currentSearch
@property NSInteger currentSearchItem; // ivar: _currentSearchItem
@property (readonly, nonatomic) UIColor *currentSelectionBackground; // ivar: _currentSelectionBackground
@property (readonly, nonatomic) UIColor *currentSelectionForeground; // ivar: _currentSelectionForeground
@property (readonly) NSData *data; // ivar: _data
@property (readonly, nonatomic) NSString *dataAsString; // ivar: _dataAsString
@property (readonly, nonatomic) HKIncrementalSearchBar *incrementalSearchBar; // ivar: _incrementalSearchBar
@property (readonly, nonatomic) UIColor *normalTextViewBackground; // ivar: _normalTextViewBackground
@property (readonly, nonatomic) UIColor *otherSelectionBackground; // ivar: _otherSelectionBackground
@property (readonly, nonatomic) UIColor *otherSelectionForeground; // ivar: _otherSelectionForeground
@property (readonly, nonatomic) NSOperationQueue *searchQueue; // ivar: _searchQueue
@property (readonly, nonatomic) UIColor *selectedTextViewBackground; // ivar: _selectedTextViewBackground
@property (readonly, nonatomic) UITextView *textView; // ivar: _textView


-(BOOL)_updateMatchDisplayString:(NSUInteger)arg0 numMatches:(NSUInteger)arg1 ;
-(NSUInteger)supportedInterfaceOrientations;
-(id)_selectionAttributes:(BOOL)arg0 ;
-(id)_standardPlainTextFont;
-(id)initWithData:(id)arg0 ;
-(id)searchBodyWithAttributes;
-(void)_updateCurrentSearchItem:(NSUInteger)arg0 hitsChanged:(BOOL)arg1 resetSearch:(BOOL)arg2 ;
-(void)addSearchResults:(struct IncrementalSearchResultsDefn )arg0 ;
-(void)cancelCurrentSearch;
-(void)endSearchResults;
-(void)finishSearchResults;
-(void)incrementalSearchOperation:(id)arg0 ;
-(void)loadView;
-(void)resetSearchResults;
-(void)searchBarChangeSearch:(id)arg0 searchString:(id)arg1 ;
-(void)searchBarDoneAction:(id)arg0 ;
-(void)searchBarDownAction:(id)arg0 ;
-(void)searchBarUpAction:(id)arg0 ;
-(void)startIncrementalSearch;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif