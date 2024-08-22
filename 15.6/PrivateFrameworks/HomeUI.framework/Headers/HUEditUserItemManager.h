// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUEDITUSERITEMMANAGER_H
#define HUEDITUSERITEMMANAGER_H

@class HFItemManager, HFItem, NSString, HMHome, NSArray, HFUserItem, HMUser;
@protocol HUUserItemManager;


#import "HULocationDeviceManager.h"
#import "HUMediaServiceSettingsItemModule.h"
#import "HUAccessorySettingsItemModule.h"

@interface HUEditUserItemManager : HFItemManager <HUUserItemManager>



@property (retain, nonatomic) HFItem *allowEditingItem; // ivar: _allowEditingItem
@property (retain, nonatomic) HFItem *camerasItem; // ivar: _camerasItem
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HMHome *homeForUser; // ivar: _homeForUser
@property (retain, nonatomic) HFItem *localAccessItem; // ivar: _localAccessItem
@property (retain, nonatomic) HULocationDeviceManager *locationDeviceManager; // ivar: _locationDeviceManager
@property (retain, nonatomic) HFItem *locksItem; // ivar: _locksItem
@property (retain, nonatomic) HUMediaServiceSettingsItemModule *mediaServiceItemModule; // ivar: _mediaServiceItemModule
@property (retain, nonatomic) HFItem *pendingAccessoriesItem; // ivar: _pendingAccessoriesItem
@property (readonly, nonatomic) HFItem *personalRequestsFooterItem; // ivar: _personalRequestsFooterItem
@property (retain, nonatomic) HFItem *personalRequestsItem; // ivar: _personalRequestsItem
@property (retain, nonatomic) HFItem *remoteAccessItem; // ivar: _remoteAccessItem
@property (retain, nonatomic) HFItem *removeItem; // ivar: _removeItem
@property (retain, nonatomic) NSArray *sectionOrderArrayWhenViewingOther; // ivar: _sectionOrderArrayWhenViewingOther
@property (retain, nonatomic) NSArray *sectionOrderArrayWhenViewingSelf; // ivar: _sectionOrderArrayWhenViewingSelf
@property (retain, nonatomic) HFUserItem *sourceItem;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSArray *supportedMULanguageCodes; // ivar: _supportedMULanguageCodes
@property (retain, nonatomic) HFItem *tvViewingProfilesItem; // ivar: _tvViewingProfilesItem
@property (retain, nonatomic) HFItem *updateListeningHistoryItem; // ivar: _updateListeningHistoryItem
@property (readonly, nonatomic) HMUser *userBeingEdited;
@property (retain, nonatomic) HUAccessorySettingsItemModule *userSettingsItemModule; // ivar: _userSettingsItemModule


-(BOOL)_canModifyUserBeingEditedPermissions;
-(BOOL)_hasPendingAccessories;
-(BOOL)_hasPersonalRequestsDevice;
-(BOOL)_hasResidentDevice;
-(BOOL)_hasTVViewingProfilesDevice;
-(BOOL)_isEditingAllowedForUser:(id)arg0 ;
-(BOOL)_isPersonalRequestsEnabledForUser;
-(BOOL)_isRemoteAccessAllowedForUser:(id)arg0 ;
-(BOOL)_isTVViewingProfilesEnabledForUser;
-(BOOL)_isUserBeingEditedTheDeviceUser;
-(BOOL)_isUserOwner:(id)arg0 ;
-(BOOL)_isVoiceIDEnabled:(id)arg0 ;
-(BOOL)_shouldShowBoltUI;
-(id)_buildItemProvidersForHome:(id)arg0 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)_homeFuture;
-(id)_itemsToHideInSet:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 sourceItem:(id)arg1 ;
-(id)initWithHome:(id)arg0 userItem:(id)arg1 delegate:(id)arg2 ;
-(id)reuseIdentifierForFooterViewInSection:(NSUInteger)arg0 ;
-(void)_registerForExternalUpdates;
-(void)_unregisterForExternalUpdates;
-(void)_updateSiriSectionFooterForSection:(id)arg0 ;


@end


#endif