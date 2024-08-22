// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SGMITRIALCLIENTWRAPPER_H
#define SGMITRIALCLIENTWRAPPER_H

@class _PASLock, TRIClient;

#import <Foundation/Foundation.h>


@interface SGMITrialClientWrapper : NSObject {
    _PASLock *_lock;
}


@property (retain, nonatomic) TRIClient *triClient; // ivar: _triClient


+(id)sharedInstance;
-(id)arrayFromPathWithPrefix:(id)arg0 suffix:(id)arg1 ;
-(id)attachmentDetectionRegexes;
-(id)bodyAnalysisSamplingFactor;
-(id)classificationOfflinePrecision;
-(id)classificationOfflineRecall;
-(id)classificationThreshold;
-(id)concatPathWithPrefix:(id)arg0 suffix:(id)arg1 extra:(id)arg2 ;
-(id)dictionaryFromPathWithPrefix:(id)arg0 suffix:(id)arg1 ;
-(id)followUpDetectionRegexes;
-(id)init;
-(id)isDNUOnlyEnablement;
-(id)isEnabled;
-(id)loadLevelAsBooleanFromFactor:(id)arg0 ;
-(id)loadLevelAsLongFromFactor:(id)arg0 ;
-(id)loadLevelAsModelPath:(id)arg0 ;
-(id)loadLevelAsNumericArrayFromFactor:(id)arg0 ;
-(id)loadLevelAsNumericDictionaryFromFactor:(id)arg0 ;
-(id)loadLevelAsNumericFromFactor:(id)arg0 ;
-(id)loadLevelAsStringArrayFromFactor:(id)arg0 ;
-(id)loadLevelAsStringFromFactor:(id)arg0 ;
-(id)minCountToConsiderATokenAsExtremelyDiscriminant;
-(id)minCountToConsiderATokenAsHighlyDiscriminant;
-(id)modelFeatureNames;
-(id)modelFeatureStandardizationMeans;
-(id)modelFeatureStandardizationStandardDeviations;
-(id)modelGroundTruthFeatureLowerBounds;
-(id)modelGroundTruthFeatureNames;
-(id)modelGroundTruthFeatureUpperBounds;
-(id)modelGroundTruthOutputs;
-(id)modelGroundTruthVersion;
-(id)modelInferenceVersion;
-(id)modelPath;
-(id)ratioToConsiderATokenAsExtremelyDiscriminant;
-(id)ratioToConsiderATokenAsHighlyDiscriminant;
-(id)recipientDetectionRegexes;
-(id)saliencyOverrideFeatureLowerBounds;
-(id)saliencyOverrideFeatureNames;
-(id)saliencyOverrideFeatureUpperBounds;
-(id)saliencyOverrideOutputs;
-(id)trialMetadata;
-(void)loadFactors;
-(void)refresh;


@end


#endif