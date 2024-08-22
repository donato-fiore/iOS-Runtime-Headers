// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


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
-(id)attachmentLinkDetection;
-(id)bodyAnalysisSamplingFactor;
-(id)classificationOfflinePrecision;
-(id)classificationOfflineRecall;
-(id)classificationThreshold;
-(id)concatPathWithPrefix:(id)arg0 suffix:(id)arg1 extra:(id)arg2 ;
-(id)conservativeRecipientDetection;
-(id)defaultTimeIntervalForAWarning;
-(id)defaultTimeIntervalToStartWarningExposition;
-(id)dictionaryFromPathWithPrefix:(id)arg0 suffix:(id)arg1 ;
-(id)followUpOnIncomingMailsDetectionRegexes;
-(id)followUpOnOutgoingMailsAsksDetectionRegexes;
-(id)followUpOnOutgoingMailsQuestionsDetectionRegexes;
-(id)followUpWarningsParameters;
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
-(id)nicknameDetectionRegexes;
-(id)ratioToConsiderATokenAsExtremelyDiscriminant;
-(id)ratioToConsiderATokenAsHighlyDiscriminant;
-(id)recipientConservativeDetectionRegexes;
-(id)recipientDetectionRegexes;
-(id)saliencyOverrideFeatureLowerBounds;
-(id)saliencyOverrideFeatureNames;
-(id)saliencyOverrideFeatureUpperBounds;
-(id)saliencyOverrideOutputs;
-(id)signatureStatsLogging;
-(id)trialMetadata;
-(id)trialMetadataString;
-(void)loadFactors;
-(void)refresh;


@end


#endif