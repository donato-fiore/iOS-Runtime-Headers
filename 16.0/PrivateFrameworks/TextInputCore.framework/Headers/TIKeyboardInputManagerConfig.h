// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TIKEYBOARDINPUTMANAGERCONFIG_H
#define TIKEYBOARDINPUTMANAGERCONFIG_H

@class NSDictionary, NSString, NSNumber;

#import <Foundation/Foundation.h>

#import "TIInputMode.h"

@interface TIKeyboardInputManagerConfig : NSObject

@property (nonatomic) BOOL allowRelaxedOVSPolicy; // ivar: _allowRelaxedOVSPolicy
@property (nonatomic) BOOL allowsSpaceCorrections; // ivar: _allowsSpaceCorrections
@property (nonatomic) BOOL completionsShouldSharePrefix; // ivar: _completionsShouldSharePrefix
@property (nonatomic) BOOL continuousPathCompletesWords; // ivar: _continuousPathCompletesWords
@property (nonatomic) BOOL continuousPathDeleteWholeWord; // ivar: _continuousPathDeleteWholeWord
@property (nonatomic) BOOL continuousPathDetectPause; // ivar: _continuousPathDetectPause
@property (nonatomic) int continuousPathEnabledAlgorithms; // ivar: _continuousPathEnabledAlgorithms
@property (nonatomic) CGFloat continuousPathLanguageWeight; // ivar: _continuousPathLanguageWeight
@property (copy, nonatomic) NSDictionary *continuousPathParams; // ivar: _continuousPathParams
@property (nonatomic) NSInteger cpCandidatesCount; // ivar: _cpCandidatesCount
@property (nonatomic) int cpConfidenceModelType; // ivar: _cpConfidenceModelType
@property (nonatomic) BOOL disableAnalytics; // ivar: _disableAnalytics
@property (copy, nonatomic) NSString *dynamicResourcePath; // ivar: _dynamicResourcePath
@property (copy, nonatomic) NSNumber *favoniusLanguageModelWeight; // ivar: _favoniusLanguageModelWeight
@property (nonatomic) BOOL includeLightWeightLanguageModelMobileAssets; // ivar: _includeLightWeightLanguageModelMobileAssets
@property (retain, nonatomic) TIInputMode *inputMode; // ivar: _inputMode
@property (nonatomic) BOOL insertsSpaceAfterPredictiveInput; // ivar: _insertsSpaceAfterPredictiveInput
@property (nonatomic) BOOL languageAllowsCP; // ivar: _languageAllowsCP
@property (nonatomic) NSUInteger maxWordsPerPrediction; // ivar: _maxWordsPerPrediction
@property (copy, nonatomic) NSString *ngramModelPath; // ivar: _ngramModelPath
@property (nonatomic) BOOL sensorKitEnabled; // ivar: _sensorKitEnabled
@property (nonatomic) NSUInteger sensorKitWordsThreshold; // ivar: _sensorKitWordsThreshold
@property (copy, nonatomic) NSString *shapeStoreResourceDir; // ivar: _shapeStoreResourceDir
@property (nonatomic) BOOL shouldIgnoreCPRequirements; // ivar: _shouldIgnoreCPRequirements
@property (nonatomic) BOOL skipCandidateQualityFilter; // ivar: _skipCandidateQualityFilter
@property (nonatomic) BOOL skipLanguageLayoutCheckCPML; // ivar: _skipLanguageLayoutCheckCPML
@property (copy, nonatomic) NSString *staticDictionaryPath; // ivar: _staticDictionaryPath
@property (nonatomic, getter=isTesting) BOOL testing; // ivar: _testing
@property (nonatomic) BOOL usesAdaptation; // ivar: _usesAdaptation
@property (nonatomic) BOOL usesCJContinuousPath; // ivar: _usesCJContinuousPath
@property (nonatomic) BOOL usesContinuousPath; // ivar: _usesContinuousPath
@property (nonatomic) BOOL usesContinuousPathProgressiveCandidates; // ivar: _usesContinuousPathProgressiveCandidates
@property (nonatomic) BOOL usesContinuousPathRetrocorrection; // ivar: _usesContinuousPathRetrocorrection
@property (nonatomic) BOOL usesCustomNgramModel; // ivar: _usesCustomNgramModel
@property (nonatomic) BOOL usesCustomStaticDictionary; // ivar: _usesCustomStaticDictionary
@property (nonatomic) BOOL usesDODMLLogging; // ivar: _usesDODMLLogging
@property (nonatomic) BOOL usesRetrocorrection; // ivar: _usesRetrocorrection
@property (nonatomic) BOOL usesStemSuffixCorrectionFactor; // ivar: _usesStemSuffixCorrectionFactor
@property (nonatomic) BOOL usesTextChecker; // ivar: _usesTextChecker
@property (nonatomic) BOOL usesUserModelLogging; // ivar: _usesUserModelLogging
@property (nonatomic) BOOL usesWordNgramModel; // ivar: _usesWordNgramModel
@property (nonatomic) BOOL usesWordNgramModelAdaptation;


+(id)configurationForInputMode:(id)arg0 ;
-(id)propertyList;


@end


#endif