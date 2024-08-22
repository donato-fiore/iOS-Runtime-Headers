// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKRICHCOMPLICATIONDIALVIEW_H
#define NTKRICHCOMPLICATIONDIALVIEW_H

@class UIView, CAReplicatorLayer, CALayer;



@interface NTKRichComplicationDialView : UIView {
    CAReplicatorLayer *_largeTicksReplicatorLayer;
    CGFloat _largeTickPositionY;
    CAReplicatorLayer *_smallTicksReplicatorLayer;
    CGFloat _smallTickPositionY;
    NSInteger _largeTickCount;
    NSInteger _smallTickCountPerLargeTick;
    CGFloat _largeTicksTransformAngle;
}


@property (readonly, nonatomic) CALayer *largeTickLayer; // ivar: _largeTickLayer
@property (nonatomic) float progress; // ivar: _progress
@property (nonatomic) float progressDirection; // ivar: _progressDirection
@property (readonly, nonatomic) CALayer *smallTickLayer; // ivar: _smallTickLayer


-(id)initWithLargeTickCount:(NSInteger)arg0 smallTickCountPerLargeTick:(NSInteger)arg1 largeTickSize:(struct CGSize )arg2 smallTickSize:(struct CGSize )arg3 dialRange:(CGFloat)arg4 startAngle:(CGFloat)arg5 ;
-(id)initWithTickCount:(NSInteger)arg0 tickSize:(struct CGSize )arg1 dialRange:(CGFloat)arg2 startAngle:(CGFloat)arg3 ;
-(void)_updateTicksRotationTransform;
-(void)layoutSubviews;
-(void)setLargeTicksTransformAngle:(CGFloat)arg0 ;


@end


#endif