// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFAUTOCOMPLETERESULTSTABLEVIEWCONTROLLER_H
#define MFAUTOCOMPLETERESULTSTABLEVIEWCONTROLLER_H

@class UITableViewController, NSArray, UIColor;
@protocol MFAutocompleteResultsTableViewControllerDelegate;


#import "_MFAutocompleteResultsTableViewModel.h"

@interface MFAutocompleteResultsTableViewController : UITableViewController {
    _MFAutocompleteResultsTableViewModel *_tableViewModel;
    BOOL _tableViewNeedsReload;
}


@property (readonly, nonatomic) NSArray *allRecipients;
@property (nonatomic, getter=areCellAnimationsEnabled) BOOL cellAnimationsEnabled; // ivar: _cellAnimationsEnabled
@property (retain, nonatomic) UIColor *cellBackgroundColor; // ivar: _cellBackgroundColor
@property (readonly, nonatomic) NSArray *contactRecipients; // ivar: _searchResults
@property (nonatomic, getter=isDeferringTableViewUpdates) BOOL deferTableViewUpdates; // ivar: _deferTableViewUpdates
@property (weak, nonatomic) NSObject<MFAutocompleteResultsTableViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSArray *directoryServerRecipients; // ivar: _serverSearchResults
@property (nonatomic) BOOL shouldDimIrrelevantInformation; // ivar: _shouldDimIrrelevantInformation
@property (nonatomic) BOOL shouldHighlightCompleteMatches; // ivar: _shouldHighlightCompleteMatches
@property (readonly, nonatomic) NSArray *suggestedRecipients; // ivar: _suggestedSearchResults


-(BOOL)confirmSelectedRecipient;
-(BOOL)containsRecipient:(id)arg0 ;
-(CGFloat)_tableViewHeaderHeight;
-(CGFloat)tableView:(id)arg0 heightForFooterInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(Class)recipientTableViewCellClass;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(NSUInteger)numberOfResults;
-(id)_combinedResults;
-(id)_flattenedIndexPaths;
-(id)_indexPathForRecipient:(id)arg0 ;
-(id)_recipientAtIndexPath:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(void)_selectSearchResultsRecipientAtIndexPath:(id)arg0 ;
-(void)_updateTableViewModelAnimated:(BOOL)arg0 ;
-(void)clear;
-(void)dealloc;
-(void)invalidateSearchResultRecipient:(id)arg0 ;
-(void)loadView;
-(void)presentSearchResults:(id)arg0 ;
-(void)resetScrollPosition;
-(void)selectNextSearchResult;
-(void)selectPreviousSearchResult;
-(void)tableView:(id)arg0 accessoryButtonTappedForRowWithIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;


@end


#endif