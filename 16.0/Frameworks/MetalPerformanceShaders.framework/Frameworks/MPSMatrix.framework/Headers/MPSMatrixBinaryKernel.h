// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSMATRIXBINARYKERNEL_H
#define MPSMATRIXBINARYKERNEL_H

@class MPSKernel;



@interface MPSMatrixBinaryKernel : MPSKernel

@property (nonatomic) NSUInteger batchSize; // ivar: _batchSize
@property (nonatomic) NSUInteger batchStart; // ivar: _batchStart
@property (nonatomic) ? primarySourceMatrixOrigin; // ivar: _primarySourceMatrixOrigin
@property (nonatomic) ? resultMatrixOrigin; // ivar: _resultMatrixOrigin
@property (nonatomic) ? secondarySourceMatrixOrigin; // ivar: _secondarySourceMatrixOrigin


-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif