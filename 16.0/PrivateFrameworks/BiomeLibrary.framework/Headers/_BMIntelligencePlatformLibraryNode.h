// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _BMINTELLIGENCEPLATFORMLIBRARYNODE_H
#define _BMINTELLIGENCEPLATFORMLIBRARYNODE_H

@class BMLibraryNode;



@interface _BMIntelligencePlatformLibraryNode : BMLibraryNode



+(id)FeatureStore;
+(id)MessageTerms;
+(id)configurationForFeatureStore;
+(id)configurationForMessageTerms;
+(id)identifier;
+(id)storeConfigurationForFeatureStore;
+(id)storeConfigurationForMessageTerms;
+(id)streamNames;
+(id)streamWithName:(id)arg0 ;
+(id)sublibraries;
+(id)syncPolicyForFeatureStore;
+(id)syncPolicyForMessageTerms;
+(id)validKeyPaths;


@end


#endif