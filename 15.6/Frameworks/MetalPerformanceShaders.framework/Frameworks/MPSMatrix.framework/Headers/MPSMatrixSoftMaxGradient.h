// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPSMATRIXSOFTMAXGRADIENT_H
#define MPSMATRIXSOFTMAXGRADIENT_H



#import "MPSMatrixBinaryKernel.h"

@interface MPSMatrixSoftMaxGradient : MPSMatrixBinaryKernel

@property (nonatomic) NSUInteger sourceColumns; // ivar: _sourceColumns
@property (nonatomic) NSUInteger sourceRows; // ivar: _sourceRows


+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(void)encodeToCommandBuffer:(id)arg0 gradientMatrix:(id)arg1 forwardOutputMatrix:(id)arg2 resultMatrix:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif