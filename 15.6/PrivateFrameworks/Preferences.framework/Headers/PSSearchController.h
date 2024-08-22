// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PSSEARCHCONTROLLER_H
#define PSSEARCHCONTROLLER_H

@class UISearchController, NSString, UISearchBar;
@protocol PSSearchModelDelegate, PSSearchModelDataSource, PSSearchResultsControllerDelegate, UISearchResultsUpdating, UISearchControllerDelegate, PSSearchControllerDelegate;

#import <Foundation/Foundation.h>

#import "PSSearchResultsController.h"
#import "PSListController.h"

@interface PSSearchController : NSObject <PSSearchModelDelegate, PSSearchModelDataSource, PSSearchResultsControllerDelegate, UISearchResultsUpdating, UISearchControllerDelegate>

 {
    UISearchController *_searchController;
    PSSearchResultsController *_resultsController;
    BOOL _searchEnabled;
    int _notifyToken;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PSSearchControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *iconForSearchEntryHandler; // ivar: _iconForSearchEntryHandler
@property (readonly, weak, nonatomic) PSListController *listController; // ivar: _listController
@property (readonly, nonatomic) UISearchBar *searchBar;
@property (readonly) Class superclass;


-(BOOL)_setBoolValue:(BOOL)arg0 forIvar:(*BOOL)arg1 ;
-(BOOL)activateWithInitialText:(id)arg0 animated:(BOOL)arg1 ;
-(BOOL)isActive;
-(BOOL)searchResultsController:(id)arg0 shouldShowSwitchForSearchEntry:(id)arg1 ;
-(Class)rootSearchControllerClassForSearchModel:(id)arg0 ;
-(id)initWithListController:(id)arg0 ;
-(id)rootSpecifiersForSearchModel:(id)arg0 ;
-(id)searchResultsController:(id)arg0 iconForSearchEntry:(id)arg1 ;
-(id)searchResultsController:(id)arg0 switchActionForSearchEntry:(id)arg1 ;
-(void)_buildSearchUIIfNecessary;
-(void)_reloadSettings:(BOOL)arg0 ;
-(void)_updateListControllerHeaderView:(BOOL)arg0 ;
-(void)_updateSearchResultsWithText:(id)arg0 ;
-(void)addRootSpecifiers:(id)arg0 ;
-(void)dealloc;
-(void)didDismissSearchController:(id)arg0 ;
-(void)reloadRootSpecifiers:(id)arg0 ;
-(void)removeRootSpecifiers:(id)arg0 ;
-(void)searchModel:(id)arg0 updatedWithNewResults:(id)arg1 forQuery:(id)arg2 ;
-(void)searchModelDidFinishIndexing:(id)arg0 ;
-(void)searchModelWillBeginIndexing:(id)arg0 ;
-(void)searchResultsController:(id)arg0 didSelectSearchEntry:(id)arg1 ;
-(void)setActive:(BOOL)arg0 ;
-(void)updateSearchResultsForSearchController:(id)arg0 ;
-(void)willPresentSearchController:(id)arg0 ;


@end


#endif