// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUTRIGGERLISTVIEWCONTROLLER_H
#define HUTRIGGERLISTVIEWCONTROLLER_H

@class NSString;
@protocol HUAboutResidentDeviceViewControllerDelegate, HUColoredButtonCellDelegate, HUNavigationBarButtonOwner, HUTriggerEditorDelegate, HUTriggerListSubheadlineCellDelegate;


#import "HUItemTableViewController.h"
#import "HUGridLayoutOptions.h"
#import "HUNavigationBarButton.h"
#import "HUTriggerListItemManager.h"

@interface HUTriggerListViewController : HUItemTableViewController <HUAboutResidentDeviceViewControllerDelegate, HUColoredButtonCellDelegate, HUNavigationBarButtonOwner, HUTriggerEditorDelegate, HUTriggerListSubheadlineCellDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger editorPresentationMode; // ivar: _editorPresentationMode
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isTransitioningSizes; // ivar: _isTransitioningSizes
@property (retain, nonatomic) HUGridLayoutOptions *layoutOptions; // ivar: _layoutOptions
@property (retain, nonatomic) HUNavigationBarButton *navigationAddButton; // ivar: _navigationAddButton
@property (readonly, nonatomic) BOOL shouldIncludeRoomsInHomeMenu;
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
-(id)addActionDelegateForNavigationBarButton:(id)arg0 ;
-(id)homeForNavigationBarButton:(id)arg0 ;
-(id)init;
-(id)roomForNavigationBarButton:(id)arg0 ;
-(id)trailingSwipeActionsForItem:(id)arg0 ;
-(void)_addTrigger:(id)arg0 ;
-(void)_showSummaryForTriggerItem:(id)arg0 ;
-(void)aboutResidentDeviceViewControllerDidFinish:(id)arg0 ;
-(void)coloredButtonCellPressed:(id)arg0 ;
-(void)learnMoreLinkTapped:(id)arg0 ;
-(void)setupCell:(id)arg0 forItem:(id)arg1 indexPath:(id)arg2 ;
-(void)showAddTriggerView;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)triggerEditor:(id)arg0 didFinishWithTriggerBuilder:(id)arg1 ;
-(void)updateCell:(id)arg0 forItem:(id)arg1 indexPath:(id)arg2 animated:(BOOL)arg3 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif