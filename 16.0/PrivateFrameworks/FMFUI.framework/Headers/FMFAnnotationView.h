// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FMFANNOTATIONVIEW_H
#define FMFANNOTATIONVIEW_H

@class FMAnnotationView, CAShapeLayer;



@interface FMFAnnotationView : FMAnnotationView

@property (retain, nonatomic) CAShapeLayer *accuracyLayer; // ivar: _accuracyLayer
@property (nonatomic) BOOL isLiveAnimated;
@property (retain, nonatomic) CAShapeLayer *largePulseLayer; // ivar: _largePulseLayer
@property (nonatomic) CGFloat lastAccuracyRadius; // ivar: _lastAccuracyRadius
@property (retain, nonatomic) CAShapeLayer *smallPulseLayer; // ivar: _smallPulseLayer


-(id)buildAccuracyLayer;
-(id)buildPulseLayerWithDiameter:(CGFloat)arg0 centeredInParentLayer:(id)arg1 ;
-(id)initWithAnnotation:(id)arg0 reuseIdentifier:(id)arg1 tintColor:(id)arg2 ;
-(void)startLiveAnimation;
-(void)stopLiveAnimation;
-(void)updateWithLocation:(id)arg0 ;


@end


#endif