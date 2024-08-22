// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUACCESSORYSETTINGSPROFILEVIEWCONTROLLER_H
#define HUACCESSORYSETTINGSPROFILEVIEWCONTROLLER_H

@class NSString, HFAccessorySettingGroupItem;
@protocol HUAccessorySettingsProfileModuleControllerDelegate, HUAccessorySettingsProfileModuleDelegate, HUAccessorySettingsDetailsViewControllerProtocol;


#import "HUItemTableViewController.h"
#import "HUAccessorySettingsProfileModule.h"
#import "HUAccessorySettingsProfileModuleController.h"

@interface HUAccessorySettingsProfileViewController : HUItemTableViewController <HUAccessorySettingsProfileModuleControllerDelegate, HUAccessorySettingsProfileModuleDelegate, HUAccessorySettingsDetailsViewControllerProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) HFAccessorySettingGroupItem *item; // ivar: _item
@property (retain, nonatomic) HUAccessorySettingsProfileModule *profileModule; // ivar: _profileModule
@property (retain, nonatomic) HUAccessorySettingsProfileModuleController *profileModuleController; // ivar: _profileModuleController
@property (readonly) Class superclass;


-(id)hu_preloadContent;
-(id)initWithAccessoryGroupItem:(id)arg0 ;
-(id)settingsProfileModule:(id)arg0 wantsProfileItemDeleted:(id)arg1 ;
-(void)accessorySettingsProfileModuleController:(id)arg0 needsNavigationToController:(id)arg1 ;


@end


#endif