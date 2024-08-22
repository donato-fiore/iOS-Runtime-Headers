// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFACCESSRESOURCEACTIONSETTINGSVIEWCONTROLLER_H
#define WFACCESSRESOURCEACTIONSETTINGSVIEWCONTROLLER_H

@class WFActionSettingsViewController, NSArray, NSString;
@protocol UITableViewDataSource, UITableViewDelegate;



@interface WFAccessResourceActionSettingsViewController : WFActionSettingsViewController <UITableViewDataSource, UITableViewDelegate>



@property (readonly, nonatomic) NSArray *accessResources; // ivar: _accessResources
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithAction:(id)arg0 definition:(id)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)loadView;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif