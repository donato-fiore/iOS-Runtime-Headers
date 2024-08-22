// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKPOLYLINERENDERER_H
#define MKPOLYLINERENDERER_H

@class VKVectorOverlayPolylineGroup;


#import "MKOverlayPathRenderer.h"
#import "MKPolyline.h"

@interface MKPolylineRenderer : MKOverlayPathRenderer {
    VKVectorOverlayPolylineGroup *_vectorGeometry;
    CGFloat _strokeStart;
    CGFloat _strokeEnd;
}


@property (readonly, nonatomic) MKPolyline *polyline;
@property (nonatomic) CGFloat strokeEnd;
@property (nonatomic) CGFloat strokeStart;


+(Class)_mapkitLeafClass;
-(BOOL)_canProvideVectorGeometry;
-(BOOL)overlayCanProvideVectorData:(id)arg0 ;
-(id)_vectorGeometry;
-(id)initWithPolyline:(id)arg0 ;
-(id)vectorDataForOverlay:(id)arg0 ;
-(void)_performInitialConfiguration;
-(void)_setNeedsVectorGeometryUpdate;
-(void)_updateRenderColors;
-(void)_updateVectorGeometry:(id)arg0 ;
-(void)createPath;
-(void)drawMapRect:(struct ? )arg0 zoomScale:(CGFloat)arg1 inContext:(struct CGContext *)arg2 ;
-(void)setAlpha:(CGFloat)arg0 ;
-(void)setLineCap:(int)arg0 ;
-(void)setLineJoin:(int)arg0 ;
-(void)setLineWidth:(CGFloat)arg0 ;
-(void)setMiterLimit:(CGFloat)arg0 ;
-(void)setStrokeColor:(id)arg0 ;


@end


#endif