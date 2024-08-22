// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSNDARRAYUNARYKERNEL_H
#define MPSNDARRAYUNARYKERNEL_H



#import "MPSNDArrayMultiaryKernel.h"

@interface MPSNDArrayUnaryKernel : MPSNDArrayMultiaryKernel

@property (nonatomic) ? dilationRates; // ivar: _dilationRates
@property (nonatomic) NSUInteger edgeMode; // ivar: _edgeMode
@property (nonatomic) ? kernelSizes; // ivar: _kernelSizes
@property (nonatomic) ? offsets; // ivar: _offsets
@property (nonatomic) ? strides; // ivar: _strides


+(NSUInteger)expectedVirtualSourceCount;
-(id)encodeToCommandBuffer:(id)arg0 sourceArray:(id)arg1 ;
-(id)encodeToCommandBuffer:(id)arg0 sourceArray:(id)arg1 resultState:(*id)arg2 outputStateIsTemporary:(BOOL)arg3 ;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(void)encodeToCommandBuffer:(id)arg0 sourceArray:(id)arg1 destinationArray:(id)arg2 ;
-(void)encodeToCommandBuffer:(id)arg0 sourceArray:(id)arg1 resultState:(id)arg2 destinationArray:(id)arg3 ;


@end


#endif