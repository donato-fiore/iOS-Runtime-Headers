// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSGRAPHOPERATION_H
#define MPSGRAPHOPERATION_H

@class NSMutableArray, NSArray, NSString, NSMutableDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "MPSGraphRegion.h"
#import "MPSGraphBlock.h"
#import "MPSGraph.h"

@interface MPSGraphOperation : NSObject <NSCopying>

 {
    NSMutableArray *_controlDependencies;
    MPSGraphRegion *_region;
    MPSGraphBlock *_parentBlock;
    *void _mlirOperation;
}


@property (readonly, nonatomic) NSArray *controlDependencies;
@property (readonly, weak, nonatomic) MPSGraph *graph; // ivar: _graph
@property (readonly, nonatomic) NSArray *inputTensors; // ivar: _inputTensors
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSArray *outputTensors; // ivar: _outputTensors
@property (nonatomic) BOOL pruneOp; // ivar: _pruneOp
@property (nonatomic) BOOL stopGradient; // ivar: _stopGradient
@property (retain, nonatomic) NSMutableDictionary *tensorNameDict; // ivar: _tensorNameDict


-(*void)makeMLIROpWithBuilder:(*void)arg0 symbolTable:(*void)arg1 inputValues:(*void)arg2 opInitialization:(BOOL)arg3 name:(id)arg4 ;
-(BOOL)recurseFromBlock:(id)arg0 onEscaped:(id)arg1 withAutodiff:(struct Autodiff *)arg2 ;
-(BOOL)recurseOnBlocksFromOutput:(id)arg0 withAutodiff:(struct Autodiff *)arg1 ;
-(BOOL)recurseOutFromBlockInput:(id)arg0 withAutodiff:(struct Autodiff *)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initInternal;
-(id)initWithGraph:(id)arg0 inputTensors:(id)arg1 controlDependencies:(id)arg2 name:(id)arg3 ;
-(id)initWithGraph:(id)arg0 inputTensors:(id)arg1 controlDependencies:(id)arg2 region:(id)arg3 name:(id)arg4 ;
-(id)partialDerivativeForInputTensor:(id)arg0 incomingGradient:(id)arg1 inputIndex:(NSUInteger)arg2 name:(id)arg3 ;
-(id)partialDerivativesForInputTensors:(id)arg0 incomingGradients:(id)arg1 name:(id)arg2 ;
-(void)partialDerivateForCFOpWithAutodiff:(struct Autodiff *)arg0 ;


@end


#endif