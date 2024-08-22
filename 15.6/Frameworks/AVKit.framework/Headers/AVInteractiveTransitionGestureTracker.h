// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVINTERACTIVETRANSITIONGESTURETRACKER_H
#define AVINTERACTIVETRANSITIONGESTURETRACKER_H

@class UIPanGestureRecognizer, NSString, UIPinchGestureRecognizer, NSArray, UIRotationGestureRecognizer, UIView;
@protocol UIGestureRecognizerDelegate, AVTransitionDriver, AVTransitionDriverDelegate;

#import <Foundation/Foundation.h>


@interface AVInteractiveTransitionGestureTracker : NSObject <UIGestureRecognizerDelegate, AVTransitionDriver>



@property (nonatomic, setter=_setRotation:) CGFloat _rotation; // ivar: __rotation
@property (nonatomic) CGPoint anchorLocationInWindow; // ivar: _anchorLocationInWindow
@property (weak, nonatomic) UIPanGestureRecognizer *contentTransitioningViewGestureRecognizer; // ivar: _contentTransitioningViewGestureRecognizer
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (nonatomic) CGPoint gestureLocationAfterBoundsChange; // ivar: _gestureLocationAfterBoundsChange
@property (nonatomic) BOOL hasContinued; // ivar: _hasContinued
@property (nonatomic) BOOL hasRotated; // ivar: _hasRotated
@property (readonly) NSUInteger hash;
@property (nonatomic) CGRect initialCoordinateSpaceBounds; // ivar: _initialCoordinateSpaceBounds
@property (nonatomic) NSInteger initialInterfaceOrientation; // ivar: _initialInterfaceOrientation
@property (nonatomic) BOOL lastNonZeroVelocityWasDownward; // ivar: _lastNonZeroVelocityWasDownward
@property (nonatomic) CGPoint lastReportedLocationInWindow; // ivar: _lastReportedLocationInWindow
@property (readonly, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // ivar: _panGestureRecognizer
@property (nonatomic, getter=isPanToDismissEnabled) BOOL panToDismissEnabled; // ivar: _panToDismissEnabled
@property (readonly, nonatomic) UIPinchGestureRecognizer *pinchGestureRecognizer; // ivar: _pinchGestureRecognizer
@property (readonly, nonatomic) CGFloat pinchScale;
@property (nonatomic, getter=isPinchToDismissEnabled) BOOL pinchToDismissEnabled; // ivar: _pinchToDismissEnabled
@property (nonatomic, getter=isPinchToPresentEnabled) BOOL pinchToPresentEnabled; // ivar: _pinchToPresentEnabled
@property (readonly, nonatomic) CGFloat pinchVelocity;
@property (nonatomic) CGFloat previousPinchScale; // ivar: _previousPinchScale
@property (readonly, nonatomic) NSArray *recognizers; // ivar: _recognizers
@property (readonly, nonatomic) CGFloat rotation;
@property (readonly, nonatomic) UIRotationGestureRecognizer *rotationGestureRecognizer; // ivar: _rotationGestureRecognizer
@property (readonly, nonatomic) CGFloat rotationVelocity;
@property (readonly) Class superclass;
@property (nonatomic) CGFloat timestampOfTouchWithLocationChangeAfterBoundsChange; // ivar: _timestampOfTouchWithLocationChangeAfterBoundsChange
@property (weak, nonatomic) NSObject<AVTransitionDriverDelegate> *transitionDriverDelegate; // ivar: _transitionDriverDelegate
@property (nonatomic) NSInteger transitionInteraction; // ivar: _transitionInteraction
@property (weak, nonatomic) UIView *view; // ivar: _view
@property (nonatomic, getter=isWaitingForBoundsChange) BOOL waitingForBoundsChange; // ivar: _waitingForBoundsChange
@property (nonatomic, getter=isWaitingForLocationChangeAfterBoundsChange) BOOL waitingForLocationChangeAfterBoundsChange; // ivar: _waitingForLocationChangeAfterBoundsChange
@property (nonatomic, getter=isWaitingForTransition) BOOL waitingForTransition; // ivar: _waitingForTransition


-(BOOL)_isWaitingToContinue;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRequireFailureOfGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)isTracking;
-(BOOL)transitionDriver:(id)arg0 shouldRequireFailureOfGestureRecognizer:(id)arg1 ;
-(CGFloat)angleOfVelocityInWindow;
-(id)_locationRecognizer;
-(id)init;
-(struct CGPoint )_filteredUntranslatedLocationInWindow;
-(struct CGPoint )_untranslatedUnfilteredLocationInFixedCoordinateSpace;
-(struct CGPoint )locationInWindow;
-(struct CGPoint )translationInWindow;
-(struct CGPoint )velocityInWindow;
-(void)_beginTracking:(NSInteger)arg0 ;
-(void)_cancel;
-(void)_finish;
-(void)_handlePanGesture:(id)arg0 ;
-(void)_handlePinchGesture:(id)arg0 ;
-(void)_handleRotationGesture:(id)arg0 ;
-(void)_reset;
-(void)_resetGesturesIfPossible;
-(void)_updateLastNonZeroVelocityDirection;
-(void)addRecognizersToView:(id)arg0 ;
-(void)dealloc;
-(void)didMoveToView:(id)arg0 ;
-(void)willMoveToView:(id)arg0 ;


@end


#endif