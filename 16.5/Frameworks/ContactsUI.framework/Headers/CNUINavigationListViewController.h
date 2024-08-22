// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNUINAVIGATIONLISTVIEWCONTROLLER_H
#define CNUINAVIGATIONLISTVIEWCONTROLLER_H

@class UIViewController, NSString, NSArray;
@protocol CNUINavigationListViewDataSource, CNUINavigationListViewDelegate, UITableViewDataSource, UITableViewDelegate, CNUINavigationListViewControllerDelegate, CNUINavigationListStyle;


#import "CNUINavigationListViewCellHeightEstimator.h"
#import "CNUINavigationListItem.h"
#import "CNUINavigationListView.h"

@interface CNUINavigationListViewController : UIViewController <CNUINavigationListViewDataSource, CNUINavigationListViewDelegate, UITableViewDataSource, UITableViewDelegate>



@property (retain, nonatomic) CNUINavigationListViewCellHeightEstimator *cellHeightEstimator; // ivar: _cellHeightEstimator
@property (nonatomic) NSInteger contentAlignment; // ivar: _contentAlignment
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CNUINavigationListViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CNUINavigationListItem *displayedExpandedItem; // ivar: _displayedExpandedItem
@property (retain, nonatomic) CNUINavigationListItem *expandedItem; // ivar: _expandedItem
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL ignoreParentControllerResize; // ivar: _ignoreParentControllerResize
@property (copy, nonatomic) NSArray *items; // ivar: _items
@property (retain, nonatomic) NSObject<CNUINavigationListStyle> *navigationListStyle; // ivar: _navigationListStyle
@property (retain, nonatomic) CNUINavigationListView *navigationListView; // ivar: _navigationListView
@property (nonatomic) BOOL showFirstSectionTopSeparator; // ivar: _showFirstSectionTopSeparator
@property (readonly) Class superclass;


+(BOOL)itemRequiresDetailCell:(id)arg0 ;
-(BOOL)canExpandItem:(id)arg0 ;
-(BOOL)canSelectItem:(id)arg0 ;
-(BOOL)navigationListView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(BOOL)navigationListView:(id)arg0 shouldSelectRowAtIndexPath:(id)arg1 ;
-(BOOL)tableView:(id)arg0 shouldDrawBottomSeparatorForSection:(NSInteger)arg1 ;
-(BOOL)tableView:(id)arg0 shouldDrawTopSeparatorForSection:(NSInteger)arg1 ;
-(CGFloat)cellSeparatorHeight;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)dequeueReusableDetailCell;
-(id)dequeueReusableStandardCell;
-(id)init;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)itemAtIndex:(NSInteger)arg0 ;
-(id)itemAtIndexPath:(id)arg0 ;
-(id)itemsForItem:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(struct CGSize )contentSizeForExpandedItem:(id)arg0 ;
-(void)expandItem:(id)arg0 ;
-(void)loadView;
-(void)navigationListView:(id)arg0 accessoryButtonTappedForRowWithIndexPath:(id)arg1 ;
-(void)navigationListView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)reloadNavigationListView;
-(void)startTrackingRolloverWithGestureRecognizer:(id)arg0 ;
-(void)stopTrackingRollover;
-(void)styleUpdated;
-(void)toggleItem:(id)arg0 ;
-(void)updateNavigationListView;
-(void)updateNavigationListViewStateAnimated:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif