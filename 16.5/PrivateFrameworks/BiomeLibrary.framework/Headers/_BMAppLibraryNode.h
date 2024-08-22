// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _BMAPPLIBRARYNODE_H
#define _BMAPPLIBRARYNODE_H

@class BMLibraryNode;



@interface _BMAppLibraryNode : BMLibraryNode



+(id)Activity;
+(id)Install;
+(id)RelevantShortcuts;
+(id)configurationForActivity;
+(id)configurationForInstall;
+(id)configurationForRelevantShortcuts;
+(id)identifier;
+(id)storeConfigurationForActivity;
+(id)storeConfigurationForInstall;
+(id)storeConfigurationForRelevantShortcuts;
+(id)streamNames;
+(id)streamWithName:(id)arg0 ;
+(id)sublibraries;
+(id)syncPolicyForActivity;
+(id)syncPolicyForInstall;
+(id)syncPolicyForRelevantShortcuts;
+(id)validKeyPaths;


@end


#endif