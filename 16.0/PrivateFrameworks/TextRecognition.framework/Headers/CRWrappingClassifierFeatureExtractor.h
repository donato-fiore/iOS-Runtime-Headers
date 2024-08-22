// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRWRAPPINGCLASSIFIERFEATUREEXTRACTOR_H
#define CRWRAPPINGCLASSIFIERFEATUREEXTRACTOR_H


#import <Foundation/Foundation.h>


@interface CRWrappingClassifierFeatureExtractor : NSObject



+(id)_tokenizeString:(id)arg0 usingWordUnits:(BOOL)arg1 excludeWhitespace:(BOOL)arg2 ;
+(id)extractFeatureMultiArrayForLocale:(id)arg0 textFeature:(id)arg1 lastFeature:(id)arg2 evaluation:(id)arg3 imageSize:(struct CGSize )arg4 ;
+(id)extractFeaturesForLocale:(id)arg0 textFeature:(id)arg1 lastFeature:(id)arg2 imageSize:(struct CGSize )arg3 revision:(NSUInteger)arg4 ;
+(id)multiArrayFromVector:(*void)arg0 ;
+(id)nsArrayFromVector:(*void)arg0 ;
+(struct vector<double, std::allocator<double>> )extractFeatureVectorForLocale:(id)arg0 string1:(id)arg1 string2:(id)arg2 evaluation:(id)arg3 imageSize:(struct CGSize )arg4 ;
+(void)_extractBagOfTokensFeaturesTo:(*void)arg0 vocabulary:(id)arg1 tokens:(id)arg2 beginIndex:(NSInteger)arg3 endIndex:(NSInteger)arg4 ;
+(void)_extractEvaluatedFeaturesTo:(*void)arg0 evaluation:(id)arg1 ;
+(void)_extractGeometricFeaturesTo:(*void)arg0 evaluation:(id)arg1 ;
+(void)_extractLanguageModelFeaturesTo:(*void)arg0 evaluation:(id)arg1 ;
+(void)_extractLexicalFeaturesTo:(*void)arg0 string1:(id)arg1 string2:(id)arg2 configuration:(id)arg3 forCJK:(BOOL)arg4 ;


@end


#endif