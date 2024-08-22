// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PSINTERNATIONALLANGUAGECONTROLLER_H
#define PSINTERNATIONALLANGUAGECONTROLLER_H

@class UISearchBar, UITableView, UIView, NSString, NSArray;
@protocol UITableViewDataSource, UITableViewDelegate, UISearchBarDelegate;


#import "PSViewController.h"
#import "PSLanguage.h"
#import "PSLanguageSelector.h"
#import "PSLocaleSelector.h"

@interface PSInternationalLanguageController : PSViewController <UITableViewDataSource, UITableViewDelegate, UISearchBarDelegate>

 {
    UISearchBar *_searchBar;
    UITableView *_tableView;
    UIView *_contentView;
}


@property (retain, nonatomic) PSLanguage *checkedLanguage; // ivar: _checkedLanguage
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSArray *deviceLanguages; // ivar: _deviceLanguages
@property (retain, nonatomic) NSArray *filteredDeviceLanguages; // ivar: _filteredDeviceLanguages
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PSLanguageSelector *languageSelector; // ivar: _languageSelector
@property (retain, nonatomic) PSLocaleSelector *localeSelector; // ivar: _localeSelector
@property (retain, nonatomic) NSString *savedSearchTerm; // ivar: _savedSearchTerm
@property (nonatomic) BOOL searchIsActive; // ivar: _searchIsActive
@property (readonly) Class superclass;


+(BOOL)capitalizeLanguageNames;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_mainContentView;
-(id)filteredLanguagesForLanguageList:(id)arg0 searchString:(id)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)cancelButtonTapped;
-(void)dealloc;
-(void)doneButtonTapped;
-(void)generateLanguageCells;
-(void)loadData;
-(void)loadView;
-(void)reloadDataAndScrollToCheckedLanguageWithAnimation:(BOOL)arg0 ;
-(void)searchBar:(id)arg0 textDidChange:(id)arg1 ;
-(void)searchBarCancelButtonClicked:(id)arg0 ;
-(void)searchBarTextDidBeginEditing:(id)arg0 ;
-(void)searchBarTextDidEndEditing:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)updateNavigationItem;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif