// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MLNEURALNETWORKCOMPILER_H
#define MLNEURALNETWORKCOMPILER_H

@protocol MLSpecificationCompiler;


#import "MLModel.h"

@interface MLNeuralNetworkCompiler : MLModel <MLSpecificationCompiler>





+(BOOL)collectNNModelDetailsFromArchive:(*void)arg0 spec:(*void)arg1 error:(*id)arg2 ;
+(id)compileSpecification:(*void)arg0 toArchive:(*void)arg1 options:(id)arg2 error:(*id)arg3 ;
+(id)compiledVersionForSpecification:(*void)arg0 options:(id)arg1 error:(*id)arg2 ;


@end


#endif