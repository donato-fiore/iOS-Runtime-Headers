// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFCONDITIONALACTIONSETTINGSVIEWCONTROLLER_H
#define WFCONDITIONALACTIONSETTINGSVIEWCONTROLLER_H

@class WFActionSettingsViewController, NSString, UITableView;
@protocol UITableViewDataSource, UITableViewDelegate;



@interface WFConditionalActionSettingsViewController : WFActionSettingsViewController <UITableViewDataSource, UITableViewDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (weak, nonatomic) UITableView *tableView; // ivar: _tableView


-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(void)loadView;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;


@end


#endif