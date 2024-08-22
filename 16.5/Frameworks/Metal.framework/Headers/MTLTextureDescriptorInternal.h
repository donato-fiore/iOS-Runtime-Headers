// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTLTEXTUREDESCRIPTORINTERNAL_H
#define MTLTEXTUREDESCRIPTORINTERNAL_H



#import "MTLTextureDescriptor.h"

@interface MTLTextureDescriptorInternal : MTLTextureDescriptor {
    MTLTextureDescriptorPrivate _private;
}




-(BOOL)allowGPUOptimizedContents;
-(BOOL)forceResourceIndex;
-(BOOL)framebufferOnly;
-(BOOL)isDrawable;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)validateWithDevice:(id)arg0 ;
-(BOOL)writeSwizzleEnabled;
-(NSInteger)compressionType;
-(NSInteger)lossyCompressionMode;
-(NSUInteger)arrayLength;
-(NSUInteger)compressionFootprint;
-(NSUInteger)compressionMode;
-(NSUInteger)cpuCacheMode;
-(NSUInteger)depth;
-(NSUInteger)hash;
-(NSUInteger)hazardTrackingMode;
-(NSUInteger)height;
-(NSUInteger)mipmapLevelCount;
-(NSUInteger)pixelFormat;
-(NSUInteger)protectionOptions;
-(NSUInteger)resourceIndex;
-(NSUInteger)resourceOptions;
-(NSUInteger)rotation;
-(NSUInteger)sampleCount;
-(NSUInteger)sparseSurfaceDefaultValue;
-(NSUInteger)storageMode;
-(NSUInteger)textureType;
-(NSUInteger)textureUsage;
-(NSUInteger)usage;
-(NSUInteger)width;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)formattedDescription:(NSUInteger)arg0 ;
-(id)init;
-(struct ? )swizzle;
-(struct MTLTextureDescriptorPrivate *)descriptorPrivate;
-(unsigned int)swizzleKey;
-(void)setAllowGPUOptimizedContents:(BOOL)arg0 ;
-(void)setArrayLength:(NSUInteger)arg0 ;
-(void)setCompressionFootprint:(NSUInteger)arg0 ;
-(void)setCompressionMode:(NSUInteger)arg0 ;
-(void)setCompressionType:(NSInteger)arg0 ;
-(void)setCpuCacheMode:(NSUInteger)arg0 ;
-(void)setDepth:(NSUInteger)arg0 ;
-(void)setForceResourceIndex:(BOOL)arg0 ;
-(void)setFramebufferOnly:(BOOL)arg0 ;
-(void)setHazardTrackingMode:(NSUInteger)arg0 ;
-(void)setHeight:(NSUInteger)arg0 ;
-(void)setIsDrawable:(BOOL)arg0 ;
-(void)setLossyCompressionMode:(NSInteger)arg0 ;
-(void)setMipmapLevelCount:(NSUInteger)arg0 ;
-(void)setPixelFormat:(NSUInteger)arg0 ;
-(void)setProtectionOptions:(NSUInteger)arg0 ;
-(void)setResourceIndex:(NSUInteger)arg0 ;
-(void)setResourceOptions:(NSUInteger)arg0 ;
-(void)setRotation:(NSUInteger)arg0 ;
-(void)setSampleCount:(NSUInteger)arg0 ;
-(void)setSparseSurfaceDefaultValue:(NSUInteger)arg0 ;
-(void)setStorageMode:(NSUInteger)arg0 ;
-(void)setSwizzle:(struct ? )arg0 ;
-(void)setSwizzleKey:(unsigned int)arg0 ;
-(void)setTextureType:(NSUInteger)arg0 ;
-(void)setTextureUsage:(NSUInteger)arg0 ;
-(void)setUsage:(NSUInteger)arg0 ;
-(void)setWidth:(NSUInteger)arg0 ;
-(void)setWriteSwizzleEnabled:(BOOL)arg0 ;


@end


#endif