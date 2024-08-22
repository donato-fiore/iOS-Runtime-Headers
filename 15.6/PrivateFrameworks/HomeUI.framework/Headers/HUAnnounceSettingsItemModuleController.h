// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUANNOUNCESETTINGSITEMMODULECONTROLLER_H
#define HUANNOUNCESETTINGSITEMMODULECONTROLLER_H

@class NSString;
@protocol HUIconSwitchCellDelegate, HUUserSwitchCellDelegate;


#import "HUItemModuleController.h"

@interface HUAnnounceSettingsItemModuleController : HUItemModuleController <HUIconSwitchCellDelegate, HUUserSwitchCellDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(Class)cellClassForItem:(id)arg0 ;
-(NSUInteger)didSelectItem:(id)arg0 ;
-(void)_populateHostInformation:(id)arg0 ;
-(void)_submitAnalyticsForAnnounceHomePodSettingItem:(id)arg0 enabled:(BOOL)arg1 writeWasSuccessfull:(BOOL)arg2 ;
-(void)_submitAnalyticsForAnnounceNotificationSettingItem:(id)arg0 writeWasSuccessfull:(BOOL)arg1 ;
-(void)_submitAnalyticsForAnnounceUserSettingItem:(id)arg0 enabled:(BOOL)arg1 writeWasSuccessfull:(BOOL)arg2 ;
-(void)setupCell:(id)arg0 forItem:(id)arg1 ;
-(void)switchCell:(id)arg0 didTurnOn:(BOOL)arg1 ;
-(void)updateCell:(id)arg0 forItem:(id)arg1 animated:(BOOL)arg2 ;
-(void)userSwitchCell:(id)arg0 didTurnOn:(BOOL)arg1 ;


@end


#endif