// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGFINGERPRINTVERSIONHELPER_H
#define PGFINGERPRINTVERSIONHELPER_H


#import <Foundation/Foundation.h>


@interface PGFingerprintVersionHelper : NSObject



+(BOOL)_generateError:(*id)arg0 errorCode:(NSInteger)arg1 errorMessage:(id)arg2 underlyingError:(id)arg3 ;
+(BOOL)isAssetFingerprintVersion:(NSInteger)arg0 ;
+(BOOL)isMemoryFingerprintVersion:(NSInteger)arg0 ;
+(BOOL)isMemoryNodeFingerprintVersion:(NSInteger)arg0 ;
+(BOOL)isMomentFingerprintVersion:(NSInteger)arg0 ;
+(BOOL)isMomentNodeFingerprintVersion:(NSInteger)arg0 ;
+(NSInteger)fingerprintVersionForName:(id)arg0 ;
+(id)_assetPrintFeatureExtractorForAssetPrintType:(NSInteger)arg0 transformers:(id)arg1 error:(*id)arg2 ;
+(id)_featureExtractor:(id)arg0 withTransformers:(id)arg1 ;
+(id)_featureExtractor:(id)arg0 withTransformers:(id)arg1 parentFeatureExtractorName:(id)arg2 ;
+(id)_featureExtractors:(id)arg0 withTransformers:(id)arg1 ;
+(id)_featureExtractors:(id)arg0 withTransformers:(id)arg1 parentFeatureExtractorName:(id)arg2 ;
+(id)_multiModalFeatureExtractorForMutliModalType:(NSInteger)arg0 assetFeatureExtractor:(id)arg1 personaVectorFeatureExtractor:(id)arg2 graph:(id)arg3 transformers:(id)arg4 error:(*id)arg5 ;
+(id)_personaVectorFeatureExtractorForPersonaVectorType:(NSInteger)arg0 fetchOptionPropertySet:(id)arg1 graph:(id)arg2 transformers:(id)arg3 error:(*id)arg4 ;
+(id)_sceneprintFeatureExtractorInstance;
+(id)featureExtractorForFingerprintVersion:(NSInteger)arg0 withGraph:(id)arg1 withTransformers:(id)arg2 error:(*id)arg3 ;
+(id)fetchOptionPropertySetForFingerprintVersion:(NSInteger)arg0 ;
+(id)nameForFingerprintVersion:(NSInteger)arg0 ;
+(void)resetPreCalculatedFeatures;


@end


#endif