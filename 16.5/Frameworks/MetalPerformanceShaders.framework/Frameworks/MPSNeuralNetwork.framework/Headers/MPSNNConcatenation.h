// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSNNCONCATENATION_H
#define MPSNNCONCATENATION_H



#import "MPSCNNKernel.h"

@interface MPSNNConcatenation : MPSCNNKernel



+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(BOOL)isResultStateReusedAcrossBatch;
-(id)destinationImageDescriptorForSourceImages:(id)arg0 sourceStates:(id)arg1 paddingMethod:(NSUInteger)arg2 sourceOffset:(struct ? *)arg3 ;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(id)resultStateBatchForSourceImage:(id)arg0 sourceStates:(id)arg1 destinationImage:(id)arg2 ;
-(id)resultStateBatchForSourceImages:(id)arg0 sourceStates:(id)arg1 destinationImage:(id)arg2 ;
-(id)resultStateForSourceImage:(id)arg0 sourceStates:(id)arg1 destinationImage:(id)arg2 ;
-(id)resultStateForSourceImages:(id)arg0 sourceStates:(id)arg1 destinationImage:(id)arg2 ;
-(id)temporaryResultStateBatchForCommandBuffer:(id)arg0 sourceImage:(id)arg1 sourceStates:(id)arg2 destinationImage:(id)arg3 ;
-(id)temporaryResultStateBatchForCommandBuffer:(id)arg0 sourceImages:(id)arg1 sourceStates:(id)arg2 destinationImage:(id)arg3 ;
-(id)temporaryResultStateForCommandBuffer:(id)arg0 sourceImage:(id)arg1 sourceStates:(id)arg2 destinationImage:(id)arg3 ;
-(id)temporaryResultStateForCommandBuffer:(id)arg0 sourceImages:(id)arg1 sourceStates:(id)arg2 destinationImage:(id)arg3 ;
-(void)copyToGradientState:(id)arg0 sourceImage:(id)arg1 sourceStates:(id)arg2 destinationImage:(id)arg3 ;
-(void)copyToGradientState:(id)arg0 sourceImages:(id)arg1 sourceStates:(id)arg2 destinationImage:(id)arg3 ;
-(void)encodeBatchToCommandBuffer:(id)arg0 sourceImages:(id)arg1 destinationImage:(id)arg2 ;
-(void)encodeToCommandBuffer:(id)arg0 sourceImages:(id)arg1 destinationImage:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif