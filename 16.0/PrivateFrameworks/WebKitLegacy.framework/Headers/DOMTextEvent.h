// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DOMTEXTEVENT_H
#define DOMTEXTEVENT_H

@class NSString;


#import "DOMUIEvent.h"

@interface DOMTextEvent : DOMUIEvent

@property (readonly, copy) NSString *data;


-(void)initTextEvent:(id)arg0 canBubbleArg:(BOOL)arg1 cancelableArg:(BOOL)arg2 viewArg:(id)arg3 dataArg:(id)arg4 ;


@end


#endif