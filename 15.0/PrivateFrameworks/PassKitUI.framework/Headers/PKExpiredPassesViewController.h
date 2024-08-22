// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKEXPIREDPASSESVIEWCONTROLLER_H
#define PKEXPIREDPASSESVIEWCONTROLLER_H

@class PKGroupsController, NSArray, NSMutableDictionary, PKPass, UITableView, UIView, NSString;
@protocol PKExpiredTableViewControllerCachingDelegate, UIContextMenuInteractionDelegate, PKExpiredPassesViewControllerDelegate;


#import "PKExpiredTableViewController.h"

@interface PKExpiredPassesViewController : PKExpiredTableViewController <PKExpiredTableViewControllerCachingDelegate, UIContextMenuInteractionDelegate>

 {
    BOOL _editingMode;
    CGSize _imageSizeNeeded;
    PKGroupsController *_groupsController;
    NSArray *_expiredSectionPasses;
    NSMutableDictionary *_locationStringsForPassUniqueIDs;
    PKPass *_viewingPass;
    UITableView *_tableView;
    UIView *_footerView;
    id<PKExpiredPassesViewControllerDelegate> *_delegate;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)detailTextStringForPass:(id)arg0 ;
-(BOOL)contextMenuInteractionShouldBegin:(id)arg0 ;
-(BOOL)passExistsWithUniqueIdentifier:(id)arg0 ;
-(BOOL)tableView:(id)arg0 canMoveRowAtIndexPath:(id)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForFooterInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_hyperlinkFooterView;
-(id)contextMenuInteraction:(id)arg0 configurationForMenuAtLocation:(struct CGPoint )arg1 ;
-(id)contextMenuInteraction:(id)arg0 previewForHighlightingAtLocation:(struct CGPoint )arg1 ;
-(id)initWithExistingGroupsController:(id)arg0 delegate:(id)arg1 ;
-(id)pass;
-(id)passAtIndexPath:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 viewForFooterInSection:(NSInteger)arg1 ;
-(id)viewControllerForRowAtIndexPath:(id)arg0 ;
-(void)configureCell:(id)arg0 atIndexPath:(id)arg1 withPass:(id)arg2 ;
-(void)deletePass:(id)arg0 atIndexPath:(id)arg1 ;
-(void)prefetchItemsAtIndexPaths:(id)arg0 ;
-(void)recoverPass:(id)arg0 atIndexPath:(id)arg1 ;
-(void)removeExpiredSectionPassWithUniqueID:(id)arg0 isDeletion:(BOOL)arg1 ;
-(void)tableView:(id)arg0 commitEditingStyle:(NSInteger)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif