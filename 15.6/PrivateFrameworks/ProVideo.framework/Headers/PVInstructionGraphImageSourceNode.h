// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PVINSTRUCTIONGRAPHIMAGESOURCENODE_H
#define PVINSTRUCTIONGRAPHIMAGESOURCENODE_H

@class NSString, NSURL;
@protocol NSCacheDelegate, PVImageDelegate;


#import "PVInstructionGraphSourceNode.h"

@interface PVInstructionGraphImageSourceNode : PVInstructionGraphSourceNode <NSCacheDelegate>

 {
    CachedImageInfo m_cachedImageInfo;
    HGRef<PVRenderManager> m_renderManager;
    BOOL _useHDRGainMap;
    NSString *_keyHDRGainMap;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int fillMode; // ivar: _fillMode
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<PVImageDelegate> *imageDelegate; // ivar: _imageDelegate
@property (retain, nonatomic) NSString *key; // ivar: _key
@property (nonatomic) int renderingIntent; // ivar: _renderingIntent
@property (readonly) Class superclass;
@property (retain, nonatomic) NSURL *url; // ivar: _url
@property (nonatomic) BOOL useAnimationInfo; // ivar: _useAnimationInfo


+(void)purgeBitmapCache:(BOOL)arg0 ;
-(id)dotTreeLabel:(struct HGRef<PVInstructionGraphContext> )arg0 ;
-(id)initWithURL:(id)arg0 animation:(id)arg1 isExporting:(BOOL)arg2 imageDelegate:(id)arg3 renderingIntent:(int)arg4 ;
-(id)initWithURL:(id)arg0 animation:(id)arg1 isExporting:(BOOL)arg2 imageDelegate:(id)arg3 renderingIntent:(int)arg4 fillMode:(int)arg5 ;
-(id)initWithURL:(id)arg0 key:(id)arg1 transform:(struct CGAffineTransform )arg2 isExporting:(BOOL)arg3 imageDelegate:(id)arg4 renderingIntent:(int)arg5 ;
-(id)initWithURL:(id)arg0 key:(id)arg1 transform:(struct CGAffineTransform )arg2 isExporting:(BOOL)arg3 imageDelegate:(id)arg4 renderingIntent:(int)arg5 fillMode:(int)arg6 ;
-(id)instructionGraphNodeDescription;
-(id)loadImageTiles:(struct CGImage *)arg0 size:(struct CGSize )arg1 colorSpace:(id)arg2 imageProperties:(struct PVImageProperties *)arg3 ;
-(id)newCVPixelBufferCacheItemForGainMapWithColorSpace:(id)arg0 ;
-(id)newCVPixelBufferCacheItemForImage:(struct HGRef<PVInstructionGraphContext> )arg0 ;
-(struct HGRef<HGNode> )applyGainMapToGraph:(struct HGRef<HGNode> )arg0 gainMap:(struct HGRef<HGBitmap> )arg1 ;
-(struct HGRef<HGNode> )internalHGNodeForTime:(struct ? )arg0 trackInputs:(*void)arg1 renderer:(*void)arg2 igContext:(struct HGRef<PVInstructionGraphContext> )arg3 ;
-(struct PCMatrix44Tmpl<double> )pixelTransformForPVEffect:(id)arg0 igContext:(struct HGRef<PVInstructionGraphContext> )arg1 ;
-(struct PCRect<double> )inputSizeForPVEffect:(id)arg0 igContext:(struct HGRef<PVInstructionGraphContext> )arg1 ;
-(void)cache:(id)arg0 willEvictObject:(id)arg1 ;
-(void)dealloc;
-(void)enableHDRGainMap:(BOOL)arg0 ;
-(void)loadIGNode:(struct HGRef<PVInstructionGraphContext> )arg0 returnLoadedEffects:(id)arg1 ;


@end


#endif