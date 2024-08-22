// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUANNOUNCESETTINGSITEMMODULE_H
#define HUANNOUNCESETTINGSITEMMODULE_H

@class HFItemModule, HFItemProvider, NSString, HMHome, HFUserItemProvider;
@protocol HFMediaAccessoryCommonSettingsDelegate;


#import "HUAnnounceNotificationSettingsItemProvider.h"

@interface HUAnnounceSettingsItemModule : HFItemModule <HFMediaAccessoryCommonSettingsDelegate>



@property (retain, nonatomic) HFItemProvider *announceDeviceItemProvider; // ivar: _announceDeviceItemProvider
@property (retain, nonatomic) HFItemProvider *announceOtherDeviceItemProvider; // ivar: _announceOtherDeviceItemProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (retain, nonatomic) HUAnnounceNotificationSettingsItemProvider *notificationSettingsItemProvider; // ivar: _notificationSettingsItemProvider
@property (readonly, nonatomic) NSUInteger settingsContext; // ivar: _settingsContext
@property (readonly) Class superclass;
@property (retain, nonatomic) HFUserItemProvider *userItemProvider; // ivar: _userItemProvider


+(id)_announceDeviceItemComparator:(SEL)arg0 ;
+(id)_userItemComparator:(SEL)arg0 ;
-(id)_updateNotificationSettings:(id)arg0 ;
-(id)buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)enableAnnounceSetting:(BOOL)arg0 forItem:(id)arg1 ;
-(id)enablePermissionSetting:(BOOL)arg0 forItem:(id)arg1 ;
-(id)initWithItemUpdater:(id)arg0 ;
-(id)initWithItemUpdater:(id)arg0 home:(id)arg1 settingsContext:(NSUInteger)arg2 ;
-(id)itemProviders;
-(id)updateNotificationSettings:(id)arg0 ;
-(void)_buildItemProviders;
-(void)mediaProfileContainer:(id)arg0 didUpdateSettingKeypath:(id)arg1 value:(id)arg2 ;


@end


#endif