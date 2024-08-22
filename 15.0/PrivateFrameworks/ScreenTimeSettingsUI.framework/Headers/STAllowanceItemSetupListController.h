// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STALLOWANCEITEMSETUPLISTCONTROLLER_H
#define STALLOWANCEITEMSETUPLISTCONTROLLER_H

@class PSListController, NSMutableDictionary, NSArray, NSString, NSMutableOrderedSet;
@protocol UISearchControllerDelegate;


#import "STAllowanceItemSearchResultsController.h"

@interface STAllowanceItemSetupListController : PSListController <UISearchControllerDelegate>



@property BOOL allAppsAndCategoriesSelected; // ivar: _allAppsAndCategoriesSelected
@property (readonly, nonatomic) NSMutableDictionary *applicationAndWebDomainSpecifiersByCategoryIdentifier; // ivar: _applicationAndWebDomainSpecifiersByCategoryIdentifier
@property (copy) NSArray *categorySpecifiers; // ivar: _categorySpecifiers
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) STAllowanceItemSearchResultsController *searchResultsController; // ivar: _searchResultsController
@property (readonly) NSMutableOrderedSet *selectedBundleIdentifiers; // ivar: _selectedBundleIdentifiers
@property (readonly) NSMutableOrderedSet *selectedCategoryIdentifiers; // ivar: _selectedCategoryIdentifiers
@property (readonly) NSMutableOrderedSet *selectedWebDomains; // ivar: _selectedWebDomains
@property (readonly) Class superclass;


-(BOOL)canBeShownFromSuspendedState;
-(NSInteger)tableViewStyle;
-(id)_applicationSpecifierForBundleIdentifier:(id)arg0 categoryIdentifier:(id)arg1 ;
-(id)_categoryDetailText:(id)arg0 ;
-(id)_categorySpecifierForIdentifier:(id)arg0 ;
-(id)_webDomainSpecifierForDomain:(id)arg0 usageItem:(id)arg1 ;
-(id)init;
-(id)specifiers;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_addCustomWebDomain:(id)arg0 specifier:(id)arg1 ;
-(void)_addWebsiteButtonPressed:(id)arg0 ;
-(void)_cleanUpRetainCycles;
-(void)_didPressCancelButton:(id)arg0 ;
-(void)_didPressDoneButton:(id)arg0 ;
-(void)_hasSelectionDidChangeFrom:(BOOL)arg0 to:(BOOL)arg1 ;
-(void)_selectCellsForSelectedIdentifiers:(id)arg0 ;
-(void)_showNewCategoriesCompatibilityAlertIfNeeded;
-(void)_updateApplicationSpecifiersWithBundleIdentifier:(id)arg0 categoryIdentifier:(id)arg1 shouldInsertSpecifier:(BOOL)arg2 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)setSpecifier:(id)arg0 ;
-(void)tableView:(id)arg0 didDeselectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)willDismissSearchController:(id)arg0 ;
-(void)willPresentSearchController:(id)arg0 ;
-(void)willResignActive;


@end


#endif