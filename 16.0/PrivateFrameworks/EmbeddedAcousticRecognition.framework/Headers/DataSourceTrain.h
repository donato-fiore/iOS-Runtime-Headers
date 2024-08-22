// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DATASOURCETRAIN_H
#define DATASOURCETRAIN_H

@class NSString;
@protocol ETDataProvider;

#import <Foundation/Foundation.h>

#import "NoiseSampler.h"

@interface DataSourceTrain : NSObject <ETDataProvider>

 {
    vector<std::vector<float>, std::allocator<std::vector<float>>> _contextData;
    vector<std::vector<float>, std::allocator<std::vector<float>>> _targetData;
    vector<std::vector<float>, std::allocator<std::vector<float>>> _maskData;
    vector<std::vector<float>, std::allocator<std::vector<float>>> _noiseData;
    NSUInteger _sequenceLength;
    NSUInteger _numBatches;
    NSUInteger _noiseSize;
    NSUInteger _batchSize;
    NoiseSampler *_sampler;
    NSString *_contextKey;
    NSString *_targetKey;
    NSString *_maskKey;
    NSString *_noiseKey;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSUInteger)numberOfDataPoints;
-(id)dataPointAtIndex:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithNumDataPoints:(NSUInteger)arg0 sequenceLength:(NSUInteger)arg1 noiseSize:(NSUInteger)arg2 batchSize:(NSUInteger)arg3 vocabSize:(NSUInteger)arg4 contextKey:(id)arg5 targetKey:(id)arg6 maskKey:(id)arg7 noiseKey:(id)arg8 ;
-(void)setNumBatches:(int)arg0 ;
-(void)setVectorsWithProcessor:(id)arg0 ;


@end


#endif