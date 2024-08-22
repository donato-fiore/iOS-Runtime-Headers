// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSGRAPHDEPTHWISECONVOLUTION2DBASEOP_H
#define MPSGRAPHDEPTHWISECONVOLUTION2DBASEOP_H



#import "MPSGraphOperation.h"
#import "MPSGraphDepthwiseConvolution2DOpDescriptor.h"

@interface MPSGraphDepthwiseConvolution2DBaseOp : MPSGraphOperation {
    MPSGraphDepthwiseConvolution2DOpDescriptor *_desc;
}




-(id)initWithGraph:(id)arg0 inputTensors:(id)arg1 controlDependencies:(id)arg2 descriptor:(id)arg3 name:(id)arg4 ;


@end


#endif