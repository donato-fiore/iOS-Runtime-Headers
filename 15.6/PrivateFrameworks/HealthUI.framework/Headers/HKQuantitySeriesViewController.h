// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKQUANTITYSERIESVIEWCONTROLLER_H
#define HKQUANTITYSERIESVIEWCONTROLLER_H

@class UIViewController, UITableView;


#import "HKQuantitySeriesDataProvider.h"

@interface HKQuantitySeriesViewController : UIViewController

@property (retain, nonatomic) HKQuantitySeriesDataProvider *dataProvider; // ivar: _dataProvider
@property (retain, nonatomic) UITableView *tableView; // ivar: _tableView


-(void)loadView;
-(void)setEditing:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)willMoveToParentViewController:(id)arg0 ;


@end


#endif