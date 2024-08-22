// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTLDEBUGTEXTURE_H
#define MTLDEBUGTEXTURE_H

@protocol MTLDebugResourcePurgeable;


#import "MTLToolsTexture.h"
#import "MTLDebugDevice.h"
#import "MTLDebugResource.h"

@interface MTLDebugTexture : MTLToolsTexture <MTLDebugResourcePurgeable>

 {
    MTLPixelFormatInfo _pixelFormatInfo;
    MTLDebugDevice *_debugDevice;
    NSUInteger _usageRequired;
    atomic<int> _purgeableStateToken;
    BOOL _purgeableStateHasBeenSet;
    mutex _subViewUseLock;
    unordered_map<SubView, unsigned long, SubView::hash_t, SubView::equal_t, std::allocator<std::pair<const SubView, unsigned long>>> _activeSubViews;
}


@property ? activeSubViews;
@property (readonly, nonatomic) NSUInteger bytesPerImage; // ivar: _bytesPerImage
@property (readonly, nonatomic) NSUInteger bytesPerRow; // ivar: _bytesPerRow
@property (readonly, nonatomic) MTLDebugResource *common; // ivar: _common
@property (readonly, nonatomic) BOOL isLinearTexture; // ivar: _isLinearTexture
@property (readonly, nonatomic) NSUInteger offset; // ivar: _offset
@property (readonly, nonatomic) NSUInteger plane; // ivar: _plane


-(BOOL)doesAliasAllResources:(*id)arg0 count:(NSUInteger)arg1 ;
-(BOOL)doesAliasAnyResources:(*id)arg0 count:(NSUInteger)arg1 ;
-(BOOL)doesAliasResource:(id)arg0 ;
-(BOOL)requireUsage:(NSUInteger)arg0 ;
-(id)initWithBaseTexture:(id)arg0 device:(id)arg1 ;
-(id)initWithBaseTexture:(id)arg0 device:(id)arg1 plane:(NSUInteger)arg2 ;
-(id)initWithBaseTexture:(id)arg0 device:(id)arg1 texture:(id)arg2 ;
-(id)initWithBaseTexture:(id)arg0 device:(id)arg1 texture:(id)arg2 pixelFormat:(NSUInteger)arg3 ;
-(id)initWithBaseTexture:(id)arg0 device:(id)arg1 texture:(id)arg2 pixelFormat:(NSUInteger)arg3 textureType:(NSUInteger)arg4 levels:(struct _NSRange )arg5 slices:(struct _NSRange )arg6 ;
-(id)initWithBaseTexture:(id)arg0 heap:(id)arg1 device:(id)arg2 ;
-(id)newCompressedTextureViewWithPixelFormat:(NSUInteger)arg0 textureType:(NSUInteger)arg1 level:(NSUInteger)arg2 slice:(NSUInteger)arg3 ;
-(id)newTextureViewWithPixelFormat:(NSUInteger)arg0 ;
-(id)newTextureViewWithPixelFormat:(NSUInteger)arg0 resourceIndex:(NSUInteger)arg1 ;
-(id)newTextureViewWithPixelFormat:(NSUInteger)arg0 textureType:(NSUInteger)arg1 levels:(struct _NSRange )arg2 slices:(struct _NSRange )arg3 ;
-(id)newTextureViewWithPixelFormat:(NSUInteger)arg0 textureType:(NSUInteger)arg1 levels:(struct _NSRange )arg2 slices:(struct _NSRange )arg3 resourceIndex:(NSUInteger)arg4 ;
-(id)newTextureViewWithPixelFormat:(NSUInteger)arg0 textureType:(NSUInteger)arg1 levels:(struct _NSRange )arg2 slices:(struct _NSRange )arg3 swizzle:(struct ? )arg4 ;
-(id)newTextureViewWithPixelFormat:(NSUInteger)arg0 textureType:(NSUInteger)arg1 levels:(struct _NSRange )arg2 slices:(struct _NSRange )arg3 swizzle:(struct ? )arg4 resourceIndex:(NSUInteger)arg5 ;
-(void)addUsedRenderTarget:(NSUInteger)arg0 slices:(struct _NSRange )arg1 ;
-(void)getBytes:(*void)arg0 bytesPerRow:(NSUInteger)arg1 bytesPerImage:(NSUInteger)arg2 fromRegion:(struct ? )arg3 mipmapLevel:(NSUInteger)arg4 slice:(NSUInteger)arg5 ;
-(void)getBytes:(*void)arg0 bytesPerRow:(NSUInteger)arg1 fromRegion:(struct ? )arg2 mipmapLevel:(NSUInteger)arg3 ;
-(void)removeUsedRenderTarget:(NSUInteger)arg0 slices:(struct _NSRange )arg1 ;
-(void)replaceRegion:(struct ? )arg0 mipmapLevel:(NSUInteger)arg1 slice:(NSUInteger)arg2 withBytes:(*void)arg3 bytesPerRow:(NSUInteger)arg4 bytesPerImage:(NSUInteger)arg5 ;
-(void)replaceRegion:(struct ? )arg0 mipmapLevel:(NSUInteger)arg1 withBytes:(*void)arg2 bytesPerRow:(NSUInteger)arg3 ;


@end


#endif