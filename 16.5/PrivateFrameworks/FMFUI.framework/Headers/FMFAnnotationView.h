// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FMFANNOTATIONVIEW_H
#define FMFANNOTATIONVIEW_H

@class FMAnnotationView, CAShapeLayer, CALayer;



@interface FMFAnnotationView : FMAnnotationView

@property (retain, nonatomic) CAShapeLayer *accuracyLayer; // ivar: _accuracyLayer
@property (nonatomic) BOOL isLiveAnimated;
@property (retain, nonatomic) CAShapeLayer *largePulseLayer; // ivar: _largePulseLayer
@property (nonatomic) CGFloat lastAccuracyRadius; // ivar: _lastAccuracyRadius
@property (retain, nonatomic) CAShapeLayer *smallPulseLayer; // ivar: _smallPulseLayer
@property (retain, nonatomic) CALayer *stewieLargeBadgeLayer; // ivar: _stewieLargeBadgeLayer
@property (retain, nonatomic) CALayer *stewieSmallBadgeLayer; // ivar: _stewieSmallBadgeLayer


-(id)buildAccuracyLayer;
-(id)buildPulseLayerWithDiameter:(CGFloat)arg0 centeredInParentLayer:(id)arg1 ;
-(id)buildStewieLayerWithDiameter:(CGFloat)arg0 image:(id)arg1 size:(struct CGSize )arg2 offsetInParentLayer:(id)arg3 by:(struct CGPoint )arg4 ;
-(id)initWithAnnotation:(id)arg0 reuseIdentifier:(id)arg1 tintColor:(id)arg2 ;
-(void)startLiveAnimation;
-(void)stopLiveAnimation;
-(void)updateWithLocation:(id)arg0 ;


@end


#endif