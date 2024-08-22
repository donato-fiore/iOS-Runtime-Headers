// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTLRENDERPASSDESCRIPTORINTERNAL_H
#define MTLRENDERPASSDESCRIPTORINTERNAL_H



#import "MTLRenderPassDescriptor.h"

@interface MTLRenderPassDescriptorInternal : MTLRenderPassDescriptor {
    MTLRenderPassDescriptorPrivate _private;
}




+(id)renderPassDescriptor;
-(BOOL)fineGrainedBackgroundVisibilityEnabled;
-(BOOL)isDitherEnabled;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)openGLModeEnabled;
-(BOOL)pointCoordYFlipEnabled;
-(BOOL)skipEmptyTilesOnClearEnabled;
-(BOOL)validate:(id)arg0 width:(*NSUInteger)arg1 height:(*NSUInteger)arg2 ;
-(NSUInteger)defaultColorSampleCount;
-(NSUInteger)defaultRasterSampleCount;
-(NSUInteger)getSamplePositions:(struct ? *)arg0 count:(NSUInteger)arg1 ;
-(NSUInteger)hash;
-(NSUInteger)imageblockSampleLength;
-(NSUInteger)renderTargetArrayLength;
-(NSUInteger)renderTargetHeight;
-(NSUInteger)renderTargetWidth;
-(NSUInteger)threadgroupMemoryLength;
-(NSUInteger)tileHeight;
-(NSUInteger)tileWidth;
-(id)colorAttachments;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)depthAttachment;
-(id)description;
-(id)formattedDescription:(NSUInteger)arg0 ;
-(id)init;
-(id)rasterizationRateMap;
-(id)sampleBufferAttachments;
-(id)stencilAttachment;
-(id)visibilityResultBuffer;
-(struct MTLRenderPassDescriptorPrivate *)_descriptorPrivate;
-(void)dealloc;
-(void)setDefaultColorSampleCount:(NSUInteger)arg0 ;
-(void)setDefaultRasterSampleCount:(NSUInteger)arg0 ;
-(void)setDepthAttachment:(id)arg0 ;
-(void)setDitherEnabled:(BOOL)arg0 ;
-(void)setFineGrainedBackgroundVisibilityEnabled:(BOOL)arg0 ;
-(void)setImageblockSampleLength:(NSUInteger)arg0 ;
-(void)setOpenGLModeEnabled:(BOOL)arg0 ;
-(void)setPointCoordYFlipEnabled:(BOOL)arg0 ;
-(void)setRasterizationRateMap:(id)arg0 ;
-(void)setRenderTargetArrayLength:(NSUInteger)arg0 ;
-(void)setRenderTargetHeight:(NSUInteger)arg0 ;
-(void)setRenderTargetWidth:(NSUInteger)arg0 ;
-(void)setSamplePositions:(struct ? *)arg0 count:(NSUInteger)arg1 ;
-(void)setSkipEmptyTilesOnClearEnabled:(BOOL)arg0 ;
-(void)setStencilAttachment:(id)arg0 ;
-(void)setThreadgroupMemoryLength:(NSUInteger)arg0 ;
-(void)setTileHeight:(NSUInteger)arg0 ;
-(void)setTileWidth:(NSUInteger)arg0 ;
-(void)setVisibilityResultBuffer:(id)arg0 ;


@end


#endif