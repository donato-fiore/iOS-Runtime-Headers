// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSETTINGSSEARCHVIEWCONTROLLER_H
#define PXSETTINGSSEARCHVIEWCONTROLLER_H

@class UITableViewController, NSString, NSProgress, UISearchBar, NSArray, PTUISettingsController;
@protocol UISearchBarDelegate, PXInfoProvider, PXInfoUpdaterObserver;


#import "PXSettingsIndex.h"
#import "PXSettingsIndexer.h"
#import "PXInfoUpdater.h"

@interface PXSettingsSearchViewController : UITableViewController <UISearchBarDelegate, PXInfoProvider, PXInfoUpdaterObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PXSettingsIndex *index; // ivar: _index
@property (retain, nonatomic) PXSettingsIndexer *indexer; // ivar: _indexer
@property (retain, nonatomic) NSProgress *indexingProgress; // ivar: _indexingProgress
@property (readonly, nonatomic) PXInfoUpdater *resultsInfoUpdater; // ivar: _resultsInfoUpdater
@property (readonly, nonatomic) UISearchBar *searchBar; // ivar: _searchBar
@property (copy, nonatomic) NSArray *searchResults; // ivar: _searchResults
@property (readonly, nonatomic) PTUISettingsController *settingsController; // ivar: _settingsController
@property (readonly) Class superclass;


-(NSInteger)priorityForInfoRequestOfKind:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithSettingsController:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 ;
-(id)requestInfoOfKind:(id)arg0 withResultHandler:(id)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_handleCancelItem:(id)arg0 ;
-(void)infoUpdaterDidUpdate:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)searchBar:(id)arg0 textDidChange:(id)arg1 ;
-(void)searchBarCancelButtonClicked:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif