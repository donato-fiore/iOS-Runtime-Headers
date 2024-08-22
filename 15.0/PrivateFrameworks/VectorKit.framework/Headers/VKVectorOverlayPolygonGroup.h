// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VKVECTOROVERLAYPOLYGONGROUP_H
#define VKVECTOROVERLAYPOLYGONGROUP_H

@class NSArray;


#import "VKVectorOverlayData.h"

@interface VKVectorOverlayPolygonGroup : VKVectorOverlayData {
    *CGColor _fillColor;
    *CGColor _strokeColor;
    CGFloat _lineWidth;
    NSInteger _lineJoin;
    CGFloat _miterLimit;
    CGFloat _alpha;
    CGFloat _strokeStart;
    CGFloat _strokeEnd;
    unfair_lock _propertiesLock;
}


@property (nonatomic) CGFloat alpha;
@property (nonatomic) *CGColor fillColor;
@property (nonatomic) NSInteger lineJoin;
@property (nonatomic) CGFloat lineWidth;
@property (nonatomic) CGFloat miterLimit;
@property (readonly, nonatomic) NSArray *polygons; // ivar: _polygons
@property (nonatomic) *CGColor strokeColor;
@property (nonatomic) CGFloat strokeEnd;
@property (nonatomic) CGFloat strokeStart;
@property (readonly, nonatomic, getter=_style) shared_ptr<md::PolygonOverlayRenderable::Style> style; // ivar: _style


-(id)initWithPolygons:(id)arg0 ;
-(void)_updateStyleColor;
-(void)dealloc;
-(void)setBlendMode:(NSInteger)arg0 ;


@end


#endif