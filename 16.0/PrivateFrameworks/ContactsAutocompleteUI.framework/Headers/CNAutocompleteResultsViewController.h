// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNAUTOCOMPLETERESULTSVIEWCONTROLLER_H
#define CNAUTOCOMPLETERESULTSVIEWCONTROLLER_H

@class UIViewController, NSArray;


#import "CNAutocompleteResultsTableViewController.h"

@interface CNAutocompleteResultsViewController : UIViewController

@property (readonly, nonatomic) NSUInteger mode; // ivar: _mode
@property (retain, nonatomic) NSArray *recipients; // ivar: _recipients
@property (retain, nonatomic) CNAutocompleteResultsTableViewController *resultsTableController; // ivar: _resultsTableController
@property (nonatomic) BOOL showsSuggestions; // ivar: _showsSuggestions


-(BOOL)collapseSelectedRecipient;
-(BOOL)commitSelectionOfRecipient;
-(BOOL)expandSelectedRecipient;
-(id)initWithMode:(NSUInteger)arg0 ;
-(void)invalidateAddressTintColors;
-(void)invalidatePreferredRecipients;
-(void)removeRecipient:(id)arg0 ;
-(void)selectNextSearchResult;
-(void)selectPreviousSearchResult;
-(void)viewDidLoad;


@end


#endif