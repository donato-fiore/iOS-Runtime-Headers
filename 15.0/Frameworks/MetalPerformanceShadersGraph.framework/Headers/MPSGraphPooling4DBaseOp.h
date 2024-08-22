// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSGRAPHPOOLING4DBASEOP_H
#define MPSGRAPHPOOLING4DBASEOP_H



#import "MPSGraphOperation.h"
#import "MPSGraphPooling4DOpDescriptor.h"

@interface MPSGraphPooling4DBaseOp : MPSGraphOperation {
    MPSGraphPooling4DOpDescriptor *_desc;
}




-(id)initWithGraph:(id)arg0 inputTensors:(id)arg1 controlDependencies:(id)arg2 descriptor:(id)arg3 name:(id)arg4 ;


@end


#endif