// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUSAFETYANDSECURITYSETTINGSNOTIFICATIONSVIEWCONTROLLER_H
#define HUSAFETYANDSECURITYSETTINGSNOTIFICATIONSVIEWCONTROLLER_H

@class HMHome;


#import "HUItemTableViewController.h"
#import "HUSafetyAndSecuritySettingsNotificationsItemModuleController.h"

@interface HUSafetyAndSecuritySettingsNotificationsViewController : HUItemTableViewController

@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (retain, nonatomic) HUSafetyAndSecuritySettingsNotificationsItemModuleController *moduleController; // ivar: _moduleController


-(id)buildItemModuleControllerForModule:(id)arg0 ;
-(id)initWithHome:(id)arg0 ;


@end


#endif