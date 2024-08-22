// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUMEDIASERVICEDEFAULTACCOUNTSITEMMANAGER_H
#define HUMEDIASERVICEDEFAULTACCOUNTSITEMMANAGER_H

@class HFItemManager, NSString, HFItem, HMHome, HFUserItem;
@protocol HUUserItemManager;


#import "HUMediaServiceDefaultAccountsItemModule.h"

@interface HUMediaServiceDefaultAccountsItemManager : HFItemManager <HUUserItemManager>



@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) HUMediaServiceDefaultAccountsItemModule *defaultAccountsItemModule; // ivar: _defaultAccountsItemModule
@property (retain, nonatomic) HFItem *defaultAccountsTitleItem; // ivar: _defaultAccountsTitleItem
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HMHome *homeForUser; // ivar: _homeForUser
@property (retain, nonatomic) HFItem *removeItem; // ivar: _removeItem
@property (retain, nonatomic) HFUserItem *sourceItem;
@property (readonly) Class superclass;


-(id)_buildItemProvidersForHome:(id)arg0 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)initWithHome:(id)arg0 sourceItem:(id)arg1 delegate:(id)arg2 ;
-(void)_registerForExternalUpdates;
-(void)_unregisterForExternalUpdates;


@end


#endif