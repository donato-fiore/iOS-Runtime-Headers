// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUSAFETYANDSECURITYSETTINGSITEMMODULE_H
#define HUSAFETYANDSECURITYSETTINGSITEMMODULE_H

@class HFItemModule, NSSet, HMHome, HFItem, NSArray, HFItemProvider, HFUserItemProvider;



@interface HUSafetyAndSecuritySettingsItemModule : HFItemModule

@property (retain, nonatomic) NSSet *devices; // ivar: _devices
@property (retain, nonatomic) HMHome *home; // ivar: _home
@property (retain, nonatomic) HFItem *homeUpgradeBannerItem; // ivar: _homeUpgradeBannerItem
@property (retain, nonatomic) HFItem *listenForSoundsItem; // ivar: _listenForSoundsItem
@property (retain, nonatomic) HFItem *notificationsItem; // ivar: _notificationsItem
@property (retain, nonatomic) NSArray *ownerHomes; // ivar: _ownerHomes
@property (retain, nonatomic) HFItemProvider *staticItemProvider; // ivar: _staticItemProvider
@property (retain, nonatomic) HFUserItemProvider *userItemProvider; // ivar: _userItemProvider


+(id)_userItemComparator:(SEL)arg0 ;
-(id)buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)enableUserPermissionSetting:(BOOL)arg0 forItem:(id)arg1 ;
-(id)initWithItemUpdater:(id)arg0 ;
-(id)initWithItemUpdater:(id)arg0 home:(id)arg1 ;
-(id)itemProviders;
-(void)_buildItemProviders;


@end


#endif