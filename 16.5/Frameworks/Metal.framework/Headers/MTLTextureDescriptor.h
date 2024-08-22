// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTLTEXTUREDESCRIPTOR_H
#define MTLTEXTUREDESCRIPTOR_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MTLTextureDescriptor : NSObject <NSCopying>



@property (nonatomic) BOOL allowGPUOptimizedContents;
@property (nonatomic) NSUInteger arrayLength;
@property (nonatomic) NSInteger compressionType;
@property (nonatomic) NSUInteger cpuCacheMode;
@property (nonatomic) NSUInteger depth;
@property (nonatomic) BOOL forceResourceIndex;
@property (nonatomic) NSUInteger hazardTrackingMode;
@property (nonatomic) NSUInteger height;
@property (nonatomic) NSUInteger mipmapLevelCount;
@property (nonatomic) NSUInteger pixelFormat;
@property (nonatomic) NSUInteger resourceIndex;
@property (nonatomic) NSUInteger resourceOptions;
@property (nonatomic) NSUInteger sampleCount;
@property (nonatomic) NSUInteger storageMode;
@property (nonatomic) ? swizzle;
@property (nonatomic) NSUInteger textureType;
@property (nonatomic) NSUInteger usage;
@property (nonatomic) NSUInteger width;


+(id)alloc;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)texture2DDescriptorWithPixelFormat:(NSUInteger)arg0 width:(NSUInteger)arg1 height:(NSUInteger)arg2 mipmapped:(BOOL)arg3 ;
+(id)textureBufferDescriptorWithPixelFormat:(NSUInteger)arg0 width:(NSUInteger)arg1 resourceOptions:(NSUInteger)arg2 usage:(NSUInteger)arg3 ;
+(id)textureCubeDescriptorWithPixelFormat:(NSUInteger)arg0 size:(NSUInteger)arg1 mipmapped:(BOOL)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif