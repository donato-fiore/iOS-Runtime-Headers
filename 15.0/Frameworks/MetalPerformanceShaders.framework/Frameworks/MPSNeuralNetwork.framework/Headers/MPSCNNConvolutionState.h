// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSCNNCONVOLUTIONSTATE_H
#define MPSCNNCONVOLUTIONSTATE_H

@class MPSState, NSString;
@protocol MPSImageSizeEncodingState;



@interface MPSCNNConvolutionState : MPSState <MPSImageSizeEncodingState>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger kernelHeight; // ivar: _kernelHeight
@property (readonly, nonatomic) NSUInteger kernelWidth; // ivar: _kernelWidth
@property (readonly, nonatomic) NSUInteger sourceHeight; // ivar: _originalConvolutionSourceHeight
@property (readonly, nonatomic) ? sourceOffset; // ivar: _srcOffset
@property (readonly, nonatomic) NSUInteger sourceWidth; // ivar: _originalConvolutionSourceWidth
@property (readonly) Class superclass;


-(id)destinationImageDescriptorForSourceImages:(id)arg0 sourceStates:(id)arg1 forKernel:(id)arg2 suggestedDescriptor:(id)arg3 ;
-(id)initWithSourceWidth:(NSUInteger)arg0 sourceHeight:(NSUInteger)arg1 kernelWidth:(NSUInteger)arg2 kernelHeight:(NSUInteger)arg3 sourceOffset:(struct ? )arg4 ;


@end


#endif