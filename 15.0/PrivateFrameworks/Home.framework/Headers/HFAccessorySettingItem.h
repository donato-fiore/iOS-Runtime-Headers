// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFACCESSORYSETTINGITEM_H
#define HFACCESSORYSETTINGITEM_H

@class NSString, HMSetting, NSDictionary;
@protocol HFHomeKitSettingItemProtocol, HFHomeKitObject, HFHomeKitSettingsVendor;


#import "HFItem.h"
#import "HFAccessorySettingsEntity.h"

@interface HFAccessorySettingItem : HFItem <HFHomeKitSettingItemProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) HFAccessorySettingsEntity *entity; // ivar: _entity
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<HFHomeKitObject> *homeKitObject;
@property (retain, nonatomic) NSObject<HFHomeKitSettingsVendor> *homeKitSettingsVendor; // ivar: _homeKitSettingsVendor
@property (retain, nonatomic) HMSetting *setting; // ivar: _setting
@property (readonly, nonatomic) NSString *settingKeyPath;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSDictionary *usageOptions; // ivar: _usageOptions


-(BOOL)_validateKeyPathDependencies;
-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithHomeKitSettingsVendor:(id)arg0 usageOptions:(id)arg1 setting:(id)arg2 ;
-(id)updateValue:(id)arg0 ;
-(id)value;
-(void)_decorateHiddenOrDisabled:(id)arg0 ;
-(void)_decorateOutcomeWithAccessorySettingResultKeys:(id)arg0 ;
-(void)_decorateOutcomeWithDependencies:(id)arg0 ;
-(void)_decorateOutcomeWithResultKeys:(id)arg0 ;


@end


#endif