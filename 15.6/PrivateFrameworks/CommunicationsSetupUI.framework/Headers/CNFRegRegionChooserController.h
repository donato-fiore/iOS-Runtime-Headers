// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNFREGREGIONCHOOSERCONTROLLER_H
#define CNFREGREGIONCHOOSERCONTROLLER_H

@class UITableViewController, UIViewController<PSController>, PSRootController, PSSpecifier, NSString, NSArray, UISearchController;
@protocol UISearchResultsUpdating, UISearchControllerDelegate, UISearchBarDelegate, CNFRegRegionChooserDelegate, PSController;



@interface CNFRegRegionChooserController : UITableViewController <UISearchResultsUpdating, UISearchControllerDelegate, UISearchBarDelegate, CNFRegRegionChooserDelegate, PSController>

 {
    UIViewController<PSController> *_parentController;
    PSRootController *_rootController;
    PSSpecifier *_specifier;
}


@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<CNFRegRegionChooserDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSArray *filteredRegionList; // ivar: _filteredRegionList
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *regionList; // ivar: _regionList
@property (retain, nonatomic) UISearchController *searchController; // ivar: _searchController
@property (retain, nonatomic) NSString *selectedRegionID; // ivar: _selectedRegionID
@property (readonly) Class superclass;


-(BOOL)canBeShownFromSuspendedState;
-(BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg0 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)drillDownControllerList;
-(id)initWithRegionList:(id)arg0 selectedRegionID:(id)arg1 ;
-(id)initWithStyle:(NSInteger)arg0 ;
-(id)parentController;
-(id)readPreferenceValue:(id)arg0 ;
-(id)rootController;
-(id)specifier;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_drillDownControllersWithArray:(id)arg0 ;
-(void)_hideTableViewCells;
-(void)_selectRegionID:(id)arg0 ;
-(void)_selectRegionList:(id)arg0 ;
-(void)_showTableViewCells;
-(void)dealloc;
-(void)didLock;
-(void)didPresentSearchController:(id)arg0 ;
-(void)didUnlock;
-(void)didWake;
-(void)handleURL:(id)arg0 ;
-(void)loadView;
-(void)regionChooser:(id)arg0 selectedRegionID:(id)arg1 ;
-(void)setParentController:(id)arg0 ;
-(void)setPreferenceValue:(id)arg0 specifier:(id)arg1 ;
-(void)setRootController:(id)arg0 ;
-(void)setSpecifier:(id)arg0 ;
-(void)showController:(id)arg0 ;
-(void)showController:(id)arg0 animate:(BOOL)arg1 ;
-(void)statusBarWillAnimateByHeight:(CGFloat)arg0 ;
-(void)suspend;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)updateSearchResultsForSearchController:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewDidUnload;
-(void)willBecomeActive;
-(void)willPresentSearchController:(id)arg0 ;
-(void)willResignActive;
-(void)willUnlock;


@end


#endif