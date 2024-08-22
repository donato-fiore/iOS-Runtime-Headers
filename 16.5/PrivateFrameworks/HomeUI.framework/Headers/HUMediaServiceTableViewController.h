// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUMEDIASERVICETABLEVIEWCONTROLLER_H
#define HUMEDIASERVICETABLEVIEWCONTROLLER_H

@class NSString, HFUserItem;
@protocol HUSwitchCellDelegate, HUAccessorySettingsItemModuleControllerDelegate;


#import "HUItemTableViewController.h"
#import "HUMediaServiceItem.h"
#import "HUMediaServiceItemManager.h"
#import "HUAccessorySettingsItemModuleController.h"

@interface HUMediaServiceTableViewController : HUItemTableViewController <HUSwitchCellDelegate, HUAccessorySettingsItemModuleControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) HUMediaServiceItem *mediaServiceItem; // ivar: _mediaServiceItem
@property (readonly, copy, nonatomic) HUMediaServiceItemManager *mediaServiceItemManager; // ivar: _mediaServiceItemManager
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) HFUserItem *userItem; // ivar: _userItem
@property (retain, nonatomic) HUAccessorySettingsItemModuleController *userSettingsItemModuleController; // ivar: _userSettingsItemModuleController


-(BOOL)moduleController:(id)arg0 shouldDisableItem:(id)arg1 ;
-(BOOL)shouldHideFooterBelowSection:(NSInteger)arg0 ;
-(BOOL)shouldHideHeaderAboveSection:(NSInteger)arg0 ;
-(BOOL)shouldHideSeparatorsForCell:(id)arg0 indexPath:(id)arg1 ;
-(BOOL)textView:(id)arg0 shouldInteractWithURL:(id)arg1 inRange:(struct _NSRange )arg2 interaction:(NSInteger)arg3 ;
-(CGFloat)tableView:(id)arg0 heightForFooterInSection:(NSInteger)arg1 ;
-(Class)cellClassForItem:(id)arg0 indexPath:(id)arg1 ;
-(NSUInteger)automaticDisablingReasonsForItem:(id)arg0 ;
-(id)initWithItem:(id)arg0 mediaServiceItem:(id)arg1 ;
-(id)itemModuleControllers;
-(id)moduleController:(id)arg0 requestPresentViewController:(id)arg1 animated:(BOOL)arg2 withCompletion:(id)arg3 ;
-(void)_removeService;
-(void)moduleController:(id)arg0 preflightCheckToAllowSwitchingForSettingItem:(id)arg1 changingToOn:(BOOL)arg2 withCompletion:(id)arg3 ;
-(void)moduleController:(id)arg0 presentGroup:(id)arg1 ;
-(void)moduleController:(id)arg0 settingUpdatedForItem:(id)arg1 ;
-(void)setupCell:(id)arg0 forItem:(id)arg1 indexPath:(id)arg2 ;
-(void)switchCell:(id)arg0 didTurnOn:(BOOL)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)updateCell:(id)arg0 forItem:(id)arg1 indexPath:(id)arg2 animated:(BOOL)arg3 ;
-(void)viewDidLoad;


@end


#endif