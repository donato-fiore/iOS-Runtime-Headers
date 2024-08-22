// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUANNOUNCESETTINGSVIEWCONTROLLER_H
#define HUANNOUNCESETTINGSVIEWCONTROLLER_H

@class NSString, HMHome;
@protocol HUAccessorySettingsDetailsViewControllerProtocol;


#import "HUItemTableViewController.h"
#import "HUAnnounceSettingsItemModuleController.h"

@interface HUAnnounceSettingsViewController : HUItemTableViewController <HUAccessorySettingsDetailsViewControllerProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (retain, nonatomic) HUAnnounceSettingsItemModuleController *moduleController; // ivar: _moduleController
@property (readonly) Class superclass;


-(id)buildItemModuleControllerForModule:(id)arg0 ;
-(id)initWithAccessoryGroupItem:(id)arg0 ;
-(id)initWithAccessorySettingItem:(id)arg0 ;
-(id)initWithAccessorySettingItem:(id)arg0 module:(id)arg1 ;
-(id)initWithHome:(id)arg0 ;


@end


#endif