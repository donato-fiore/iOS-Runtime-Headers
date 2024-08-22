// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MLPROGRAMENGINE_H
#define MLPROGRAMENGINE_H



#import "MLNeuralNetworkEngine.h"

@interface MLProgramEngine : MLNeuralNetworkEngine



+(Class)containerClass;
+(int)gpuEngine;
+(int)gpuPrecision;


@end


#endif