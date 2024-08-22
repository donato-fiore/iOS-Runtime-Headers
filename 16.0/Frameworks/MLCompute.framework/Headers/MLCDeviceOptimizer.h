// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MLCDEVICEOPTIMIZER_H
#define MLCDEVICEOPTIMIZER_H

@class NSData;
@protocol NSCopying, MTLComputePipelineState, MTLBuffer;

#import <Foundation/Foundation.h>

#import "MLCOptimizerDescriptor.h"

@interface MLCDeviceOptimizer : NSObject <NSCopying>



@property (nonatomic) NSUInteger accumulatorBufferCount; // ivar: _accumulatorBufferCount
@property (nonatomic) float alpha; // ivar: _alpha
@property (nonatomic) BOOL amsgrad; // ivar: _amsgrad
@property (nonatomic) float beta1; // ivar: _beta1
@property (nonatomic) float beta2; // ivar: _beta2
@property (nonatomic) BOOL centered; // ivar: _centered
@property (retain, nonatomic) NSObject<MTLComputePipelineState> *computeL2NormKernel; // ivar: _computeL2NormKernel
@property (nonatomic) BOOL decoupleWeightDecay; // ivar: _decoupleWeightDecay
@property (retain, nonatomic) MLCOptimizerDescriptor *descriptor; // ivar: _descriptor
@property (nonatomic) float epsilon; // ivar: _epsilon
@property (readonly, nonatomic) unsigned int function; // ivar: _function
@property (nonatomic) int gpuOptimizerKernelType; // ivar: _gpuOptimizerKernelType
@property (readonly, retain, nonatomic) id *kernel; // ivar: _kernel
@property (retain, nonatomic) NSObject<MTLBuffer> *l2NormBuffer; // ivar: _l2NormBuffer
@property (nonatomic) float learningRate; // ivar: _learningRate
@property (nonatomic) float momentumScale; // ivar: _momentumScale
@property (readonly, retain, nonatomic) NSData *optimizerAlgFields; // ivar: _optimizerAlgFields
@property (retain, nonatomic) NSObject<MTLComputePipelineState> *sumL2NormKernel; // ivar: _sumL2NormKernel
@property (nonatomic) NSUInteger timeStep; // ivar: _timeStep
@property (nonatomic) BOOL usesNesterov; // ivar: _usesNesterov


+(id)deviceOptimizerWithFunction:(unsigned int)arg0 optimizerAlgFields:(id)arg1 accumulatorBufferCount:(NSUInteger)arg2 ;
+(id)deviceOptimizerWithKernel:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithFunction:(unsigned int)arg0 optimizerAlgFields:(id)arg1 accumulatorBufferCount:(NSUInteger)arg2 ;
-(id)initWithKernel:(id)arg0 ;


@end


#endif