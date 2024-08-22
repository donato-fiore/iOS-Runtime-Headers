// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _BMMLSESHARESHEETLIBRARYNODE_H
#define _BMMLSESHARESHEETLIBRARYNODE_H

@class BMLibraryNode;



@interface _BMMLSEShareSheetLibraryNode : BMLibraryNode



+(id)DurableFeatureStore;
+(id)Feedback;
+(id)Inference;
+(id)LabeledDataStore;
+(id)Metrics;
+(id)VirtualFeatureStore;
+(id)configurationForDurableFeatureStore;
+(id)configurationForFeedback;
+(id)configurationForLabeledDataStore;
+(id)configurationForVirtualFeatureStore;
+(id)identifier;
+(id)storeConfigurationForDurableFeatureStore;
+(id)storeConfigurationForFeedback;
+(id)storeConfigurationForLabeledDataStore;
+(id)storeConfigurationForVirtualFeatureStore;
+(id)streamNames;
+(id)streamWithName:(id)arg0 ;
+(id)sublibraries;
+(id)syncPolicyForDurableFeatureStore;
+(id)syncPolicyForFeedback;
+(id)syncPolicyForLabeledDataStore;
+(id)syncPolicyForVirtualFeatureStore;
+(id)validKeyPaths;


@end


#endif