// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSCNNARITHMETIC_H
#define MPSCNNARITHMETIC_H



#import "MPSCNNBinaryKernel.h"

@interface MPSCNNArithmetic : MPSCNNBinaryKernel {
    int _arithmeticType;
}


@property (nonatomic) float bias; // ivar: _bias
@property (nonatomic) float maximumValue; // ivar: _maximumValue
@property (nonatomic) float minimumValue; // ivar: _minimumValue
@property (nonatomic) float primaryScale; // ivar: _primaryScale
@property (nonatomic) NSUInteger primaryStrideInFeatureChannels; // ivar: _primaryStrideInFeatureChannels
@property (nonatomic) float secondaryScale; // ivar: _secondaryScale
@property (nonatomic) NSUInteger secondaryStrideInFeatureChannels; // ivar: _secondaryStrideInFeatureChannels


+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(NSUInteger)maxBatchSize;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)debugDescription;
-(id)destinationImageDescriptorForSourceImages:(id)arg0 sourceStates:(id)arg1 paddingMethod:(NSUInteger)arg2 primaryOffset:(struct ? *)arg3 secondaryOffset:(struct ? *)arg4 kernelOffset:(struct ? *)arg5 ;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(id)initWithDevice:(id)arg0 arithmeticType:(int)arg1 ;
-(id)privateResultStateForPrimaryImage:(id)arg0 secondaryImage:(id)arg1 sourceStates:(id)arg2 destinationImage:(id)arg3 commandBuffer:(id)arg4 isTemporary:(BOOL)arg5 ;
-(id)resultStateForPrimaryImage:(id)arg0 secondaryImage:(id)arg1 sourceStates:(id)arg2 destinationImage:(id)arg3 ;
-(id)temporaryResultStateForCommandBuffer:(id)arg0 primaryImage:(id)arg1 secondaryImage:(id)arg2 sourceStates:(id)arg3 destinationImage:(id)arg4 ;
-(void)encodeBatchToCommandBuffer:(id)arg0 primaryImages:(id)arg1 secondaryImages:(id)arg2 destinationStates:(id)arg3 destinationImages:(id)arg4 ;
-(void)encodeToCommandBuffer:(id)arg0 primaryImage:(id)arg1 secondaryImage:(id)arg2 destinationState:(id)arg3 destinationImage:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setPrimaryStrideInPixelsX:(NSUInteger)arg0 ;
-(void)setPrimaryStrideInPixelsY:(NSUInteger)arg0 ;
-(void)setSecondaryStrideInPixelsX:(NSUInteger)arg0 ;
-(void)setSecondaryStrideInPixelsY:(NSUInteger)arg0 ;


@end


#endif