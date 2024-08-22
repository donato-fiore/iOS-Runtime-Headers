// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PSSEARCHRESULTSCONTROLLER_H
#define PSSEARCHRESULTSCONTROLLER_H

@class UIViewController, UITableView, NSMutableDictionary, NSMutableArray, NSString;
@protocol UITableViewDataSource, UITableViewDelegate, PSSearchResultsControllerDelegate;


#import "PSSearchResults.h"

@interface PSSearchResultsController : UIViewController <UITableViewDataSource, UITableViewDelegate>

 {
    UITableView *_tableView;
    NSMutableDictionary *_iconViewMap;
    NSMutableArray *_reusableIconViews;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PSSearchResultsControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PSSearchResults *searchResults; // ivar: _searchResults
@property (readonly) Class superclass;


-(CGFloat)tableView:(id)arg0 estimatedHeightForRowAtIndexPath:(id)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)init;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_removeIconViewForSection:(id)arg0 ;
-(void)_updateIconViews:(BOOL)arg0 ;
-(void)loadView;
-(void)reloadData;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableViewDidFinishReload:(id)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif