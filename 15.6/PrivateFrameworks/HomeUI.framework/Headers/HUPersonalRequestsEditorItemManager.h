// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUPERSONALREQUESTSEDITORITEMMANAGER_H
#define HUPERSONALREQUESTSEDITORITEMMANAGER_H

@class HFItemManager, HMAssistantAccessControl, HFItem, HMHome, HFUserItem, HFStaticItemProvider, HMUser;


#import "HUPersonalRequestsDevicesItemModule.h"

@interface HUPersonalRequestsEditorItemManager : HFItemManager

@property (readonly, nonatomic) HMAssistantAccessControl *accessControl;
@property (readonly, nonatomic) HFItem *activityNotificationFooterItem; // ivar: _activityNotificationFooterItem
@property (nonatomic) BOOL activityNotificationsEnabled; // ivar: _activityNotificationsEnabled
@property (readonly, nonatomic) HFItem *activityNotificationsItem; // ivar: _activityNotificationsItem
@property (readonly, nonatomic) HMHome *homeForUser; // ivar: _homeForUser
@property (nonatomic) BOOL onlyShowDeviceSwitches; // ivar: _onlyShowDeviceSwitches
@property (nonatomic) BOOL personalRequestsAuthenticationRequired; // ivar: _personalRequestsAuthenticationRequired
@property (retain, nonatomic) HUPersonalRequestsDevicesItemModule *prDevicesModule; // ivar: _prDevicesModule
@property (retain, nonatomic) HFUserItem *sourceItem;
@property (readonly, nonatomic) HFStaticItemProvider *staticItemProvider; // ivar: _staticItemProvider
@property (readonly, nonatomic) HMUser *user;


-(BOOL)_arePersonalRequestsEnabled;
-(id)_buildItemProvidersForHome:(id)arg0 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)_commitUpdateToAccessControl:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 sourceItem:(id)arg1 ;
-(id)initWithDelegate:(id)arg0 userItem:(id)arg1 accessorySettingItem:(id)arg2 module:(id)arg3 onlyShowDeviceSwitches:(BOOL)arg4 ;
-(id)initWithDelegate:(id)arg0 userItem:(id)arg1 onlyShowDeviceSwitches:(BOOL)arg2 ;
-(void)_registerForExternalUpdates;
-(void)_unregisterForExternalUpdates;


@end


#endif