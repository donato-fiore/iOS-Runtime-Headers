// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MLNEURALNETWORKV1CONTAINER_H
#define MLNEURALNETWORKV1CONTAINER_H



#import "MLNeuralNetworkContainer.h"

@interface MLNeuralNetworkV1Container : MLNeuralNetworkContainer



+(BOOL)setShapesFromNetwork:(id)arg0 arc:(*void)arg1 shapePath:(*void)arg2 error:(*id)arg3 ;
+(id)containerFromCompiledArchive:(*void)arg0 modelVersionInfo:(id)arg1 compilerVersionInfo:(id)arg2 configuration:(id)arg3 error:(*id)arg4 ;


@end


#endif