// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VKVECTOROVERLAYCIRCLE_H
#define VKVECTOROVERLAYCIRCLE_H



#import "VKVectorOverlayData.h"

@interface VKVectorOverlayCircle : VKVectorOverlayData {
    ? _mapRect;
    Box<double, 2> _bounds;
    *CGColor _fillColor;
    *CGColor _strokeColor;
    CGFloat _lineWidth;
    CGFloat _alpha;
    unfair_lock _propertiesLock;
    shared_ptr<md::CircleOverlayRenderable::Style> _style;
}


@property (nonatomic) CGFloat alpha;
@property ? bounds;
@property (nonatomic) *CGColor fillColor;
@property (nonatomic) CGFloat lineWidth;
@property (readonly, nonatomic, getter=_renderable) shared_ptr<md::CircleOverlayRenderable> renderable; // ivar: _renderable
@property (nonatomic) *CGColor strokeColor;


-(id)initWithMapRect:(struct ? )arg0 lineWidth:(CGFloat)arg1 fillColor:(struct CGColor *)arg2 strokeColor:(struct CGColor *)arg3 alpha:(CGFloat)arg4 ;


@end


#endif