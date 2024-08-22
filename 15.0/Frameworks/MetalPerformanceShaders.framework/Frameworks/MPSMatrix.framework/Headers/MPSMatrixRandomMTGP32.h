// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSMATRIXRANDOMMTGP32_H
#define MPSMATRIXRANDOMMTGP32_H

@class MPSParallelRandomMTGP32;


#import "MPSMatrixRandom.h"

@interface MPSMatrixRandomMTGP32 : MPSMatrixRandom {
    MPSParallelRandomMTGP32 *_parallelFilter;
}




-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(id)initWithDevice:(id)arg0 destinationDataType:(unsigned int)arg1 seed:(NSUInteger)arg2 ;
-(id)initWithDevice:(id)arg0 destinationDataType:(unsigned int)arg1 seed:(NSUInteger)arg2 distributionDescriptor:(id)arg3 ;
-(void)dealloc;
-(void)encodeToCommandBuffer:(id)arg0 destinationMatrix:(id)arg1 ;
-(void)encodeToCommandBuffer:(id)arg0 destinationVector:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)resetSeedOnCommandBuffer:(id)arg0 seed:(NSUInteger)arg1 ;
-(void)synchronizeStateOnCommandBuffer:(id)arg0 ;


@end


#endif