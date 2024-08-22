// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSGRAPHVARIABLEOP_H
#define MPSGRAPHVARIABLEOP_H

@class NSArray;


#import "MPSGraphOperation.h"
#import "MPSGraphVariable.h"

@interface MPSGraphVariableOp : MPSGraphOperation

@property (readonly, nonatomic) unsigned int dataType; // ivar: _dataType
@property (readonly, nonatomic) NSArray *shape; // ivar: _shape
@property (readonly, nonatomic) MPSGraphVariable *variable; // ivar: _variable


-(*void)makeMLIROpWithBuilder:(*void)arg0 symbolTable:(*void)arg1 inputValues:(*void)arg2 opInitialization:(BOOL)arg3 name:(id)arg4 ;
-(id)initWithGraph:(id)arg0 shape:(id)arg1 dataType:(unsigned int)arg2 name:(id)arg3 ;
-(id)initWithGraph:(id)arg0 variableMPSNDArray:(id)arg1 name:(id)arg2 ;
-(id)mpsNDArrayWithDevice:(id)arg0 ;
-(id)partialDerivativeForInputTensor:(id)arg0 incomingGradient:(id)arg1 inputIndex:(NSUInteger)arg2 name:(id)arg3 ;


@end


#endif