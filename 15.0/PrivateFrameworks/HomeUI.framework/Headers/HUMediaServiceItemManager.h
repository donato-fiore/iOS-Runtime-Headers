// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUMEDIASERVICEITEMMANAGER_H
#define HUMEDIASERVICEITEMMANAGER_H

@class HFItemManager, HMHome, HFItem, HFUserItem;


#import "HUMediaServiceItem.h"
#import "HUAccessorySettingsItemModule.h"

@interface HUMediaServiceItemManager : HFItemManager

@property (retain, nonatomic) HMHome *homeForUser; // ivar: _homeForUser
@property (retain, nonatomic) HUMediaServiceItem *mediaServiceItem; // ivar: _mediaServiceItem
@property (retain, nonatomic) HFItem *reconnectItem; // ivar: _reconnectItem
@property (retain, nonatomic) HFItem *reconnectTitleItem; // ivar: _reconnectTitleItem
@property (retain, nonatomic) HFItem *removeItem; // ivar: _removeItem
@property (retain, nonatomic) HFItem *updateListeningHistoryFooterItem; // ivar: _updateListeningHistoryFooterItem
@property (retain, nonatomic) HFItem *updateListeningHistoryItem; // ivar: _updateListeningHistoryItem
@property (retain, nonatomic) HFUserItem *userItem; // ivar: _userItem
@property (retain, nonatomic) HUAccessorySettingsItemModule *userSettingsItemModule; // ivar: _userSettingsItemModule


-(BOOL)_hasAuthFatalError;
-(BOOL)_isAppleMusicService;
-(id)_buildItemProvidersForHome:(id)arg0 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 ;
-(id)initWithHome:(id)arg0 mediaServiceItem:(id)arg1 delegate:(id)arg2 ;


@end


#endif