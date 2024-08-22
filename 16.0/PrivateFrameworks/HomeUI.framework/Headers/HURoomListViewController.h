// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUROOMLISTVIEWCONTROLLER_H
#define HUROOMLISTVIEWCONTROLLER_H

@class NSString;
@protocol HUEditRoomViewControllerPresentationDelegate, HUEditRoomViewControllerAddRoomDelegate, HURoomListViewControllerDelegate;


#import "HUItemTableViewController.h"
#import "HURoomListItemManager.h"

@interface HURoomListViewController : HUItemTableViewController <HUEditRoomViewControllerPresentationDelegate, HUEditRoomViewControllerAddRoomDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HURoomListViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HURoomListItemManager *itemManager;
@property (readonly) Class superclass;


-(BOOL)automaticallyUpdatesViewControllerTitle;
-(BOOL)tableView:(id)arg0 canMoveRowAtIndexPath:(id)arg1 ;
-(BOOL)tableView:(id)arg0 shouldIndentWhileEditingRowAtIndexPath:(id)arg1 ;
-(Class)cellClassForItem:(id)arg0 indexPath:(id)arg1 ;
-(NSInteger)tableView:(id)arg0 editingStyleForRowAtIndexPath:(id)arg1 ;
-(id)_reorderableHomeKitItemListForSection:(NSInteger)arg0 ;
-(id)_reorderableRoomItems;
-(id)init;
-(id)initWithHome:(id)arg0 delegate:(id)arg1 ;
-(id)tableView:(id)arg0 targetIndexPathForMoveFromRowAtIndexPath:(id)arg1 toProposedIndexPath:(id)arg2 ;
-(void)_addButtonPressed:(id)arg0 ;
-(void)_doneButtonPressed:(id)arg0 ;
-(void)_editButtonPressed:(id)arg0 ;
-(void)_saveItemOrder:(id)arg0 forSection:(NSInteger)arg1 resort:(BOOL)arg2 ;
-(void)_setReorderableHomeKitItemList:(id)arg0 forSection:(NSInteger)arg1 ;
-(void)diffableDataItemManager:(id)arg0 didUpdateItems:(id)arg1 addItems:(id)arg2 removeItems:(id)arg3 ;
-(void)editRoomViewControllerDidFinish:(id)arg0 withNewRoom:(id)arg1 ;
-(void)itemManager:(id)arg0 didInsertItem:(id)arg1 atIndexPath:(id)arg2 ;
-(void)itemManager:(id)arg0 didRemoveItem:(id)arg1 atIndexPath:(id)arg2 ;
-(void)itemManager:(id)arg0 didUpdateResultsForSourceItem:(id)arg1 ;
-(void)presentAddRoomViewControllerForEditRoomViewController:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 moveRowAtIndexPath:(id)arg1 toIndexPath:(id)arg2 ;
-(void)updateCell:(id)arg0 forItem:(id)arg1 indexPath:(id)arg2 animated:(BOOL)arg3 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif