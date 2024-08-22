// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFEMAILTRIGGERCONFIGURATIONVIEWCONTROLLER_H
#define WFEMAILTRIGGERCONFIGURATIONVIEWCONTROLLER_H

@class WFTriggerConfigurationViewController, NSArray, NSString, UIViewController, UITableView;
@protocol UITableViewDataSource, UITableViewDelegate, WFRecipientFieldViewControllerDelegate, WFTriggerTableViewControllerDelegate;



@interface WFEmailTriggerConfigurationViewController : WFTriggerConfigurationViewController <UITableViewDataSource, UITableViewDelegate, WFRecipientFieldViewControllerDelegate, WFTriggerTableViewControllerDelegate>



@property (retain, nonatomic) NSArray *allAccounts; // ivar: _allAccounts
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) UIViewController *recipientFieldViewController; // ivar: _recipientFieldViewController
@property (readonly, nonatomic) NSArray *sections; // ivar: _sections
@property (weak, nonatomic) UIViewController *senderFieldViewController; // ivar: _senderFieldViewController
@property (nonatomic) BOOL showingAccounts; // ivar: _showingAccounts
@property (nonatomic) BOOL showingRecipients; // ivar: _showingRecipients
@property (readonly) Class superclass;
@property (retain, nonatomic) UITableView *tableView; // ivar: _tableView


-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)accountFromAccountIdentifier:(id)arg0 ;
-(id)infoForSection:(NSInteger)arg0 ;
-(id)initWithTrigger:(id)arg0 mode:(NSUInteger)arg1 ;
-(id)supportedAccountTypeIdentifiers;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(void)loadView;
-(void)presentNavControllerWithRootViewController:(id)arg0 ;
-(void)recipientViewControllerDidFinish:(id)arg0 cancelled:(BOOL)arg1 ;
-(void)setUpAccounts;
-(void)showSubjectContainsAlert;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)triggerTableViewController:(id)arg0 didFinishWithAnySelected:(BOOL)arg1 orSelectedOptions:(id)arg2 ;
-(void)triggerTableViewControllerDidCancel:(id)arg0 ;
-(void)updateUI;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif