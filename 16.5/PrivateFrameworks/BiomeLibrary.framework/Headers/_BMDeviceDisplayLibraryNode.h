// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _BMDEVICEDISPLAYLIBRARYNODE_H
#define _BMDEVICEDISPLAYLIBRARYNODE_H

@class BMLibraryNode;



@interface _BMDeviceDisplayLibraryNode : BMLibraryNode



+(id)AlwaysOn;
+(id)Appearance;
+(id)Backlight;
+(id)InterfaceOrientation;
+(id)configurationForAlwaysOn;
+(id)configurationForAppearance;
+(id)configurationForBacklight;
+(id)configurationForInterfaceOrientation;
+(id)identifier;
+(id)storeConfigurationForAlwaysOn;
+(id)storeConfigurationForAppearance;
+(id)storeConfigurationForBacklight;
+(id)storeConfigurationForInterfaceOrientation;
+(id)streamNames;
+(id)streamWithName:(id)arg0 ;
+(id)sublibraries;
+(id)syncPolicyForAlwaysOn;
+(id)syncPolicyForAppearance;
+(id)syncPolicyForBacklight;
+(id)syncPolicyForInterfaceOrientation;
+(id)validKeyPaths;


@end


#endif