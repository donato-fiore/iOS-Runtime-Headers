// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSCNNCONVOLUTIONTRANSPOSEGRADIENTSTATE_H
#define MPSCNNCONVOLUTIONTRANSPOSEGRADIENTSTATE_H



#import "MPSCNNConvolutionGradientState.h"
#import "MPSCNNConvolutionTranspose.h"

@interface MPSCNNConvolutionTransposeGradientState : MPSCNNConvolutionGradientState {
    NSInteger _kernelOffsetX;
    NSInteger _kernelOffsetY;
}


@property (readonly, nonatomic) MPSCNNConvolutionGradientState *convolutionGradientState; // ivar: _convolutionGradientState
@property (readonly, retain, nonatomic) MPSCNNConvolutionTranspose *convolutionTranspose; // ivar: _convolutionTranspose


+(id)temporaryStateWithCommandBuffer:(id)arg0 resourceList:(id)arg1 convolutionTranspose:(id)arg2 convolutionGradientState:(id)arg3 ;
+(id)temporaryStateWithCommandBuffer:(id)arg0 resourceList:(id)arg1 convolutionTranspose:(id)arg2 convolutionGradientState:(id)arg3 weightsLayout:(unsigned int)arg4 ;
-(NSUInteger)sourceHeight;
-(NSUInteger)sourceWidth;
-(id)convolution;
-(id)debugDescription;
-(id)destinationImageDescriptorForSourceImages:(id)arg0 sourceStates:(id)arg1 forKernel:(id)arg2 suggestedDescriptor:(id)arg3 ;
-(id)initWithDevice:(id)arg0 resourceList:(id)arg1 convolution:(id)arg2 ;
-(id)initWithDevice:(id)arg0 resourceList:(id)arg1 convolution:(id)arg2 weightsLayout:(unsigned int)arg3 ;
-(id)initWithDevice:(id)arg0 resourceList:(id)arg1 convolutionTranspose:(id)arg2 convolutionGradientState:(id)arg3 ;
-(id)initWithDevice:(id)arg0 resourceList:(id)arg1 convolutionTranspose:(id)arg2 convolutionGradientState:(id)arg3 weightsLayout:(unsigned int)arg4 ;
-(id)initWithResource:(id)arg0 ;
-(id)initWithResource:(id)arg0 weightsLayout:(unsigned int)arg1 ;
-(void)dealloc;


@end


#endif