// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUSIRISETTINGSDETAILSVIEWCONTROLLER_H
#define HUSIRISETTINGSDETAILSVIEWCONTROLLER_H

@class NSMapTable, NSString;
@protocol HUSwitchCellDelegate, HUHomeKitAccessorySettingsItemModuleControllerDelegate, UITextViewDelegate, HUHomeKitAccessorySettingDetailsViewControllerProtocol;


#import "HUItemTableViewController.h"
#import "HUSiriSettingsDetailsItemManager.h"

@interface HUSiriSettingsDetailsViewController : HUItemTableViewController <HUSwitchCellDelegate, HUHomeKitAccessorySettingsItemModuleControllerDelegate, UITextViewDelegate, HUHomeKitAccessorySettingDetailsViewControllerProtocol>



@property (retain) NSMapTable *cellToItemMap; // ivar: _cellToItemMap
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMapTable *moduleToModuleControllerMap; // ivar: _moduleToModuleControllerMap
@property (retain, nonatomic) HUSiriSettingsDetailsItemManager *siriSettingsDetailsItemManager; // ivar: _siriSettingsDetailsItemManager
@property (readonly) Class superclass;


-(BOOL)textView:(id)arg0 shouldInteractWithURL:(id)arg1 inRange:(struct _NSRange )arg2 interaction:(NSInteger)arg3 ;
-(Class)cellClassForItem:(id)arg0 indexPath:(id)arg1 ;
-(id)initWithAccessorySettingItem:(id)arg0 module:(id)arg1 ;
-(id)itemModuleControllers;
-(void)_preflightCheckToAllowSwitchingForSettingItem:(id)arg0 changingToOn:(BOOL)arg1 withCompletion:(id)arg2 ;
-(void)_updateSwitchSettingItem:(id)arg0 forCell:(id)arg1 withValue:(BOOL)arg2 ;
-(void)moduleController:(id)arg0 preflightCheckToAllowSwitchingForSettingItem:(id)arg1 changingToOn:(BOOL)arg2 withCompletion:(id)arg3 ;
-(void)setupCell:(id)arg0 forItem:(id)arg1 indexPath:(id)arg2 ;
-(void)switchCell:(id)arg0 didTurnOn:(BOOL)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)updateCell:(id)arg0 forItem:(id)arg1 indexPath:(id)arg2 animated:(BOOL)arg3 ;


@end


#endif