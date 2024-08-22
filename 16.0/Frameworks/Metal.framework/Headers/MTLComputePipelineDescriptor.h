// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTLCOMPUTEPIPELINEDESCRIPTOR_H
#define MTLCOMPUTEPIPELINEDESCRIPTOR_H

@class NSArray, NSString;
@protocol NSCopying, MTLFunction;

#import <Foundation/Foundation.h>

#import "MTLPipelineBufferDescriptorArray.h"
#import "MTLLinkedFunctions.h"
#import "MTLStageInputOutputDescriptor.h"

@interface MTLComputePipelineDescriptor : NSObject <NSCopying>



@property (copy, nonatomic) NSArray *binaryArchives;
@property (readonly) MTLPipelineBufferDescriptorArray *buffers;
@property (retain, nonatomic) NSObject<MTLFunction> *computeFunction;
@property (nonatomic) BOOL forceResourceIndex;
@property (copy, nonatomic) NSArray *insertLibraries; // ivar: _insertLibraries
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) MTLLinkedFunctions *linkedFunctions;
@property (nonatomic) NSUInteger maxCallStackDepth;
@property (nonatomic) NSUInteger maxTotalThreadsPerThreadgroup;
@property (copy, nonatomic) NSArray *preloadedLibraries;
@property (nonatomic) NSUInteger resourceIndex;
@property (copy, nonatomic) MTLStageInputOutputDescriptor *stageInputDescriptor;
@property (nonatomic) BOOL supportAddingBinaryFunctions;
@property (nonatomic) BOOL supportIndirectCommandBuffers;
@property (nonatomic) BOOL threadGroupSizeIsMultipleOfThreadExecutionWidth;


+(id)alloc;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)reset;


@end


#endif