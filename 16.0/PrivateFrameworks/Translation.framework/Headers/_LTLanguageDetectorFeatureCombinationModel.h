// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _LTLANGUAGEDETECTORFEATURECOMBINATIONMODEL_H
#define _LTLANGUAGEDETECTORFEATURECOMBINATIONMODEL_H

@class MLModel, NSString, NSMutableArray, NSNumber, NSDictionary;

#import <Foundation/Foundation.h>


@interface _LTLanguageDetectorFeatureCombinationModel : NSObject {
    MLModel *_mlModel;
    NSString *_modelInput;
    BOOL _modelInputIsMatrix;
    NSString *_modelOutput;
    NSMutableArray *_features;
    NSNumber *_missingFeatureValueDefault;
    NSNumber *_missingLanguageDetectorDefault;
    NSDictionary *_languageLocaleToIdentifier;
}




-(id)estimateLanguage:(id)arg0 languageDetectionResults:(id)arg1 partialSpeechResultConfidences:(id)arg2 finalSpeechResults:(id)arg3 modelVersions:(id)arg4 ;
-(id)estimateLanguage:(id)arg0 languageDetectionResults:(id)arg1 partialSpeechResultConfidences:(id)arg2 finalSpeechResults:(id)arg3 modelVersions:(id)arg4 useFinalThresholds:(BOOL)arg5 ;
-(id)getAcousticLidConfidenceFromResult:(id)arg0 locale:(id)arg1 ;
-(id)getModelFeatures:(id)arg0 canonicalPair:(id)arg1 partialSpeechResultConfidences:(id)arg2 finalSpeechResults:(id)arg3 modelVersion:(id)arg4 ;
-(id)initWithConfig:(id)arg0 ;


@end


#endif