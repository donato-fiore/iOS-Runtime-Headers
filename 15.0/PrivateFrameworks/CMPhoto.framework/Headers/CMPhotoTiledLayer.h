// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CMPHOTOTILEDLAYER_H
#define CMPHOTOTILEDLAYER_H

@class CALayer, MPSImageConversion, NSMutableSet, NSMutableDictionary;
@protocol MTLDevice><MTLDeviceSPI, MTLCommandQueue, OS_dispatch_queue;



@interface CMPhotoTiledLayer : CALayer {
    *CMPhotoDecompressionSession _decodeSession;
    *CMPhotoDecompressionContainer _container;
    int _containerFormat;
    NSInteger _imageIndex;
    CGSize _tileSize;
    BOOL _hasExtendedColorDisplay;
    BOOL _shouldTile;
    unsigned int _decodePixelFormat;
    unsigned int _conversionPixelFormat;
    id<MTLDevice><MTLDeviceSPI> *_metalDevice;
    id<MTLCommandQueue> *_metalCmdQueue;
    NSObject<OS_dispatch_queue> *_metalQueue;
    MPSImageConversion *_metalConverter;
    *vImageConverter _vimageConverter;
    BOOL _hasAlpha;
    int _err;
    *CMPhotoCache _tileCache;
    *CMPhotoSurfacePool _surfacePool;
    NSMutableSet *_visibleTileKeys;
    NSMutableDictionary *_subLayers;
    NSObject<OS_dispatch_queue> *_updateQueue;
    uint8_t _requestID;
    int _zoomLevel;
    CALayer *_placeholderLayer;
    *CGImage _placeholderImage;
    CGFloat _zoomStartScale;
    os_unfair_lock_s _lock;
    CGRect _lastVisibleRect;
    CGFloat _lastZoomScale;
    BOOL _lastAboveZoomThreshold;
    BOOL _showTileBorders;
}


@property (readonly, nonatomic) NSInteger imageOrientation; // ivar: _imageOrientation
@property (readonly, nonatomic) CGSize imageSize; // ivar: _imageSize


-(BOOL)_visibleTileRegionHasChanged:(struct CGRect )arg0 level:(int)arg1 ;
-(CGFloat)_zoomStartScaleForImage:(struct CGSize )arg0 placeholderImageSize:(struct CGSize )arg1 ;
-(id)initWithContainer:(id)arg0 containerImageIndex:(NSInteger)arg1 backgroundImageSize:(struct CGSize )arg2 screenSize:(struct CGSize )arg3 ;
-(id)initWithContainerData:(id)arg0 containerImageIndex:(NSInteger)arg1 backgroundImageSize:(struct CGSize )arg2 screenSize:(struct CGSize )arg3 ;
-(id)initWithContainerData:(id)arg0 containerImageIndex:(NSInteger)arg1 placeholderImage:(struct CGImage *)arg2 screenSize:(struct CGSize )arg3 ;
-(id)initWithContainerURL:(id)arg0 containerImageIndex:(NSInteger)arg1 backgroundImageSize:(struct CGSize )arg2 screenSize:(struct CGSize )arg3 ;
-(void)_decodeImageRectangle:(struct CGRect )arg0 forLevel:(int)arg1 zoomScale:(CGFloat)arg2 requestId:(unsigned int)arg3 completionHandler:(id)arg4 ;
-(void)_prepareForDecode;
-(void)_removeAllTiles;
-(void)_runMetalConversionOnSurface:(struct __IOSurface *)arg0 cropRect:(struct CGRect )arg1 completionHandler:(id)arg2 ;
-(void)_runVImageConversionOnSurface:(struct __IOSurface *)arg0 cropRect:(struct CGRect )arg1 completionHandler:(id)arg2 ;
-(void)_setupConverterForSourceColorSpace:(struct CGColorSpace *)arg0 destinationColorSpace:(struct CGColorSpace *)arg1 ;
-(void)_updateSubLayers:(id)arg0 zoomScale:(CGFloat)arg1 ;
-(void)dealloc;
-(void)flushCache;
-(void)setVisibleRectangle:(struct CGRect )arg0 zoomScale:(CGFloat)arg1 ;
-(void)setVisibleRectangle:(struct CGRect )arg0 zoomScale:(CGFloat)arg1 completionHandler:(id)arg2 ;
-(void)sizeToFit;


@end


#endif