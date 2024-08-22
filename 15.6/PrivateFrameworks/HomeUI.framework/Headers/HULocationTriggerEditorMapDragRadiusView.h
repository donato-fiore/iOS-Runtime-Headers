// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HULOCATIONTRIGGEREDITORMAPDRAGRADIUSVIEW_H
#define HULOCATIONTRIGGEREDITORMAPDRAGRADIUSVIEW_H

@class UIView, MKMapView, NSMeasurementFormatter, CAShapeLayer;
@protocol MKAnnotation, HULocationTriggerEditorMapDragRadiusViewDelegate, MKOverlay;



@interface HULocationTriggerEditorMapDragRadiusView : UIView

@property (retain, nonatomic) NSObject<MKAnnotation> *annotation; // ivar: _annotation
@property (weak, nonatomic) NSObject<HULocationTriggerEditorMapDragRadiusViewDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) UIView *handleEndpointView; // ivar: _handleEndpointView
@property (nonatomic) BOOL isDragging; // ivar: _isDragging
@property (nonatomic) BOOL isMaximum; // ivar: _isMaximum
@property (nonatomic) BOOL isMinimum; // ivar: _isMinimum
@property (retain, nonatomic) MKMapView *mapView; // ivar: _mapView
@property (retain, nonatomic) NSMeasurementFormatter *measurmentFormatter; // ivar: _measurmentFormatter
@property (retain, nonatomic) NSObject<MKOverlay> *overlay; // ivar: _overlay
@property (nonatomic) NSUInteger proximity; // ivar: _proximity
@property (retain, nonatomic) CAShapeLayer *shapeLayer; // ivar: _shapeLayer


-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)usesMetric;
-(CGFloat)currentHandleDistance;
-(CGFloat)currentHandleDistanceNormalized;
-(CGFloat)feetToMeters:(CGFloat)arg0 ;
-(CGFloat)maximumRadiusNormalized;
-(CGFloat)minimumInMeters;
-(CGFloat)minimumRadiusNormalized;
-(id)bezierPathWithEndPoint:(struct CGPoint )arg0 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)shapeLayerWithEndPoint:(struct CGPoint )arg0 ;
-(struct CGPoint )center;
-(struct CGPoint )maxPoint;
-(struct CGPoint )minPoint;
-(void)addHandleForAnnotation:(id)arg0 withOverlay:(id)arg1 ;
-(void)animateHandleIn:(BOOL)arg0 ;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)popAnimateHandle;
-(void)removeHandle:(BOOL)arg0 ;
-(void)resizeCircleAfterDelay;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif