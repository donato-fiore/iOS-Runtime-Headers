// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MLSTREAMINGINPUTDATASOURCE_H
#define MLSTREAMINGINPUTDATASOURCE_H

@class NSMutableArray;
@protocol MLComputeDataProvider;

#import <Foundation/Foundation.h>


@interface MLStreamingInputDataSource : NSObject <MLComputeDataProvider>



@property (nonatomic) NSUInteger batchSize; // ivar: _batchSize
@property (retain, nonatomic) NSMutableArray *dataSources; // ivar: _dataSources


-(NSUInteger)numberOfBatches;
-(NSUInteger)sizeOfBatchAtIndex:(NSUInteger)arg0 ;
-(id)batchAtIndex:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)initWithBatchSize:(NSUInteger)arg0 ;
-(void)appendBatchedTensors:(id)arg0 numberOfTensors:(NSUInteger)arg1 ;


@end


#endif