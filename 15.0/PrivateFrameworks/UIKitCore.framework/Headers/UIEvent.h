// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIEVENT_H
#define UIEVENT_H

@class NSMutableSet, BKSHIDEventAuthenticationMessage, NSDictionary, NSSet;

#import <Foundation/Foundation.h>

#import "UIScreen.h"
#import "UIEventEnvironment.h"

@interface UIEvent : NSObject {
    *__GSEvent _gsEvent;
    *__IOHIDEvent _hidEvent;
    BOOL _hasValidModifiers;
    NSInteger _mzModifierFlags;
    NSUInteger _mzClickCount;
    NSInteger _buttonMask;
    UIScreen *_cachedScreen;
    NSMutableSet *_eventObservers;
    UIEventEnvironment *_eventEnvironment;
}


@property (readonly, nonatomic) BKSHIDEventAuthenticationMessage *_authenticationMessage;
@property (readonly, nonatomic) NSDictionary *_authenticationMessages;
@property (readonly, nonatomic) CGFloat _initialTouchTimestamp; // ivar: __initialTouchTimestamp
@property (readonly, nonatomic) NSUInteger _inputPrecision;
@property (readonly, nonatomic) NSSet *allTouches;
@property (readonly, nonatomic) NSInteger buttonMask;
@property (readonly, nonatomic) NSInteger modifierFlags;
@property (readonly, nonatomic) NSInteger subtype;
@property (nonatomic, setter=_setTimestamp:) CGFloat timestamp; // ivar: _timestamp
@property (readonly, nonatomic, getter=_trackpadFingerDownCount) NSInteger trackpadFingerDownCount; // ivar: _trackpadFingerDownCount
@property (readonly, nonatomic) NSInteger type;


+(NSUInteger)_inputPrecisionForTouches:(id)arg0 ;
-(BOOL)_consumeBeforeDeliveryToGestureRecognizers:(id)arg0 inWindow:(id)arg1 ;
-(BOOL)_isKeyDown;
-(BOOL)_isPhysicalKeyEvent;
-(BOOL)_isTouchRoutingPolicyBased;
-(BOOL)_sendEventToGestureRecognizer:(id)arg0 ;
-(CGFloat)_wheelVelocity;
-(NSInteger)_keyModifierFlags;
-(NSInteger)_moveDirection;
-(NSUInteger)_clickCount;
-(NSUInteger)_focusHeading;
-(id)_cloneEvent;
-(id)_gestureRecognizersForWindow:(id)arg0 ;
-(id)_init;
-(id)_initWithEnvironment:(id)arg0 ;
-(id)_initWithEvent:(struct __GSEvent *)arg0 touches:(id)arg1 ;
-(id)_modifiedInput;
-(id)_screen;
-(id)_touchesForGestureRecognizer:(id)arg0 ;
-(id)_triggeringPhysicalButton;
-(id)_unmodifiedInput;
-(id)_windows;
-(id)coalescedTouchesForTouch:(id)arg0 ;
-(id)predictedTouchesForTouch:(id)arg0 ;
-(id)touchesForGestureRecognizer:(id)arg0 ;
-(id)touchesForView:(id)arg0 ;
-(id)touchesForWindow:(id)arg0 ;
-(int)_shakeState;
-(struct CGPoint )_digitizerLocation;
-(struct __GSEvent *)_gsEvent;
-(struct __IOHIDEvent *)_hidEvent;
-(void)_cleanupAfterDispatch;
-(void)_gestureRecognizerNoLongerNeedsSendEvent:(id)arg0 ;
-(void)_sendEventToResponder:(id)arg0 ;
-(void)_setGSEvent:(struct __GSEvent *)arg0 ;
-(void)_setHIDEvent:(struct __IOHIDEvent *)arg0 ;
-(void)_wasDeliveredToGestureRecognizers;
-(void)dealloc;


@end


#endif