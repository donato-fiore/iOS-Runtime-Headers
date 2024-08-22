// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDETAILSSEARCHVIEWCONTROLLER_H
#define CKDETAILSSEARCHVIEWCONTROLLER_H

@class UIBarButtonItem, NSArray, NSString, UICollectionViewCell, NSDate;
@protocol CKContainerSearchControllerDelegate, QLPreviewControllerDelegate, CKDetailsSearchResultsFooterCellDelegate, CKDetailsSearchResultsTitleHeaderCellDelegate, CKDetailsSearchControllerDelegate;


#import "CKSearchViewController.h"
#import "CKSearchController.h"
#import "CKConversation.h"
#import "CKDetailsSearchResultsFooterCell.h"
#import "CKQLPreviewController.h"
#import "CKQLPreviewControllerDataSource.h"
#import "CKSearchIndexingFooterCell.h"
#import "CKDetailsSearchResultsTitleHeaderCell.h"

@interface CKDetailsSearchViewController : CKSearchViewController <CKContainerSearchControllerDelegate, QLPreviewControllerDelegate, CKDetailsSearchResultsFooterCellDelegate, CKDetailsSearchResultsTitleHeaderCellDelegate>



@property (retain, nonatomic) CKSearchController *associatedDetailsSubsectionSearchController; // ivar: _associatedDetailsSubsectionSearchController
@property (retain, nonatomic) UIBarButtonItem *cancelButton; // ivar: _cancelButton
@property (retain, nonatomic) NSArray *chatGUIDs; // ivar: _chatGUIDs
@property (retain, nonatomic) CKConversation *conversation; // ivar: _conversation
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIBarButtonItem *deleteButton; // ivar: _deleteButton
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<CKDetailsSearchControllerDelegate> *detailsDelegate; // ivar: _detailsDelegate
@property (retain, nonatomic) UIBarButtonItem *flexibleItem; // ivar: _flexibleItem
@property (retain, nonatomic) CKDetailsSearchResultsFooterCell *footerSizingCell; // ivar: _footerSizingCell
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UICollectionViewCell *lastUserSelectedCell; // ivar: _lastUserSelectedCell
@property (retain, nonatomic) NSDate *lastUserSelectedCellTime; // ivar: _lastUserSelectedCellTime
@property (retain, nonatomic) CKQLPreviewController *previewController; // ivar: _previewController
@property (retain, nonatomic) CKQLPreviewControllerDataSource *qlPreviewDataSource; // ivar: _qlPreviewDataSource
@property (retain, nonatomic) UIBarButtonItem *saveButton; // ivar: _saveButton
@property (nonatomic) BOOL searchComplete; // ivar: _searchComplete
@property (retain, nonatomic) UIBarButtonItem *selectButton; // ivar: _selectButton
@property (retain, nonatomic) CKSearchIndexingFooterCell *sizingIndexingFooterCell; // ivar: _sizingIndexingFooterCell
@property (readonly) Class superclass;
@property (retain, nonatomic) CKDetailsSearchResultsTitleHeaderCell *titleSizingCell; // ivar: _titleSizingCell


-(BOOL)collectionView:(id)arg0 shouldSelectItemAtIndexPath:(id)arg1 ;
-(BOOL)shouldInsetResultsForSearchController:(id)arg0 ;
-(BOOL)wantsSpaceKeyCommandActive;
-(Class)_searchResultsHeaderClass;
-(id)_newSnapshotForCurrentControllerState;
-(id)_searchControllerForIndexPath:(id)arg0 ;
-(id)_selectedIndexPaths;
-(id)footerBoundryItemsForController:(id)arg0 withEnvironment:(id)arg1 ;
-(id)globalLayoutConfiguration;
-(id)headerBoundryItemsForController:(id)arg0 withEnvironment:(id)arg1 ;
-(id)initWithSearchControllerClasses:(id)arg0 ;
-(id)layoutSectionForController:(id)arg0 withEnvironment:(id)arg1 ;
-(id)previewController:(id)arg0 transitionViewForPreviewItem:(id)arg1 ;
-(id)searchBarForSearchViewController:(id)arg0 ;
-(id)searchController:(id)arg0 conversationForChatGUID:(id)arg1 ;
-(id)searchControllerChatGUIDsForDetailsSearch:(id)arg0 ;
-(id)sizeAttributeForController:(id)arg0 sizingAttribute:(id)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_cancelEditing:(id)arg0 ;
-(void)_configureIndexingCell:(id)arg0 ;
-(void)_deleteAttachmentsAtIndexPaths:(id)arg0 ;
-(void)_deleteSelectedAttachments:(id)arg0 ;
-(void)_registerCells;
-(void)_saveSelectedAttachments:(id)arg0 ;
-(void)_searchResultHeaderButtonTapped:(id)arg0 ;
-(void)_selectButtonTapped:(id)arg0 ;
-(void)_updateToolbar;
-(void)collectionView:(id)arg0 didDeselectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 willDisplaySupplementaryView:(id)arg1 forElementKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)deleteMessageItem:(id)arg0 ;
-(void)deleteTransferGUID:(id)arg0 ;
-(void)handleSpacePressed;
-(void)loadView;
-(void)presentQuickLookView:(id)arg0 ;
-(void)previewControllerDidDismiss:(id)arg0 ;
-(void)rekickZKWSearchForAttachmentBatchUpdate;
-(void)reloadData;
-(void)searchController:(id)arg0 didSelectItem:(id)arg1 inChat:(id)arg2 ;
-(void)searchController:(id)arg0 requestsItemDeletionAtIndexPath:(id)arg1 ;
-(void)searchControllerContentsDidChange:(id)arg0 ;
-(void)searchControllerDidBeginDragging:(id)arg0 ;
-(void)searchDetailsFooterCellShowAllTapped:(id)arg0 ;
-(void)searchDetailsShowAllButtonTapped:(id)arg0 ;
-(void)searchEnded;
-(void)searchResultsTitleCellShowAllButtonTapped:(id)arg0 ;
-(void)searchViewController:(id)arg0 requestsPushOfSearchController:(id)arg1 ;
-(void)searchWithText:(id)arg0 ;
-(void)setEditing:(BOOL)arg0 ;
-(void)setupDetailsSearchController:(id)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif