// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


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
-(BOOL)_sendHIDEvent:(struct __IOHIDEvent *)arg0 ;
-(BOOL)_sendMarkerHIDEventWithCompletionBlock:(id)arg0 ;
-(id)init;
-(struct __IOHIDEvent *)_createIOHIDEventType:(int)arg0 ;
-(void)_updateTouchPoints:(struct CGPoint *)arg0 count:(NSUInteger)arg1 ;
-(void)dealloc;
-(void)liftUp:(struct CGPoint )arg0 ;
-(void)liftUp:(struct CGPoint )arg0 completionBlock:(id)arg1 ;
-(void)liftUp:(struct CGPoint )arg0 touchCount:(NSUInteger)arg1 ;
-(void)liftUpAtPoints:(struct CGPoint *)arg0 touchCount:(NSUInteger)arg1 ;
-(void)moveToPoint:(struct CGPoint )arg0 duration:(CGFloat)arg1 completionBlock:(id)arg2 ;
-(void)moveToPoints:(struct CGPoint *)arg0 touchCount:(NSUInteger)arg1 duration:(CGFloat)arg2 ;
-(void)receivedHIDEvent:(struct __IOHIDEvent *)arg0 ;
-(void)touchDown:(struct CGPoint )arg0 ;
-(void)touchDown:(struct CGPoint )arg0 completionBlock:(id)arg1 ;
-(void)touchDown:(struct CGPoint )arg0 touchCount:(NSUInteger)arg1 ;
-(void)touchDownAtPoints:(struct CGPoint *)arg0 touchCount:(NSUInteger)arg1 ;


@end


#endif