// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXUISETTINGSSEARCHABLEBASELISTCONTROLLER_H
#define AXUISETTINGSSEARCHABLEBASELISTCONTROLLER_H

@class NSString, NSArray, UISearchController;
@protocol UISearchResultsUpdating, UISearchBarDelegate;


#import "AXUISettingsBaseListController.h"

@interface AXUISettingsSearchableBaseListController : AXUISettingsBaseListController <UISearchResultsUpdating, UISearchBarDelegate>

 {
    BOOL _needsSpecifierRefresh;
    NSString *_cachedSearchTextWhileDeactivating;
}


@property (retain, nonatomic) NSArray *allSpecifiers; // ivar: _allSpecifiers
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UISearchController *searchController; // ivar: _searchController
@property (retain, nonatomic) NSString *searchText; // ivar: _searchText
@property (readonly) Class superclass;


-(BOOL)_specifierIsGroupSpecifier:(id)arg0 ;
-(BOOL)shouldShowSpecifier:(id)arg0 withSearchText:(id)arg1 ;
-(id)makeSpecifiers;
-(id)specifiers;
-(void)_loadAllSpecifiersIfNeeded;
-(void)deactivateAndPersistSearchText;
-(void)searchBarTextDidEndEditing:(id)arg0 ;
-(void)setNeedsSpecifierRefresh;
-(void)updateSearchResultsForSearchController:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif