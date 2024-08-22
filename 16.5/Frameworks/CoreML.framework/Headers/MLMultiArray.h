// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MLMULTIARRAY_H
#define MLMULTIARRAY_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MLMultiArray : NSObject <NSSecureCoding>

 {
    unique_ptr<StorageManager, std::default_delete<StorageManager>> _storageManager;
}


@property (readonly, nonatomic) *void bytes;
@property (readonly, nonatomic, getter=isContiguous) BOOL contiguous;
@property (readonly, nonatomic) NSInteger count;
@property (readonly, nonatomic) *void dataPointer;
@property (readonly, nonatomic) NSInteger dataType;
@property (readonly, nonatomic) *void mutableBytes;
@property (readonly, nonatomic) NSUInteger numberOfBytesPerElement;
@property (readonly, nonatomic) *__CVBuffer pixelBuffer;
@property (readonly, nonatomic) NSArray *shape; // ivar: _shape
@property (readonly, nonatomic) NSArray *strides;


+(BOOL)getShapeOfArrayOfSameLengthArrays:(id)arg0 numberOfRows:(*NSUInteger)arg1 numberOfColumns:(*NSUInteger)arg2 error:(*id)arg3 ;
+(BOOL)supportsSecureCoding;
+(BOOL)validateMultiArrays:(id)arg0 forConcatenatingAlongAxis:(NSInteger)arg1 normalizedAxis:(*NSUInteger)arg2 reason:(*id)arg3 ;
+(BOOL)validateNestedArray:(id)arg0 error:(*id)arg1 ;
+(id)_shapeOfNestedArray:(id)arg0 error:(*id)arg1 ;
+(id)doubleMatrixWithValues:(id)arg0 error:(*id)arg1 ;
+(id)doubleMultiArrayWithCopyOfMultiArray:(id)arg0 ;
+(id)doubleMultiArrayWithShape:(id)arg0 valueArray:(id)arg1 error:(*id)arg2 ;
+(id)doubleVectorWithValues:(id)arg0 ;
+(id)float32MatrixWithValues:(id)arg0 error:(*id)arg1 ;
+(id)multiArrayByConcatenatingMultiArrays:(id)arg0 alongAxis:(NSInteger)arg1 dataType:(NSInteger)arg2 ;
+(id)multiArrayOwningBufferObjectOfPort:(struct e5rt_io_port *)arg0 error:(*id)arg1 ;
+(id)stringForDataType:(NSInteger)arg0 ;
+(int)cppStorageOrder:(NSInteger)arg0 ;
+(struct __CVBuffer *)pixelBufferBGRA8FromMultiArrayCHW:(id)arg0 channelOrderIsBGR:(BOOL)arg1 error:(*id)arg2 ;
+(struct __CVBuffer *)pixelBufferGray16HalfFromMultiArrayHW:(id)arg0 error:(*id)arg1 ;
+(struct __CVBuffer *)pixelBufferGray8FromMultiArrayHW:(id)arg0 error:(*id)arg1 ;
-(*CGFloat)doublePointer;
-(*float)float32Pointer;
-(*void)multiArrayBuffer;
-(BOOL)copyIntoMultiArray:(id)arg0 error:(*id)arg1 ;
-(BOOL)fillWithNumber:(id)arg0 ;
-(BOOL)isContiguousInOrder:(NSInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToMultiArray:(id)arg0 ;
-(BOOL)renderTo32BGRAPixelBuffer:(struct __CVBuffer *)arg0 channelOrderIsBGR:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)renderToCVPixelBuffer:(struct __CVBuffer *)arg0 channelOrderIsBGR:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)renderToOneComponent16HalfPixelBuffer:(struct __CVBuffer *)arg0 error:(*id)arg1 ;
-(BOOL)renderToOneComponent8PixelBuffer:(struct __CVBuffer *)arg0 error:(*id)arg1 ;
-(BOOL)setRangeWithRawData:(id)arg0 destIndex:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)vectorizeIntoMultiArray:(id)arg0 storageOrder:(NSInteger)arg1 error:(*id)arg2 ;
-(NSUInteger)offsetForKeyedSubscript:(id)arg0 ;
-(id)debugQuickLookObject;
-(id)description;
-(id)init;
-(id)initWithArray:(id)arg0 dataType:(NSInteger)arg1 ;
// -(id)initWithBytesNoCopy:(*void)arg0 shape:(id)arg1 dataType:(NSInteger)arg2 strides:(id)arg3 deallocator:(id)arg4 mutableShapedBufferProvider:(unk)arg5 error:(id)arg6  ;
-(id)initWithBytesNoCopy:(*void)arg0 shape:(id)arg1 dataType:(NSInteger)arg2 strides:(id)arg3 mutableShapedBufferProvider:(id)arg4 ;
-(id)initWithCoder:(id)arg0 ;
// -(id)initWithDataPointer:(*void)arg0 shape:(id)arg1 dataType:(NSInteger)arg2 strides:(id)arg3 deallocator:(id)arg4 error:(unk)arg5  ;
-(id)initWithMultiArrayBuffer:(struct shared_ptr<CoreML::MultiArrayBuffer> )arg0 ;
-(id)initWithPixelBuffer:(struct __CVBuffer *)arg0 shape:(id)arg1 ;
-(id)initWithScalars:(id)arg0 shape:(id)arg1 dataType:(NSInteger)arg2 ;
-(id)initWithShape:(id)arg0 dataType:(NSInteger)arg1 error:(*id)arg2 ;
-(id)initWithShape:(id)arg0 dataType:(NSInteger)arg1 storageOrder:(NSInteger)arg2 bufferAlignment:(NSUInteger)arg3 ;
-(id)initWithShape:(id)arg0 dataType:(NSInteger)arg1 storageOrder:(NSInteger)arg2 error:(*id)arg3 ;
-(id)multiArrayViewExpandingDimensionsAtAxis:(NSInteger)arg0 ;
-(id)numberArray;
-(id)numberAtOffset:(NSUInteger)arg0 ;
-(id)objectAtIndexedSubscript:(NSInteger)arg0 ;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(id)sliceAtOrigin:(id)arg0 shape:(id)arg1 squeeze:(BOOL)arg2 error:(*id)arg3 ;
-(id)squeeze;
-(id)squeezeDimensions:(id)arg0 error:(*id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)getBytesWithHandler:(id)arg0 ;
-(void)getContiguousFirstMajorFloat32BufferWithHandler:(id)arg0 ;
-(void)getMutableBytesWithHandler:(id)arg0 ;
-(void)setNumber:(id)arg0 atOffset:(NSUInteger)arg1 ;
-(void)setObject:(id)arg0 atIndexedSubscript:(NSInteger)arg1 ;
-(void)setObject:(id)arg0 forKeyedSubscript:(id)arg1 ;


@end


#endif