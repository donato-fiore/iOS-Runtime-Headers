// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MLCTENSORDESCRIPTOR_H
#define MLCTENSORDESCRIPTOR_H

@class NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MLCTensorDescriptor : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSArray *batchSizePerSequenceStep; // ivar: _batchSizePerSequenceStep
@property (readonly, nonatomic) int dataType; // ivar: _dataType
@property (readonly, nonatomic) NSUInteger dimensionCount;
@property (readonly, nonatomic) NSUInteger fanIn; // ivar: _fanIn
@property (readonly, nonatomic) NSUInteger fanOut; // ivar: _fanOut
@property (readonly, nonatomic) BOOL isFloatingPoint;
@property (readonly, copy, nonatomic) NSArray *sequenceLengths; // ivar: _sequenceLengths
@property (readonly, copy, nonatomic) NSArray *shape; // ivar: _shape
@property (readonly, nonatomic) BOOL sortedSequences; // ivar: _sortedSequences
@property (copy, nonatomic) NSArray *stride; // ivar: _stride
@property (nonatomic) NSUInteger tensorAllocationSizeInBytes; // ivar: _tensorAllocationSizeInBytes
@property (readonly, nonatomic) BOOL variableLengthSequences; // ivar: _variableLengthSequences


+(NSUInteger)elementByteCount:(int)arg0 ;
+(NSUInteger)maxTensorDimensions;
+(id)convolutionBiasesDescriptorWithFeatureChannelCount:(NSUInteger)arg0 dataType:(int)arg1 ;
+(id)convolutionWeightsDescriptorWithInputFeatureChannelCount:(NSUInteger)arg0 outputFeatureChannelCount:(NSUInteger)arg1 dataType:(int)arg2 ;
+(id)convolutionWeightsDescriptorWithWidth:(NSUInteger)arg0 height:(NSUInteger)arg1 inputFeatureChannelCount:(NSUInteger)arg2 outputFeatureChannelCount:(NSUInteger)arg3 dataType:(int)arg4 ;
+(id)descriptorWithShape:(id)arg0 dataType:(int)arg1 ;
+(id)descriptorWithShape:(id)arg0 sequenceLengths:(id)arg1 sortedSequences:(BOOL)arg2 dataType:(int)arg3 ;
+(id)descriptorWithShape:(id)arg0 stride:(id)arg1 dataType:(int)arg2 ;
+(id)descriptorWithWidth:(NSUInteger)arg0 height:(NSUInteger)arg1 featureChannelCount:(NSUInteger)arg2 batchSize:(NSUInteger)arg3 ;
+(id)descriptorWithWidth:(NSUInteger)arg0 height:(NSUInteger)arg1 featureChannelCount:(NSUInteger)arg2 batchSize:(NSUInteger)arg3 dataType:(int)arg4 ;
+(id)descriptorWithWidth:(NSUInteger)arg0 height:(NSUInteger)arg1 featureChannels:(NSUInteger)arg2 batchSize:(NSUInteger)arg3 strideForWidth:(NSUInteger)arg4 strideForHeight:(NSUInteger)arg5 strideForBatch:(NSUInteger)arg6 dataType:(int)arg7 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)elementByteCount;
-(NSUInteger)elementCount;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initConvolutionWeightsDescriptorWithWidth:(NSUInteger)arg0 height:(NSUInteger)arg1 inputFeatureChannels:(NSUInteger)arg2 outputFeatureChannels:(NSUInteger)arg3 dataType:(int)arg4 ;
-(id)initNCHWTensorWithWidth:(NSUInteger)arg0 height:(NSUInteger)arg1 featureChannels:(NSUInteger)arg2 batchSize:(NSUInteger)arg3 strideForWidth:(NSUInteger)arg4 strideForHeight:(NSUInteger)arg5 strideForChannel:(NSUInteger)arg6 strideForBatch:(NSUInteger)arg7 fanIn:(NSUInteger)arg8 fanOut:(NSUInteger)arg9 dataType:(int)arg10 ;
-(id)initTensorWithShape:(id)arg0 stride:(id)arg1 fanIn:(NSUInteger)arg2 fanOut:(NSUInteger)arg3 dataType:(int)arg4 ;
-(id)initTensorWithShape:(id)arg0 stride:(id)arg1 sequenceLengths:(id)arg2 sortedSequences:(BOOL)arg3 fanIn:(NSUInteger)arg4 fanOut:(NSUInteger)arg5 dataType:(int)arg6 ;
-(id)newShapeWithCount:(NSUInteger)arg0 ;
-(void)updateStride:(id)arg0 tensorAllocationSize:(NSUInteger)arg1 ;


@end


#endif