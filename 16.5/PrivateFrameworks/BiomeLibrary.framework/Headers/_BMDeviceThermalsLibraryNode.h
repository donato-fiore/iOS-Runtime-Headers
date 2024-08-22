// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _BMDEVICETHERMALSLIBRARYNODE_H
#define _BMDEVICETHERMALSLIBRARYNODE_H

@class BMLibraryNode;



@interface _BMDeviceThermalsLibraryNode : BMLibraryNode



+(id)BatteryTemperature;
+(id)configurationForBatteryTemperature;
+(id)identifier;
+(id)storeConfigurationForBatteryTemperature;
+(id)streamNames;
+(id)streamWithName:(id)arg0 ;
+(id)sublibraries;
+(id)syncPolicyForBatteryTemperature;
+(id)validKeyPaths;


@end


#endif