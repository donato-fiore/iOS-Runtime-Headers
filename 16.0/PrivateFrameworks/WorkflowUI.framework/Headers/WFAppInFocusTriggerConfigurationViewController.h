// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFAPPINFOCUSTRIGGERCONFIGURATIONVIEWCONTROLLER_H
#define WFAPPINFOCUSTRIGGERCONFIGURATIONVIEWCONTROLLER_H

@class WFTriggerConfigurationViewController, NSString, NSMutableArray, NSArray, NSMutableOrderedSet, UITableView;
@protocol WFAppSearchViewControllerDelegate, UITableViewDataSource, UITableViewDelegate, WFTriggerMultiSelectCellDelegate;



@interface WFAppInFocusTriggerConfigurationViewController : WFTriggerConfigurationViewController <WFAppSearchViewControllerDelegate, UITableViewDataSource, UITableViewDelegate, WFTriggerMultiSelectCellDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMutableArray *displayNameOfSelectedApps; // ivar: _displayNameOfSelectedApps
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *sections; // ivar: _sections
@property (retain, nonatomic) NSMutableOrderedSet *selectedApps; // ivar: _selectedApps
@property (readonly) Class superclass;
@property (retain, nonatomic) UITableView *tableView; // ivar: _tableView


-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)infoForSection:(NSInteger)arg0 ;
-(id)initWithTrigger:(id)arg0 mode:(NSUInteger)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(void)appSearchViewController:(id)arg0 didFinishWithApps:(id)arg1 ;
-(void)appSearchViewControllerDidCancel:(id)arg0 ;
-(void)cell:(id)arg0 didSelectOptionWithLeftViewSelected:(BOOL)arg1 rightViewSelected:(BOOL)arg2 ;
-(void)loadView;
-(void)presentNavControllerWithRootViewController:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)updateDisplayNameOfSelectedApps;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif