// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIGESTURERECOGNIZER_H
#define UIGESTURERECOGNIZER_H

@class NSMutableArray, NSMutableSet, NSObservation, NSObservationSource, NSArray, NSString;
@protocol _UIForceLevelClassifierDelegate, _UIEventRespondable, _UIExcludable, _UITouchesEventRespondable, _UIPressesEventRespondable, _UIGestureOwning, UIGestureRecognizerDelegate;

#import <Foundation/Foundation.h>

#import "_UIForceLevelClassifier.h"
#import "_UITouchForceObservable.h"
#import "UIGestureEnvironment.h"
#import "UIView.h"

@interface UIGestureRecognizer : NSObject <_UIForceLevelClassifierDelegate, _UIEventRespondable, _UIExcludable, _UITouchesEventRespondable, _UIPressesEventRespondable>

 {
    ? _gestureFlags;
    NSMutableArray *_targets;
    NSMutableArray *_delayedTouches;
    NSMutableArray *_delayedPresses;
    id<_UIGestureOwning> *_owner;
    CGFloat _lastTouchTimestamp;
    CGFloat _firstEventTimestamp;
    NSInteger _state;
    NSInteger _allowedTouchTypes;
    NSInteger _initialTouchType;
    NSMutableSet *_internalActiveTouches;
    _UIForceLevelClassifier *_forceClassifier;
    NSInteger _requiredPreviewForceState;
    _UITouchForceObservable *_touchForceObservable;
    NSObservation *_touchForceObservableAndClassifierObservation;
    NSMutableArray *_forceTargets;
    NSUInteger _forcePressCount;
    NSObservationSource *_beganObservable;
    NSMutableSet *_failureRequirements;
    NSMutableSet *_failureDependents;
    NSMutableSet *_activeEvents;
    NSUInteger _inputPrecision;
    NSInteger _buttonMask;
    NSInteger _modifierFlags;
    BOOL _analyticsGestureHandled;
    UIGestureEnvironment *_gestureEnvironment;
}


@property (readonly, nonatomic) BOOL _hasUnmetFailureRequirements;
@property (readonly, nonatomic) BOOL _isTouchGestureRecognizer;
@property (nonatomic, setter=_setKeepTouchesOnContinuation:) BOOL _keepTouchesOnContinuation; // ivar: _keepTouchesOnContinuation
@property (readonly, nonatomic) NSMutableSet *_pairedGestureIdentifiers;
@property (nonatomic, setter=_setRecognitionEvent:) NSInteger _recognitionEvent;
@property (copy, nonatomic) NSArray *allowedPressTypes; // ivar: _allowedPressTypes
@property (copy, nonatomic) NSArray *allowedTouchTypes;
@property (readonly, nonatomic) NSInteger buttonMask;
@property (nonatomic) BOOL cancelsTouchesInView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL delaysTouchesBegan;
@property (nonatomic) BOOL delaysTouchesEnded;
@property (weak, nonatomic) NSObject<UIGestureRecognizerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat lastTouchTimestamp;
@property (readonly, nonatomic) NSInteger modifierFlags;
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSUInteger numberOfTouches;
@property (nonatomic) BOOL requiresExclusiveTouchType;
@property (nonatomic, getter=_requiresSystemGesturesToFail, setter=_setRequiresSystemGesturesToFail:) BOOL requiresSystemGesturesToFail;
@property (readonly, nonatomic) NSInteger state;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIView *view;


+(BOOL)_shouldDefaultToTouches;
+(BOOL)_shouldSupportStylusTouches;
+(BOOL)_shouldUseLinearForceLevelClassifier;
+(BOOL)_supportsTouchContinuation;
+(BOOL)supportsSecureCoding;
-(BOOL)_acceptsFailureRequirements;
-(BOOL)_affectedByGesture:(id)arg0 ;
-(BOOL)_analyticsIsGestureHandled;
-(BOOL)_canExcludeOtherExcludables;
-(BOOL)_isActive;
-(BOOL)_isDirty;
-(BOOL)_isExcludedByExcludable:(id)arg0 ;
-(BOOL)_isGestureType:(NSInteger)arg0 ;
-(BOOL)_isRecognized;
-(BOOL)_needsDynamicDependentRequirementForGestureRecognizer:(id)arg0 ;
-(BOOL)_needsDynamicFailureRequirementForGestureRecognizer:(id)arg0 ;
-(BOOL)_paused;
-(BOOL)_shouldBegin;
-(BOOL)_shouldDelayUntilForceLevelRequirementIsMet;
-(BOOL)_shouldReceiveEvent:(id)arg0 ;
-(BOOL)_shouldReceivePress:(id)arg0 ;
-(BOOL)_shouldReceivePress:(id)arg0 forPressesEvent:(id)arg1 ;
-(BOOL)_shouldReceiveTouch:(id)arg0 forEvent:(id)arg1 recognizerView:(id)arg2 ;
-(BOOL)_shouldReceiveTouch:(id)arg0 withEvent:(id)arg1 ;
-(BOOL)_wantsHoverEventsWhilePointerIsLocked;
-(BOOL)_wantsPartialTouchSequences;
-(BOOL)canBePreventedByGestureRecognizer:(id)arg0 ;
-(BOOL)canPreventGestureRecognizer:(id)arg0 ;
-(BOOL)shouldBeRequiredToFailByGestureRecognizer:(id)arg0 ;
-(BOOL)shouldReceiveEvent:(id)arg0 ;
-(BOOL)shouldRequireFailureOfGestureRecognizer:(id)arg0 ;
-(NSInteger)_currentForceLevel;
-(NSInteger)_defaultAllowedMouseButtons;
-(NSInteger)_depthFirstGestureOwnerCompare:(id)arg0 ;
-(NSInteger)_requiredForceLevel;
-(NSUInteger)_forcePressCount;
-(id)_activeEventOfType:(NSInteger)arg0 ;
-(id)_activeEvents;
-(id)_activeTouchesForEvent:(id)arg0 ;
-(id)_briefDescription;
-(id)_forceLevelClassifier;
-(id)_pairedGestureIdentifiersAndCreate:(BOOL)arg0 ;
-(id)_touchForceObservable;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTarget:(id)arg0 action:(SEL)arg1 ;
-(id)owner;
-(id)stringValue;
-(struct CGPoint )_convertPoint:(struct CGPoint )arg0 fromSceneReferenceCoordinatesToView:(id)arg1 ;
-(struct CGPoint )_convertPoint:(struct CGPoint )arg0 toSceneReferenceCoordinatesFromView:(id)arg1 ;
-(struct CGPoint )locationInView:(id)arg0 ;
-(struct CGPoint )locationOfTouch:(NSUInteger)arg0 inView:(id)arg1 ;
-(void)_addTouch:(id)arg0 forEvent:(id)arg1 ;
-(void)_appendSubclassDescription:(id)arg0 ;
-(void)_cancelRecognition;
-(void)_componentsBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)_componentsCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)_componentsChanged:(id)arg0 withEvent:(id)arg1 ;
-(void)_componentsEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)_connectInterfaceBuilderEventConnection:(id)arg0 ;
-(void)_exclude;
-(void)_forceLevelClassifier:(id)arg0 currentForceLevelDidChange:(NSInteger)arg1 ;
-(void)_removeTouch:(id)arg0 forEvent:(id)arg1 ;
-(void)_resetGestureRecognizer;
-(void)_setAcceptsFailureRequiments:(BOOL)arg0 ;
-(void)_setAnalyticsGestureHandled:(BOOL)arg0 ;
-(void)_setDirty;
-(void)_setForceLevelClassifier:(id)arg0 ;
-(void)_setRequiredForceLevel:(NSInteger)arg0 ;
-(void)_willBeginAfterSatisfyingFailureRequirements;
-(void)addTarget:(id)arg0 action:(SEL)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)ignorePress:(id)arg0 forEvent:(id)arg1 ;
-(void)ignoreTouch:(id)arg0 forEvent:(id)arg1 ;
-(void)pressesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesChanged:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)removeFailureRequirement:(id)arg0 ;
-(void)removeTarget:(id)arg0 action:(SEL)arg1 ;
-(void)requireGestureRecognizerToFail:(id)arg0 ;
-(void)reset;
-(void)setOwner:(id)arg0 ;
-(void)setRequiredPreviewForceState:(NSInteger)arg0 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEstimatedPropertiesUpdated:(id)arg0 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif