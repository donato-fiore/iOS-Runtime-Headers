// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSACCELERATIONSTRUCTURE_H
#define MPSACCELERATIONSTRUCTURE_H

@class MPSKernel, NSDictionary;
@protocol NSSecureCoding, NSCopying, MTLComputePipelineState;


#import "MPSAccelerationStructureGroup.h"

@interface MPSAccelerationStructure : MPSKernel <NSSecureCoding, NSCopying>

 {
    MPSAccelerationStructureGroup *_group;
    NSDictionary *_privateOptions;
    id<MTLComputePipelineState> *_boundingBoxCopyPipeline;
    NSUInteger _status;
    NSUInteger _usage;
}


@property (readonly, nonatomic) _MPSAxisAlignedBoundingBox boundingBox;
@property (readonly, nonatomic) MPSAccelerationStructureGroup *group;
@property (readonly, nonatomic) NSUInteger status;
@property (nonatomic) NSUInteger usage;


+(BOOL)supportsSecureCoding;
+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(BOOL)useResourceBuffer;
-(id)copyAccelerationStructureWithZone:(struct _NSZone *)arg0 device:(id)arg1 group:(id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 group:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithCoder:(id)arg0 group:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(id)initWithGroup:(id)arg0 ;
-(id)privateOptions;
-(id)statistics;
-(struct MPSBVHOptions )getBVHOptions;
-(void)bindResourcesWithEncoder:(id)arg0 commandBuffer:(id)arg1 retainedResources:(id)arg2 ;
-(void)dealloc;
-(void)decodeAccelerationStructureWithCoder:(id)arg0 ;
-(void)encodeClearWithEncoder:(id)arg0 buffer:(id)arg1 bufferOffset:(NSUInteger)arg2 value:(unsigned int)arg3 ;
-(void)encodeIndirectDispatchWithEncoder:(id)arg0 pipeline:(id)arg1 threadCountBuffer:(id)arg2 threadCountBufferOffset:(NSUInteger)arg3 indirectDispatchBuffer:(id)arg4 indirectDispatchBufferOffset:(NSUInteger)arg5 ;
-(void)encodeRefitToCommandBuffer:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)rebuild;
-(void)rebuildWithCompletionHandler:(id)arg0 ;
-(void)setPrivateOptions:(id)arg0 ;
-(void)sharedInitAccelerationStructureWithGroup:(id)arg0 ;
-(void)updateResourceBufferWithEncoder:(id)arg0 commandBuffer:(id)arg1 retainedResources:(id)arg2 ;
-(void)validate;


@end


#endif