// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPSGRAPHSPARSETENSOROP_H
#define MPSGRAPHSPARSETENSOROP_H

@class NSArray;


#import "MPSGraphOperation.h"

@interface MPSGraphSparseTensorOp : MPSGraphOperation

@property (readonly, nonatomic) unsigned int dataType; // ivar: _dataType
@property (readonly, nonatomic) NSArray *shape; // ivar: _shape
@property (readonly, nonatomic) NSUInteger sparseStorageType; // ivar: _sparseStorageType


-(*void)makeMLIROpWithBuilder:(*void)arg0 symbolTable:(*void)arg1 inputValues:(*void)arg2 opInitialization:(BOOL)arg3 name:(id)arg4 ;
-(id)initWithGraph:(id)arg0 sparseStorageType:(NSUInteger)arg1 inputTensors:(id)arg2 shape:(id)arg3 dataType:(unsigned int)arg4 name:(id)arg5 ;


@end


#endif