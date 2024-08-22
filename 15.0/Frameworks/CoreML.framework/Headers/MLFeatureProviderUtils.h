// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MLFEATUREPROVIDERUTILS_H
#define MLFEATUREPROVIDERUTILS_H


#import <Foundation/Foundation.h>


@interface MLFeatureProviderUtils : NSObject



+(BOOL)_vectorizeWithoutSizeCheckFeatureValues:(id)arg0 intoDoubleVector:(*CGFloat)arg1 stride:(NSUInteger)arg2 error:(*id)arg3 ;
+(BOOL)canVectorizeAllFeaturesWithDescriptions:(id)arg0 ;
+(BOOL)canVectorizeFeatureWithDescription:(id)arg0 ;
+(BOOL)vectorizeFeaturesProvidedBy:(id)arg0 featureNames:(id)arg1 intoDoubleVector:(*CGFloat)arg2 length:(NSUInteger)arg3 stride:(NSUInteger)arg4 error:(*id)arg5 ;
+(NSInteger)_vectorizedSizeOfFeatureValues:(id)arg0 error:(*id)arg1 ;
+(id)_featureValuesForNames:(id)arg0 providedBy:(id)arg1 error:(*id)arg2 ;
+(id)lazyProviderWithFeaturesProvidedBy:(id)arg0 addedToFeaturesProvidedBy:(id)arg1 ;
+(id)providerWithSubsetOfFeaturesNamed:(id)arg0 providedBy:(id)arg1 ;
+(id)vectorizeFeaturesProvidedBy:(id)arg0 featureNames:(id)arg1 error:(*id)arg2 ;


@end


#endif