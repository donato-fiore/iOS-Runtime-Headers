// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFACCESSORYSETTINGSITEMPROVIDER_H
#define HFACCESSORYSETTINGSITEMPROVIDER_H

@class NATreeNode, HMSettingGroup, NSMutableSet, NSMutableDictionary, NSDictionary;
@protocol HFHomeKitSettingsVendor;


#import "HFItemProvider.h"

@interface HFAccessorySettingsItemProvider : HFItemProvider

@property (copy, nonatomic) id *filter; // ivar: _filter
@property (readonly, nonatomic) NSObject<HFHomeKitSettingsVendor> *homeKitSettingsVendor; // ivar: _homeKitSettingsVendor
@property (readonly, nonatomic) NATreeNode *parentNode; // ivar: _parentNode
@property (retain, nonatomic) HMSettingGroup *settingGroup; // ivar: _settingGroup
@property (retain, nonatomic) NSMutableSet *settingItems; // ivar: _settingItems
@property (retain, nonatomic) NSMutableDictionary *settingToItemCache; // ivar: _settingToItemCache
@property (retain, nonatomic) NSDictionary *usageOptions; // ivar: _usageOptions


+(id)buildItemTuplesForHomeKitSettings:(id)arg0 usageOptions:(id)arg1 settingGroup:(id)arg2 underNode:(id)arg3 cache:(id)arg4 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithHomeKitSettingsVendor:(id)arg0 settingGroup:(id)arg1 usageOptions:(id)arg2 ;
-(id)invalidationReasons;
-(id)items;
-(id)reloadItems;


@end


#endif