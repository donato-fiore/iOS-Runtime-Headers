// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKTEXTURE_H
#define SKTEXTURE_H

@class NSString, NSArray, CIFilter;
@protocol NSCopying, NSSecureCoding, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SKTexture.h"
#import "SKTextureCache.h"
#import "SKTextureAtlas.h"

@interface SKTexture : NSObject <NSCopying, NSSecureCoding>

 {
    BOOL _shouldGenerateMipmaps;
    BOOL _didGenerateMipmaps;
    BOOL _isPath;
    BOOL _isData;
    NSString *_imgName;
    NSArray *_searchPaths;
    CGRect _textRect;
    CGRect _textCoords;
    BOOL _disableAlpha;
    BOOL _isRotated;
    BOOL _isFlipped;
    int _alignment;
    int _rowLength;
    CIFilter *_filter;
    SKTexture *_originalTexture;
    unsigned int _textureTarget;
    SKTextureCache *_textureCache;
    NSObject<OS_dispatch_queue> *_textureSyncQueue;
}


@property (readonly, nonatomic) *unsigned int alphaMap; // ivar: _alphaMap
@property (readonly, nonatomic) CGSize alphaMapSize; // ivar: _alphaMapSize
@property (nonatomic) CGPoint cropOffset; // ivar: _cropOffset
@property (nonatomic) CGPoint cropScale; // ivar: _cropScale
@property (nonatomic) NSInteger filteringMode;
@property (readonly, nonatomic) BOOL hasAlpha;
@property (readonly, nonatomic) NSString *imageNameOrPath;
@property (nonatomic) BOOL isFlipped;
@property (readonly, nonatomic) BOOL isRepeatable; // ivar: _isRepeatable
@property (nonatomic) BOOL isRotated;
@property (nonatomic, getter=_needsExtrusionWorkaround) BOOL needsExtrusionWorkaround; // ivar: _needsExtrusionWorkaround
@property (copy, nonatomic) NSString *originalAtlasName; // ivar: _originalAtlasName
@property BOOL performFullCapture; // ivar: _performFullCapture
@property (readonly, nonatomic) CGSize pixelSize;
@property (retain, nonatomic) SKTextureAtlas *rootAtlas; // ivar: _rootAtlas
@property (copy, nonatomic) NSString *subTextureName; // ivar: _subTextureName
@property (nonatomic) unsigned int textureTarget;
@property (nonatomic) BOOL usesMipmaps;
@property (nonatomic) int wrapMode;


+(BOOL)supportsSecureCoding;
+(id)_cachedTextureNames;
+(id)_textureByTransferingData:(char *)arg0 size:(struct CGSize )arg1 ;
+(id)_textureByTransferingData:(char *)arg0 size:(struct CGSize )arg1 rowLength:(unsigned int)arg2 alignment:(unsigned int)arg3 ;
+(id)_textureWithGLTextureId:(unsigned int)arg0 size:(struct CGSize )arg1 ;
+(id)_textureWithImageNamed:(id)arg0 ;
+(id)compressedTextureWithData:(id)arg0 ;
+(id)compressedTextureWithData:(id)arg0 size:(struct CGSize )arg1 bitsPerPixel:(unsigned int)arg2 hasAlpha:(BOOL)arg3 ;
+(id)lookupTextureCacheForName:(id)arg0 ;
+(id)preloadQueue;
+(id)textureNoiseWithSmoothness:(CGFloat)arg0 size:(struct CGSize )arg1 grayscale:(BOOL)arg2 ;
+(id)textureVectorNoiseWithSmoothness:(CGFloat)arg0 size:(struct CGSize )arg1 ;
+(id)textureWithCGImage:(struct CGImage *)arg0 ;
+(id)textureWithCGImage:(struct CGImage *)arg0 pointSize:(struct CGSize )arg1 ;
+(id)textureWithData:(id)arg0 size:(struct CGSize )arg1 ;
+(id)textureWithData:(id)arg0 size:(struct CGSize )arg1 flipped:(BOOL)arg2 ;
+(id)textureWithData:(id)arg0 size:(struct CGSize )arg1 rowLength:(unsigned int)arg2 alignment:(unsigned int)arg3 ;
+(id)textureWithIOSurfaceID:(unsigned int)arg0 width:(unsigned int)arg1 height:(unsigned int)arg2 format:(unsigned int)arg3 ;
+(id)textureWithImage:(id)arg0 ;
+(id)textureWithImageNamed:(id)arg0 ;
+(id)textureWithImageNamed:(id)arg0 rect:(struct CGRect )arg1 ;
+(id)textureWithImagePath:(id)arg0 ;
+(id)textureWithMetalTexture:(id)arg0 ;
+(id)textureWithRect:(struct CGRect )arg0 inTexture:(id)arg1 ;
+(void)_reloadTextureCacheForImageNamed:(id)arg0 ;
+(void)preloadTextures:(id)arg0 withCompletionHandler:(id)arg1 ;
+(void)registerTextureCache:(id)arg0 forName:(id)arg1 ;
-(?)_backingTexture;
-(?)initWithBackingTetxure;
-(?)initWithBackingTetxure:(?)arg0 logicalWidthheight;
-(BOOL)isEqualToTexture:(id)arg0 ;
-(BOOL)loadImageDataFromPVRData:(id)arg0 ;
-(BOOL)loadImageDataFromPVRGZData:(id)arg0 ;
-(id)_copyImageData;
-(id)_generateNormalMap:(CGFloat)arg0 contrast:(CGFloat)arg1 multiPass:(NSUInteger)arg2 ;
-(id)_initWithGLTextureId:(unsigned int)arg0 size:(struct CGSize )arg1 ;
-(id)_textureCache;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)imgName;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithImageNamed:(id)arg0 ;
-(id)initWithImagePath:(id)arg0 ;
-(id)metalTexture;
-(id)textureByApplyingCIFilter:(id)arg0 ;
-(id)textureByGeneratingNormalMap;
-(id)textureByGeneratingNormalMapWithSmoothness:(CGFloat)arg0 contrast:(CGFloat)arg1 ;
-(int)_convert_jet_texture_format_to_ci_format:(unsigned int)arg0 ;
-(int)glTextureId;
-(struct CGImage *)CGImage;
-(struct CGImage *)_createCGImage;
-(struct CGImage *)_newTextureFromGLCache;
-(struct CGRect )textureRect;
-(struct CGSize )size;
-(void)_ensureImageData;
-(void)_savePngFromGLCache:(id)arg0 ;
-(void)_setImageName:(id)arg0 ;
-(void)commonInit;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)initTextureCacheWithImageData;
-(void)loadImageData;
-(void)loadImageDataFromCGImage:(struct CGImage *)arg0 pointsSize:(struct CGSize )arg1 ;
-(void)preloadWithCompletionHandler:(id)arg0 ;
-(void)setIsData:(BOOL)arg0 ;
-(void)setTextureDimension:(struct CGSize *)arg0 withPixelSize:(struct CGSize *)arg1 ;


@end


#endif