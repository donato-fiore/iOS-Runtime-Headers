// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTLTILERENDERPIPELINEDESCRIPTORINTERNAL_H
#define MTLTILERENDERPIPELINEDESCRIPTORINTERNAL_H



#import "MTLTileRenderPipelineDescriptor.h"

@interface MTLTileRenderPipelineDescriptorInternal : MTLTileRenderPipelineDescriptor {
    MTLTileRenderPipelineDescriptorPrivate _private;
}




-(BOOL)isEqual:(id)arg0 ;
-(BOOL)supportAddingBinaryFunctions;
-(BOOL)threadgroupSizeMatchesTileSize;
-(BOOL)validateWithDevice:(id)arg0 error:(*id)arg1 ;
-(NSInteger)textureWriteRoundingMode;
-(NSUInteger)colorSampleCount;
-(NSUInteger)hash;
-(NSUInteger)maxCallStackDepth;
-(NSUInteger)maxTotalThreadsPerThreadgroup;
-(NSUInteger)rasterSampleCount;
-(NSUInteger)sampleCount;
-(id)binaryArchives;
-(id)colorAttachments;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)formattedDescription:(NSUInteger)arg0 ;
-(id)init;
-(id)insertLibraries;
-(id)label;
-(id)linkedFunctions;
-(id)newSerializedTileDataWithFlags:(NSUInteger)arg0 options:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)pluginData;
-(id)preloadedLibraries;
-(id)tileBuffers;
-(id)tileFunction;
-(struct MTLTileRenderPipelineDescriptorPrivate *)_descriptorPrivate;
-(void)dealloc;
-(void)reset;
-(void)setBinaryArchives:(id)arg0 ;
-(void)setColorSampleCount:(NSUInteger)arg0 ;
-(void)setInsertLibraries:(id)arg0 ;
-(void)setLabel:(id)arg0 ;
-(void)setLinkedFunctions:(id)arg0 ;
-(void)setMaxCallStackDepth:(NSUInteger)arg0 ;
-(void)setMaxTotalThreadsPerThreadgroup:(NSUInteger)arg0 ;
-(void)setPluginData:(id)arg0 ;
-(void)setPreloadedLibraries:(id)arg0 ;
-(void)setRasterSampleCount:(NSUInteger)arg0 ;
-(void)setSampleCount:(NSUInteger)arg0 ;
-(void)setSupportAddingBinaryFunctions:(BOOL)arg0 ;
-(void)setTextureWriteRoundingMode:(NSInteger)arg0 ;
-(void)setThreadgroupSizeMatchesTileSize:(BOOL)arg0 ;
-(void)setTileFunction:(id)arg0 ;
-(void)validateWithDevice:(id)arg0 ;


@end


#endif