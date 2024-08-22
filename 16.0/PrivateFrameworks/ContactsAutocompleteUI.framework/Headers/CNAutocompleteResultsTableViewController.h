// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNAUTOCOMPLETERESULTSTABLEVIEWCONTROLLER_H
#define CNAUTOCOMPLETERESULTSTABLEVIEWCONTROLLER_H

@class UITableViewController, NSMutableArray, NSString, NSMutableSet, NSArray, CNAvatarViewControllerSettings;
@protocol CNComposeRecipientTableViewCellDelegate, CNAutocompleteResultsTableViewControllerDelegate;


#import "_CNAutocompleteResultsTableViewModel.h"

@interface CNAutocompleteResultsTableViewController : UITableViewController <CNComposeRecipientTableViewCellDelegate>

 {
    NSMutableArray *_searchResults;
    NSMutableArray *_suggestedSearchResults;
    NSMutableArray *_serverSearchResults;
    _CNAutocompleteResultsTableViewModel *_tableViewModel;
    BOOL _tableViewNeedsReload;
    BOOL _ignoreDidEndDisplayingCell;
}


@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, getter=isDeferringTableViewUpdates) BOOL deferTableViewUpdates; // ivar: _deferTableViewUpdates
@property (weak, nonatomic) NSObject<CNAutocompleteResultsTableViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMutableSet *expandedIdentifiers; // ivar: _expandedIdentifiers
@property (nonatomic) BOOL hasPerformedRecipientExpansion; // ivar: _hasPerformedRecipientExpansion
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL inDisambiguationMode; // ivar: _inDisambiguationMode
@property (copy, nonatomic) NSArray *recipients; // ivar: _recipients
@property (retain, nonatomic) CNAvatarViewControllerSettings *sharedAvatarViewControllerSettings; // ivar: _sharedAvatarViewControllerSettings
@property (nonatomic) BOOL shouldHideInfoButton; // ivar: _shouldHideInfoButton
@property (readonly) Class superclass;
@property (nonatomic) BOOL supportsInfoButton; // ivar: _supportsInfoButton
@property (nonatomic) CGFloat trailingButtonMidlineInsetFromLayoutMargin; // ivar: _trailingButtonMidlineInsetFromLayoutMargin


+(BOOL)avatarsAreHidden;
+(id)log;
+(void)dispatchMainIfNecessary:(id)arg0 ;
-(BOOL)attemptDisambiguationToggleAtSelectedRowIsExpand:(BOOL)arg0 ;
-(BOOL)collapseSelectedRecipient;
-(BOOL)confirmSelectedRecipient;
-(BOOL)expandSelectedRecipient;
-(BOOL)recipientIsDisambiguationRecipient:(id)arg0 ;
-(BOOL)recipientIsExpanded:(id)arg0 ;
-(BOOL)recipientIsExpandedChild:(id)arg0 ;
-(BOOL)recipientIsExpandedParent:(id)arg0 ;
-(BOOL)shouldShowCheckmarkForRecipient:(id)arg0 preferredRecipient:(id)arg1 ;
-(BOOL)tableView:(id)arg0 canFocusRowAtIndexPath:(id)arg1 ;
-(BOOL)updateCell:(id)arg0 withPreferredRecipient:(id)arg1 isInvalidation:(BOOL)arg2 ;
-(BOOL)updatePreferredRecipientForCell:(id)arg0 isInvalidation:(BOOL)arg1 ;
-(BOOL)willProvideOverrideImageDataForCell:(id)arg0 completionBlock:(id)arg1 ;
-(CGFloat)_tableViewHeaderHeight;
-(CGFloat)tableView:(id)arg0 heightForFooterInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_combinedResults;
-(id)_flattenedIndexPaths;
-(id)_indexPathForRecipient:(id)arg0 ;
-(id)_parentRecipientForRecipientAtIndexPath:(id)arg0 ;
-(id)_recipientAtIndexPath:(id)arg0 ;
-(id)_unifiedRecipientForRecipientAtIndexPath:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(id)unificationIdentifierForRecipient:(id)arg0 ;
-(id)visibleRecipients;
-(void)_selectSearchResultsRecipientAtIndexPath:(id)arg0 ;
-(void)_updateTableViewModelAnimated:(BOOL)arg0 ;
-(void)callEndDisplayingRowForRecipientIndex:(id)arg0 ;
-(void)didHover:(id)arg0 ;
-(void)didTapDisambiguationChevronForCell:(id)arg0 ;
-(void)didTapInfoButtonForCell:(id)arg0 ;
-(void)didToggleDisambiguationAtIndexPath:(id)arg0 ;
-(void)endDisplayOfVisibleCellsExcludingIndexPath:(id)arg0 ;
-(void)invalidateAddressTintColors;
-(void)invalidatePreferredRecipients;
-(void)invalidateSearchResultRecipient:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)selectNextSearchResult;
-(void)selectPreviousSearchResult;
-(void)selectRowAtIndexPath:(id)arg0 ;
-(void)setPreferredRecipient:(id)arg0 forRecipient:(id)arg1 ;
-(void)setTintColor:(id)arg0 forRecipient:(id)arg1 ;
-(void)tableView:(id)arg0 didEndDisplayingCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateBackgroundAndSeparatorsForCell:(id)arg0 atIndexPath:(id)arg1 ;
-(void)updateLabelColorForCell:(id)arg0 ;
-(void)updateRecipients:(id)arg0 disambiguatingRecipient:(id)arg1 ;
-(void)viewLayoutMarginsDidChange;


@end


#endif