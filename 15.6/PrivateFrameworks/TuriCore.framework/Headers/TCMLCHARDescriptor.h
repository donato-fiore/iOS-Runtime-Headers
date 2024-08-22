// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TCMLCHARDESCRIPTOR_H
#define TCMLCHARDESCRIPTOR_H


#import <Foundation/Foundation.h>


@interface TCMLCHARDescriptor : NSObject



+(id)defineGraphConvDescriptor:(id)arg0 inputChannels:(NSUInteger)arg1 outputChannels:(NSUInteger)arg2 numKeypoints:(NSUInteger)arg3 temporalKernelSize:(NSUInteger)arg4 stride:(NSUInteger)arg5 dropout:(float)arg6 ;
+(id)defineResidualDescriptor:(id)arg0 inputChannels:(NSUInteger)arg1 outputChannels:(NSUInteger)arg2 stride:(NSUInteger)arg3 ;
+(id)defineSTGCNActionDescriptor:(id)arg0 inputChannels:(NSUInteger)arg1 batchSize:(NSUInteger)arg2 numFrames:(NSUInteger)arg3 numKeypoints:(NSUInteger)arg4 numClass:(NSUInteger)arg5 dropout:(float)arg6 ;
+(id)defineSTGCNDescriptor:(id)arg0 inputChannels:(NSUInteger)arg1 outputChannels:(NSUInteger)arg2 numKeypoints:(NSUInteger)arg3 temporalKernelSize:(NSUInteger)arg4 stride:(NSUInteger)arg5 dropout:(float)arg6 residual:(BOOL)arg7 ;
+(id)defineTemporalConvolutionalNetworkDescriptor:(id)arg0 channels:(NSUInteger)arg1 temporalKernelSize:(NSUInteger)arg2 stride:(NSUInteger)arg3 dropout:(float)arg4 ;


@end


#endif