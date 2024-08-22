// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUACCESSORYSETTINGSDETAILSVIEWCONTROLLER_H
#define HUACCESSORYSETTINGSDETAILSVIEWCONTROLLER_H

@class NSString, HFAccessorySettingItem, HFAccessorySettingGroupItem;
@protocol HUAccessorySettingsItemModuleControllerDelegate, HUAccessorySettingsDetailsViewControllerProtocol;


#import "HUItemTableViewController.h"
#import "HUAccessorySettingsItemModuleController.h"

@interface HUAccessorySettingsDetailsViewController : HUItemTableViewController <HUAccessorySettingsItemModuleControllerDelegate, HUAccessorySettingsDetailsViewControllerProtocol>



@property (retain, nonatomic) HUAccessorySettingsItemModuleController *accessorySettingsItemModuleController; // ivar: _accessorySettingsItemModuleController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) HFAccessorySettingItem *fileUploadItem; // ivar: _fileUploadItem
@property (retain, nonatomic) HFAccessorySettingGroupItem *groupItem; // ivar: _groupItem
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)accessorySettingsItemManager;
-(id)initWithAccessoryGroupItem:(id)arg0 ;
-(id)initWithItemManager:(id)arg0 tableViewStyle:(NSInteger)arg1 ;
-(id)itemModuleControllers;
-(id)moduleController:(id)arg0 requestPresentViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)moduleController:(id)arg0 presentGroup:(id)arg1 ;


@end


#endif