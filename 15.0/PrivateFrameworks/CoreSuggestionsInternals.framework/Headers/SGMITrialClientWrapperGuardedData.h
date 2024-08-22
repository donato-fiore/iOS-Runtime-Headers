// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGMITRIALCLIENTWRAPPERGUARDEDDATA_H
#define SGMITRIALCLIENTWRAPPERGUARDEDDATA_H

@class NSNumber, NSString, NSArray;

#import <Foundation/Foundation.h>


@interface SGMITrialClientWrapperGuardedData : NSObject {
    NSNumber *_isEnabled;
    NSString *_modelGroundTruthVersion;
    NSString *_modelInferenceVersion;
    NSString *_modelPath;
    NSArray *_modelFeatureNames;
    NSArray *_modelFeatureStandardizationMeans;
    NSArray *_modelFeatureStandardizationStandardDeviations;
    NSArray *_modelGroundTruthFeatureNames;
    NSArray *_modelGroundTruthFeatureLowerBounds;
    NSArray *_modelGroundTruthFeatureUpperBounds;
    NSArray *_saliencyOverrideFeatureNames;
    NSArray *_saliencyOverrideFeatureLowerBounds;
    NSArray *_saliencyOverrideFeatureUpperBounds;
    NSArray *_highRecallFilterFeatureNames;
    NSArray *_highRecallFilterFeatureLowerBounds;
    NSArray *_highRecallFilterFeatureUpperBounds;
    NSNumber *_classificationThreshold;
    NSNumber *_classificationOfflinePrecision;
    NSNumber *_classificationOfflineRecall;
}






@end


#endif