// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SGMITRIALCLIENTWRAPPERGUARDEDDATA_H
#define SGMITRIALCLIENTWRAPPERGUARDEDDATA_H

@class NSNumber, NSString, NSArray, NSDictionary;

#import <Foundation/Foundation.h>


@interface SGMITrialClientWrapperGuardedData : NSObject {
    NSNumber *_isEnabled;
    NSNumber *_isDNUOnlyEnablement;
    NSString *_modelGroundTruthVersion;
    NSString *_modelInferenceVersion;
    NSString *_modelPath;
    NSArray *_modelFeatureNames;
    NSArray *_modelFeatureStandardizationMeans;
    NSArray *_modelFeatureStandardizationStandardDeviations;
    NSArray *_modelGroundTruthFeatureNames;
    NSArray *_modelGroundTruthFeatureLowerBounds;
    NSArray *_modelGroundTruthFeatureUpperBounds;
    NSArray *_modelGroundTruthOutputs;
    NSArray *_saliencyOverrideFeatureNames;
    NSArray *_saliencyOverrideFeatureLowerBounds;
    NSArray *_saliencyOverrideFeatureUpperBounds;
    NSArray *_saliencyOverrideOutputs;
    NSNumber *_classificationThreshold;
    NSNumber *_classificationOfflinePrecision;
    NSNumber *_classificationOfflineRecall;
    NSDictionary *_attachmentDetectionRegexes;
    NSDictionary *_recipientDetectionRegexes;
    NSDictionary *_followUpDetectionRegexes;
    NSNumber *_bodyAnalysisSamplingFactor;
    NSNumber *_minCountToConsiderATokenAsHighlyDiscriminant;
    NSNumber *_ratioToConsiderATokenAsHighlyDiscriminant;
    NSNumber *_minCountToConsiderATokenAsExtremelyDiscriminant;
    NSNumber *_ratioToConsiderATokenAsExtremelyDiscriminant;
}






@end


#endif