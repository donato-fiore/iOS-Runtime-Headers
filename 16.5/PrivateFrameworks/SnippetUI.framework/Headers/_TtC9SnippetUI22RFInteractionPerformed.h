// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC9SNIPPETUI22RFINTERACTIONPERFORMED_H
#define _TTC9SNIPPETUI22RFINTERACTIONPERFORMED_H



#import "VRXTurnBasedInstrumentationEvent.h"

@interface _TtC9SnippetUI22RFInteractionPerformed : VRXTurnBasedInstrumentationEvent {
    ? actionName;
    ? command;
    ? interactionType;
    ? componentType;
    ? componentName;
    ? componentIndex;
    ? invocation;
    ? instrumentationClient;
}


@property (nonatomic, readonly) BOOL requiresNewTurn;


-(id)init;
-(void)emitWithTurnIdentifier:(id)arg0 ;


@end


#endif