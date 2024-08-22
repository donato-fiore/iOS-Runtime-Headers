// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HRACCOUNTSTABLEVIEWCONTROLLER_H
#define HRACCOUNTSTABLEVIEWCONTROLLER_H

@class UITableViewController, NSArray;
@protocol HRRecordViewControllerFactory;


#import "HRContentStatusView.h"
#import "HRProfile.h"

@interface HRAccountsTableViewController : UITableViewController

@property (retain, nonatomic) NSArray *accounts; // ivar: _accounts
@property (retain, nonatomic) NSObject<HRRecordViewControllerFactory> *factory; // ivar: _factory
@property (retain, nonatomic) HRContentStatusView *loadingView; // ivar: _loadingView
@property (readonly, nonatomic) HRProfile *profile; // ivar: _profile


-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)init;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_hideLoadingIndicator;
-(void)_reloadAccounts;
-(void)_showLoadingIndicator;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif