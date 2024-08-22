// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUDOORBELLCHIMEDEVICESVIEWCONTROLLER_H
#define HUDOORBELLCHIMEDEVICESVIEWCONTROLLER_H

@class NSString;
@protocol HFItemManagerDelegate, HUSwitchCellDelegate, HUAccessorySettingsDetailsViewControllerProtocol, HUHomeKitAccessorySettingDetailsViewControllerProtocol;


#import "HUItemTableViewController.h"
#import "HUDoorbellChimeDevicesItemManager.h"

@interface HUDoorbellChimeDevicesViewController : HUItemTableViewController <HFItemManagerDelegate, HUSwitchCellDelegate, HUAccessorySettingsDetailsViewControllerProtocol, HUHomeKitAccessorySettingDetailsViewControllerProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) HUDoorbellChimeDevicesItemManager *doorbellChimeDevicesItemManager; // ivar: _doorbellChimeDevicesItemManager
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(Class)cellClassForItem:(id)arg0 indexPath:(id)arg1 ;
-(id)init;
-(id)initWithAccessoryGroupItem:(id)arg0 ;
-(id)initWithAccessorySettingItem:(id)arg0 ;
-(id)initWithAccessorySettingItem:(id)arg0 module:(id)arg1 ;
-(void)setupCell:(id)arg0 forItem:(id)arg1 indexPath:(id)arg2 ;
-(void)switchCell:(id)arg0 didTurnOn:(BOOL)arg1 ;


@end


#endif