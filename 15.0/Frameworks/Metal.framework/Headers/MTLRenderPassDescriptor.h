// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTLRENDERPASSDESCRIPTOR_H
#define MTLRENDERPASSDESCRIPTOR_H

@protocol NSCopying, MTLRasterizationRateMap, MTLBuffer;

#import <Foundation/Foundation.h>

#import "MTLRenderPassColorAttachmentDescriptorArray.h"
#import "MTLRenderPassDepthAttachmentDescriptor.h"
#import "MTLRenderPassSampleBufferAttachmentDescriptorArray.h"
#import "MTLRenderPassStencilAttachmentDescriptor.h"

@interface MTLRenderPassDescriptor : NSObject <NSCopying>



@property (readonly) MTLRenderPassColorAttachmentDescriptorArray *colorAttachments;
@property (nonatomic) NSUInteger defaultRasterSampleCount;
@property (copy, nonatomic) MTLRenderPassDepthAttachmentDescriptor *depthAttachment;
@property (nonatomic) NSUInteger imageblockSampleLength; // ivar: _imageblockSampleLength
@property (retain, nonatomic) NSObject<MTLRasterizationRateMap> *rasterizationRateMap;
@property (nonatomic) NSUInteger renderTargetArrayLength;
@property (nonatomic) NSUInteger renderTargetHeight;
@property (nonatomic) NSUInteger renderTargetWidth;
@property (readonly) MTLRenderPassSampleBufferAttachmentDescriptorArray *sampleBufferAttachments;
@property (copy, nonatomic) MTLRenderPassStencilAttachmentDescriptor *stencilAttachment;
@property (nonatomic) NSUInteger threadgroupMemoryLength; // ivar: _threadgroupMemoryLength
@property (nonatomic) NSUInteger tileHeight; // ivar: _tileHeight
@property (nonatomic) NSUInteger tileWidth; // ivar: _tileWidth
@property (retain, nonatomic) NSObject<MTLBuffer> *visibilityResultBuffer;


+(id)alloc;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)renderPassDescriptor;
-(NSUInteger)getSamplePositions:(struct ? *)arg0 count:(NSUInteger)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)setSamplePositions:(struct ? *)arg0 count:(NSUInteger)arg1 ;


@end


#endif