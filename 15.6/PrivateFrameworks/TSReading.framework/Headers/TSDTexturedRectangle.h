// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSDTEXTUREDRECTANGLE_H
#define TSDTEXTUREDRECTANGLE_H

@class NSMutableArray, NSMutableDictionary, TSUColor, CALayer, NSString;
@protocol NSCopying, OS_dispatch_semaphore, TSDLiveTexturedRectangleSource, MTLTexture;

#import <Foundation/Foundation.h>

#import "TSDTexturedRectangle.h"
#import "TSDMetalShader.h"
#import "TSDTextureSet.h"

@interface TSDTexturedRectangle : NSObject <NSCopying>

 {
    CGPoint mOffset;
    CGRect mOriginalFrame;
    id *mRenderBlock;
    *CGImage mSourceImage;
    *CGImage mBakedImage;
    unsigned int mSingleTextureName;
    BOOL mSingleTextureContainsMipmaps;
    NSObject<OS_dispatch_semaphore> *_liveMetalTexturesSemaphore;
    id<TSDLiveTexturedRectangleSource> *_liveTexturedRectangleSource;
    TSDTexturedRectangle *_liveTexturedRectangleSourceProxy;
    NSMutableArray *_liveMetalTexturePool;
    NSUInteger _liveMetalTexturePoolIndex;
    NSMutableDictionary *_liveMetalTextureToTimestamp;
    NSMutableDictionary *_liveMetalTimestampToTexture;
    TSDMetalShader *_liveTextureSourceShader;
}


@property (retain, nonatomic) NSMutableDictionary *attributes; // ivar: mAttributes
@property (copy, nonatomic) TSUColor *backgroundColor; // ivar: _backgroundColor
@property (readonly, nonatomic) CGFloat bakedScale; // ivar: _bakedScale
@property (nonatomic) *CGColorSpace colorSpace; // ivar: mColorSpace
@property (nonatomic) CGRect contentRect; // ivar: mContentRect
@property (readonly, nonatomic) CGRect frame;
@property (nonatomic) CGRect frameOnCanvas; // ivar: mFrameOnCanvas
@property (readonly, nonatomic) *CGImage image;
@property (readonly, nonatomic) BOOL isBackgroundTexture;
@property (nonatomic) BOOL isFlattened; // ivar: mIsFlattened
@property (readonly, nonatomic) BOOL isRenderable;
@property (nonatomic) BOOL isVerticalText; // ivar: _isVerticalText
@property (readonly, nonatomic) CALayer *layer; // ivar: mLayer
@property (readonly, nonatomic) NSObject<MTLTexture> *metalTexture; // ivar: _metalTexture
@property (nonatomic) CGPoint offset;
@property (readonly, nonatomic) float opacityFromAttributes;
@property (nonatomic) CGPoint originalPosition; // ivar: mOriginalPosition
@property (weak, nonatomic) TSDTextureSet *parent; // ivar: mParent
@property (readonly, nonatomic) CALayer *parentLayer;
@property (nonatomic) BOOL shouldGenerateMipmap; // ivar: mShouldGenerateMipmap
@property (nonatomic) BOOL shouldUseDisplayLinkPresentationTime; // ivar: _shouldUseDisplayLinkPresentationTime
@property (readonly, nonatomic) unsigned int singleTextureName;
@property (readonly, nonatomic) CGFloat singleTextureOpacity;
@property (readonly, nonatomic) unsigned int singleTextureTarget;
@property (readonly, nonatomic) CGSize size; // ivar: mSize
@property (retain, nonatomic) NSMutableArray *tags; // ivar: mTags
@property (copy, nonatomic) NSString *text; // ivar: _text
@property (nonatomic) CGFloat textBaseline; // ivar: _textBaseline
@property (copy, nonatomic) TSUColor *textColor; // ivar: _textColor
@property (nonatomic) _NSRange textRange; // ivar: _textRange
@property (nonatomic) CGFloat textXHeight; // ivar: _textXHeight
@property (nonatomic) CGFloat textureOpacity; // ivar: mTextureOpacity
@property (nonatomic) int textureType; // ivar: mTextureType
@property (readonly, nonatomic) CATransform3D transformFromAttributes;


+(id)setupMetalShaderForContext:(id)arg0 ;
-(BOOL)hasLiveTexturedRectangleSource;
-(BOOL)isMetalTextureSetup;
-(char *)p_setupTextureDataWithSize:(struct CGSize )arg0 isBGRA:(BOOL)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCGImage:(struct CGImage *)arg0 ;
-(id)initWithLayer:(id)arg0 ;
-(id)initWithSize:(struct CGSize )arg0 image:(struct CGImage *)arg1 ;
-(id)initWithSize:(struct CGSize )arg0 offset:(struct CGPoint )arg1 renderBlock:(id)arg2 ;
-(id)metalTextureWithContext:(id)arg0 ;
-(id)p_allocateMetalTextureForDevice:(id)arg0 ;
-(id)p_allocateMetalTextureForDevice:(id)arg0 renderTarget:(BOOL)arg1 writable:(BOOL)arg2 private:(BOOL)arg3 maxSize:(struct CGSize )arg4 ;
-(id)p_latestTextureNotAfterLayerTime:(CGFloat)arg0 ;
-(struct CGImage *)p_newImageAndBufferWithAngle:(CGFloat)arg0 scale:(CGFloat)arg1 offset:(struct CGPoint )arg2 ;
-(struct CGRect )boundingRectForStage:(NSInteger)arg0 isBuildIn:(BOOL)arg1 ;
-(struct CGSize )p_textureSizeWithDevice:(id)arg0 maxSize:(struct CGSize )arg1 ;
-(void)adjustAnchorRelativeToParentsCenterOfRotation:(struct CGPoint )arg0 isMagicMove:(BOOL)arg1 ;
-(void)bakeLayerWithAngle:(CGFloat)arg0 scale:(CGFloat)arg1 ;
-(void)dealloc;
-(void)drawFrameAtLayerTime:(CGFloat)arg0 context:(id)arg1 ;
-(void)releaseMetalTexture;
-(void)releaseSingleTexture;
-(void)renderIntoContext:(struct CGContext *)arg0 ;
-(void)renderLayerContentsIfNeeded;
-(void)resetAnchorPoint;
-(void)resetToSourceImage;
-(void)setLiveTexturedRectangleSource:(id)arg0 ;
-(void)setLiveTexturedRectangleSourceProxy:(id)arg0 ;
-(void)setupMetalTextureForDevice:(id)arg0 ;
-(void)setupSingleTexture;
-(void)setupSingleTextureAndGenerateMipMaps:(BOOL)arg0 ;
-(void)teardown;


@end


#endif