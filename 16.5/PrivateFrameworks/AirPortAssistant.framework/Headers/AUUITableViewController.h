// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AUUITABLEVIEWCONTROLLER_H
#define AUUITABLEVIEWCONTROLLER_H

@class UITableViewController, UITableView;
@protocol TableViewManagerDelegate;


#import "TableViewManager.h"

@interface AUUITableViewController : UITableViewController <TableViewManagerDelegate>



@property (nonatomic) NSObject<TableViewManagerDelegate> *delegate;
@property (readonly, nonatomic) TableViewManager *tableManager; // ivar: _tableManager
@property (retain, nonatomic) UITableView *tableView;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)dealloc;
-(void)initAUUITableViewControllerCommon;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif