// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DOMUIEVENT_H
#define DOMUIEVENT_H



#import "DOMEvent.h"
#import "DOMAbstractView.h"

@interface DOMUIEvent : DOMEvent

@property (readonly) int charCode;
@property (readonly) int detail;
@property (readonly) int keyCode;
@property (readonly) int layerX;
@property (readonly) int layerY;
@property (readonly) int pageX;
@property (readonly) int pageY;
@property (readonly) DOMAbstractView *view;
@property (readonly) int which;


-(void)initUIEvent:(id)arg0 ;
-(void)initUIEvent:(id)arg0 canBubble:(BOOL)arg1 cancelable:(BOOL)arg2 view:(id)arg3 detail:(int)arg4 ;


@end


#endif