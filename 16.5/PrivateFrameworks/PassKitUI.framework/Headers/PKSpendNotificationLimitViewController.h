// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKSPENDNOTIFICATIONLIMITVIEWCONTROLLER_H
#define PKSPENDNOTIFICATIONLIMITVIEWCONTROLLER_H

@class UITableViewController, NSString;


#import "PKCurrencyAmountSelectorOptionProvider.h"
#import "PKTableViewDiffableDataSource.h"
#import "PKCurrencyAmountSelectorCustomEntryItem.h"

@interface PKSpendNotificationLimitViewController : UITableViewController {
    NSString *_footerText;
    PKCurrencyAmountSelectorOptionProvider *_provider;
    PKTableViewDiffableDataSource *_dataSource;
    PKCurrencyAmountSelectorCustomEntryItem *_customEntryItem;
}


@property (copy, nonatomic) id *changeHandler; // ivar: _changeHandler


-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(BOOL)tableView:(id)arg0 shouldIndentWhileEditingRowAtIndexPath:(id)arg1 ;
-(NSInteger)tableView:(id)arg0 editingStyleForRowAtIndexPath:(id)arg1 ;
-(id)initWithTitle:(id)arg0 footerText:(id)arg1 provider:(id)arg2 ;
-(void)_deleteOptionAtIndexPath:(id)arg0 ;
-(void)_doneButtonTapped:(id)arg0 ;
-(void)_updateNavigationItemsIsEditing:(BOOL)arg0 ;
-(void)_updateSnapshotAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif