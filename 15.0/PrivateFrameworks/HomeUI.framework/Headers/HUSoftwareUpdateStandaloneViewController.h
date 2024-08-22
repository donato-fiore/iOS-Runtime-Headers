// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUSOFTWAREUPDATESTANDALONEVIEWCONTROLLER_H
#define HUSOFTWAREUPDATESTANDALONEVIEWCONTROLLER_H

@class NSString, NAFuture, UIBarButtonItem;
@protocol HUSoftwareUpdateItemModuleControllerDelegate, HUSwitchCellDelegate;


#import "HUItemTableViewController.h"
#import "HUFirmwareUpdateItemModuleController.h"
#import "HUSoftwareUpdateStandaloneItemManager.h"
#import "HUSoftwareUpdateItemModuleController.h"

@interface HUSoftwareUpdateStandaloneViewController : HUItemTableViewController <HUSoftwareUpdateItemModuleControllerDelegate, HUSwitchCellDelegate>



@property (nonatomic) BOOL allowRefresh; // ivar: _allowRefresh
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) HUFirmwareUpdateItemModuleController *firmwareUpdateItemModuleController; // ivar: _firmwareUpdateItemModuleController
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HUSoftwareUpdateStandaloneItemManager *itemManager;
@property (nonatomic) BOOL showDoneButtonInNavBar; // ivar: _showDoneButtonInNavBar
@property (retain, nonatomic) NAFuture *softwareUpdateFetchFuture; // ivar: _softwareUpdateFetchFuture
@property (retain, nonatomic) HUSoftwareUpdateItemModuleController *softwareUpdateItemModuleController; // ivar: _softwareUpdateItemModuleController
@property (readonly) Class superclass;
@property (retain, nonatomic) UIBarButtonItem *updateAllBarButton; // ivar: _updateAllBarButton
@property (nonatomic) BOOL viewVisible; // ivar: _viewVisible


-(BOOL)shouldHideSeparatorsForCell:(id)arg0 indexPath:(id)arg1 ;
-(Class)cellClassForItem:(id)arg0 indexPath:(id)arg1 ;
-(id)_createUpdateAllBarButton;
-(id)initWithHome:(id)arg0 ;
-(id)initWithItemManager:(id)arg0 tableViewStyle:(NSInteger)arg1 ;
-(id)itemModuleControllers;
-(id)keyCommands;
-(id)softwareUpdateModuleController:(id)arg0 dismissViewController:(id)arg1 ;
-(id)softwareUpdateModuleController:(id)arg0 navigateToViewController:(id)arg1 ;
-(id)softwareUpdateModuleController:(id)arg0 presentViewController:(id)arg1 ;
-(void)_didTapUpdateAllButton:(id)arg0 ;
-(void)_kickoffSoftwareUpdate;
-(void)_refreshUpdateAllBarButton;
-(void)_triggerRefresh:(id)arg0 ;
-(void)diffableDataItemManager:(id)arg0 didUpdateItems:(id)arg1 addItems:(id)arg2 removeItems:(id)arg3 ;
-(void)doneButtonPressed:(id)arg0 ;
-(void)itemManager:(id)arg0 didUpdateResultsForItem:(id)arg1 atIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)setupCell:(id)arg0 forItem:(id)arg1 indexPath:(id)arg2 ;
-(void)switchCell:(id)arg0 didTurnOn:(BOOL)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)updateCell:(id)arg0 forItem:(id)arg1 indexPath:(id)arg2 animated:(BOOL)arg3 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif