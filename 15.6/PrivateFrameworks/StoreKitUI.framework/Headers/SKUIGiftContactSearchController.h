// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIGIFTCONTACTSEARCHCONTROLLER_H
#define SKUIGIFTCONTACTSEARCHCONTROLLER_H

@class NSMutableArray, NSArray, CNAutocompleteResultsTableViewController, CNAutocompleteSearchManager, UIView, NSNumber, UITableView, NSString;
@protocol CNAutocompleteSearchConsumer, CNAutocompleteResultsTableViewControllerDelegate, SKUIGiftContactSearchDelegate;

#import <Foundation/Foundation.h>


@interface SKUIGiftContactSearchController : NSObject <CNAutocompleteSearchConsumer, CNAutocompleteResultsTableViewControllerDelegate>

 {
    NSMutableArray *_autocompleteSearchResults;
    NSArray *_results;
    CNAutocompleteResultsTableViewController *_searchResultsViewController;
    CNAutocompleteSearchManager *_searchManager;
    UIView *_searchResultsView;
    NSNumber *_searchTaskIdentifier;
    UITableView *_tableView;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SKUIGiftContactSearchDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger numberOfResults;
@property (readonly, nonatomic) UIView *searchResultsView;
@property (readonly) Class superclass;


-(BOOL)cancelSearch;
-(id)_tableView;
-(void)_finishSearchWithResults:(id)arg0 ;
-(void)_setResults:(id)arg0 ;
-(void)autocompleteResultsController:(id)arg0 didSelectRecipient:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)consumeAutocompleteSearchResults:(id)arg0 taskID:(id)arg1 ;
-(void)dealloc;
-(void)finishedSearchingForAutocompleteResults;
-(void)resetSearch;
-(void)searchForText:(id)arg0 ;


@end


#endif