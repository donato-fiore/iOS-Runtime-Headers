// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKOVERLAYVIEW_H
#define MKOVERLAYVIEW_H

@class UIView;
@protocol OS_dispatch_queue, MKOverlay;


#import "MKMapView.h"

@interface MKOverlayView : UIView {
    ? _boundingMapRect;
    id *_renderer;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    MKMapView *_mapView;
}


@property (readonly, nonatomic) NSObject<MKOverlay> *overlay; // ivar: _overlay


-(BOOL)_canDrawContent;
-(BOOL)_mayExtendOutsideBounds;
-(BOOL)canDrawMapRect:(struct ? )arg0 zoomScale:(CGFloat)arg1 ;
-(BOOL)overlay:(id)arg0 canDrawKey:(struct ? *)arg1 ;
-(BOOL)overlay:(id)arg0 canPossiblyDrawKey:(struct ? *)arg1 ;
-(BOOL)overlayCanProvideRasterTileData:(id)arg0 ;
-(BOOL)overlayCanProvideVectorData:(id)arg0 ;
-(id)_mapView;
-(id)_renderer;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithOverlay:(id)arg0 ;
-(id)rasterTileProviderForOverlay:(id)arg0 ;
-(id)vectorDataForOverlay:(id)arg0 ;
-(struct ? )_boundingMapRect;
-(struct ? )_originMapPoint;
-(struct ? )mapPointForPoint:(struct CGPoint )arg0 ;
-(struct ? )mapRectForRect:(struct CGRect )arg0 ;
-(struct CGPoint )pointForMapPoint:(struct ? )arg0 ;
-(struct CGRect )rectForMapRect:(struct ? )arg0 ;
-(void)_forEachMapRectForKey:(struct ? *)arg0 withContext:(struct CGContext *)arg1 performBlock:(id)arg2 ;
-(void)_setMapView:(id)arg0 ;
-(void)_updateRenderColors;
-(void)dealloc;
-(void)drawMapRect:(struct ? )arg0 zoomScale:(CGFloat)arg1 inContext:(struct CGContext *)arg2 ;
-(void)overlay:(id)arg0 drawKey:(struct ? *)arg1 inContext:(struct CGContext *)arg2 ;
-(void)setNeedsDisplay;
-(void)setNeedsDisplayInMapRect:(struct ? )arg0 ;
-(void)setNeedsDisplayInMapRect:(struct ? )arg0 zoomScale:(CGFloat)arg1 ;
-(void)setNeedsDisplayInRect:(struct CGRect )arg0 ;
-(void)set_boundingMapRect:(struct ? )arg0 ;
-(void)set_renderer:(id)arg0 ;


@end


#endif