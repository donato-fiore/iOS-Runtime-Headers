// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFACCOUNTLISTVIEWCONTROLLER_H
#define WFACCOUNTLISTVIEWCONTROLLER_H

@class WFActionSettingsViewController, NSArray, NSString, UITableView;
@protocol UITableViewDataSource, UITableViewDelegate, WFAccountLoginViewControllerDelegate;



@interface WFAccountListViewController : WFActionSettingsViewController <UITableViewDataSource, UITableViewDelegate, WFAccountLoginViewControllerDelegate>



@property (readonly, nonatomic) Class accountClass; // ivar: _accountClass
@property (copy, nonatomic) NSArray *accounts; // ivar: _accounts
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, weak, nonatomic) UITableView *tableView; // ivar: _tableView


-(BOOL)tableView:(id)arg0 shouldIndentWhileEditingRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 editingStyleForRowAtIndexPath:(id)arg1 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithAction:(id)arg0 definition:(id)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)loadView;
-(void)loginViewController:(id)arg0 didLoginWithAccount:(id)arg1 ;
-(void)loginViewControllerDidCancel:(id)arg0 ;
-(void)tableView:(id)arg0 commitEditingStyle:(NSInteger)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif