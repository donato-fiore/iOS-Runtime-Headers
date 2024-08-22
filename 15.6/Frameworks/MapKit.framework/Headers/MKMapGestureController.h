// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKMAPGESTURECONTROLLER_H
#define MKMAPGESTURECONTROLLER_H

@class UIPanGestureRecognizer, _UIInterruptScrollDecelerationGestureRecognizer, VKTimedAnimation, VKDynamicAnimation, VKCompoundAnimation, UITraitCollection, NSString, UITapGestureRecognizer, UIGestureRecognizer, UIPinchGestureRecognizer, UIRotationGestureRecognizer, UILongPressGestureRecognizer;
@protocol MKVariableDelayTapRecognizerDelegate, _MKUserInteractionGestureRecognizerTouchObserver, UIGestureRecognizerDelegate, MKMapGestureControllerDelegate;

#import <Foundation/Foundation.h>

#import "_MKOneHandedZoomGestureRecognizer.h"
#import "_MKZoomingGestureControlConfiguration.h"
#import "_MKConditionalPanRotationGestureRecognizer.h"
#import "_MKConditionalPanZoomGestureRecognizer.h"
#import "_MKConditionalPanTiltGestureRecognizer.h"
#import "_MKDirectionalArrowRecognizer.h"
#import "_MKUserInteractionGestureRecognizer.h"
#import "MKTiltGestureRecognizer.h"
#import "MKCompassView.h"
#import "MKBasicMapView.h"
#import "MKRotationFilter.h"
#import "MKScaleView.h"

@interface MKMapGestureController : NSObject <MKVariableDelayTapRecognizerDelegate, _MKUserInteractionGestureRecognizerTouchObserver, UIGestureRecognizerDelegate>

 {
    _MKOneHandedZoomGestureRecognizer *_oneHandedZoomGestureRecognizer;
    _MKZoomingGestureControlConfiguration *_zoomConfiguration;
    CGPoint _panRotateStartPoint;
    CGPoint _panZoomStartPoint;
    UIPanGestureRecognizer *_scaleDragGestureRecognizer;
    _MKConditionalPanRotationGestureRecognizer *_conditionalPanRotationGestureRecognizer;
    _MKConditionalPanZoomGestureRecognizer *_conditionalPanZoomGestureRecognizer;
    _MKConditionalPanTiltGestureRecognizer *_conditionalPanTiltGestureRecognizer;
    _UIInterruptScrollDecelerationGestureRecognizer *_gestureInterruptionRecognizer;
    _MKDirectionalArrowRecognizer *_activeArrowGestureRecognizer;
    _MKDirectionalArrowRecognizer *_arrowZoomGestureRecognizer;
    _MKDirectionalArrowRecognizer *_arrowRotateGestureRecognizer;
    _MKDirectionalArrowRecognizer *_arrowPanGestureRecognizer;
    VKTimedAnimation *_currentArrowAnimation;
    CGFloat _arrowZoomSpeed;
    CGFloat _arrowZoomStartTimestamp;
    CGFloat _pinchFactorAverageInGesture;
    CGFloat _lastPinchUpdateTimestamp;
    CGFloat _lastScale;
    VKDynamicAnimation *_pinchDecelerationAnimation;
    VKCompoundAnimation *_panDecelerationAnimationGroup;
    NSInteger _gestureCount;
    _MKUserInteractionGestureRecognizer *_touchGestureRecognizer;
    VKDynamicAnimation *_rotationDecelerationAnimation;
    MKTiltGestureRecognizer *_tiltGestureRecognizer;
    VKDynamicAnimation *_tiltDecelerationAnimation;
    BOOL _didStartLongPress;
    BOOL _isPanning;
    BOOL _isPinching;
    UITraitCollection *_traitCollection;
    CGFloat _lastZoomPanTranslation;
    CGPoint _scrollTranslation;
    CGPoint _lastArrowScrollTranslationDelta;
    BOOL _isFullRotatingFromArrows;
    CGFloat _lastRotationInGestureDelta;
    CGFloat _lastRotation;
}


@property (retain, nonatomic) MKCompassView *compassView; // ivar: _compassView
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MKMapGestureControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UITapGestureRecognizer *doubleTapGestureRecognizer; // ivar: _doubleTapGestureRecognizer
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) MKBasicMapView *mapView; // ivar: _mapView
@property (readonly, nonatomic) UIGestureRecognizer *oneHandedZoomGestureRecognizer;
@property (readonly, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // ivar: _panGestureRecognizer
@property (nonatomic) BOOL panWithMomentum; // ivar: _panWithMomentum
@property (readonly, nonatomic) UIPinchGestureRecognizer *pinchGestureRecognizer; // ivar: _pinchGestureRecognizer
@property (nonatomic, getter=isRotationEnabled) BOOL rotationEnabled;
@property (retain, nonatomic) MKRotationFilter *rotationFilter; // ivar: _rotationFilter
@property (readonly, nonatomic) UIRotationGestureRecognizer *rotationGestureRecognizer; // ivar: _rotationGestureRecognizer
@property (nonatomic) BOOL rotationSnappingEnabled; // ivar: _rotationSnappingEnabled
@property (retain, nonatomic) MKScaleView *scaleView; // ivar: _scaleView
@property (nonatomic, getter=isScrollEnabled) BOOL scrollEnabled;
@property (readonly) Class superclass;
@property (nonatomic, getter=isTiltEnabled) BOOL tiltEnabled;
@property (readonly, nonatomic) UILongPressGestureRecognizer *twoFingerLongPressGestureRecognizer; // ivar: _twoFingerLongPressGestureRecognizer
@property (readonly, nonatomic) UITapGestureRecognizer *twoFingerTapGestureRecognizer; // ivar: _twoFingerTapGestureRecognizer
@property (nonatomic, getter=isZoomEnabled) BOOL zoomEnabled;


-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)keyDown:(id)arg0 ;
-(BOOL)keyUp:(id)arg0 ;
-(BOOL)tiltGestureRecognizerShouldBegin:(id)arg0 ;
-(CGFloat)variableDelayTapRecognizer:(id)arg0 shouldWaitForNextTapForDuration:(CGFloat)arg1 afterTouch:(id)arg2 ;
-(id)initWithMapView:(id)arg0 gestureTargetView:(id)arg1 ;
-(id)initWithMapView:(id)arg0 gestureTargetView:(id)arg1 doubleTapTargetView:(id)arg2 ;
-(struct CGPoint )_snapPointToDevicePixels:(struct CGPoint )arg0 ;
-(void)_clearGesture:(id)arg0 ;
-(void)_handleInterrupt:(id)arg0 ;
-(void)_handleRotationPan:(id)arg0 ;
-(void)_handleStandardTilt:(id)arg0 ;
-(void)_handleZoomPan:(id)arg0 ;
-(void)_setOneHandedZoomGestureConfiguration:(id)arg0 ;
-(void)_setTraitCollection:(id)arg0 ;
-(void)_updateRotationGestureForState:(NSInteger)arg0 focusPoint:(struct CGPoint )arg1 rotation:(CGFloat)arg2 velocity:(CGFloat)arg3 ;
-(void)_updateZoomGestureForState:(NSInteger)arg0 focusPoint:(struct CGPoint )arg1 scale:(CGFloat)arg2 velocity:(CGFloat)arg3 gestureType:(NSInteger)arg4 configuration:(id)arg5 ;
-(void)beginGesturing;
-(void)cancelZoomInOrOut;
-(void)clearGestureRecognizersInFlight;
-(void)dealloc;
-(void)endGesturing;
-(void)gestureRecognizerTouchesBegan:(id)arg0 ;
-(void)gestureRecognizerTouchesCanceled:(id)arg0 ;
-(void)gestureRecognizerTouchesEnded:(id)arg0 ;
-(void)handleArrowPan:(id)arg0 ;
-(void)handleArrowRotate:(id)arg0 ;
-(void)handleArrowZoom:(id)arg0 ;
-(void)handleDoubleTap:(id)arg0 ;
-(void)handlePan:(id)arg0 ;
-(void)handlePanZoom:(id)arg0 ;
-(void)handlePinch:(id)arg0 ;
-(void)handleRotation:(id)arg0 ;
-(void)handleTilt:(id)arg0 ;
-(void)handleTouch:(id)arg0 ;
-(void)handleTwoFingerLongPress:(id)arg0 ;
-(void)handleTwoFingerTap:(id)arg0 ;
-(void)handleZoomArrowMask:(NSInteger)arg0 speed:(CGFloat)arg1 ;
-(void)startUserInteractionFromExternalGesture;
-(void)stopDynamicAnimations;
-(void)stopUserInteractionFromExternalGesture;
-(void)zoomIn;
-(void)zoomOut;


@end


#endif