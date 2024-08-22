// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _BMDEVICEPOWERLIBRARYNODE_H
#define _BMDEVICEPOWERLIBRARYNODE_H

@class BMLibraryNode;



@interface _BMDevicePowerLibraryNode : BMLibraryNode



+(id)BatteryLevel;
+(id)EnergyMode;
+(id)LowPowerMode;
+(id)PluggedIn;
+(id)configurationForBatteryLevel;
+(id)configurationForEnergyMode;
+(id)configurationForLowPowerMode;
+(id)configurationForPluggedIn;
+(id)identifier;
+(id)storeConfigurationForBatteryLevel;
+(id)storeConfigurationForEnergyMode;
+(id)storeConfigurationForLowPowerMode;
+(id)storeConfigurationForPluggedIn;
+(id)streamNames;
+(id)streamWithName:(id)arg0 ;
+(id)sublibraries;
+(id)syncPolicyForBatteryLevel;
+(id)syncPolicyForEnergyMode;
+(id)syncPolicyForLowPowerMode;
+(id)syncPolicyForPluggedIn;
+(id)validKeyPaths;


@end


#endif