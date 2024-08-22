// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NMCUICLOUDNOTIFICATIONONBOARDINGVIEWCONTROLLER_H
#define NMCUICLOUDNOTIFICATIONONBOARDINGVIEWCONTROLLER_H

@class OBTableWelcomeController, NSArray, NSString, NSLayoutConstraint;
@protocol UITableViewDataSource, UITableViewDelegate, NMCUIAccountDataSourceObserver;


#import "NMCUICloudNotificationAccountDataSource.h"

@interface NMCUICloudNotificationOnboardingViewController : OBTableWelcomeController <UITableViewDataSource, UITableViewDelegate, NMCUIAccountDataSourceObserver>



@property (retain, nonatomic) NSArray *accounts; // ivar: _accounts
@property (copy, nonatomic) id *completion; // ivar: _completion
@property (retain, nonatomic) NMCUICloudNotificationAccountDataSource *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSLayoutConstraint *tableViewHeightConstraint; // ivar: _tableViewHeightConstraint


+(BOOL)missingCredentialsForAccounts:(id)arg0 ;
+(id)detailTextForAccounts:(id)arg0 ;
-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithAccount:(id)arg0 dataSource:(id)arg1 completion:(id)arg2 ;
-(id)initWithAccounts:(id)arg0 dataSource:(id)arg1 completion:(id)arg2 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)accountDataSourceAccountsChanged:(id)arg0 ;
-(void)enableButtonTapped:(id)arg0 ;
-(void)notNowButtonTapped:(id)arg0 ;
-(void)setupView;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLayoutSubviews;


@end


#endif