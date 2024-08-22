// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MLCOMPUTEBATCHDATASOURCE_H
#define MLCOMPUTEBATCHDATASOURCE_H

@protocol MLComputeDataProvider, MLBatchProvider;

#import <Foundation/Foundation.h>

#import "MLNeuralNetworkEngine.h"

@interface MLComputeBatchDataSource : NSObject <MLComputeDataProvider>



@property (readonly, nonatomic) NSObject<MLBatchProvider> *batchProvider; // ivar: _batchProvider
@property (nonatomic) NSUInteger batchSize; // ivar: _batchSize
@property (readonly, nonatomic) MLNeuralNetworkEngine *nnEngine; // ivar: _nnEngine
@property (readonly, nonatomic) BOOL useForPrediction; // ivar: _useForPrediction


-(NSUInteger)numberOfBatches;
-(NSUInteger)sizeOfBatchAtIndex:(NSUInteger)arg0 ;
-(id)batchAtIndex:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)initWithBatchProvider:(id)arg0 batchSize:(NSUInteger)arg1 forPrediction:(BOOL)arg2 neuralNetworkEngine:(id)arg3 error:(*id)arg4 ;
-(id)mlcDataSourceAtIndex:(NSInteger)arg0 error:(*id)arg1 ;


@end


#endif