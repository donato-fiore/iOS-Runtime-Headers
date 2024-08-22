// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DOMWHEELEVENT_H
#define DOMWHEELEVENT_H



#import "DOMMouseEvent.h"

@interface DOMWheelEvent : DOMMouseEvent

@property (readonly) BOOL isHorizontal;
@property (readonly) int wheelDelta;
@property (readonly) int wheelDeltaX;
@property (readonly) int wheelDeltaY;


-(BOOL)webkitDirectionInvertedFromDevice;
-(CGFloat)deltaX;
-(CGFloat)deltaY;
-(CGFloat)deltaZ;
-(unsigned int)deltaMode;
-(void)initWheelEvent:(int)arg0 wheelDeltaY:(int)arg1 view:(id)arg2 screenX:(int)arg3 screenY:(int)arg4 clientX:(int)arg5 clientY:(int)arg6 ctrlKey:(BOOL)arg7 altKey:(BOOL)arg8 shiftKey:(BOOL)arg9 metaKey:(BOOL)arg10 ;


@end


#endif