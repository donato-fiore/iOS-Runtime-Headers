// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUREMOTEACCESSITEMMANAGER_H
#define HUREMOTEACCESSITEMMANAGER_H

@class HFItemManager, HFItem, NSString, HMHome, HFUserItem, HMUser;
@protocol HUUserItemManager;



@interface HURemoteAccessItemManager : HFItemManager <HUUserItemManager>



@property (retain, nonatomic) HFItem *allowRemoteAccessFooterItem; // ivar: _allowRemoteAccessFooterItem
@property (retain, nonatomic) HFItem *allowRemoteAccessItem; // ivar: _allowRemoteAccessItem
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HMHome *homeForUser; // ivar: _homeForUser
@property (retain, nonatomic) HFItem *removeItem; // ivar: _removeItem
@property (retain, nonatomic) HFUserItem *sourceItem;
@property (readonly) Class superclass;
@property (readonly, nonatomic) HMUser *user;


-(BOOL)_hasResidentDevice;
-(BOOL)_isAllowedToEditTargetUser;
-(BOOL)_isEditingAllowedForUser:(id)arg0 ;
-(BOOL)_isRemoteAccessAllowedForUser:(id)arg0 ;
-(BOOL)_isUserBeingEditedTheDeviceUser;
-(BOOL)_isUserOwner:(id)arg0 ;
-(id)_buildItemProvidersForHome:(id)arg0 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)_homeFuture;
-(id)initWithDelegate:(id)arg0 sourceItem:(id)arg1 ;
-(id)initWithHome:(id)arg0 userItem:(id)arg1 delegate:(id)arg2 ;


@end


#endif