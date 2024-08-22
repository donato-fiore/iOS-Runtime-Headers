// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSGRAPHCONVOLUTION2DBASEOP_H
#define MPSGRAPHCONVOLUTION2DBASEOP_H



#import "MPSGraphOperation.h"
#import "MPSGraphConvolution2DOpDescriptor.h"

@interface MPSGraphConvolution2DBaseOp : MPSGraphOperation {
    MPSGraphConvolution2DOpDescriptor *_desc;
}




-(id)initWithGraph:(id)arg0 inputTensors:(id)arg1 controlDependencies:(id)arg2 descriptor:(id)arg3 name:(id)arg4 ;


@end


#endif