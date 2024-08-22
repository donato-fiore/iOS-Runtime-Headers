// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIHOVEREVENT_H
#define UIHOVEREVENT_H

@class NSMapTable;


#import "UIEvent.h"

@interface UIHoverEvent : UIEvent {
    NSMapTable *_touchesByContextId;
    NSMapTable *_deliveryTableByTouch;
}


@property (nonatomic, getter=_isPointerLocked, setter=_setPointerLocked:) BOOL _pointerLocked; // ivar: _pointerLocked
@property (nonatomic) BOOL hasOutstandingUpdates; // ivar: _hasOutstandingUpdates


-(BOOL)_sendEventToGestureRecognizer:(id)arg0 ;
-(NSInteger)subtype;
-(NSInteger)type;
-(NSUInteger)_inputPrecision;
-(id)_deliveryTableByTouchCreateIfNeeded:(id)arg0 ;
-(id)_gestureRecognizersForWindow:(id)arg0 ;
-(id)_init;
-(id)_touchesByContextId:(unsigned int)arg0 createIfNeeded:(BOOL)arg1 ;
-(id)_windows;
-(id)allTouches;
-(id)hoverTouchForContextId:(unsigned int)arg0 pathIndex:(NSInteger)arg1 ;
-(id)touchesForGestureRecognizer:(id)arg0 ;
-(id)touchesForView:(id)arg0 ;
-(id)touchesForWindow:(id)arg0 ;
-(void)_cancelAllGestureRecognizers;
-(void)_completelyRemoveHoverTouchAndDeliveryTableForContextIdNumber:(id)arg0 ;
-(void)_gestureRecognizerNoLongerNeedsSendEvent:(id)arg0 ;
-(void)_pointerStateDidChange:(id)arg0 ;
-(void)_setNeedsUpdateForWindow:(id)arg0 forcingHitTest:(BOOL)arg1 ;
-(void)_windowDidBecomeHidden:(id)arg0 ;
-(void)_windowDidDetachContext:(id)arg0 ;
-(void)dealloc;
-(void)removeHoverTouchForContextId:(unsigned int)arg0 pathIndex:(NSInteger)arg1 ;
-(void)removeTouch:(id)arg0 fromGestureRecognizer:(id)arg1 ;
-(void)setHoverTouch:(id)arg0 forContextId:(unsigned int)arg1 pathIndex:(NSInteger)arg2 ;
-(void)setNeedsHitTestResetForWindow:(id)arg0 ;
-(void)setNeedsUpdateForWindow:(id)arg0 ;


@end


#endif