// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UISCROLLEVENT_H
#define UISCROLLEVENT_H

@class NSMapTable, BKSHIDEventPointerAttributes, NSMutableSet;
@protocol _UIScrollEventAsyncDeliveryTarget;


#import "UIEvent.h"
#import "UIGestureRecognizer.h"

@interface UIScrollEvent : UIEvent {
    NSMapTable *_gestureRecognizersByWindow;
    CGPoint _sceneReferenceLocation;
    NSUInteger _lastDeliveredPhase;
    NSUInteger _lastReceivedPhase;
    BKSHIDEventPointerAttributes *_pointerAttributes;
    id<_UIScrollEventAsyncDeliveryTarget> *_asyncDeliveryTarget;
    UIGestureRecognizer *_asyncDeliveryGesture;
    BOOL _isDoingAsyncDelivery;
    BOOL _isCloneForAsyncDelivery;
    NSMutableSet *_outstandingSnapshotEventsForAsyncDelivery;
    BOOL _isStiflingDeltas;
    BOOL _hasSimulatedMomentumDelta;
    CGVector _simulatedMomentumDelta;
}


@property (readonly) CGVector acceleratedDelta;
@property (readonly, nonatomic, getter=_beganScrollTimestamp) CGFloat beganScrollTimestamp;
@property (readonly) BOOL directionInvertedFromDevice;
@property (readonly, nonatomic, getter=_isHighResolution) BOOL highResolution;
@property (readonly) CGVector nonAcceleratedDelta;
@property (readonly) NSUInteger phase; // ivar: _phase
@property (readonly, nonatomic, getter=_scrollDeviceCategory) NSUInteger scrollDeviceCategory;
@property (readonly, nonatomic, getter=_scrollType) NSUInteger scrollType;
@property (readonly, nonatomic, getter=_stifledDelta) CGVector stifledDelta; // ivar: _stifledDelta


-(BOOL)_consumeBeforeDeliveryToGestureRecognizers:(id)arg0 inWindow:(id)arg1 ;
-(BOOL)_hasDeliveredTerminalPhase;
-(BOOL)_sendEventToGestureRecognizer:(id)arg0 ;
-(BOOL)_shouldSendEvent;
-(NSInteger)subtype;
-(NSInteger)type;
-(id)_cloneEvent;
-(id)_gestureRecognizersForWindow:(id)arg0 ;
-(id)_init;
-(id)_initWithEvent:(struct __GSEvent *)arg0 touches:(id)arg1 ;
-(id)_windowServerHitTestWindow;
-(id)_windows;
-(struct CGPoint )_convertPointFromSceneReferenceSpace:(struct CGPoint )arg0 toView:(id)arg1 ;
-(struct CGPoint )_convertPointToSceneReferenceSpace:(struct CGPoint )arg0 fromView:(id)arg1 ;
-(struct CGPoint )locationInView:(id)arg0 ;
-(struct CGVector )_adjustedAcceleratedDeltaInView:(id)arg0 ;
-(struct CGVector )_adjustedDeltaForPanWithAcceleration:(BOOL)arg0 honoringScrollDirectionPreference:(BOOL)arg1 ;
-(struct CGVector )_convertDeltaFromHIDDeviceSpaceToSceneReferenceSpaceIfNeeded:(struct CGVector )arg0 ;
-(void)_beginStiflingDeltas;
-(void)_cleanupAfterDispatch;
-(void)_endStiflingDeltas;
-(void)_removeGestureRecognizer:(id)arg0 ;
-(void)_removeGestureRecognizersFromWindows;
-(void)_sendCancelToGestureRecognizer:(id)arg0 ;
-(void)_setHIDEvent:(struct __IOHIDEvent *)arg0 ;
-(void)_simulateMomentumWithDelta:(struct CGVector )arg0 inView:(id)arg1 ;
-(void)_wasDeliveredToGestureRecognizers;


@end


#endif