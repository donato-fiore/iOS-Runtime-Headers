// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MKCIRCLERENDERER_H
#define MKCIRCLERENDERER_H

@class VKVectorOverlayCircle;


#import "MKOverlayPathRenderer.h"
#import "MKCircle.h"

@interface MKCircleRenderer : MKOverlayPathRenderer {
    VKVectorOverlayCircle *_vectorData;
    CGFloat _strokeStart;
    CGFloat _strokeEnd;
}


@property (readonly, nonatomic) MKCircle *circle;
@property (nonatomic) CGFloat strokeEnd;
@property (nonatomic) CGFloat strokeStart;


+(Class)_mapkitLeafClass;
-(BOOL)_canProvideVectorGeometry;
-(BOOL)overlayCanProvideVectorData:(id)arg0 ;
-(id)_vectorData;
-(id)initWithCircle:(id)arg0 ;
-(id)vectorDataForOverlay:(id)arg0 ;
-(void)_performInitialConfiguration;
-(void)_updateRenderColors;
-(void)createPath;
-(void)setAlpha:(CGFloat)arg0 ;
-(void)setFillColor:(id)arg0 ;
-(void)setLineWidth:(CGFloat)arg0 ;
-(void)setStrokeColor:(id)arg0 ;
-(void)strokePath:(struct CGPath *)arg0 inContext:(struct CGContext *)arg1 ;


@end


#endif