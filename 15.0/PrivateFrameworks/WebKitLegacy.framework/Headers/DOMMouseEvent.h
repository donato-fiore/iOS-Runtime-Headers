// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DOMMOUSEEVENT_H
#define DOMMOUSEEVENT_H

@protocol DOMEventTarget;


#import "DOMUIEvent.h"
#import "DOMNode.h"

@interface DOMMouseEvent : DOMUIEvent

@property (readonly) BOOL altKey;
@property (readonly) short button;
@property (readonly) int clientX;
@property (readonly) int clientY;
@property (readonly) BOOL ctrlKey;
@property (readonly) DOMNode *fromElement;
@property (readonly) BOOL metaKey;
@property (readonly) int offsetX;
@property (readonly) int offsetY;
@property (readonly) NSObject<DOMEventTarget> *relatedTarget;
@property (readonly) int screenX;
@property (readonly) int screenY;
@property (readonly) BOOL shiftKey;
@property (readonly) DOMNode *toElement;
@property (readonly) int x;
@property (readonly) int y;


-(void)initMouseEvent:(id)arg0 ;
-(void)initMouseEvent:(id)arg0 canBubble:(BOOL)arg1 cancelable:(BOOL)arg2 view:(id)arg3 detail:(int)arg4 screenX:(int)arg5 screenY:(int)arg6 clientX:(int)arg7 clientY:(int)arg8 ctrlKey:(BOOL)arg9 altKey:(BOOL)arg10 shiftKey:(BOOL)arg11 metaKey:(BOOL)arg12 button:(unsigned short)arg13 relatedTarget:(id)arg14 ;


@end


#endif