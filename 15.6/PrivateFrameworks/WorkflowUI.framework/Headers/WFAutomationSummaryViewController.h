// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFAUTOMATIONSUMMARYVIEWCONTROLLER_H
#define WFAUTOMATIONSUMMARYVIEWCONTROLLER_H

@class UIViewController, NSArray, NSString, UITableView, WFTrigger, WFConfiguredTriggerRecord, WFWorkflow;
@protocol UITableViewDataSource, UITableViewDelegate, WFAutomationSummaryViewControllerDelegate;



@interface WFAutomationSummaryViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>



@property (retain, nonatomic) NSArray *actionIcons; // ivar: _actionIcons
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WFAutomationSummaryViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger mode; // ivar: _mode
@property (readonly) Class superclass;
@property (readonly, nonatomic) UITableView *tableView; // ivar: _tableView
@property (readonly, nonatomic) WFTrigger *trigger; // ivar: _trigger
@property (readonly, copy, nonatomic) NSString *triggerIdentifier; // ivar: _triggerIdentifier
@property (readonly, nonatomic) WFConfiguredTriggerRecord *triggerRecord; // ivar: _triggerRecord
@property (retain, nonatomic) WFWorkflow *workflow; // ivar: _workflow


-(BOOL)isModalInPresentation;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)infoForSection:(NSInteger)arg0 ;
-(id)initWithTrigger:(id)arg0 triggerIdentifier:(id)arg1 workflow:(id)arg2 mode:(NSUInteger)arg3 ;
-(id)sections;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(void)didTapDone:(id)arg0 ;
-(void)enabledSwitchChanged:(id)arg0 ;
-(void)loadActionDescriptionIcons;
-(void)loadView;
-(void)notifySwitchChanged:(id)arg0 ;
-(void)promptSwitchChanged:(id)arg0 ;
-(void)reloadPromptingAndNotifySection;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)testAutomation;
-(void)updateUI;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif