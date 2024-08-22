// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSMATRIXSOFTMAX_H
#define MPSMATRIXSOFTMAX_H



#import "MPSMatrixUnaryKernel.h"

@interface MPSMatrixSoftMax : MPSMatrixUnaryKernel

@property (nonatomic) NSUInteger sourceColumns; // ivar: _sourceColumns
@property (nonatomic) NSUInteger sourceRows; // ivar: _sourceRows


+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(void)encodeToCommandBuffer:(id)arg0 inputMatrix:(id)arg1 resultMatrix:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif