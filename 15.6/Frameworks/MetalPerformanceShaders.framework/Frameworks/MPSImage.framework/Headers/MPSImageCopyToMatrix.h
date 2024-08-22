// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPSIMAGECOPYTOMATRIX_H
#define MPSIMAGECOPYTOMATRIX_H

@class MPSKernel;



@interface MPSImageCopyToMatrix : MPSKernel

@property (readonly, nonatomic) NSUInteger dataLayout; // ivar: _dataLayout
@property (nonatomic) NSUInteger destinationMatrixBatchIndex; // ivar: _destinationMatrixBatchIndex
@property (nonatomic) ? destinationMatrixOrigin; // ivar: _destinationMatrixOrigin


+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(id)initWithDevice:(id)arg0 dataLayout:(NSUInteger)arg1 ;
-(void)encodeBatchToCommandBuffer:(id)arg0 encoder:(id)arg1 sourceImages:(id)arg2 destinationMatrix:(id)arg3 ;
-(void)encodeBatchToCommandBuffer:(id)arg0 sourceImages:(id)arg1 destinationMatrix:(id)arg2 ;
-(void)encodeBatchToCommandEncoder:(id)arg0 commandBuffer:(id)arg1 sourceImages:(id)arg2 destinationMatrix:(id)arg3 ;
-(void)encodeToCommandBuffer:(id)arg0 sourceImage:(id)arg1 destinationMatrix:(id)arg2 ;
-(void)encodeToCommandEncoder:(id)arg0 commandBuffer:(id)arg1 sourceImage:(id)arg2 destinationMatrix:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif