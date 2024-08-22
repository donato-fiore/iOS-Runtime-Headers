// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSPARALLELRANDOMMTGP32_H
#define MPSPARALLELRANDOMMTGP32_H

@protocol MTLBuffer;


#import "MPSParallelRandom.h"

@interface MPSParallelRandomMTGP32 : MPSParallelRandom {
    id<MTLBuffer> *_state;
    id<MTLBuffer> *_pShift1;
    id<MTLBuffer> *_pShift2;
    id<MTLBuffer> *_pMR;
    id<MTLBuffer> *_pMT;
    id<MTLBuffer> *_pM;
    id<MTLBuffer> *_pStateIdx;
    float _bernoulliParameter;
    float _uniformMin;
    float _uniformMax;
    float _normalMean;
    float _normalStandardDeviation;
}




-(id)exportState;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(id)initWithDevice:(id)arg0 destinationDataType:(unsigned int)arg1 seed:(NSUInteger)arg2 ;
-(id)initWithDevice:(id)arg0 destinationDataType:(unsigned int)arg1 seed:(NSUInteger)arg2 distributionDescriptor:(id)arg3 ;
-(id)initWithDevice:(id)arg0 destinationDataType:(unsigned int)arg1 state:(id)arg2 distributionDescriptor:(id)arg3 ;
-(void)dealloc;
-(void)encodeToCommandBuffer:(id)arg0 computeEncoder:(id)arg1 destinationBuffer:(id)arg2 destinationOffset:(NSUInteger)arg3 numEntries:(NSUInteger)arg4 ;
-(void)encodeToCommandBuffer:(id)arg0 computeEncoder:(id)arg1 destinationBuffer:(id)arg2 destinationOffset:(NSUInteger)arg3 numEntries:(NSUInteger)arg4 stride:(unsigned int)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)reinitializeDistributionDescriptor:(id)arg0 ;
-(void)resetSeedOnCommandBuffer:(id)arg0 seed:(NSUInteger)arg1 ;
-(void)synchronizeStateOnCommandBuffer:(id)arg0 ;


@end


#endif