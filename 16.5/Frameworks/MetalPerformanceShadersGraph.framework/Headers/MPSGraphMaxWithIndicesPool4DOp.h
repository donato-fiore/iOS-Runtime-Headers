// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSGRAPHMAXWITHINDICESPOOL4DOP_H
#define MPSGRAPHMAXWITHINDICESPOOL4DOP_H



#import "MPSGraphPooling4DBaseOp.h"

@interface MPSGraphMaxWithIndicesPool4DOp : MPSGraphPooling4DBaseOp



-(*void)makeMLIROpWithBuilder:(*void)arg0 symbolTable:(*void)arg1 inputValues:(*void)arg2 opInitialization:(BOOL)arg3 name:(id)arg4 ;
-(id)partialDerivativesForInputTensors:(id)arg0 incomingGradients:(id)arg1 name:(id)arg2 ;


@end


#endif