// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLTILEDLAYER_H
#define PLTILEDLAYER_H

@class CALayer, NSData, MPSImageConversion, NSMutableSet, NSMutableDictionary, NSString;
@protocol PLTileableLayer, MTLDevice><MTLDeviceSPI, MTLCommandQueue, OS_dispatch_queue;


#import "PLCache.h"

@interface PLTiledLayer : CALayer <PLTileableLayer>

 {
    NSData *_jpegData;
    *jpegDecoder _decoders;
    int _decoderCount;
    int _tilePixelSize;
    int _maxNumberOfTiles;
    CGSize _fullSize;
    BOOL _hasExtendedColorDisplay;
    BOOL _shouldTile;
    *CGColorSpace _colorspace;
    unsigned int _decodePixelFormat;
    unsigned int _conversionPixelFormat;
    id<MTLDevice><MTLDeviceSPI> *_metalDevice;
    id<MTLCommandQueue> *_metalCmdQueue;
    MPSImageConversion *_metalConverter;
    *vImageConverter _vimageConverter;
    int _err;
    PLCache *_tileCache;
    *iosPoolOpaque _surfacePool;
    NSMutableSet *_visibleTileIds;
    NSMutableDictionary *_subLayers;
    NSObject<OS_dispatch_queue> *_decodeQueue;
    NSObject<OS_dispatch_queue> *_conversionQueue;
    unsigned int _requestId;
    int _zoomLevel;
    CALayer *_placeholderLayer;
    *CGImage _placeholderImage;
    CGFloat _zoomStartScale;
    os_unfair_lock_s _lock;
    CGRect _lastVisibleRect;
    CGFloat _lastZoomScale;
    BOOL _showTileBorders;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGSize jpegImageSize;
@property (readonly) Class superclass;


-(BOOL)visibleTileRegionHasChanged:(struct CGRect )arg0 level:(int)arg1 ;
-(CGFloat)zoomStartScaleForImage:(struct CGSize )arg0 placeholderImageSize:(struct CGSize )arg1 ;
-(id)initWithJPEGData:(id)arg0 placeholderImage:(struct CGImage *)arg1 screenSize:(struct CGSize )arg2 ;
-(void)dealloc;
-(void)decodeImageRectangle:(struct CGRect )arg0 forLevel:(int)arg1 requestId:(unsigned int)arg2 completionHandler:(id)arg3 ;
-(void)flushCache;
-(void)prepareForDecoding;
-(void)removeAllTiles;
-(void)runMetalConversionOnSurface:(struct __IOSurface *)arg0 completionHandler:(id)arg1 ;
-(void)runVImageConversionOnSurface:(struct __IOSurface *)arg0 completionHandler:(id)arg1 ;
-(void)setVisibleRectangle:(struct CGRect )arg0 zoomScale:(CGFloat)arg1 ;
-(void)setVisibleRectangle:(struct CGRect )arg0 zoomScale:(CGFloat)arg1 completionHandler:(id)arg2 ;
-(void)setupConverterForSourceColorSpace:(struct CGColorSpace *)arg0 destinationColorSpace:(struct CGColorSpace *)arg1 ;
-(void)updateSubLayers:(id)arg0 ;


@end


#endif