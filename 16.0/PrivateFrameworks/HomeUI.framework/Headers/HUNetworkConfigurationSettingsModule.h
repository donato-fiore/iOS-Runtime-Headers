// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUNETWORKCONFIGURATIONSETTINGSMODULE_H
#define HUNETWORKCONFIGURATIONSETTINGSMODULE_H

@class HFItemModule, HMAccessoryNetworkProtectionGroup, HFNetworkConfigurationGroupItem, NSTimer;
@protocol HUNetworkConfigurationSettingsModuleDelegate;


#import "HUNetworkProtectionModeOptionItemProvider.h"

@interface HUNetworkConfigurationSettingsModule : HFItemModule

@property (readonly, nonatomic) HMAccessoryNetworkProtectionGroup *group; // ivar: _group
@property (nonatomic) BOOL isUpdatingProtectionMode; // ivar: _isUpdatingProtectionMode
@property (weak, nonatomic) NSObject<HUNetworkConfigurationSettingsModuleDelegate> *networkConfigurationSettingsModuleDelegate; // ivar: _networkConfigurationSettingsModuleDelegate
@property (retain, nonatomic) HUNetworkProtectionModeOptionItemProvider *networkProtectionModeOptionItemProvider; // ivar: _networkProtectionModeOptionItemProvider
@property (readonly, nonatomic) HFNetworkConfigurationGroupItem *sourceItem;
@property (retain, nonatomic) NSTimer *updateProtectionModeTimer; // ivar: _updateProtectionModeTimer


+(id)_allowedHostDescriptionForHostGroup:(id)arg0 ;
+(id)_attributedCheckmarkIcon;
+(id)_attributedExclamationIcon;
+(id)_attributedIconNamed:(id)arg0 ;
-(BOOL)isItemNetworkProtectionModeOptionItem:(id)arg0 ;
-(id)_protectionModeOptionSectionFooter;
-(id)buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)description;
-(id)initWithItemUpdater:(id)arg0 ;
-(id)initWithItemUpdater:(id)arg0 group:(id)arg1 ;
-(id)itemProviders;
-(id)updateProtectionMode:(NSInteger)arg0 ;


@end


#endif