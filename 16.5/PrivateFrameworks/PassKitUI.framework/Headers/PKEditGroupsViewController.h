// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKEDITGROUPSVIEWCONTROLLER_H
#define PKEDITGROUPSVIEWCONTROLLER_H

@class PKGroupsController, PKPass, PKGroup, UITableView, NSMutableArray, NSString;
@protocol PKGroupsControllerDelegate, PKGroupDelegate, PKEditTableViewControllerCachingDelegate, PKEditGroupViewControllerDelegate;


#import "PKEditTableViewController.h"

@interface PKEditGroupsViewController : PKEditTableViewController <PKGroupsControllerDelegate, PKGroupDelegate, PKEditTableViewControllerCachingDelegate, PKEditGroupViewControllerDelegate>

 {
    BOOL _editingMode;
    PKGroupsController *_groupsController;
    PKPass *_viewingPass;
    PKGroup *_viewingGroup;
    PKGroup *_deletingGroup;
    UITableView *_tableView;
    NSMutableArray *_actions;
    CGSize _imageSizeNeeded;
    BOOL _isForWatch;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)passExistsWithUniqueIdentifier:(id)arg0 ;
-(BOOL)shouldShowPreviewForRowAtIndexPath:(id)arg0 ;
-(BOOL)tableView:(id)arg0 canEditRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 editingStyleForRowAtIndexPath:(id)arg1 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)groupAtIndexPath:(id)arg0 ;
-(id)indexPathForGroup:(id)arg0 ;
-(id)initInEditingMode:(BOOL)arg0 existingGroupsController:(id)arg1 isForWatch:(BOOL)arg2 ;
-(id)passAtIndexPath:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg1 ;
-(id)viewControllerForRowAtIndexPath:(id)arg0 ;
-(void)_showNoPassesViewIfNoGroupsToShow;
-(void)configureCell:(id)arg0 atIndexPath:(id)arg1 withGroup:(id)arg2 ;
-(void)group:(id)arg0 didInsertPass:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)group:(id)arg0 didMovePassFromIndex:(NSUInteger)arg1 toIndex:(NSUInteger)arg2 ;
-(void)group:(id)arg0 didRemovePass:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)group:(id)arg0 didUpdatePass:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)groupViewController:(id)arg0 isDeletingGroup:(id)arg1 ;
-(void)groupsController:(id)arg0 didInsertGroup:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)groupsController:(id)arg0 didMoveGroup:(id)arg1 fromIndex:(NSUInteger)arg2 toIndex:(NSUInteger)arg3 ;
-(void)groupsController:(id)arg0 didRemoveGroup:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)groupsController:(id)arg0 didUpdateGroup:(id)arg1 ;
-(void)prefetchItemsAtIndexPaths:(id)arg0 ;
-(void)tableView:(id)arg0 commitEditingStyle:(NSInteger)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif