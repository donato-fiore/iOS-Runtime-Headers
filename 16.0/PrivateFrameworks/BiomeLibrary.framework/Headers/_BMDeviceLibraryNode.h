// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _BMDEVICELIBRARYNODE_H
#define _BMDEVICELIBRARYNODE_H

@class BMLibraryNode;



@interface _BMDeviceLibraryNode : BMLibraryNode



+(id)Display;
+(id)KeybagLocked;
+(id)Power;
+(id)ScreenLocked;
+(id)Settings;
+(id)Thermals;
+(id)Wireless;
+(id)configurationForKeybagLocked;
+(id)configurationForScreenLocked;
+(id)identifier;
+(id)storeConfigurationForKeybagLocked;
+(id)storeConfigurationForScreenLocked;
+(id)streamNames;
+(id)streamWithName:(id)arg0 ;
+(id)sublibraries;
+(id)syncPolicyForKeybagLocked;
+(id)syncPolicyForScreenLocked;
+(id)validKeyPaths;


@end


#endif