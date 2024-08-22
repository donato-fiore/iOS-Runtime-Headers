// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSADEBUGTABLEVIEWCONTROLLER_H
#define TSADEBUGTABLEVIEWCONTROLLER_H

@class UITableViewController, NSMutableArray;


#import "TSADebugViewController.h"

@interface TSADebugTableViewController : UITableViewController {
    NSMutableArray *_debugItems;
    TSADebugViewController *_parent;
}




-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)init;
-(id)initWithParent:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)addItemWithTitle:(id)arg0 target:(id)arg1 action:(SEL)arg2 ;
-(void)dealloc;
-(void)hideImmediately;
-(void)loadView;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif