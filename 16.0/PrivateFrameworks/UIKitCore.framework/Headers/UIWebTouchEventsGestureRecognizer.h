// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIWEBTOUCHEVENTSGESTURERECOGNIZER_H
#define UIWEBTOUCHEVENTSGESTURERECOGNIZER_H

@class NSMapTable, NSMutableArray;
@protocol UIWebTouchEventsGestureRecognizerDelegate;


#import "UIGestureRecognizer.h"

@interface UIWebTouchEventsGestureRecognizer : UIGestureRecognizer {
    id *_touchTarget;
    SEL _touchAction;
    id<UIWebTouchEventsGestureRecognizerDelegate> *_webTouchDelegate;
    BOOL _passedHitTest;
    BOOL _isPotentialTap;
    BOOL _wasExplicitlyCancelled;
    CGFloat _originalGestureDistance;
    CGFloat _originalGestureAngle;
    _UIWebTouchEvent _lastTouchEvent;
}


@property (readonly, nonatomic) NSMapTable *activeTouchesByIdentifier; // ivar: _activeTouchesByIdentifier
@property (nonatomic, getter=isDefaultPrevented) BOOL defaultPrevented; // ivar: _defaultPrevented
@property (readonly, nonatomic, getter=isDispatchingTouchEvents) BOOL dispatchingTouchEvents; // ivar: _dispatchingTouchEvents
@property (readonly, nonatomic) BOOL inJavaScriptGesture;
@property (readonly, nonatomic) *_UIWebTouchEvent lastTouchEvent;
@property (readonly, nonatomic) CGPoint locationInWindow;
@property (readonly, nonatomic) CGFloat rotation;
@property (readonly, nonatomic) CGFloat scale;
@property (readonly, nonatomic) NSMutableArray *touchIdentifiers;
@property (readonly, nonatomic) NSMutableArray *touchLocations;
@property (readonly, nonatomic) NSMutableArray *touchPhases;
@property (readonly, nonatomic) int type;


+(BOOL)_shouldDefaultToTouches;
+(void)initialize;
-(BOOL)canBePreventedByGestureRecognizer:(id)arg0 ;
-(id)initWithTarget:(id)arg0 action:(SEL)arg1 touchDelegate:(id)arg2 ;
-(void)_processTouches:(id)arg0 withEvent:(id)arg1 type:(int)arg2 ;
-(void)_recordTouches:(id)arg0 type:(int)arg1 ;
-(void)_resetGestureRecognizer;
-(void)_updateTapStateWithTouches:(id)arg0 ;
-(void)_updateTapStateWithTouches:(id)arg0 type:(int)arg1 ;
-(void)cancel;
-(void)dealloc;
-(void)performAction;
-(void)reset;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif