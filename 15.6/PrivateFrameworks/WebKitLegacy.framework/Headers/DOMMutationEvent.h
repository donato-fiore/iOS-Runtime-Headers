// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DOMMUTATIONEVENT_H
#define DOMMUTATIONEVENT_H

@class NSString;


#import "DOMEvent.h"
#import "DOMNode.h"

@interface DOMMutationEvent : DOMEvent

@property (readonly) unsigned short attrChange;
@property (readonly, copy) NSString *attrName;
@property (readonly, copy) NSString *newValue;
@property (readonly, copy) NSString *prevValue;
@property (readonly) DOMNode *relatedNode;


-(void)initMutationEvent:(id)arg0 ;
-(void)initMutationEvent:(id)arg0 canBubble:(BOOL)arg1 cancelable:(BOOL)arg2 relatedNode:(id)arg3 prevValue:(id)arg4 newValue:(id)arg5 attrName:(id)arg6 attrChange:(unsigned short)arg7 ;


@end


#endif