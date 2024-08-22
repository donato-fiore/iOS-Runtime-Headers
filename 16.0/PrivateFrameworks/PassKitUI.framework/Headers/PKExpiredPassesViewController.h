// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKEXPIREDPASSESVIEWCONTROLLER_H
#define PKEXPIREDPASSESVIEWCONTROLLER_H

@class PKGroupsController, NSArray, NSMutableDictionary, PKPass, UITableView, UIView, UIBarButtonItem, UILabel, NSString;
@protocol PKExpiredTableViewControllerCachingDelegate, PKExpiredPassesViewControllerDelegate;


#import "PKExpiredTableViewController.h"

@interface PKExpiredPassesViewController : PKExpiredTableViewController <PKExpiredTableViewControllerCachingDelegate>

 {
    PKGroupsController *_groupsController;
    NSArray *_expiredSectionPasses;
    NSMutableDictionary *_locationStringsForPassUniqueIDs;
    PKPass *_viewingPass;
    UITableView *_tableView;
    UIView *_footerView;
    id<PKExpiredPassesViewControllerDelegate> *_delegate;
    UIBarButtonItem *_doneButton;
    UIBarButtonItem *_editButton;
    UIBarButtonItem *_selectButton;
    UIBarButtonItem *_cancelButton;
    NSInteger _currentEditingStyle;
    UILabel *_selectedPassesLabel;
    NSInteger _selectedPassesCount;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)detailTextStringForPass:(id)arg0 ;
-(BOOL)passExistsWithUniqueIdentifier:(id)arg0 ;
-(BOOL)tableView:(id)arg0 canMoveRowAtIndexPath:(id)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForFooterInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_hyperlinkFooterView;
-(id)_selectedExpiredPassesString;
-(id)initWithExistingGroupsController:(id)arg0 delegate:(id)arg1 ;
-(id)pass;
-(id)passAtIndexPath:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 contextMenuConfigurationForRowAtIndexPath:(id)arg1 point:(struct CGPoint )arg2 ;
-(id)tableView:(id)arg0 viewForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 willDeselectRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 willSelectRowAtIndexPath:(id)arg1 ;
-(id)viewControllerForRowAtIndexPath:(id)arg0 ;
-(void)_applyDeletionOrRecovery;
-(void)_cancel;
-(void)_deletePassPressed;
-(void)_done;
-(void)_edit;
-(void)_recoverPassPressed;
-(void)_select;
-(void)_updateSelectedPassesText;
-(void)_updateTitles;
-(void)configureCell:(id)arg0 atIndexPath:(id)arg1 withPass:(id)arg2 ;
-(void)deletePass:(id)arg0 atIndexPath:(id)arg1 ;
-(void)prefetchItemsAtIndexPaths:(id)arg0 ;
-(void)recoverPass:(id)arg0 atIndexPath:(id)arg1 ;
-(void)removeExpiredSectionPassWithUniqueID:(id)arg0 isDeletion:(BOOL)arg1 ;
-(void)setEditing:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)tableView:(id)arg0 commitEditingStyle:(NSInteger)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableViewDidUpdateSelection:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif