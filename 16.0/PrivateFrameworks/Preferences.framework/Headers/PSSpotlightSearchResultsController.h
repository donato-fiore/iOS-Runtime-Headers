// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PSSPOTLIGHTSEARCHRESULTSCONTROLLER_H
#define PSSPOTLIGHTSEARCHRESULTSCONTROLLER_H

@class UITableViewController, NSMutableDictionary, NSMutableArray, NSArray;
@protocol PSKeyboardNavigationSearchResultsController, PSSpotlightSearchResultsControllerDelegate;



@interface PSSpotlightSearchResultsController : UITableViewController <PSKeyboardNavigationSearchResultsController>

 {
    NSMutableDictionary *_iconViewMap;
    NSMutableArray *_reusableIconViews;
    NSInteger _deviceOrientation;
    CGFloat originalInset;
}


@property (weak, nonatomic) NSObject<PSSpotlightSearchResultsControllerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSArray *results; // ivar: _results
@property (retain, nonatomic) NSMutableArray *tableData; // ivar: _tableData


-(CGFloat)iconWidth;
-(CGFloat)tableView:(id)arg0 estimatedHeightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_itemForIndexPath:(id)arg0 ;
-(id)init;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_removeIconViewForSection:(id)arg0 ;
-(void)_selectIndexPath:(id)arg0 ;
-(void)_updateIconViews:(BOOL)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)searchQueryCompleted;
-(void)searchQueryFoundItems:(id)arg0 ;
-(void)searchQueryStarted;
-(void)selectNextSearchResult;
-(void)selectPreviousSearchResult;
-(void)showSelectedSearchResult;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableViewDidFinishReload:(id)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif