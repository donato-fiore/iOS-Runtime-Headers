// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UICONTROL_H
#define UICONTROL_H

@class NSMutableArray, NSSet, NSString;
@protocol _UIVariableGestureContextMenuInteractionDelegate, UIPointerInteractionDelegate, UIContextMenuInteractionDelegate_Private, _UICursorInteractionDelegate, UIContextMenuInteractionDelegate;


#import "UIView.h"
#import "_UICursorInteraction.h"
#import "UIPointerInteraction.h"
#import "UIContextMenuInteraction.h"
#import "UIToolTipInteraction.h"

@interface UIControl : UIView <_UIVariableGestureContextMenuInteractionDelegate, UIPointerInteractionDelegate, UIContextMenuInteractionDelegate_Private, _UICursorInteractionDelegate, UIContextMenuInteractionDelegate>

 {
    NSMutableArray *_targetActions;
    CGPoint _previousPoint;
    CGFloat _downTime;
    ? _controlFlags;
}


@property (readonly, nonatomic) _UICursorInteraction *_cursorInteraction;
@property (readonly, nonatomic) UIPointerInteraction *_pointerInteraction;
@property (retain, nonatomic, setter=_setProxyPointerInteraction:) UIPointerInteraction *_proxyPointerInteraction;
@property (weak, nonatomic, setter=_setProxySender:) id *_proxySender;
@property (nonatomic, setter=_setRequiredButtonMask:) NSInteger _requiredButtonMask; // ivar: _requiredButtonMask
@property (readonly, nonatomic) NSUInteger allControlEvents;
@property (readonly, nonatomic) NSSet *allTargets;
@property (nonatomic) NSInteger contentHorizontalAlignment;
@property (nonatomic) NSInteger contentVerticalAlignment;
@property (nonatomic, getter=isContextMenuEnabled) BOOL contextMenuEnabled;
@property (readonly, nonatomic) UIContextMenuInteraction *contextMenuInteraction;
@property (nonatomic, getter=isContextMenuInteractionEnabled) BOOL contextMenuInteractionEnabled;
@property (nonatomic) BOOL contextMenuIsPrimary;
@property (readonly, nonatomic) _UICursorInteraction *cursorInteraction; // ivar: _cursorInteraction
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger effectiveContentHorizontalAlignment;
@property (readonly, nonatomic) NSInteger effectiveContentVerticalAlignment;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (readonly, nonatomic) UIPointerInteraction *pointerInteraction;
@property (nonatomic, getter=isPointerInteractionEnabled) BOOL pointerInteractionEnabled;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (nonatomic) BOOL showsMenuAsPrimaryAction;
@property (readonly, nonatomic) NSUInteger state;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *toolTip;
@property (readonly, nonatomic) UIToolTipInteraction *toolTipInteraction;
@property (readonly, nonatomic, getter=isTouchInside) BOOL touchInside;
@property (readonly, nonatomic, getter=isTracking) BOOL tracking;


+(BOOL)_allowActionsToQueue;
+(NSUInteger)_primaryStateForState:(NSUInteger)arg0 ;
-(BOOL)_accessibilityShouldActivateOnHUDLift;
-(BOOL)_hasActionForEventMask:(NSUInteger)arg0 ;
-(BOOL)_hasActiveMenuPresentation;
-(BOOL)_touchHasHighlighted;
-(BOOL)_wasLastHighlightSuccessful;
-(BOOL)beginTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(BOOL)canBecomeFocused;
-(BOOL)cancelMouseTracking;
-(BOOL)cancelTouchTracking;
-(BOOL)continueTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(BOOL)hasOneOrMoreTargets;
-(BOOL)pointMostlyInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(BOOL)requiresDisplayOnTracking;
-(BOOL)shouldTrack;
-(BOOL)touchDragged;
-(CGFloat)_highlightCornerRadius;
-(NSInteger)_focusedSound;
-(NSInteger)_sceneDraggingBehaviorOnPan;
-(NSUInteger)_controlEventsForActionTriggered;
-(NSUInteger)_stateForFocusUpdateContext:(id)arg0 ;
-(id)__distributionStatisticsForUserInteractionDuration;
-(id)__scalarStatisticsForUserTouchUpInsideEvent;
-(id)__scalarStatisticsForUserValueChangedEvent;
-(id)_allTargetActions;
-(id)_contextMenuInteraction:(id)arg0 interactionEffectForTargetedPreview:(id)arg1 ;
-(id)_contextMenuInteraction:(id)arg0 styleForMenuWithConfiguration:(id)arg1 ;
-(id)_createPointerInteraction;
-(id)_distributionStatisticsForUserInteractionDuration;
-(id)_scalarStatisticsForUserTouchUpInsideEvent;
-(id)_scalarStatisticsForUserValueChangedEvent;
-(id)_systemDefaultFocusGroupIdentifier;
-(id)actionsForTarget:(id)arg0 forControlEvent:(NSUInteger)arg1 ;
-(id)contextMenuInteraction:(id)arg0 configurationForMenuAtLocation:(struct CGPoint )arg1 ;
-(id)contextMenuInteraction:(id)arg0 previewForDismissingMenuWithConfiguration:(id)arg1 ;
-(id)contextMenuInteraction:(id)arg0 previewForHighlightingMenuWithConfiguration:(id)arg1 ;
-(id)hitTest:(struct CGPoint )arg0 forEvent:(struct __GSEvent *)arg1 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 primaryAction:(id)arg1 ;
-(id)pointerInteraction:(id)arg0 regionForRequest:(id)arg1 defaultRegion:(id)arg2 ;
-(struct CGPoint )menuAttachmentPointForConfiguration:(id)arg0 ;
-(struct CGRect )_clippedHighlightBounds;
-(void)_activateForAccessibilityHUDLiftAtPoint:(struct CGPoint )arg0 ;
-(void)_addControlTargetAction:(id)arg0 ;
-(void)_beginInteractionDurationStatisticMeasurements;
-(void)_cancelDelayedActions;
-(void)_commitInteractionDurationStatisticMeasurements;
-(void)_commonInitForPrimaryAction:(id)arg0 ;
-(void)_connectInterfaceBuilderEventConnection:(id)arg0 ;
-(void)_contextMenuInteraction:(id)arg0 willBeginWithConfiguration:(id)arg1 ;
-(void)_delayActions;
-(void)_diagnoseFocusabilityForReport:(id)arg0 ;
-(void)_didMoveFromWindow:(id)arg0 toWindow:(id)arg1 ;
-(void)_incrementStatisticsForUserActionForEvents:(NSUInteger)arg0 ;
-(void)_installCursorInteractionIfNeeded;
-(void)_invalidatePointerInteraction;
-(void)_sendActionsForEvents:(NSUInteger)arg0 withEvent:(id)arg1 ;
-(void)_sendDelayedActions;
-(void)_sendDelayedActions:(BOOL)arg0 ;
-(void)_setHighlightOnMouseDown:(BOOL)arg0 ;
-(void)_setLastHighlightSuccessful:(BOOL)arg0 ;
-(void)_setTouchHasHighlighted:(BOOL)arg0 ;
-(void)_unhighlight;
-(void)_willMoveToWindow:(id)arg0 ;
-(void)addAction:(id)arg0 forControlEvents:(NSUInteger)arg1 ;
-(void)addTarget:(id)arg0 action:(SEL)arg1 forControlEvents:(NSUInteger)arg2 ;
-(void)addTarget:(id)arg0 action:(SEL)arg1 forEvents:(int)arg2 ;
-(void)cancelTrackingWithEvent:(id)arg0 ;
-(void)contextMenuInteraction:(id)arg0 willDisplayMenuForConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)contextMenuInteraction:(id)arg0 willEndForConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)endTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(void)enumerateEventHandlers:(id)arg0 ;
-(void)removeAction:(id)arg0 forControlEvents:(NSUInteger)arg1 ;
-(void)removeActionForIdentifier:(id)arg0 forControlEvents:(NSUInteger)arg1 ;
-(void)removeTarget:(id)arg0 action:(SEL)arg1 forControlEvents:(NSUInteger)arg2 ;
-(void)removeTarget:(id)arg0 forEvents:(int)arg1 ;
-(void)sendAction:(SEL)arg0 to:(id)arg1 forEvent:(id)arg2 ;
-(void)sendAction:(id)arg0 ;
-(void)sendActionsForControlEvents:(NSUInteger)arg0 ;
-(void)setRequiresDisplayOnTracking:(BOOL)arg0 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEstimatedPropertiesUpdated:(id)arg0 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif