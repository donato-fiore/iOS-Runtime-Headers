// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPSGRAPHIFELSEOP_H
#define MPSGRAPHIFELSEOP_H

@class NSArray;


#import "MPSGraphOperation.h"

@interface MPSGraphIfElseOp : MPSGraphOperation {
    id *_trueBlock;
    id *_falseBlock;
    NSArray *_falseResults;
    NSArray *_trueResults;
    unique_ptr<AutodiffOpData, std::default_delete<AutodiffOpData>> _opData;
}




-(*void)makeMLIROpWithBuilder:(*void)arg0 symbolTable:(*void)arg1 inputValues:(*void)arg2 opInitialization:(BOOL)arg3 name:(id)arg4 ;
-(BOOL)recurseFromBlock:(id)arg0 onEscaped:(id)arg1 withAutodiff:(*void)arg2 ;
-(BOOL)recurseOnBlocksFromOutput:(id)arg0 withAutodiff:(*void)arg1 ;
// -(id)initWithGraph:(id)arg0 inputTensors:(id)arg1 controlDependencies:(id)arg2 trueBlock:(id)arg3 falseBlock:(unk)arg4 name:(id)arg5  ;
-(void)partialDerivateForCFOpWithAutodiff:(*void)arg0 ;


@end


#endif