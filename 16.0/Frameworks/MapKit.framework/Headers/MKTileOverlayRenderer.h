// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MKTILEOVERLAYRENDERER_H
#define MKTILEOVERLAYRENDERER_H

@class GEOTileKeyList, VKRasterTileOverlayProviderData, UIImage, NSNumber;
@protocol OS_dispatch_queue;


#import "MKOverlayRenderer.h"

@interface MKTileOverlayRenderer : MKOverlayRenderer {
    GEOTileKeyList *_pendingRequests;
    NSObject<OS_dispatch_queue> *_pendingRequestsLock;
    BOOL _externalSubclassOverridesDrawingMethods;
    VKRasterTileOverlayProviderData *_rasterProvider;
    NSUInteger _loopsRemaining;
}


@property (retain, nonatomic) UIImage *colorMap; // ivar: _colorMap
@property (readonly, nonatomic, getter=_visibleKeyframeIndex) NSUInteger visibleKeyframeIndex;
@property (retain, nonatomic) NSNumber *visibleKeyframeOverride; // ivar: _visibleKeyframeOverride


+(BOOL)_externalSubclassOverridesDrawingMethods;
+(id)keyPathsForValuesAffectingVisibleKeyframeIndex;
-(BOOL)_mayExtendOutsideBounds;
-(BOOL)canDrawMapRect:(struct ? )arg0 zoomScale:(CGFloat)arg1 ;
-(BOOL)overlayCanProvideRasterTileData:(id)arg0 ;
-(id)initWithOverlay:(id)arg0 ;
-(id)initWithTileOverlay:(id)arg0 ;
-(id)rasterTileProviderForOverlay:(id)arg0 ;
-(void)_playWithLoopCount:(NSUInteger)arg0 ;
-(void)_updateColorMap;
-(void)_updateRenderColors;
-(void)dealloc;
-(void)drawMapRect:(struct ? )arg0 zoomScale:(CGFloat)arg1 inContext:(struct CGContext *)arg2 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)reloadData;
-(void)setAlpha:(CGFloat)arg0 ;


@end


#endif