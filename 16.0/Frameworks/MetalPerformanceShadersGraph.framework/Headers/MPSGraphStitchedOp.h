// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSGRAPHSTITCHEDOP_H
#define MPSGRAPHSTITCHEDOP_H

@class NSArray;


#import "MPSGraphOperation.h"
#import "MPSGraphTensor.h"

@interface MPSGraphStitchedOp : MPSGraphOperation {
    id *_stitchingBlock;
    MPSGraphTensor *_finalOutputTensorForStitchedRegion;
    NSArray *_opsAddedInStitchedRegion;
}




-(*void)makeMLIROpWithBuilder:(*void)arg0 symbolTable:(*void)arg1 inputValues:(*void)arg2 opInitialization:(BOOL)arg3 name:(id)arg4 ;
// -(id)initWithGraph:(id)arg0 withBlock:(id)arg1 inputTensors:(unk)arg2 controlDependencies:(id)arg3 name:(id)arg4  ;
-(void)recurseOperation:(id)arg0 builder:(*void)arg1 symbolTable:(*void)arg2 tensorToValueMap:(*void)arg3 operationsRecursed:(id)arg4 ;


@end


#endif