// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIEXPANDEDBARITEMSTABLEVIEWCONTROLLER_H
#define UIEXPANDEDBARITEMSTABLEVIEWCONTROLLER_H



#import "UITableViewController.h"
#import "UIBarButtonItemGroup.h"

@interface UIExpandedBarItemsTableViewController : UITableViewController

@property (readonly, nonatomic) UIBarButtonItemGroup *barButtonGroup; // ivar: _barButtonGroup


-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(NSUInteger)_numberOfItems;
-(id)_displayTitleForBarButtonItem:(id)arg0 ;
-(id)_visibleItems;
-(id)initWithBarButtonGroup:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(struct CGSize )preferredContentSize;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif