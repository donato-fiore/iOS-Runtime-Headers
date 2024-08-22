// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXUIFILTERCONTROLLER_H
#define PXUIFILTERCONTROLLER_H

@class UITableViewController, NSArray, NSString;
@protocol UITableViewDataSource, UITableViewDelegate, PXChangeObserver, PXFilterController, PXFilterControllerDelegate;


#import "PXContentFilterState.h"

@interface PXUIFilterController : UITableViewController <UITableViewDataSource, UITableViewDelegate, PXChangeObserver, PXFilterController>

 {
    NSArray *_contentFilterGroups;
}


@property (copy, nonatomic) PXContentFilterState *contentFilterState; // ivar: _contentFilterState
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, weak, nonatomic) NSObject<PXFilterControllerDelegate> *filterControllerDelegate; // ivar: _filterControllerDelegate
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL showContentOptions; // ivar: _showContentOptions
@property (readonly) Class superclass;


-(BOOL)_contentSyndicationIsAvailable;
-(BOOL)_isContentFilterSection:(NSInteger)arg0 ;
-(BOOL)_selectCellWithContentFilterItemTag:(NSInteger)arg0 ;
-(NSInteger)_adjustedContentFilterSection:(NSInteger)arg0 ;
-(NSInteger)_contentFilterGroupsCount;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_contentFilterGroups;
-(id)_getUpdatedContentFilterStateFromTappedCell:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 initialContentFilterState:(id)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)_doneButtonPressed:(id)arg0 ;
-(void)_setupNavigationBar;
-(void)_setupTableView;
-(void)_tappedRowAtIndexPath:(id)arg0 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)tableView:(id)arg0 didDeselectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif