// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MLNEURALNETWORKV1CONTAINER_H
#define MLNEURALNETWORKV1CONTAINER_H



#import "MLNeuralNetworkContainer.h"

@interface MLNeuralNetworkV1Container : MLNeuralNetworkContainer



+(id)containerFromCompiledArchive:(*void)arg0 modelVersionInfo:(id)arg1 compilerVersionInfo:(id)arg2 configuration:(id)arg3 error:(*id)arg4 ;
+(id)readerFromArchive:(*void)arg0 error:(*id)arg1 ;


@end


#endif