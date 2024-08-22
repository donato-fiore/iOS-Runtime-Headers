// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUDASHBOARDLISTVIEWCONTROLLER_H
#define HUDASHBOARDLISTVIEWCONTROLLER_H

@class NSString, UIView;
@protocol UITableViewDelegatePrivate, HUDashboardListViewControllerDelegate;


#import "HUItemTableViewController.h"
#import "HUDashboardListItemManager.h"
#import "HUGridLayoutOptions.h"
#import "HUDashboardContext.h"

@interface HUDashboardListViewController : HUItemTableViewController <UITableViewDelegatePrivate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HUDashboardListViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HUDashboardListItemManager *itemManager;
@property (retain, nonatomic) HUGridLayoutOptions *layoutOptions; // ivar: _layoutOptions
@property (retain, nonatomic) UIView *selectedBackgroundView; // ivar: _selectedBackgroundView
@property (retain, nonatomic) HUDashboardContext *selectedDashboard; // ivar: _selectedDashboard
@property (readonly) Class superclass;


-(BOOL)_canShowWhileLocked;
-(BOOL)shouldHideFooterBelowSection:(NSInteger)arg0 ;
-(BOOL)shouldHideHeaderAboveSection:(NSInteger)arg0 ;
-(BOOL)tableView:(id)arg0 shouldDrawBottomSeparatorForSection:(NSInteger)arg1 ;
-(BOOL)tableView:(id)arg0 shouldHaveFullLengthBottomSeparatorForSection:(NSInteger)arg1 ;
-(Class)cellClassForItem:(id)arg0 indexPath:(id)arg1 ;
-(id)_indexPathForDashboardContext:(id)arg0 ;
-(id)init;
-(id)initWithHome:(id)arg0 delegate:(id)arg1 layoutOptions:(id)arg2 ;
-(void)setupCell:(id)arg0 forItem:(id)arg1 indexPath:(id)arg2 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)updateCell:(id)arg0 forItem:(id)arg1 indexPath:(id)arg2 animated:(BOOL)arg3 ;


@end


#endif