// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSNDARRAY_H
#define MPSNDARRAY_H

@class NSString;
@protocol MTLDevice;

#import <Foundation/Foundation.h>

#import "MPSNDArray.h"

@interface MPSNDArray : NSObject {
    ? _dimensionLengths;
    ? _sliceOffsets;
    ? _sliceLengths;
    ? _dimensionOrder;
    *void _device;
    MPSAutoBuffer _buffer;
    *__IOSurface _iosurface;
    NSUInteger _offset;
    NSUInteger _rowBytes;
    *void _library;
    BOOL _isTemporary;
}


@property (readonly, nonatomic) unsigned int dataType; // ivar: _dataType
@property (readonly, nonatomic) NSUInteger dataTypeSize;
@property (readonly, retain, nonatomic) NSObject<MTLDevice> *device;
@property (copy) NSString *label; // ivar: _label
@property (readonly, nonatomic) NSUInteger numberOfDimensions; // ivar: _numberOfDimensions
@property (readonly, retain, nonatomic) MPSNDArray *parent; // ivar: _parent


+(id)defaultAllocator;
+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(NSUInteger)lengthOfDimension:(NSUInteger)arg0 ;
-(NSUInteger)offset;
-(NSUInteger)resourceSize;
-(id)arrayViewWithCommandBuffer:(id)arg0 computeEncoder:(id)arg1 descriptor:(id)arg2 destinationArray:(id)arg3 aliasing:(NSUInteger)arg4 ;
-(id)arrayViewWithCommandBuffer:(id)arg0 descriptor:(id)arg1 aliasing:(NSUInteger)arg2 ;
-(id)buffer;
-(id)checkNDArray:(*float)arg0 nativeUlps:(float)arg1 absoluteErr:(float)arg2 ;
-(id)checkNDArray:(*float)arg0 nativeUlps:(float)arg1 absoluteErr:(float)arg2 PSNR:(float)arg3 ;
-(id)dataWithCommandBuffer:(id)arg0 ;
-(id)debugDescription;
-(id)descriptor;
-(id)init;
-(id)initWithBuffer:(id)arg0 descriptor:(id)arg1 ;
-(id)initWithDevice:(id)arg0 descriptor:(id)arg1 ;
-(id)initWithDevice:(id)arg0 matrix:(id)arg1 ;
-(id)initWithDevice:(id)arg0 scalar:(CGFloat)arg1 ;
-(id)makeStrideBytes;
-(id)makeStrideElements;
-(id)matrixWithCommandBuffer:(id)arg0 descriptor:(id)arg1 aliasing:(NSUInteger)arg2 ;
-(id)safeArrayViewWithCommandBuffer:(id)arg0 computeEncoder:(id)arg1 descriptor:(id)arg2 aliasing:(NSUInteger)arg3 ;
-(id)safeArrayViewWithCommandBuffer:(id)arg0 descriptor:(id)arg1 aliasing:(NSUInteger)arg2 ;
-(void)arrayViewWithCommandBuffer:(id)arg0 descriptor:(id)arg1 destinationArray:(id)arg2 aliasing:(NSUInteger)arg3 ;
-(void)copyDataWithCommandBuffer:(id)arg0 images:(id)arg1 offset:(struct MPSImageCoordinate )arg2 imageToArray:(BOOL)arg3 ;
-(void)dealloc;
-(void)encodeCopyWithCommandBuffer:(id)arg0 computeEncoder:(id)arg1 toBuffer:(id)arg2 destinationDataType:(unsigned int)arg3 destinationOffsetBytes:(NSUInteger)arg4 destinationStrideBytes:(*NSInteger)arg5 ;
-(void)encodeReshapedBatchWithCommandBuffer:(id)arg0 toBuffer:(id)arg1 destinationDataType:(unsigned int)arg2 destinationOffsetBytes:(NSUInteger)arg3 destinationRowBytes:(NSUInteger)arg4 destinationColumns:(NSUInteger)arg5 destinationRows:(NSUInteger)arg6 ;
-(void)encodeReshapedMatrixWithCommandBuffer:(id)arg0 computeEncoder:(id)arg1 toBuffer:(id)arg2 destinationDataType:(unsigned int)arg3 destinationOffsetBytes:(NSUInteger)arg4 destinationRowBytes:(NSUInteger)arg5 destinationColumns:(NSUInteger)arg6 destinationRows:(NSUInteger)arg7 ;
-(void)exportDataWithCommandBuffer:(id)arg0 computeEncoder:(id)arg1 toBuffer:(id)arg2 destinationDataType:(unsigned int)arg3 offset:(NSUInteger)arg4 rowStrides:(*NSInteger)arg5 lengths:(*NSUInteger)arg6 numLengths:(NSUInteger)arg7 flatteningLevel:(NSUInteger)arg8 ;
-(void)exportDataWithCommandBuffer:(id)arg0 toBuffer:(id)arg1 destinationDataType:(unsigned int)arg2 offset:(NSUInteger)arg3 rowStrides:(*NSInteger)arg4 ;
-(void)exportDataWithCommandBuffer:(id)arg0 toBuffer:(id)arg1 destinationDataType:(unsigned int)arg2 offset:(NSUInteger)arg3 rowStrides:(*NSInteger)arg4 lengths:(*NSUInteger)arg5 numLengths:(NSUInteger)arg6 flatteningLevel:(NSUInteger)arg7 ;
-(void)exportDataWithCommandBuffer:(id)arg0 toImages:(id)arg1 offset:(struct MPSImageCoordinate )arg2 ;
-(void)importDataWithCommandBuffer:(id)arg0 fromBuffer:(id)arg1 sourceDataType:(unsigned int)arg2 offset:(NSUInteger)arg3 rowStrides:(*NSInteger)arg4 ;
-(void)importDataWithCommandBuffer:(id)arg0 fromImages:(id)arg1 offset:(struct MPSImageCoordinate )arg2 ;
-(void)makeStrideBytesInArray:(*NSInteger)arg0 ;
-(void)printNDArray;
-(void)printNDArrayToFile:(struct __sFILE *)arg0 ;
-(void)readBytes:(*void)arg0 strideBytes:(*NSInteger)arg1 ;
-(void)synchronizeOnCommandBuffer:(id)arg0 ;
-(void)writeBytes:(*void)arg0 strideBytes:(*NSInteger)arg1 ;


@end


#endif