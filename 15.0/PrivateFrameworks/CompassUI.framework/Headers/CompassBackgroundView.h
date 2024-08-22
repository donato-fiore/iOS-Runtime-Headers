// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef COMPASSBACKGROUNDVIEW_H
#define COMPASSBACKGROUNDVIEW_H

@class CALayer, CAReplicatorLayer, CAShapeLayer;


#import "CompassRotatingView.h"

@interface CompassBackgroundView : CompassRotatingView {
    CGPoint _compassCenter;
    CALayer *_staticLayer;
    CALayer *_rotatingLayer;
    CAReplicatorLayer *_smallCompassTicLayers;
    CAReplicatorLayer *_largeCompassTicLayers;
    CALayer *_prototypeSmallTicLayer;
    CALayer *_prototypeLargeTicLayer;
    CALayer *_bearingLayer;
    CALayer *_currentHeadingLayer;
    CAShapeLayer *_crosshairLayer;
    CALayer *_bubbleLayer;
    CGFloat _bearingLength;
    CGFloat _currentHeadingLength;
    BOOL _shownInCompass;
    CGPoint _currentOffset;
}


@property (nonatomic) CGFloat bearing; // ivar: _bearing
@property (readonly, nonatomic) CGFloat ticLength; // ivar: _ticLength
@property (nonatomic) CGFloat ticRadius; // ivar: _ticRadius


-(BOOL)setCrosshairOffset:(struct CGSize )arg0 ;
-(id)_crosshairLayerWithBounds:(struct CGRect )arg0 ;
-(id)_crosshairPathInRect:(struct CGRect )arg0 ;
-(id)bubbleLayer;
-(id)crosshairLayer;
-(id)currentHeadingLayer;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 forCompass:(BOOL)arg1 ;
-(id)largeCompassTicLayers;
-(id)prototypeLargeTicLayer;
-(id)prototypeSmallTicLayer;
-(id)rotatingLayer;
-(id)smallCompassTicLayers;
-(id)staticLayer;
-(void)layoutSubviews;
-(void)setCompassHeading:(CGFloat)arg0 ;


@end


#endif