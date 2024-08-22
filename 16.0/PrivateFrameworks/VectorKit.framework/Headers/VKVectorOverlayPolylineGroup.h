// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VKVECTOROVERLAYPOLYLINEGROUP_H
#define VKVECTOROVERLAYPOLYLINEGROUP_H

@class NSArray;


#import "VKVectorOverlayData.h"

@interface VKVectorOverlayPolylineGroup : VKVectorOverlayData {
    *CGColor _color;
    CGFloat _lineWidth;
    CGFloat _alpha;
    NSInteger _lineJoin;
    NSInteger _lineCap;
    CGFloat _miterLimit;
    CGFloat _strokeStart;
    CGFloat _strokeEnd;
    unfair_lock _propertiesLock;
}


@property (nonatomic) CGFloat alpha;
@property (nonatomic) *CGColor color;
@property (nonatomic) NSInteger lineCap;
@property (nonatomic) NSInteger lineJoin;
@property (nonatomic) CGFloat lineWidth;
@property (nonatomic) CGFloat miterLimit;
@property (readonly, nonatomic) NSArray *polylines; // ivar: _polylines
@property (nonatomic) CGFloat strokeEnd;
@property (nonatomic) CGFloat strokeStart;
@property (readonly, nonatomic) shared_ptr<md::PolylineOverlayStyle> style; // ivar: _style


-(id)initWithPolylines:(id)arg0 ;
-(void)_updateStyleColor;
-(void)dealloc;
-(void)setBlendMode:(NSInteger)arg0 ;


@end


#endif