// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _BMACTIVITYLIBRARYNODE_H
#define _BMACTIVITYLIBRARYNODE_H

@class BMLibraryNode;



@interface _BMActivityLibraryNode : BMLibraryNode



+(id)CPUUsage;
+(id)Level;
+(id)configurationForCPUUsage;
+(id)configurationForLevel;
+(id)identifier;
+(id)storeConfigurationForCPUUsage;
+(id)storeConfigurationForLevel;
+(id)streamNames;
+(id)streamWithName:(id)arg0 ;
+(id)sublibraries;
+(id)syncPolicyForCPUUsage;
+(id)syncPolicyForLevel;
+(id)validKeyPaths;


@end


#endif