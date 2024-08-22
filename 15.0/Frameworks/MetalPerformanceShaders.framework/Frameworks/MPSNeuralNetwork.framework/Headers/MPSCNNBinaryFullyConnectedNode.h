// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSCNNBINARYFULLYCONNECTEDNODE_H
#define MPSCNNBINARYFULLYCONNECTEDNODE_H



#import "MPSCNNBinaryConvolutionNode.h"

@interface MPSCNNBinaryFullyConnectedNode : MPSCNNBinaryConvolutionNode



+(id)nodeWithSource:(id)arg0 weights:(id)arg1 outputBiasTerms:(*float)arg2 outputScaleTerms:(*float)arg3 inputBiasTerms:(*float)arg4 inputScaleTerms:(*float)arg5 type:(NSUInteger)arg6 flags:(NSUInteger)arg7 ;
+(id)nodeWithSource:(id)arg0 weights:(id)arg1 scaleValue:(float)arg2 type:(NSUInteger)arg3 flags:(NSUInteger)arg4 ;
-(*void)newFilterNode;
-(id)initWithSource:(id)arg0 weights:(id)arg1 outputBiasTerms:(*float)arg2 outputScaleTerms:(*float)arg3 inputBiasTerms:(*float)arg4 inputScaleTerms:(*float)arg5 type:(NSUInteger)arg6 flags:(NSUInteger)arg7 ;
-(id)initWithSource:(id)arg0 weights:(id)arg1 scaleValue:(float)arg2 type:(NSUInteger)arg3 flags:(NSUInteger)arg4 ;


@end


#endif