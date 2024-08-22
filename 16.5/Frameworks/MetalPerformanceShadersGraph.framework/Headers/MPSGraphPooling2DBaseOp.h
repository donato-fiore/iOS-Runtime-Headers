// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSGRAPHPOOLING2DBASEOP_H
#define MPSGRAPHPOOLING2DBASEOP_H



#import "MPSGraphOperation.h"
#import "MPSGraphPooling2DOpDescriptor.h"

@interface MPSGraphPooling2DBaseOp : MPSGraphOperation {
    MPSGraphPooling2DOpDescriptor *_desc;
}




-(id)initWithGraph:(id)arg0 inputTensors:(id)arg1 controlDependencies:(id)arg2 descriptor:(id)arg3 name:(id)arg4 ;


@end


#endif