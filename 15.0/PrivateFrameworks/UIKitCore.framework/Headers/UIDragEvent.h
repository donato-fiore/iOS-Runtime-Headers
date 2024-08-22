// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIDRAGEVENT_H
#define UIDRAGEVENT_H

@class NSMutableSet, NSHashTable, NSSet;


#import "UIEvent.h"
#import "_UIDragEventSample.h"
#import "UIView.h"
#import "_UIDropSessionImpl.h"
#import "UIWindow.h"
#import "_UIInternalDraggingSessionDestination.h"
#import "_UIInternalDraggingSessionSource.h"

@interface UIDragEvent : UIEvent {
    _UIDragEventSample *_currentSample;
    UIView *_previousEventView;
    UIView *_eventView;
    NSMutableSet *_beginningGestureRecognizers;
    NSMutableSet *_updatingGestureRecognizers;
    NSMutableSet *_exitingGestureRecognizers;
    NSMutableSet *_endingGestureRecognizers;
    NSMutableSet *_ignoredGestureRecognizers;
    NSMutableSet *_dynamicGestureRecognizers;
    NSHashTable *_ownersQueriedForDynamicGestures;
    NSMutableSet *_dynamicInteractions;
    BOOL _ignoreDragEnd;
    BOOL _needsHitTestReset;
    BOOL _dragFailed;
    id *_dragFailedCallback;
}


@property (readonly, nonatomic) unsigned int dragSessionID; // ivar: _dragSessionID
@property (readonly, nonatomic, getter=_dropSession) _UIDropSessionImpl *dropSession;
@property (readonly, nonatomic, getter=_dynamicGestureRecognizers) NSSet *dynamicGestureRecognizers;
@property (readonly, nonatomic) UIWindow *eventWindow;
@property (readonly, nonatomic) BOOL hasActiveGestureRecognizers;
@property (readonly, nonatomic, getter=_hitTestedView) UIView *hitTestedView;
@property (readonly, nonatomic) BOOL isFromAccessibilitySession;
@property (readonly, nonatomic) BOOL isPolicyDriven;
@property (readonly, nonatomic) CGPoint locationInSceneReferenceSpace;
@property (readonly, nonatomic, getter=_sessionDestination) _UIInternalDraggingSessionDestination *sessionDestination; // ivar: _sessionDestination
@property (readonly, nonatomic, getter=_sessionSource) _UIInternalDraggingSessionSource *sessionSource; // ivar: _sessionSource
@property (readonly, nonatomic, getter=_touchRoutingPolicyContextID) unsigned int touchRoutingPolicyContextID;
@property (readonly, nonatomic, getter=_windowServerHitTestContextID) unsigned int windowServerHitTestContextID;


+(BOOL)_isSessionIDValid:(unsigned int)arg0 ;
+(void)_invalidateSessionID:(unsigned int)arg0 ;
-(BOOL)_isReadyForReset;
-(BOOL)_isTouchRoutingPolicyBased;
-(BOOL)_sendEventToGestureRecognizer:(id)arg0 ;
-(BOOL)_shouldSendEvent;
-(NSInteger)type;
-(id)_gestureRecognizersForWindow:(id)arg0 ;
-(id)_updatingDropGestureRecognizers;
-(id)_windows;
-(id)initWithDragSessionID:(unsigned int)arg0 environment:(id)arg1 ;
-(struct CGPoint )locationInView:(id)arg0 ;
-(void)_dragFailedWithCallback:(id)arg0 ;
-(void)_ignoreDragEnd;
-(void)_ignoreGestureRecognizer:(id)arg0 ;
-(void)_removeGestureRecognizer:(id)arg0 ;
-(void)_removeQueriedOwnerForDynamicGesturesIfNeeded:(id)arg0 ;
-(void)_reset;
-(void)_sendIfNeeded;
-(void)_setHIDEvent:(struct __IOHIDEvent *)arg0 ;
-(void)_setNeedsHitTestReset;
-(void)_updateFromCurrentSample;
-(void)_updateGesturesFromCurrentSample;
-(void)_wasDeliveredToGestureRecognizers;
-(void)dealloc;


@end


#endif