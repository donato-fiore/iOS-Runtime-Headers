// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUEDITUSERVIEWCONTROLLER_H
#define HUEDITUSERVIEWCONTROLLER_H

@class NSString, HFPinCodeManager, HFUserItem;
@protocol HUAboutResidentDeviceFooterViewDelegate, HUAboutResidentDeviceViewControllerDelegate, HUSwitchCellDelegate, HUAccessorySettingsItemModuleControllerDelegate, UINavigationControllerDelegate, HUMediaServiceSettingsItemModuleControllerDelegate, UITextViewDelegate;


#import "HUUserTableViewController.h"
#import "HUAboutResidentDeviceFooterView.h"
#import "HUEditUserItemManager.h"
#import "HUMediaServiceSettingsItemModuleController.h"
#import "HUPendingAccessoriesGridViewController.h"
#import "HUAccessorySettingsItemModuleController.h"

@interface HUEditUserViewController : HUUserTableViewController <HUAboutResidentDeviceFooterViewDelegate, HUAboutResidentDeviceViewControllerDelegate, HUSwitchCellDelegate, HUAccessorySettingsItemModuleControllerDelegate, UINavigationControllerDelegate, HUMediaServiceSettingsItemModuleControllerDelegate, UITextViewDelegate>



@property (retain, nonatomic) HUAboutResidentDeviceFooterView *aboutResidentDeviceFooterView; // ivar: _aboutResidentDeviceFooterView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) HUEditUserItemManager *editUserItemManager; // ivar: _editUserItemManager
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HUMediaServiceSettingsItemModuleController *mediaServiceSettingsItemModuleController; // ivar: _mediaServiceSettingsItemModuleController
@property (readonly, nonatomic) HUPendingAccessoriesGridViewController *pendingAccessoriesViewController; // ivar: _pendingAccessoriesViewController
@property (retain, nonatomic) HFPinCodeManager *pinCodeManager; // ivar: _pinCodeManager
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) HFUserItem *userItem; // ivar: _userItem
@property (retain, nonatomic) HUAccessorySettingsItemModuleController *userSettingsItemModuleController; // ivar: _userSettingsItemModuleController


-(BOOL)moduleController:(id)arg0 shouldDisableItem:(id)arg1 ;
-(BOOL)shouldHideSeparatorsForCell:(id)arg0 indexPath:(id)arg1 ;
-(BOOL)textView:(id)arg0 shouldInteractWithURL:(id)arg1 inRange:(struct _NSRange )arg2 interaction:(NSInteger)arg3 ;
-(CGFloat)tableView:(id)arg0 heightForFooterInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(Class)cellClassForItem:(id)arg0 indexPath:(id)arg1 ;
-(id)_lazyAboutResidentDeviceFooterView;
-(id)childViewControllersToPreload;
-(id)initWithItem:(id)arg0 home:(id)arg1 ;
-(id)itemModuleControllers;
-(id)moduleController:(id)arg0 requestPresentViewController:(id)arg1 animated:(BOOL)arg2 withCompletion:(id)arg3 ;
-(id)presentDefaultAccountViewController;
-(id)presentPinDetailsViewController;
-(id)tableView:(id)arg0 viewForFooterInSection:(NSInteger)arg1 ;
-(id)user;
-(void)_handleUpdatedItem:(id)arg0 atIndexPath:(id)arg1 ;
-(void)_removeUser;
-(void)aboutResidentDeviceViewControllerDidFinish:(id)arg0 ;
-(void)didSelectDefaultAccounts:(id)arg0 ;
-(void)diffableDataItemManager:(id)arg0 didUpdateItems:(id)arg1 addItems:(id)arg2 removeItems:(id)arg3 ;
-(void)doneButtonTapped:(id)arg0 ;
-(void)itemManager:(id)arg0 didUpdateResultsForItem:(id)arg1 atIndexPath:(id)arg2 ;
-(void)learnMoreLinkTapped:(id)arg0 ;
-(void)mediaServiceSettingsItemModuleController:(id)arg0 didSelectMediaService:(id)arg1 ;
-(void)moduleController:(id)arg0 preflightCheckToAllowSwitchingForSettingItem:(id)arg1 changingToOn:(BOOL)arg2 withCompletion:(id)arg3 ;
-(void)moduleController:(id)arg0 presentGroup:(id)arg1 ;
-(void)moduleController:(id)arg0 settingUpdatedForItem:(id)arg1 ;
-(void)navigationController:(id)arg0 willShowViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)setupCell:(id)arg0 forItem:(id)arg1 indexPath:(id)arg2 ;
-(void)switchCell:(id)arg0 didTurnOn:(BOOL)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)updateCell:(id)arg0 forItem:(id)arg1 indexPath:(id)arg2 animated:(BOOL)arg3 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif