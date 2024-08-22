// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MLDATACONVERSIONUTILS_H
#define MLDATACONVERSIONUTILS_H


#import <Foundation/Foundation.h>


@interface MLDataConversionUtils : NSObject



+(BOOL)populateEspressoShapeAndStridesFromInputShape:(id)arg0 ndRepresentation:(BOOL)arg1 espressoShape:(*id)arg2 espressoStrides:(*id)arg3 error:(*id)arg4 ;
+(BOOL)populateShapeAndStrideFor:(id)arg0 inputShape:(id)arg1 outputShape:(*id)arg2 outputStrides:(*id)arg3 error:(*id)arg4 ;
+(NSUInteger)mlComputeDataTypeSize:(NSInteger)arg0 ;
+(NSUInteger)sizeFromShape:(id)arg0 ;
+(id)batchProviderFromEspressoDataProvider:(id)arg0 neuralNetworkEngine:(id)arg1 options:(id)arg2 error:(*id)arg3 ;
+(id)batchProviderFromMLComputeDataProvider:(id)arg0 neuralNetworkEngine:(id)arg1 options:(id)arg2 error:(*id)arg3 ;
+(id)espressoDataProviderFromBatchProvider:(id)arg0 forPrediction:(BOOL)arg1 neuralNetworkEngine:(id)arg2 error:(*id)arg3 ;
+(id)espressoDataProviderFromFeatureProvider:(id)arg0 forPrediction:(BOOL)arg1 neuralNetworkEngine:(id)arg2 error:(*id)arg3 ;
+(id)featureProviderFomMLComputeDataProvider:(id)arg0 neuralNetworkEngine:(id)arg1 options:(id)arg2 error:(*id)arg3 ;
+(id)featureProviderFromEspressoDataProvider:(id)arg0 neuralNetworkEngine:(id)arg1 options:(id)arg2 error:(*id)arg3 ;
+(id)mlComputeDataProviderFromBatchProvider:(id)arg0 batchSize:(NSUInteger)arg1 forPrediction:(BOOL)arg2 neuralNetworkEngine:(id)arg3 error:(*id)arg4 ;
+(id)stridesForShape:(id)arg0 ;


@end


#endif