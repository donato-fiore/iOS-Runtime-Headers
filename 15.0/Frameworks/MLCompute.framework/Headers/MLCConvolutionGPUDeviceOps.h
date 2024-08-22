// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MLCCONVOLUTIONGPUDEVICEOPS_H
#define MLCCONVOLUTIONGPUDEVICEOPS_H

@class NSMutableArray;


#import "MLCGPUDeviceOps.h"

@interface MLCConvolutionGPUDeviceOps : MLCGPUDeviceOps

@property (nonatomic) NSUInteger biasChannelCount; // ivar: _biasChannelCount
@property (retain, nonatomic) id *convolutionMultiGPUChildOps; // ivar: _convolutionMultiGPUChildOps
@property (nonatomic) BOOL convolutionTranspose; // ivar: _convolutionTranspose
@property (nonatomic) BOOL depthWiseConvolution; // ivar: _depthWiseConvolution
@property (retain, nonatomic) NSMutableArray *descriptorsForMPSGraph; // ivar: _descriptorsForMPSGraph
@property (retain, nonatomic) id *forwardMPSGraph; // ivar: _forwardMPSGraph
@property (retain, nonatomic) id *gradientMPSGraph; // ivar: _gradientMPSGraph
@property (nonatomic) BOOL hasBias; // ivar: _hasBias
@property (retain, nonatomic) NSMutableArray *mpsGraphTensors; // ivar: _mpsGraphTensors
@property (retain, nonatomic) id *transposeDeviceOps; // ivar: _transposeDeviceOps
@property (retain, nonatomic) NSMutableArray *transposedTensors; // ivar: _transposedTensors


+(id)deviceOpsWithForwardMPSGraph:(id)arg0 gradientMPSGraph:(id)arg1 ;
-(id)initWithForwardMPSGraph:(id)arg0 gradientMPSGraph:(id)arg1 ;


@end


#endif