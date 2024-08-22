// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MKOVERLAYRENDERER_H
#define MKOVERLAYRENDERER_H

@class VKOverlay, NSMutableDictionary;
@protocol OS_dispatch_queue, MKOverlay;

#import <Foundation/Foundation.h>

#import "MKMapView.h"

@interface MKOverlayRenderer : NSObject {
    ? _boundingMapRect;
    VKOverlay *_renderer;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    MKMapView *_mapView;
    CGFloat _contentScaleFactor;
    os_unfair_lock_s _runningAnimationsLock;
    NSMutableDictionary *_runningAnimations;
    ? _blendMode;
    unsigned char _blendModeType;
}


@property CGFloat alpha; // ivar: _alpha
@property (nonatomic, getter=_blendMode, setter=_setBlendMode:) int blendMode;
@property (readonly) CGFloat contentScaleFactor;
@property (nonatomic, getter=_extendedBlendMode, setter=_setExtendedBlendMode:) NSInteger extendedBlendMode;
@property (readonly, nonatomic) NSObject<MKOverlay> *overlay; // ivar: _overlay


-(BOOL)_hasNonDefaultBlendMode;
-(BOOL)_mayExtendOutsideBounds;
-(BOOL)canDrawMapRect:(struct ? )arg0 zoomScale:(CGFloat)arg1 ;
-(BOOL)overlay:(id)arg0 canDrawKey:(struct ? *)arg1 ;
-(BOOL)overlay:(id)arg0 canPossiblyDrawKey:(struct ? *)arg1 ;
-(BOOL)overlayCanProvideRasterTileData:(id)arg0 ;
-(BOOL)overlayCanProvideVectorData:(id)arg0 ;
-(id)_mapView;
-(id)_renderer;
-(id)init;
-(id)initWithOverlay:(id)arg0 ;
-(id)rasterTileProviderForOverlay:(id)arg0 ;
-(id)vectorDataForOverlay:(id)arg0 ;
-(struct ? )_boundingMapRect;
-(struct ? )_originMapPoint;
-(struct ? )mapPointForPoint:(struct CGPoint )arg0 ;
-(struct ? )mapRectForRect:(struct CGRect )arg0 ;
-(struct CGPoint )pointForMapPoint:(struct ? )arg0 ;
-(struct CGRect )rectForMapRect:(struct ? )arg0 ;
-(void)_animateIfNecessaryForKey:(id)arg0 withStepHandler:(id)arg1 ;
-(void)_forEachMapRectForKey:(struct ? *)arg0 withContext:(struct CGContext *)arg1 performBlock:(id)arg2 ;
-(void)_setMapView:(id)arg0 ;
-(void)_updateBlendMode;
-(void)_updateRenderColors;
-(void)dealloc;
-(void)drawMapRect:(struct ? )arg0 zoomScale:(CGFloat)arg1 inContext:(struct CGContext *)arg2 ;
-(void)overlay:(id)arg0 drawKey:(struct ? *)arg1 inContext:(struct CGContext *)arg2 ;
-(void)setNeedsDisplay;
-(void)setNeedsDisplayInMapRect:(struct ? )arg0 ;
-(void)setNeedsDisplayInMapRect:(struct ? )arg0 zoomScale:(CGFloat)arg1 ;
-(void)set_boundingMapRect:(struct ? )arg0 ;
-(void)set_renderer:(id)arg0 ;


@end


#endif