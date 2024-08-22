// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFAUTOMATIONLISTVIEWCONTROLLER_H
#define WFAUTOMATIONLISTVIEWCONTROLLER_H

@class UITableViewController, WFDatabase, NSString, WFHomeManager, WFDatabaseResult, NSArray, UIView, WFTriggerManager;
@protocol WFCreateAutomationCoordinatorDelegate, WFEditAutomationCoordinatorDelegate, WFDatabaseResultObserver, WFHomeManagerEventObserver, HMHomeDelegate, HUTriggerEditorDelegate, UITableViewDataSource, UITableViewDelegate;


#import "WFCreateAutomationCoordinator.h"
#import "WFEditAutomationCoordinator.h"

@interface WFAutomationListViewController : UITableViewController <WFCreateAutomationCoordinatorDelegate, WFEditAutomationCoordinatorDelegate, WFDatabaseResultObserver, WFHomeManagerEventObserver, HMHomeDelegate, HUTriggerEditorDelegate, UITableViewDataSource, UITableViewDelegate>



@property (retain, nonatomic) WFCreateAutomationCoordinator *createAutomationCoordinator; // ivar: _createAutomationCoordinator
@property (readonly, nonatomic) WFDatabase *database; // ivar: _database
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) WFEditAutomationCoordinator *editAutomationCoordinator; // ivar: _editAutomationCoordinator
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) WFHomeManager *homeManager; // ivar: _homeManager
@property (readonly, nonatomic) WFDatabaseResult *personalAutomationsDatabaseResult; // ivar: _personalAutomationsDatabaseResult
@property (nonatomic) BOOL showsAddNewAutomationButton; // ivar: _showsAddNewAutomationButton
@property (copy, nonatomic) NSArray *sortedPersonalAutomations; // ivar: _sortedPersonalAutomations
@property (readonly, nonatomic) UIView *subheadWrapperView; // ivar: _subheadWrapperView
@property (readonly) Class superclass;
@property (retain, nonatomic) NSArray *tableSections; // ivar: _tableSections
@property (retain, nonatomic) WFTriggerManager *triggerManager; // ivar: _triggerManager


-(BOOL)showEditViewForItem:(id)arg0 ;
-(BOOL)showHomeAutomationEditorForTriggerItem:(id)arg0 ;
-(BOOL)showPersonalAutomationEditorForConfiguredTrigger:(id)arg0 ;
-(BOOL)tableView:(id)arg0 canEditRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithDatabase:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(void)buildTableSections;
-(void)configureCell:(id)arg0 forItem:(id)arg1 ;
-(void)createAutomationCoordinatorDidCancel:(id)arg0 ;
-(void)createAutomationCoordinatorDidFinish:(id)arg0 ;
-(void)databaseResultDidChange:(id)arg0 ;
-(void)dealloc;
-(void)editAutomationCoordinatorDidCancel:(id)arg0 ;
-(void)editAutomationCoordinatorDidFinish:(id)arg0 ;
-(void)flashAutomationForTriggerID:(id)arg0 ;
-(void)home:(id)arg0 didAddTrigger:(id)arg1 ;
-(void)home:(id)arg0 didRemoveTrigger:(id)arg1 ;
-(void)home:(id)arg0 didUpdateNameForTrigger:(id)arg1 ;
-(void)home:(id)arg0 didUpdateTrigger:(id)arg1 ;
-(void)homeDidUpdateName:(id)arg0 ;
-(void)homeManagerDidUpdateHomes:(id)arg0 ;
-(void)loadView;
-(void)startCreateNewAutomation;
-(void)startCreateNewAutomationFlowAtStep:(NSUInteger)arg0 ;
-(void)startCreateNewHomeAutomation;
-(void)startCreateNewPersonalAutomation;
-(void)tableView:(id)arg0 commitEditingStyle:(NSInteger)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)triggerEditor:(id)arg0 didFinishWithTriggerBuilder:(id)arg1 ;
-(void)updateSubheadLayoutMargins;
-(void)updateTableViewLayoutMargins;
-(void)updateUI;
-(void)viewDidLoad;
-(void)viewLayoutMarginsDidChange;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif