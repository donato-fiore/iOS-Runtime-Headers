// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUTRIGGERLISTVIEWCONTROLLER_H
#define HUTRIGGERLISTVIEWCONTROLLER_H

@class NSString;
@protocol HUAboutResidentDeviceViewControllerDelegate, HUTriggerEditorDelegate, HUColoredButtonCellDelegate, HUTriggerListSubheadlineCellDelegate, HFHomeObserver;


#import "HUItemTableViewController.h"
#import "HUGridLayoutOptions.h"
#import "HUDashboardNavigationButton.h"
#import "HUTriggerListItemManager.h"

@interface HUTriggerListViewController : HUItemTableViewController <HUAboutResidentDeviceViewControllerDelegate, HUTriggerEditorDelegate, HUColoredButtonCellDelegate, HUTriggerListSubheadlineCellDelegate, HFHomeObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger editorPresentationMode; // ivar: _editorPresentationMode
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isTransitioningSizes; // ivar: _isTransitioningSizes
@property (retain, nonatomic) HUGridLayoutOptions *layoutOptions; // ivar: _layoutOptions
@property (retain, nonatomic) HUDashboardNavigationButton *navigationAddButton; // ivar: _navigationAddButton
@property (readonly) Class superclass;
@property (readonly, nonatomic) HUTriggerListItemManager *triggerItemManager; // ivar: _triggerItemManager


-(BOOL)shouldHideFooterBelowSection:(NSInteger)arg0 ;
-(BOOL)shouldHideHeaderAboveSection:(NSInteger)arg0 ;
-(BOOL)shouldHideSeparatorsForCell:(id)arg0 indexPath:(id)arg1 ;
-(BOOL)tableView:(id)arg0 canEditRowAtIndexPath:(id)arg1 ;
-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForFooterInSection:(NSInteger)arg1 ;
-(NSUInteger)automaticDisablingReasonsForItem:(id)arg0 ;
-(id)_deleteItem:(id)arg0 ;
-(id)dashboardNavigator;
-(id)init;
-(id)trailingSwipeActionsForItem:(id)arg0 ;
-(void)_addTrigger:(id)arg0 ;
-(void)_invalidateNavigationAddButtonMenu;
-(void)_showSummaryForTriggerItem:(id)arg0 ;
-(void)_updateNavigationItems;
-(void)aboutResidentDeviceViewControllerDidFinish:(id)arg0 ;
-(void)coloredButtonCellPressed:(id)arg0 ;
-(void)home:(id)arg0 didAddAccessory:(id)arg1 ;
-(void)home:(id)arg0 didAddResidentDevice:(id)arg1 ;
-(void)home:(id)arg0 didAddRoom:(id)arg1 ;
-(void)home:(id)arg0 didRemoveAccessory:(id)arg1 ;
-(void)home:(id)arg0 didRemoveResidentDevice:(id)arg1 ;
-(void)home:(id)arg0 didRemoveRoom:(id)arg1 ;
-(void)home:(id)arg0 didUpdateNameForRoom:(id)arg1 ;
-(void)homeDidUpdateName:(id)arg0 ;
-(void)learnMoreLinkTapped:(id)arg0 ;
-(void)setupCell:(id)arg0 forItem:(id)arg1 indexPath:(id)arg2 ;
-(void)showAddTriggerView;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)triggerEditor:(id)arg0 didFinishWithTriggerBuilder:(id)arg1 ;
-(void)updateCell:(id)arg0 forItem:(id)arg1 indexPath:(id)arg2 animated:(BOOL)arg3 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif