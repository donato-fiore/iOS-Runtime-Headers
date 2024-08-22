// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSCNNDROPOUT_H
#define MPSCNNDROPOUT_H

@class MPSParallelRandomMTGP32;


#import "MPSCNNKernel.h"

@interface MPSCNNDropout : MPSCNNKernel {
    MPSParallelRandomMTGP32 *_parallelGenerator;
}


@property (readonly, nonatomic) float keepProbability; // ivar: _keepProbability
@property (readonly, nonatomic) ? maskStrideInPixels; // ivar: _maskStrideInPixels
@property (readonly, nonatomic) NSUInteger seed; // ivar: _seed


+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)debugDescription;
-(id)exportRandomState;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 keepProbability:(float)arg1 seed:(NSUInteger)arg2 maskStrideInPixels:(struct ? )arg3 ;
-(id)initWithDevice:(id)arg0 keepProbability:(float)arg1 state:(id)arg2 maskStrideInPixels:(struct ? )arg3 ;
-(id)privateResultStateForSourceImage:(id)arg0 sourceStates:(id)arg1 destinationImage:(id)arg2 commandBuffer:(id)arg3 isTemporary:(BOOL)arg4 ;
-(id)resultStateBatchForSourceImage:(id)arg0 sourceStates:(id)arg1 destinationImage:(id)arg2 ;
-(id)resultStateForSourceImage:(id)arg0 sourceStates:(id)arg1 destinationImage:(id)arg2 ;
-(id)temporaryResultStateBatchForCommandBuffer:(id)arg0 sourceImage:(id)arg1 sourceStates:(id)arg2 destinationImage:(id)arg3 ;
-(id)temporaryResultStateForCommandBuffer:(id)arg0 sourceImage:(id)arg1 sourceStates:(id)arg2 destinationImage:(id)arg3 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)synchronizeRandomStateOnCommandBuffer:(id)arg0 ;


@end


#endif