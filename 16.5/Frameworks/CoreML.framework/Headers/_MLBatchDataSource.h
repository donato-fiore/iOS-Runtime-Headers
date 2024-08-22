// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MLBATCHDATASOURCE_H
#define _MLBATCHDATASOURCE_H

@class NSString;
@protocol ETDataProvider, MLBatchProvider;

#import <Foundation/Foundation.h>

#import "MLNeuralNetworkEngine.h"

@interface _MLBatchDataSource : NSObject <ETDataProvider>



@property (readonly, nonatomic) NSObject<MLBatchProvider> *batchProvider; // ivar: _batchProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) MLNeuralNetworkEngine *nnEngine; // ivar: _nnEngine
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL useForPrediction; // ivar: _useForPrediction


-(NSUInteger)numberOfDataPoints;
-(id)dataPointAtIndex:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)initWithMLBatchProvider:(id)arg0 forPrediction:(BOOL)arg1 neuralNetworkEngine:(id)arg2 error:(*id)arg3 ;


@end


#endif