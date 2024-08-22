// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSGRAPHWHILEOP_H
#define MPSGRAPHWHILEOP_H

@class NSArray;


#import "MPSGraphOperation.h"
#import "MPSGraphTensor.h"

@interface MPSGraphWhileOp : MPSGraphOperation {
    id *_beforeBlock;
    id *_afterBlock;
    NSArray *_initInputTensors;
    NSArray *_beforeResult;
    NSArray *_afterResult;
    NSArray *_beforeBlockArguments;
    NSArray *_afterBlockArguments;
    MPSGraphTensor *_predicateTensor;
    MPSGraphTensor *_itersCountTensor;
    unique_ptr<AutodiffOpData, std::default_delete<AutodiffOpData>> _opData;
}




-(*void)makeMLIROpWithBuilder:(*void)arg0 symbolTable:(*void)arg1 inputValues:(*void)arg2 opInitialization:(BOOL)arg3 name:(id)arg4 ;
-(BOOL)recurseFromBlock:(id)arg0 onEscaped:(id)arg1 withAutodiff:(*void)arg2 ;
-(BOOL)recurseOnBlocksFromOutput:(id)arg0 withAutodiff:(*void)arg1 ;
-(BOOL)recurseOutFromBlockInput:(id)arg0 withAutodiff:(*void)arg1 ;
// -(id)initWithGraph:(id)arg0 inputTensors:(id)arg1 controlDependencies:(id)arg2 beforeBlock:(id)arg3 afterBlock:(unk)arg4 name:(id)arg5  ;
-(void)partialDerivateForCFOpWithAutodiff:(*void)arg0 ;


@end


#endif