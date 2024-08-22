// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIEVENTENVIRONMENT_H
#define UIEVENTENVIRONMENT_H

@class NSMutableDictionary, NSMutableSet, NSMapTable, NSHashTable, NSMutableArray;

#import <Foundation/Foundation.h>

#import "UIEvent.h"
#import "UIMotionEvent.h"
#import "UIRemoteControlEvent.h"
#import "UIPressesEvent.h"
#import "UIPhysicalKeyboardEvent.h"
#import "UIWheelEvent.h"
#import "UIApplication.h"

@interface UIEventEnvironment : NSObject {
    UIEvent *_event;
    UIMotionEvent *_motionEvent;
    UIRemoteControlEvent *_remoteControlEvent;
    NSMutableDictionary *_dragEventsByContextAndSessionIDPair;
    BOOL _isSystemApplication;
    CGFloat _commitTimeForTouchEvents;
    CGFloat _beginTimeForTouchEvents;
    CGFloat _deadlineTimeForTouchEvents;
    NSMutableSet *_windowsWithActiveTouchMaps;
    BOOL _hasSeenAnyPencilEvents;
    UIPressesEvent *_fallbackPressesEvent;
    UIPhysicalKeyboardEvent *_fallbackPhysicalKeyboardEvent;
    UIWheelEvent *_fallbackWheelEvent;
    NSMapTable *_eventRegistryByScene;
    NSHashTable *_invalidatedAndDisconnectedScenes;
    NSMapTable *_pressesMapByScene;
    NSMapTable *_currentNudgePressTypeByScene;
    NSMutableDictionary *_physicalButtonPressesMap;
    NSMapTable *_currentTouchByScene;
    NSInteger _disableTouchCoalescingCount;
    NSMutableDictionary *_estimatedTouchRecordsByContextIDAndEstimationIndex;
    NSMutableArray *_estimatedTouchRecordsInIncomingOrder;
    unsigned int _genericGestureFocusWindowContextID;
    unsigned int _fallbackGenericGestureFocusWindowContextID;
}


@property (nonatomic) UIApplication *application; // ivar: _application
@property (retain, nonatomic) NSMutableArray *eventQueue; // ivar: _eventQueue


-(id)_hoverEventForWindow:(id)arg0 ;
-(id)initWithApplication:(id)arg0 ;
-(void)_enqueueHIDEvent:(struct __IOHIDEvent *)arg0 ;
-(void)dealloc;
-(void)pointerLockStateDidChange:(id)arg0 ;
-(void)sceneDidActivate:(id)arg0 ;
-(void)sceneDidDisconnect:(id)arg0 ;


@end


#endif