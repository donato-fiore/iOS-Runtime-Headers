// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MKMULTIPOLYLINERENDERER_H
#define MKMULTIPOLYLINERENDERER_H

@class VKVectorOverlayPolylineGroup;


#import "MKOverlayPathRenderer.h"
#import "MKMultiPolyline.h"

@interface MKMultiPolylineRenderer : MKOverlayPathRenderer {
    VKVectorOverlayPolylineGroup *_vectorGeometry;
    CGFloat _strokeStart;
    CGFloat _strokeEnd;
}


@property (readonly, nonatomic) MKMultiPolyline *multiPolyline;
@property (nonatomic, getter=_strokeEnd, setter=_setStrokeEnd:) CGFloat strokeEnd;
@property (nonatomic, getter=_strokeStart, setter=_setStrokeStart:) CGFloat strokeStart;


+(Class)_mapkitLeafClass;
-(BOOL)_canProvideVectorGeometry;
-(BOOL)overlayCanProvideVectorData:(id)arg0 ;
-(id)_vectorGeometry;
-(id)initWithMultiPolyline:(id)arg0 ;
-(id)vectorDataForOverlay:(id)arg0 ;
-(void)_performInitialConfiguration;
-(void)_updateRenderColors;
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