// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UITOUCH_H
#define UITOUCH_H

@class NSMutableArray, BKSHIDEventAuthenticationMessage, NSString, NSNumber, NSArray;
@protocol _UIResponderForwardable, _UIEventComponent, _UITouchPhaseChangeDelegate;

#import <Foundation/Foundation.h>

#import "UIWindow.h"
#import "UIView.h"
#import "_UITouchPredictor.h"
#import "UIResponder.h"

@interface UITouch : NSObject <_UIResponderForwardable, _UIEventComponent>

 {
    CGFloat _movementMagnitudeSquared;
    NSInteger _phase;
    NSUInteger _tapCount;
    NSUInteger _precision;
    unsigned int _touchIdentifier;
    UIWindow *_window;
    UIView *_view;
    UIView *_warpedIntoView;
    NSMutableArray *_gestureRecognizers;
    NSMutableArray *_forwardingRecord;
    CGPoint _locationInWindow;
    CGPoint _previousLocationInWindow;
    CGPoint _preciseLocationInWindow;
    CGPoint _precisePreviousLocationInWindow;
    CGFloat _previousPressure;
    CGFloat _pathMajorRadius;
    CGFloat _majorRadiusTolerance;
    CGFloat _maxObservedPressure;
    ? _touchFlags;
    _UITouchPredictor *_touchPredictor;
    BOOL _eaten;
    BOOL _needsForceUpdate;
    BOOL _hasForceUpdate;
    BOOL __expectedToBecomeDrag;
    NSInteger _forceCorrelationToken;
    CGFloat _maximumPossiblePressure;
    CGFloat _altitudeAngle;
    id<_UITouchPhaseChangeDelegate> *__phaseChangeDelegate;
    UIWindow *__windowServerHitTestWindow;
    CGFloat _azimuthAngleInCADisplay;
    CGFloat _azimuthAngleInWindow;
    CGSize _displacement;
}


@property (retain, nonatomic, setter=_setAuthenticationMessage:) BKSHIDEventAuthenticationMessage *_authenticationMessage; // ivar: __authenticationMessage
@property (nonatomic, setter=_setEdgeAim:) NSUInteger _edgeAim; // ivar: _edgeAim
@property (nonatomic, setter=_setEdgeType:) NSInteger _edgeType; // ivar: _edgeType
@property (nonatomic, setter=_setForceStage:) unsigned char _forceStage; // ivar: _forceStage
@property (nonatomic, setter=_setForwardablePhase:) NSInteger _forwardablePhase;
@property (nonatomic, setter=_setHidEvent:) *__IOHIDEvent _hidEvent; // ivar: _hidEvent
@property (nonatomic, setter=_setIsPointerTouch:) BOOL _isPointerTouch;
@property (nonatomic, setter=_setIsRestingTouch:) BOOL _isRestingTouch;
@property (nonatomic, setter=_setIsTapToClick:) BOOL _isTapToClick;
@property (nonatomic, setter=_setPathIdentity:) unsigned char _pathIdentity; // ivar: _pathIdentity
@property (nonatomic, setter=_setPathIndex:) NSInteger _pathIndex; // ivar: _pathIndex
@property (readonly, nonatomic) CGFloat _pressure; // ivar: _pressure
@property (retain, nonatomic, setter=_setResponder:) UIResponder *_responder;
@property (nonatomic, setter=_setSenderID:) NSUInteger _senderID; // ivar: _senderID
@property (nonatomic, setter=_setZGradient:) float _zGradient; // ivar: _zGradient
@property (readonly, nonatomic) CGFloat altitudeAngle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger estimatedProperties;
@property (readonly, nonatomic) NSInteger estimatedPropertiesExpectingUpdates;
@property (readonly, nonatomic) NSNumber *estimationUpdateIndex;
@property (readonly, nonatomic) CGFloat force;
@property (readonly, copy, nonatomic) NSArray *gestureRecognizers;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat initialTouchTimestamp; // ivar: _initialTouchTimestamp
@property (readonly, nonatomic) CGFloat majorRadius;
@property (readonly, nonatomic) CGFloat majorRadiusTolerance;
@property (readonly, nonatomic) CGFloat maximumPossibleForce;
@property (nonatomic) NSInteger phase;
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger tapCount;
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp
@property (nonatomic, setter=_setType:) NSInteger type; // ivar: _type
@property (retain, nonatomic) UIView *view;
@property (retain, nonatomic) UIWindow *window;


+(id)_createTouchesWithGSEvent:(struct __GSEvent *)arg0 phase:(NSInteger)arg1 view:(id)arg2 ;
-(BOOL)_edgeForceActive;
-(BOOL)_edgeForcePending;
-(BOOL)_isAbandoningForwardingRecord;
-(BOOL)_isFirstTouchForView;
-(BOOL)_wantsForwardingFromResponder:(id)arg0 toNextResponder:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)isDelayed;
-(CGFloat)azimuthAngleInView:(id)arg0 ;
-(NSInteger)_compareIndex:(id)arg0 ;
-(NSInteger)info;
-(SEL)_responderSelectorForPhase:(NSInteger)arg0 ;
-(float)_pathMajorRadius;
-(id)_clone;
-(id)_forwardingRecord;
-(id)_mutableForwardingRecord;
-(struct CGPoint )_locationInSceneReferenceSpace;
-(struct CGPoint )_previousLocationInSceneReferenceSpace;
-(struct CGPoint )locationInView:(id)arg0 ;
-(struct CGPoint )preciseLocationInView:(id)arg0 ;
-(struct CGPoint )precisePreviousLocationInView:(id)arg0 ;
-(struct CGPoint )previousLocationInView:(id)arg0 ;
-(struct CGVector )azimuthUnitVectorInView:(id)arg0 ;
-(unsigned int)_touchIdentifier;
-(void)_abandonForwardingRecord;
-(void)_clearForReenteringHoverInWindow:(id)arg0 ;
-(void)_clearGestureRecognizers;
-(void)_clonePropertiesToTouch:(id)arg0 ;
-(void)_loadStateFromTouch:(id)arg0 ;
-(void)_setIsFirstTouchForView:(BOOL)arg0 ;
-(void)_setLocationInWindow:(struct CGPoint )arg0 resetPrevious:(BOOL)arg1 ;
-(void)_setPreviousTouch:(id)arg0 ;
-(void)dealloc;
-(void)setIsDelayed:(BOOL)arg0 ;


@end


#endif