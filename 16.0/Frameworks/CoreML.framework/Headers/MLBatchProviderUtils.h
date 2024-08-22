// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MLBATCHPROVIDERUTILS_H
#define MLBATCHPROVIDERUTILS_H


#import <Foundation/Foundation.h>


@interface MLBatchProviderUtils : NSObject



+(BOOL)vectorizeFeaturesNamed:(id)arg0 fromBatch:(id)arg1 intoRowsOfDoubleMatrix:(id)arg2 error:(*id)arg3 ;
+(id)batchFromConcatinatingBatches:(id)arg0 ;
+(id)batchWithSubsetOfFeaturesNamed:(id)arg0 fromBatch:(id)arg1 ;
+(id)dictionaryFromBatch:(id)arg0 ;
+(id)dictionaryFromBatch:(id)arg0 featureNames:(id)arg1 ;
+(id)featureDescriptionsByNameForBatch:(id)arg0 error:(*id)arg1 ;
+(id)featureNamesInBatch:(id)arg0 ;
+(id)featureProviderArrayFromBatch:(id)arg0 ;
+(id)featureValueArrayForName:(id)arg0 batch:(id)arg1 error:(*id)arg2 ;
+(id)lazyBatchIndexIntoBatch:(id)arg0 indices:(id)arg1 error:(*id)arg2 ;
+(id)lazyBatchWindowIntoBatch:(id)arg0 startIndex:(NSUInteger)arg1 windowLength:(NSUInteger)arg2 error:(*id)arg3 ;
+(id)lazyBatchWithFeaturesInBatch:(id)arg0 addedToBatch:(id)arg1 error:(*id)arg2 ;


@end


#endif