// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFAUTOMATIONSELECTTYPEVIEWCONTROLLER_H
#define WFAUTOMATIONSELECTTYPEVIEWCONTROLLER_H

@class UITableViewController, NSArray, NSString, WFTriggerManager;
@protocol UITableViewDataSource, UITableViewDelegate, WFAutomationSelectTypeViewControllerDelegate;



@interface WFAutomationSelectTypeViewController : UITableViewController <UITableViewDataSource, UITableViewDelegate>



@property (retain, nonatomic) NSArray *availableFocusModes; // ivar: _availableFocusModes
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WFAutomationSelectTypeViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *tableContent; // ivar: _tableContent
@property (readonly, nonatomic) WFTriggerManager *triggerManager; // ivar: _triggerManager


+(BOOL)kettleEnabled;
+(id)allKnownTriggersSortedAsInUI;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)allTriggerTypeGroups;
-(id)buildTableContent;
-(id)initWithTriggerManager:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(id)triggerForIndexPath:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif