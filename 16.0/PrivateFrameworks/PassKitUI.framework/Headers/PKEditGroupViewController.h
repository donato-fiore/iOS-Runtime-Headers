// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKEDITGROUPVIEWCONTROLLER_H
#define PKEDITGROUPVIEWCONTROLLER_H

@class PKGroup, UIBarButtonItem, PKPass, UITableView, NSString;
@protocol PKGroupDelegate, PKEditPassesDetailsResponder, PKEditGroupViewControllerDelegate;


#import "PKEditTableViewController.h"

@interface PKEditGroupViewController : PKEditTableViewController <PKGroupDelegate, PKEditPassesDetailsResponder>

 {
    PKGroup *_group;
    id<PKGroupDelegate> *_savedDelegate;
    UIBarButtonItem *_deleteToolbarItem;
    UIBarButtonItem *_flexibleSpace;
    PKPass *_viewingPass;
    UITableView *_tableView;
    NSInteger _editStyle;
    CGSize _imageSizeNeeded;
    id<PKEditGroupViewControllerDelegate> *_delegate;
    BOOL _isForWatch;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)passExistsWithUniqueIdentifier:(id)arg0 ;
-(BOOL)tableView:(id)arg0 canMoveRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)group;
-(id)initWithGroup:(id)arg0 existingGroupsController:(id)arg1 style:(NSInteger)arg2 placeholders:(id)arg3 isForWatch:(BOOL)arg4 delegate:(id)arg5 ;
-(id)pass;
-(id)passAtIndexPath:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)viewControllerForRowAtIndexPath:(id)arg0 ;
-(void)_deleteAllPassesInGroup;
-(void)_deleteButtonPressed;
-(void)_presentAlertForUpdatedExpressPass:(id)arg0 ;
-(void)configureCell:(id)arg0 atIndexPath:(id)arg1 withPass:(id)arg2 ;
-(void)dealloc;
-(void)group:(id)arg0 didInsertPass:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)group:(id)arg0 didMovePassFromIndex:(NSUInteger)arg1 toIndex:(NSUInteger)arg2 ;
-(void)group:(id)arg0 didRemovePass:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)group:(id)arg0 didUpdatePass:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)prefetchItemsAtIndexPaths:(id)arg0 ;
-(void)tableView:(id)arg0 commitEditingStyle:(NSInteger)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 moveRowAtIndexPath:(id)arg1 toIndexPath:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif