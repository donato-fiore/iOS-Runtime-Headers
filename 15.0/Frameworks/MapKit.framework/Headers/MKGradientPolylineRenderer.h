// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MKGRADIENTPOLYLINERENDERER_H
#define MKGRADIENTPOLYLINERENDERER_H

@class NSArray;


#import "MKPolylineRenderer.h"

@interface MKGradientPolylineRenderer : MKPolylineRenderer {
    NSArray *_colors;
    NSArray *_externallySetColors;
    NSArray *_locations;
    NSArray *_externallySetLocations;
}


@property (readonly, copy, nonatomic) NSArray *colors;
@property (readonly, copy, nonatomic) NSArray *locations;


+(Class)_mapkitLeafClass;
-(BOOL)_canProvideVectorGeometry;
-(void)_updateColorStops;
-(void)_updateVectorGeometry:(id)arg0 ;
-(void)drawMapRect:(struct ? )arg0 zoomScale:(CGFloat)arg1 inContext:(struct CGContext *)arg2 ;


@end


#endif