// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DOMKEYBOARDEVENT_H
#define DOMKEYBOARDEVENT_H

@class NSString;


#import "DOMUIEvent.h"

@interface DOMKeyboardEvent : DOMUIEvent

@property (readonly) BOOL altGraphKey;
@property (readonly) BOOL altKey;
@property (readonly) int charCode;
@property (readonly) BOOL ctrlKey;
@property (readonly) int keyCode;
@property (readonly, copy) NSString *keyIdentifier;
@property (readonly) unsigned int keyLocation;
@property (readonly) unsigned int location;
@property (readonly) BOOL metaKey;
@property (readonly) BOOL shiftKey;


-(BOOL)getModifierState:(id)arg0 ;
-(void)initKeyboardEvent:(id)arg0 canBubble:(BOOL)arg1 cancelable:(BOOL)arg2 view:(id)arg3 keyIdentifier:(id)arg4 keyLocation:(unsigned int)arg5 ctrlKey:(BOOL)arg6 altKey:(BOOL)arg7 shiftKey:(BOOL)arg8 metaKey:(BOOL)arg9 ;
-(void)initKeyboardEvent:(id)arg0 canBubble:(BOOL)arg1 cancelable:(BOOL)arg2 view:(id)arg3 keyIdentifier:(id)arg4 keyLocation:(unsigned int)arg5 ctrlKey:(BOOL)arg6 altKey:(BOOL)arg7 shiftKey:(BOOL)arg8 metaKey:(BOOL)arg9 altGraphKey:(BOOL)arg10 ;
-(void)initKeyboardEvent:(id)arg0 canBubble:(BOOL)arg1 cancelable:(BOOL)arg2 view:(id)arg3 keyIdentifier:(id)arg4 location:(unsigned int)arg5 ctrlKey:(BOOL)arg6 altKey:(BOOL)arg7 shiftKey:(BOOL)arg8 metaKey:(BOOL)arg9 ;
-(void)initKeyboardEvent:(id)arg0 canBubble:(BOOL)arg1 cancelable:(BOOL)arg2 view:(id)arg3 keyIdentifier:(id)arg4 location:(unsigned int)arg5 ctrlKey:(BOOL)arg6 altKey:(BOOL)arg7 shiftKey:(BOOL)arg8 metaKey:(BOOL)arg9 altGraphKey:(BOOL)arg10 ;


@end


#endif