// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFACCESSORYSETTINGGROUPITEM_H
#define HFACCESSORYSETTINGGROUPITEM_H

@class NSString, HMAccessorySelectionSetting, HMSettingGroup, NSDictionary;
@protocol HFHomeKitSettingItemProtocol, HFHomeKitSettingsVendorProvider, HFHomeKitObject, HFHomeKitSettingsVendor;


#import "HFItem.h"
#import "HFAccessorySettingsEntity.h"

@interface HFAccessorySettingGroupItem : HFItem <HFHomeKitSettingItemProtocol, HFHomeKitSettingsVendorProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) HFAccessorySettingsEntity *entity; // ivar: _entity
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<HFHomeKitObject> *homeKitObject;
@property (readonly, nonatomic) NSObject<HFHomeKitSettingsVendor> *homeKitSettingsVendor; // ivar: _homeKitSettingsVendor
@property (readonly, nonatomic) HMAccessorySelectionSetting *selectionSetting; // ivar: _selectionSetting
@property (readonly, nonatomic) HMSettingGroup *settingGroup; // ivar: _settingGroup
@property (readonly, nonatomic) NSString *settingKeyPath;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSDictionary *usageOptions; // ivar: _usageOptions


-(BOOL)_useManagedConfigurationForProfiles;
-(BOOL)_validateKeyPathDependencies;
-(id)_displayTitle;
-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithHomeKitSettingsVendor:(id)arg0 usageOptions:(id)arg1 ;
-(id)initWithHomeKitSettingsVendor:(id)arg0 usageOptions:(id)arg1 entity:(id)arg2 ;
-(id)initWithHomeKitSettingsVendor:(id)arg0 usageOptions:(id)arg1 group:(id)arg2 ;
-(id)initWithHomeKitSettingsVendor:(id)arg0 usageOptions:(id)arg1 selectionSetting:(id)arg2 ;
-(void)_decorateHiddenOrDisabled:(id)arg0 ;


@end


#endif