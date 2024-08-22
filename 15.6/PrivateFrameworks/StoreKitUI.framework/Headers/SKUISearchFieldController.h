// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUISEARCHFIELDCONTROLLER_H
#define SKUISEARCHFIELDCONTROLLER_H

@class SSVLoadURLOperation, NSOperationQueue, UITableViewController, UIViewController, NSString, UISearchBar;
@protocol SKUISearchControllerDelegate, UISearchResultsUpdating, UIPopoverPresentationControllerDelegate, UITableViewDataSource, UITableViewDelegate, UISearchBarDelegate, SKUITrendingSearchPageViewDelegate, SKUISearchFieldDelegate;

#import <Foundation/Foundation.h>

#import "SKUICompletionList.h"
#import "SKUISearchController.h"
#import "SKUIClientContext.h"

@interface SKUISearchFieldController : NSObject <SKUISearchControllerDelegate, UISearchResultsUpdating, UIPopoverPresentationControllerDelegate, UITableViewDataSource, UITableViewDelegate, UISearchBarDelegate, SKUITrendingSearchPageViewDelegate>

 {
    SKUICompletionList *_completionList;
    SSVLoadURLOperation *_loadOperation;
    NSOperationQueue *_operationQueue;
    UITableViewController *_searchResultsController;
    SKUISearchController *_searchController;
    ? _delegateRespondsTo;
}


@property (readonly, nonatomic) BOOL canBecomeActive;
@property (retain, nonatomic) SKUIClientContext *clientContext; // ivar: _clientContext
@property (readonly, weak, nonatomic) UIViewController *contentsController; // ivar: _contentsController
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SKUISearchFieldDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL displaysSearchBarInNavigationBar;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger numberOfSearchResults; // ivar: _numberOfSearchResults
@property (readonly, nonatomic) UISearchBar *searchBar;
@property (copy, nonatomic) NSString *searchBarAccessoryText; // ivar: _searchBarAccessoryText
@property (copy, nonatomic) NSString *searchHintsURLString; // ivar: _searchHintsURLString
@property (nonatomic) BOOL showsResultsForEmptyField;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *trendingSearchURLString; // ivar: _trendingSearchURLString


-(BOOL)_presentsInPopover:(id)arg0 ;
-(BOOL)searchBarShouldBeginEditing:(id)arg0 ;
-(BOOL)searchBarShouldClear:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)URLForTrendingSearchPageView:(id)arg0 ;
-(id)initWithContentsController:(id)arg0 ;
-(id)initWithContentsController:(id)arg0 clientContext:(id)arg1 ;
-(id)searchControllerClientContext:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_adjustInsetsForResultsTableView:(id)arg0 ;
-(void)_loadResultsForSearchRequest:(id)arg0 ;
-(void)_reloadData;
-(void)_reloadTrendingVisibility;
-(void)_setResponse:(id)arg0 error:(id)arg1 ;
-(void)becomeActive;
-(void)popoverPresentationControllerDidDismissPopover:(id)arg0 ;
-(void)prepareForPopoverPresentation:(id)arg0 ;
-(void)presentSearchController:(id)arg0 ;
-(void)resignActive:(BOOL)arg0 ;
-(void)searchBar:(id)arg0 textDidChange:(id)arg1 ;
-(void)searchBarSearchButtonClicked:(id)arg0 ;
-(void)searchControllerWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)setSearchTerm:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)trendingSearchPageView:(id)arg0 didSelectSearch:(id)arg1 ;
-(void)updateSearchResultsForSearchController:(id)arg0 ;
-(void)willDismissSearchController:(id)arg0 ;
-(void)willPresentSearchController:(id)arg0 ;


@end


#endif