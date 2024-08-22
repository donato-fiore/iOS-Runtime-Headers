// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSGRAPHSTENCILOP_H
#define MPSGRAPHSTENCILOP_H



#import "MPSGraphOperation.h"
#import "MPSGraphStencilOpDescriptor.h"

@interface MPSGraphStencilOp : MPSGraphOperation {
    MPSGraphStencilOpDescriptor *_desc;
}




-(*void)makeMLIROpWithBuilder:(*void)arg0 symbolTable:(*void)arg1 inputValues:(*void)arg2 opInitialization:(BOOL)arg3 name:(id)arg4 ;
-(id)initWithGraph:(id)arg0 inputTensors:(id)arg1 controlDependencies:(id)arg2 descriptor:(id)arg3 name:(id)arg4 ;


@end


#endif