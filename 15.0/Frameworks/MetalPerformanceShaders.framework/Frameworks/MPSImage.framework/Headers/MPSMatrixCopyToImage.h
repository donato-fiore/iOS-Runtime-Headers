// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSMATRIXCOPYTOIMAGE_H
#define MPSMATRIXCOPYTOIMAGE_H

@class MPSKernel;



@interface MPSMatrixCopyToImage : MPSKernel

@property (readonly, nonatomic) NSUInteger dataLayout; // ivar: _dataLayout
@property (nonatomic) NSUInteger sourceMatrixBatchIndex; // ivar: _sourceMatrixBatchIndex
@property (nonatomic) ? sourceMatrixOrigin; // ivar: _sourceMatrixOrigin


+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(id)initWithDevice:(id)arg0 dataLayout:(NSUInteger)arg1 ;
-(void)encodeBatchToCommandBuffer:(id)arg0 encoder:(id)arg1 sourceMatrix:(id)arg2 destinationImages:(id)arg3 ;
-(void)encodeBatchToCommandBuffer:(id)arg0 sourceMatrix:(id)arg1 destinationImages:(id)arg2 ;
-(void)encodeBatchToCommandEncoder:(id)arg0 commandBuffer:(id)arg1 sourceMatrix:(id)arg2 destinationImages:(id)arg3 ;
-(void)encodeToCommandBuffer:(id)arg0 sourceMatrix:(id)arg1 destinationImage:(id)arg2 ;
-(void)encodeToCommandEncoder:(id)arg0 commandBuffer:(id)arg1 sourceMatrix:(id)arg2 destinationImage:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif