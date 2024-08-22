// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _GRADIENTPOLYLINERENDERER_H
#define _GRADIENTPOLYLINERENDERER_H

@class MKOverlayPathRenderer;


#import "HKRouteMapGenerator.h"

@interface _GradientPolylineRenderer : MKOverlayPathRenderer {
    HKRouteMapGenerator *_generator;
}




-(BOOL)canDrawMapRect:(struct ? )arg0 zoomScale:(CGFloat)arg1 ;
-(id)initWithOverlay:(id)arg0 locationReadings:(id)arg1 ;
-(struct ? )_originMapPoint;
-(void)drawMapRect:(struct ? )arg0 zoomScale:(CGFloat)arg1 inContext:(struct CGContext *)arg2 ;


@end


#endif