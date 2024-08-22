// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUSEARCHFIELDCONTROLLER_H
#define SUSEARCHFIELDCONTROLLER_H

@class NSArray, ISStoreURLOperation, UIControl, UISearchBar, NSString, NSNumber;
@protocol ISStoreURLOperationDelegate, SUScriptTextFieldDelegate, UISearchDisplayDelegate, UITableViewDataSource, UITableViewDelegate;

#import <Foundation/Foundation.h>

#import "SUClientInterface.h"
#import "SUSearchDisplayController.h"
#import "SUScriptTextFieldDelegate.h"
#import "SUSearchFieldConfiguration.h"

@interface SUSearchFieldController : NSObject <ISStoreURLOperationDelegate, SUScriptTextFieldDelegate, UISearchDisplayDelegate, UITableViewDataSource, UITableViewDelegate>

 {
    SUClientInterface *_clientInterface;
    NSArray *_completions;
    ISStoreURLOperation *_completionsOperation;
    UIControl *_dimmerView;
    UISearchBar *_searchBar;
    SUSearchDisplayController *_searchController;
    SUScriptTextFieldDelegate *_textFieldDelegate;
    BOOL _hasLoadedSearchResultsTableView;
}


@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentage;
@property (readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentageCachedResponses;
@property (readonly, nonatomic) NSNumber *metricsLoadURLSessionDuration;
@property (readonly, nonatomic) UISearchBar *searchBar;
@property (copy, nonatomic) SUSearchFieldConfiguration *searchFieldConfiguration; // ivar: _configuration
@property (nonatomic) NSInteger searchFieldStyle; // ivar: _searchFieldStyle
@property (readonly) Class superclass;


-(BOOL)_focusTransientViewController;
-(BOOL)searchBarShouldBeginEditing:(id)arg0 ;
-(BOOL)searchBarShouldEndEditing:(id)arg0 ;
-(BOOL)searchDisplayController:(id)arg0 shouldReloadTableForSearchString:(id)arg1 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_cancelButtonView;
-(id)_defaultSearchTerm;
-(id)_newBlankStorePageViewController;
-(id)_newSearchBar;
-(id)_newSearchDisplayControllerWithContentsController:(id)arg0 ;
-(id)_newTransientViewController;
-(id)_searchGroupForSearchKind:(id)arg0 ;
-(id)_targetViewController;
-(id)init;
-(id)initWithContentsController:(id)arg0 ;
-(id)initWithContentsController:(id)arg0 clientInterface:(id)arg1 ;
-(id)initWithContentsController:(id)arg0 clientInterface:(id)arg1 style:(NSInteger)arg2 ;
-(id)initWithContentsController:(id)arg0 style:(NSInteger)arg1 ;
-(id)newRequestPropertiesWithSearchTerm:(id)arg0 ;
-(id)newRequestPropertiesWithSearchTerm:(id)arg0 kind:(id)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_cancelCompletionsOperation;
-(void)_dimmerViewAction:(id)arg0 ;
-(void)_fetchCompletions;
-(void)_fetchResultsForTerm:(id)arg0 URL:(id)arg1 ;
-(void)_fetchResultsForURLRequestProperties:(id)arg0 ;
-(void)_reloadCompletionsForSearchString:(id)arg0 ;
-(void)_reloadSearchBar;
-(void)_resizeSearchBarForOrientation:(NSInteger)arg0 ;
-(void)_saveSearchTermToDefaults:(id)arg0 ;
-(void)_savedSearchTermChangedNotification:(id)arg0 ;
-(void)_sendOnXEventWithTerm:(id)arg0 URL:(id)arg1 completionBlock:(id)arg2 ;
-(void)_showDimmerView;
-(void)_tearDownDimmerView;
-(void)dealloc;
-(void)handleSearchURL:(id)arg0 withSourceApplication:(id)arg1 sourceURL:(id)arg2 ;
-(void)operation:(id)arg0 failedWithError:(id)arg1 ;
-(void)operation:(id)arg0 finishedWithOutput:(id)arg1 ;
-(void)operationDidFinish:(id)arg0 ;
-(void)scriptDidChangeTextForField:(id)arg0 ;
-(void)searchBar:(id)arg0 textDidChange:(id)arg1 ;
-(void)searchBarSearchButtonClicked:(id)arg0 ;
-(void)searchBarTextDidEndEditing:(id)arg0 ;
-(void)searchBarWillRemoveFromSuperview:(id)arg0 ;
-(void)searchDisplayController:(id)arg0 didLoadSearchResultsTableView:(id)arg1 ;
-(void)searchDisplayController:(id)arg0 willUnloadSearchResultsTableView:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)willRotateToInterfaceOrientation:(NSInteger)arg0 ;


@end


#endif