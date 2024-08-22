// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKMULTIPOLYGONRENDERER_H
#define MKMULTIPOLYGONRENDERER_H

@class VKVectorOverlayPolygonGroup;


#import "MKOverlayPathRenderer.h"
#import "MKMultiPolygon.h"

@interface MKMultiPolygonRenderer : MKOverlayPathRenderer {
    ? _paths;
    NSUInteger _pathsCount;
    VKVectorOverlayPolygonGroup *_vectorData;
    CGFloat _strokeStart;
    CGFloat _strokeEnd;
}


@property (readonly, nonatomic) MKMultiPolygon *multiPolygon;
@property (nonatomic, getter=_strokeEnd, setter=_setStrokeEnd:) CGFloat strokeEnd;
@property (nonatomic, getter=_strokeStart, setter=_setStrokeStart:) CGFloat strokeStart;


+(Class)_mapkitLeafClass;
-(BOOL)_canProvideVectorGeometry;
-(BOOL)overlayCanProvideVectorData:(id)arg0 ;
-(id)_vectorGeometry;
-(id)initWithMultiPolygon:(id)arg0 ;
-(id)vectorDataForOverlay:(id)arg0 ;
-(void)_performInitialConfiguration;
-(void)_updateRenderColors;
-(void)createPath;
-(void)dealloc;
-(void)fillPath:(struct CGPath *)arg0 inContext:(struct CGContext *)arg1 ;
-(void)setAlpha:(CGFloat)arg0 ;
-(void)setFillColor:(id)arg0 ;
-(void)setLineJoin:(int)arg0 ;
-(void)setLineWidth:(CGFloat)arg0 ;
-(void)setMiterLimit:(CGFloat)arg0 ;
-(void)setStrokeColor:(id)arg0 ;
-(void)strokePath:(struct CGPath *)arg0 inContext:(struct CGContext *)arg1 ;


@end


#endif