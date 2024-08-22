// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUEDITLOCATIONITEMMANAGER_H
#define HUEDITLOCATIONITEMMANAGER_H

@class HFItemManager, HFItem, NSString, HFHomeBuilder, HFItemProvider, HFPinCodeManager;
@protocol HFPinCodeManagerObserver;


#import "HUMatterConnectedServicesItemModule.h"
#import "HUUserNotificationTopicListModule.h"

@interface HUEditLocationItemManager : HFItemManager <HFPinCodeManagerObserver>



@property (retain, nonatomic) HFItem *accessControlItem; // ivar: _accessControlItem
@property (retain, nonatomic) HFItem *cameraItem; // ivar: _cameraItem
@property (retain, nonatomic) HFItem *chooseWallpaperItem; // ivar: _chooseWallpaperItem
@property (retain, nonatomic) HUMatterConnectedServicesItemModule *connectedServicesItemModule; // ivar: _connectedServicesItemModule
@property (readonly, nonatomic) NSUInteger context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) HFItem *detailNotesItem; // ivar: _detailNotesItem
@property (retain, nonatomic) HFItem *guestsItem; // ivar: _guestsItem
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HFHomeBuilder *homeBuilder; // ivar: _homeBuilder
@property (retain, nonatomic) HFItemProvider *inviteItemProvider; // ivar: _inviteItemProvider
@property (retain, nonatomic) HFItem *inviteUsersItem; // ivar: _inviteUsersItem
@property (retain, nonatomic) HFItem *locationServicesSettingItem; // ivar: _locationServicesSettingItem
@property (retain, nonatomic) HFItem *nameItem; // ivar: _nameItem
@property (retain, nonatomic) HUUserNotificationTopicListModule *notificationSettingsModule; // ivar: _notificationSettingsModule
@property (retain, nonatomic) HFPinCodeManager *pinCodeManager; // ivar: _pinCodeManager
@property (retain, nonatomic) HFItem *removeItem; // ivar: _removeItem
@property (retain, nonatomic) HFItem *showPredictedScenes; // ivar: _showPredictedScenes
@property (retain, nonatomic) HFItem *softwareUpdateItem; // ivar: _softwareUpdateItem
@property (retain, nonatomic) HFItem *soundCheckItem; // ivar: _soundCheckItem
@property (readonly) Class superclass;
@property (retain, nonatomic) HFItemProvider *userItemProvider; // ivar: _userItemProvider
@property (retain, nonatomic) HFItem *wallpaperPickerItem; // ivar: _wallpaperPickerItem
@property (retain, nonatomic) HFItem *wallpaperThumbnailItem; // ivar: _wallpaperThumbnailItem


-(id)_buildItemModulesForHome:(id)arg0 ;
-(id)_buildItemProvidersForHome:(id)arg0 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)_homeFuture;
-(id)_itemsToHideInSet:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 sourceItem:(id)arg1 ;
-(id)initWithHomeBuilder:(id)arg0 delegate:(id)arg1 ;
-(id)initWithHomeBuilder:(id)arg0 delegate:(id)arg1 context:(NSUInteger)arg2 ;
-(id)updateLocationServicesEnabled:(BOOL)arg0 ;
-(void)_registerForExternalUpdates;
-(void)_unregisterForExternalUpdates;


@end


#endif