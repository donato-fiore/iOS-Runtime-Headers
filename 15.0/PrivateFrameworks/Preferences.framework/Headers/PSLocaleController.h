// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PSLOCALECONTROLLER_H
#define PSLOCALECONTROLLER_H

@class UITableView, UIView, UISearchBar, NSString, NSArray;
@protocol UITableViewDataSource, UITableViewDelegate, UISearchBarDelegate;


#import "PSViewController.h"
#import "PSRegion.h"
#import "PSLocaleSelector.h"

@interface PSLocaleController : PSViewController <UITableViewDataSource, UITableViewDelegate, UISearchBarDelegate>

 {
    UITableView *_tableView;
    UIView *_contentView;
    UISearchBar *_searchBar;
    BOOL _searchMode;
    BOOL _hideKeyboardInSearchMode;
}


@property (retain, nonatomic) PSRegion *currentRegion; // ivar: _currentRegion
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSArray *filteredListContent; // ivar: _filteredListContent
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PSLocaleSelector *localeSelector; // ivar: _localeSelector
@property (retain, nonatomic) NSArray *regionsList; // ivar: _regionsList
@property (retain, nonatomic) NSArray *sections; // ivar: _sections
@property (readonly) Class superclass;


-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_mainContentView;
-(id)filteredRegionsForRegionList:(id)arg0 searchString:(id)arg1 ;
-(id)sectionIndexTitlesForTableView:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)dealloc;
-(void)loadRegions;
-(void)loadView;
-(void)reloadDataAndScrollToCheckedRegionAnimated:(BOOL)arg0 ;
-(void)reloadSections;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)searchBar:(id)arg0 textDidChange:(id)arg1 ;
-(void)searchBarTextDidBeginEditing:(id)arg0 ;
-(void)searchBarTextDidEndEditing:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)updateChecked:(id)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif