// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUAIRPLAYSETTINGSDETAILSVIEWCONTROLLER_H
#define HUAIRPLAYSETTINGSDETAILSVIEWCONTROLLER_H

@class NSMapTable, NSString;
@protocol HUSwitchCellDelegate, HUHomeKitAccessorySettingsItemModuleControllerDelegate, HUHomeKitAccessorySettingDetailsViewControllerProtocol;


#import "HUItemTableViewController.h"
#import "HUAirPlaySettingsDetailsItemManager.h"

@interface HUAirPlaySettingsDetailsViewController : HUItemTableViewController <HUSwitchCellDelegate, HUHomeKitAccessorySettingsItemModuleControllerDelegate, HUHomeKitAccessorySettingDetailsViewControllerProtocol>



@property (retain, nonatomic) HUAirPlaySettingsDetailsItemManager *airPlaySettingsDetailsItemManager; // ivar: _airPlaySettingsDetailsItemManager
@property (retain) NSMapTable *cellToItemMap; // ivar: _cellToItemMap
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMapTable *moduleToModuleControllerMap; // ivar: _moduleToModuleControllerMap
@property (readonly) Class superclass;


-(Class)cellClassForItem:(id)arg0 indexPath:(id)arg1 ;
-(id)initWithAccessorySettingItem:(id)arg0 module:(id)arg1 ;
-(id)itemModuleControllers;
-(void)setupCell:(id)arg0 forItem:(id)arg1 indexPath:(id)arg2 ;
-(void)switchCell:(id)arg0 didTurnOn:(BOOL)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)updateCell:(id)arg0 forItem:(id)arg1 indexPath:(id)arg2 animated:(BOOL)arg3 ;


@end


#endif