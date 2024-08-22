// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKPOLYGONRENDERER_H
#define MKPOLYGONRENDERER_H

@class VKVectorOverlayPolygonGroup;


#import "MKOverlayPathRenderer.h"
#import "MKPolygon.h"

@interface MKPolygonRenderer : MKOverlayPathRenderer {
    VKVectorOverlayPolygonGroup *_vectorData;
    CGFloat _strokeStart;
    CGFloat _strokeEnd;
}


@property (readonly, nonatomic) MKPolygon *polygon;
@property (nonatomic) CGFloat strokeEnd;
@property (nonatomic) CGFloat strokeStart;


+(Class)_mapkitLeafClass;
-(BOOL)_canProvideVectorGeometry;
-(BOOL)overlayCanProvideVectorData:(id)arg0 ;
-(id)_vectorGeometry;
-(id)initWithPolygon:(id)arg0 ;
-(id)vectorDataForOverlay:(id)arg0 ;
-(void)_performInitialConfiguration;
-(void)_updateRenderColors;
-(void)createPath;
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