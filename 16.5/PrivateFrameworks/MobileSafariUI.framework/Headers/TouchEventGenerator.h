// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TOUCHEVENTGENERATOR_H
#define TOUCHEVENTGENERATOR_H


#import <Foundation/Foundation.h>


@interface TouchEventGenerator : NSObject {
    *__IOHIDEventSystemClient _ioSystemClient;
    ? _activePoints;
    NSUInteger _activePointCount;
}




+(id)sharedTouchEventGenerator;
-(BOOL)_sendHIDEvent:(struct __IOHIDEvent *)arg0 ;
-(id)init;
-(struct __IOHIDEvent *)_createIOHIDEventType:(int)arg0 ;
-(void)_updateTouchPoints:(struct CGPoint *)arg0 count:(NSUInteger)arg1 ;
-(void)liftUp:(struct CGPoint )arg0 ;
-(void)liftUp:(struct CGPoint )arg0 touchCount:(NSUInteger)arg1 ;
-(void)liftUpAtPoints:(struct CGPoint *)arg0 touchCount:(NSUInteger)arg1 ;
-(void)moveToPoints:(struct CGPoint *)arg0 touchCount:(NSUInteger)arg1 duration:(CGFloat)arg2 ;
-(void)touchDown:(struct CGPoint )arg0 ;
-(void)touchDown:(struct CGPoint )arg0 touchCount:(NSUInteger)arg1 ;
-(void)touchDownAtPoints:(struct CGPoint *)arg0 touchCount:(NSUInteger)arg1 ;


@end


#endif