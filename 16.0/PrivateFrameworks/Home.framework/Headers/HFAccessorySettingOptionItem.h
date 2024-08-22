// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFACCESSORYSETTINGOPTIONITEM_H
#define HFACCESSORYSETTINGOPTIONITEM_H

@class HMAccessorySelectionSettingItem, NSDictionary;


#import "HFAccessorySettingItem.h"

@interface HFAccessorySettingOptionItem : HFAccessorySettingItem

@property (retain, nonatomic) HMAccessorySelectionSettingItem *optionItem; // ivar: _optionItem
@property (retain, nonatomic) NSDictionary *usageOptions; // ivar: _usageOptions


-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)homeKitObject;
-(id)initWithHomeKitSettingsVendor:(id)arg0 usageOptions:(id)arg1 setting:(id)arg2 optionItem:(id)arg3 ;
-(id)settingKeyPath;
-(id)toggleSelection;
-(id)value;
-(void)_decorateOutcomeWithDependencies:(id)arg0 ;


@end


#endif