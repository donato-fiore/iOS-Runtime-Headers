// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MLPROGRAMCONTAINER_H
#define MLPROGRAMCONTAINER_H



#import "MLNeuralNetworkContainer.h"

@interface MLProgramContainer : MLNeuralNetworkContainer



+(BOOL)extractAndValidateShapesInProgram:(*void)arg0 container:(id)arg1 error:(*id)arg2 ;
+(id)containerFromCompiledArchive:(*void)arg0 modelVersionInfo:(id)arg1 compilerVersionInfo:(id)arg2 configuration:(id)arg3 error:(*id)arg4 ;
+(void)extractOptionalDefaultValueParams:(*void)arg0 container:(id)arg1 ;


@end


#endif