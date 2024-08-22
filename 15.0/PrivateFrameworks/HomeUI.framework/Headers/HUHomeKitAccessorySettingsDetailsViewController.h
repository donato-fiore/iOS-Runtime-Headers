// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUHOMEKITACCESSORYSETTINGSDETAILSVIEWCONTROLLER_H
#define HUHOMEKITACCESSORYSETTINGSDETAILSVIEWCONTROLLER_H



#import "HUItemTableViewController.h"
#import "HUHomeKitAccessorySettingsItemModule.h"
#import "HUHomeKitAccessorySettingsItemModuleController.h"

@interface HUHomeKitAccessorySettingsDetailsViewController : HUItemTableViewController

@property (retain, nonatomic) HUHomeKitAccessorySettingsItemModule *collapsedModule; // ivar: _collapsedModule
@property (retain, nonatomic) HUHomeKitAccessorySettingsItemModuleController *moduleController; // ivar: _moduleController


-(BOOL)textView:(id)arg0 shouldInteractWithURL:(id)arg1 inRange:(struct _NSRange )arg2 interaction:(NSInteger)arg3 ;
-(id)buildItemModuleControllerForModule:(id)arg0 ;
-(id)initWithCollapsedAccessorySettingItemModule:(id)arg0 ;
-(void)didReceiveSettingsUpdatesForAccessoryWithIdentifier:(id)arg0 settings:(id)arg1 ;
-(void)dismissPrivacyController;


@end


#endif