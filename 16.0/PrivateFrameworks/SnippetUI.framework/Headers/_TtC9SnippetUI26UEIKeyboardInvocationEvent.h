// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC9SNIPPETUI26UEIKEYBOARDINVOCATIONEVENT_H
#define _TTC9SNIPPETUI26UEIKEYBOARDINVOCATIONEVENT_H



#import "VRXTurnBasedInstrumentationEvent.h"

@interface _TtC9SnippetUI26UEIKeyboardInvocationEvent : VRXTurnBasedInstrumentationEvent {
    ? instrumentationClient;
    ? keyboardPrimaryLanguage;
}


@property (nonatomic, readonly) BOOL requiresNewTurn;


-(id)init;
-(void)emitWithTurnIdentifier:(id)arg0 ;


@end


#endif