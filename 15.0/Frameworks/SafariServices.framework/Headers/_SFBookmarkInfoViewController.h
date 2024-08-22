// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SFBOOKMARKINFOVIEWCONTROLLER_H
#define _SFBOOKMARKINFOVIEWCONTROLLER_H

@class SFPopoverSizingTableViewController, WebBookmarkCollection, WebBookmark, NSArray, _SFSiteIconView, UITextField, NSString;
@protocol _SFBookmarkInfoViewControllerDelegate, _SFBookmarkTextEntryTableViewControllerDelegate, UITableViewDataSource, UITableViewDelegate;


#import "_SFBookmarkTextEntryTableViewCell.h"

@interface _SFBookmarkInfoViewController : SFPopoverSizingTableViewController <_SFBookmarkInfoViewControllerDelegate, _SFBookmarkTextEntryTableViewControllerDelegate, UITableViewDataSource, UITableViewDelegate>

 {
    WebBookmarkCollection *_collection;
    WebBookmark *_parentBookmark;
    NSArray *_childBookmarks;
    BOOL _addingBookmark;
    BOOL _saveWhenDismissed;
    _SFBookmarkTextEntryTableViewCell *_titleCell;
    _SFBookmarkTextEntryTableViewCell *_addressCell;
    _SFSiteIconView *_iconImageView;
    NSUInteger _editingField;
    BOOL _didSelectFolder;
    BOOL _folderPickerExpanded;
    BOOL _addingToFavorites;
    NSArray *_folders;
    NSInteger _selectedFolderIndex;
    UITextField *_textFieldToRestoreFirstResponder;
    BOOL _enableAddFolder;
}


@property (copy, nonatomic) WebBookmark *bookmark; // ivar: _bookmark
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_SFBookmarkInfoViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_canEditFieldsInCurrentViewController;
-(BOOL)_isIndexPathForNewFolderRow:(id)arg0 ;
-(BOOL)bookmarkInfoViewControllerCanSaveBookmarkChanges:(id)arg0 ;
-(BOOL)bookmarkInfoViewControllerShouldUseTranslucentAppearance:(id)arg0 ;
-(BOOL)bookmarkTextEntryTableViewControllerShouldUseTranslucentAppearance:(id)arg0 ;
-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(BOOL)canSaveChanges;
-(BOOL)hasTranslucentAppearance;
-(BOOL)isEditingField;
-(BOOL)tableView:(id)arg0 canFocusRowAtIndexPath:(id)arg1 ;
-(BOOL)titleCellHasText;
-(NSInteger)_numberOfExpandedFolderPickerRows;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_cellForExpandedFolderAtIndex:(NSInteger)arg0 withTableView:(id)arg1 ;
-(id)_cellForNewFolderRowWithTableView:(id)arg0 ;
-(id)_cellForParentBookmarkWithTableView:(id)arg0 ;
-(id)_dequeueFolderPickerCellFromTableView:(id)arg0 ;
-(id)_iconForViewCellGivenBookmark:(id)arg0 ;
-(id)_titleCell;
-(id)backgroundColorUsingTranslucentAppearance:(BOOL)arg0 ;
-(id)initWithBookmark:(id)arg0 childBookmarks:(id)arg1 inCollection:(id)arg2 addingBookmark:(BOOL)arg3 toFavorites:(BOOL)arg4 willBeDisplayedModally:(BOOL)arg5 ;
-(id)initWithBookmark:(id)arg0 inCollection:(id)arg1 addingBookmark:(BOOL)arg2 ;
-(id)keyCommands;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 willSelectRowAtIndexPath:(id)arg1 ;
-(struct CGPoint )_centerForIconView;
-(struct UIEdgeInsets )_cellInset;
-(void)_addActionsForTextFields;
-(void)_bookmarksDidReload:(id)arg0 ;
-(void)_createCellsIfNeeded;
-(void)_createNewFolder;
-(void)_didBeginEditingTextField:(id)arg0 ;
-(void)_didChangeEditingTextField:(id)arg0 ;
-(void)_editField:(NSUInteger)arg0 ;
-(void)_reloadFolderInfoForced:(BOOL)arg0 ;
-(void)_removeActionsForTextFields;
-(void)_returnWasPressedInTextField:(id)arg0 ;
-(void)_saveButtonPressed;
-(void)_setFolderPickerExpanded:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)_updateCellValues;
-(void)_updateIconViewFrame;
-(void)_updateSaveButton;
-(void)_valuesChanged;
-(void)bookmarkInfoViewController:(id)arg0 didFinishWithResult:(BOOL)arg1 ;
-(void)bookmarkTextEntryTableViewController:(id)arg0 dismissedWithText:(id)arg1 ;
-(void)cancel;
-(void)cancelKeyPressed;
-(void)dealloc;
-(void)didRotateFromInterfaceOrientation:(NSInteger)arg0 ;
-(void)loadView;
-(void)reloadData;
-(void)saveChanges;
-(void)saveKeyPressed;
-(void)setParent:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)updateBookmarkIcon;
-(void)updateTranslucentAppearance;
-(void)validateCommand:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif