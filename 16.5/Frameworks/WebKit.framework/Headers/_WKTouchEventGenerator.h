// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _WKTOUCHEVENTGENERATOR_H
#define _WKTOUCHEVENTGENERATOR_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface _WKTouchEventGenerator : NSObject {
    RetainPtr<__IOHIDEventSystemClient *> _ioSystemClient;
    ? _activePoints;
    NSUInteger _activePointCount;
}


@property (retain, nonatomic) NSMutableDictionary *eventCallbacks; // ivar: _eventCallbacks


+(NSInteger)nextEventCallbackID;
+(id)sharedTouchEventGenerator;
-(BOOL)_sendHIDEvent:(struct __IOHIDEvent *)arg0 window:(id)arg1 ;
-(BOOL)_sendMarkerHIDEventInWindow:(id)arg0 completionBlock:(id)arg1 ;
-(id)init;
-(struct __IOHIDEvent *)_createIOHIDEventType:(int)arg0 ;
-(void)_updateTouchPoints:(struct CGPoint *)arg0 count:(NSUInteger)arg1 window:(id)arg2 ;
-(void)dealloc;
-(void)liftUp:(struct CGPoint )arg0 touchCount:(NSUInteger)arg1 window:(id)arg2 ;
-(void)liftUp:(struct CGPoint )arg0 window:(id)arg1 completionBlock:(id)arg2 ;
-(void)liftUpAtPoints:(struct CGPoint *)arg0 touchCount:(NSUInteger)arg1 window:(id)arg2 ;
-(void)moveToPoint:(struct CGPoint )arg0 duration:(CGFloat)arg1 window:(id)arg2 completionBlock:(id)arg3 ;
-(void)moveToPoints:(struct CGPoint *)arg0 touchCount:(NSUInteger)arg1 duration:(CGFloat)arg2 window:(id)arg3 ;
-(void)receivedHIDEvent:(struct __IOHIDEvent *)arg0 ;
-(void)touchDown:(struct CGPoint )arg0 touchCount:(NSUInteger)arg1 window:(id)arg2 ;
-(void)touchDown:(struct CGPoint )arg0 window:(id)arg1 completionBlock:(id)arg2 ;
-(void)touchDownAtPoints:(struct CGPoint *)arg0 touchCount:(NSUInteger)arg1 window:(id)arg2 ;


@end


#endif