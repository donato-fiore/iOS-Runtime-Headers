// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MLPROGRAMCONTAINER_H
#define MLPROGRAMCONTAINER_H



#import "MLNeuralNetworkContainer.h"

@interface MLProgramContainer : MLNeuralNetworkContainer



+(?)loadProgramFromCompiledArchiveerror;
+(BOOL)populateInputNameToShapeMap:(*void)arg0 fromContainer:(id)arg1 forFunction:(*void)arg2 program:(*void)arg3 withValidation:(BOOL)arg4 error:(*id)arg5 ;
+(id)containerFromCompiledArchive:(*void)arg0 modelVersionInfo:(id)arg1 compilerVersionInfo:(id)arg2 configuration:(id)arg3 error:(*id)arg4 ;
+(struct unique_ptr<MIL::IRProgram, std::default_delete<MIL::IRProgram>> )loadProgramAtURL:(id)arg0 error:(*id)arg1 ;
+(void)updateOptionalDefaultValueParametersInContainer:(id)arg0 usingProgram:(*void)arg1 ;


@end


#endif