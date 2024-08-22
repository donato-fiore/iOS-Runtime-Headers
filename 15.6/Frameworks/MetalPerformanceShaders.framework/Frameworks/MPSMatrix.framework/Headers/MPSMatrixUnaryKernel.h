// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPSMATRIXUNARYKERNEL_H
#define MPSMATRIXUNARYKERNEL_H

@class MPSKernel;



@interface MPSMatrixUnaryKernel : MPSKernel

@property (nonatomic) NSUInteger batchSize; // ivar: _batchSize
@property (nonatomic) NSUInteger batchStart; // ivar: _batchStart
@property (nonatomic) ? resultMatrixOrigin; // ivar: _resultMatrixOrigin
@property (nonatomic) ? sourceMatrixOrigin; // ivar: _sourceMatrixOrigin


-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif