// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTLTILERENDERPIPELINEDESCRIPTOR_H
#define MTLTILERENDERPIPELINEDESCRIPTOR_H

@class NSArray, NSString;
@protocol NSCopying, MTLFunction;

#import <Foundation/Foundation.h>

#import "MTLTileRenderPipelineColorAttachmentDescriptorArray.h"
#import "MTLLinkedFunctions.h"
#import "MTLPipelineBufferDescriptorArray.h"

@interface MTLTileRenderPipelineDescriptor : NSObject <NSCopying>



@property (copy, nonatomic) NSArray *binaryArchives;
@property (readonly) MTLTileRenderPipelineColorAttachmentDescriptorArray *colorAttachments;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) MTLLinkedFunctions *linkedFunctions;
@property (nonatomic) NSUInteger maxCallStackDepth; // ivar: _maxCallStackDepth
@property (nonatomic) NSUInteger maxTotalThreadsPerThreadgroup;
@property (copy, nonatomic) NSArray *preloadedLibraries; // ivar: _preloadedLibraries
@property (nonatomic) NSUInteger rasterSampleCount;
@property (nonatomic) BOOL supportAddingBinaryFunctions; // ivar: _supportAddingBinaryFunctions
@property (nonatomic) BOOL threadgroupSizeMatchesTileSize;
@property (readonly) MTLPipelineBufferDescriptorArray *tileBuffers;
@property (retain, nonatomic) NSObject<MTLFunction> *tileFunction;


+(id)alloc;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)reset;


@end


#endif