// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _HOMEKITSETTINGTOHFITEM_CACHEITEM_H
#define _HOMEKITSETTINGTOHFITEM_CACHEITEM_H

@class NSString, HMAccessorySelectionSettingItem, HMSettingGroup, HMSetting, NSDictionary;
@protocol NAIdentifiable, HFHomeKitSettingsVendor;

#import <Foundation/Foundation.h>

#import "HFAccessorySettingsEntity.h"
#import "HFItem.h"

@interface _HomeKitSettingToHFItem_CacheItem : NSObject <NAIdentifiable>



@property (readonly, nonatomic) HFAccessorySettingsEntity *accessoryGroupEntity; // ivar: _accessoryGroupEntity
@property (readonly, nonatomic) NSString *cacheKey;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<HFHomeKitSettingsVendor> *homeKitSettingsVendor; // ivar: _homeKitSettingsVendor
@property (readonly, nonatomic) NSString *keyPath;
@property (readonly, nonatomic) HMAccessorySelectionSettingItem *optionItem; // ivar: _optionItem
@property (readonly, nonatomic) HFItem *outputItem; // ivar: _outputItem
@property (readonly, nonatomic) HMSettingGroup *settingGroup; // ivar: _settingGroup
@property (readonly, nonatomic) HMSetting *singleSetting; // ivar: _singleSetting
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSDictionary *usageOptions; // ivar: _usageOptions


+(BOOL)_checkSettingGroupForSettingsThatNeedToBeDisplayed:(id)arg0 usageOptions:(id)arg1 settingGroup:(id)arg2 ;
+(id)na_identity;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)shouldBeDisplayed;
-(id)initWithHomeKitSettingsVendor:(id)arg0 usageOptions:(id)arg1 accessoryGroupEntity:(id)arg2 ;
-(id)initWithHomeKitSettingsVendor:(id)arg0 usageOptions:(id)arg1 group:(id)arg2 ;
-(id)initWithHomeKitSettingsVendor:(id)arg0 usageOptions:(id)arg1 setting:(id)arg2 ;
-(id)initWithHomeKitSettingsVendor:(id)arg0 usageOptions:(id)arg1 setting:(id)arg2 optionItem:(id)arg3 ;


@end


#endif