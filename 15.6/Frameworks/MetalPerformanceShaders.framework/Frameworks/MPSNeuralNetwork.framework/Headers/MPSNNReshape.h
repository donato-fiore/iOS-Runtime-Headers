// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPSNNRESHAPE_H
#define MPSNNRESHAPE_H



#import "MPSCNNKernel.h"

@interface MPSNNReshape : MPSCNNKernel {
    NSUInteger _reshapedWidth;
    NSUInteger _reshapedHeight;
    NSUInteger _reshapedFeatureChannels;
}




+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)debugDescription;
-(id)destinationImageDescriptorForSourceImages:(id)arg0 sourceStates:(id)arg1 paddingMethod:(NSUInteger)arg2 sourceOffset:(struct ? *)arg3 ;
-(id)encodeBatchToCommandBuffer:(id)arg0 sourceImages:(id)arg1 destinationStates:(*id)arg2 destinationStateIsTemporary:(BOOL)arg3 reshapedWidth:(NSUInteger)arg4 reshapedHeight:(NSUInteger)arg5 reshapedFeatureChannels:(NSUInteger)arg6 ;
-(id)encodeBatchToCommandBuffer:(id)arg0 sourceImages:(id)arg1 reshapedWidth:(NSUInteger)arg2 reshapedHeight:(NSUInteger)arg3 reshapedFeatureChannels:(NSUInteger)arg4 ;
-(id)encodeToCommandBuffer:(id)arg0 sourceImage:(id)arg1 destinationState:(*id)arg2 destinationStateIsTemporary:(BOOL)arg3 reshapedWidth:(NSUInteger)arg4 reshapedHeight:(NSUInteger)arg5 reshapedFeatureChannels:(NSUInteger)arg6 ;
-(id)encodeToCommandBuffer:(id)arg0 sourceImage:(id)arg1 reshapedWidth:(NSUInteger)arg2 reshapedHeight:(NSUInteger)arg3 reshapedFeatureChannels:(NSUInteger)arg4 ;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif