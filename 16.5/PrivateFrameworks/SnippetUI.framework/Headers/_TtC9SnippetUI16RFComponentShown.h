// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC9SNIPPETUI16RFCOMPONENTSHOWN_H
#define _TTC9SNIPPETUI16RFCOMPONENTSHOWN_H



#import "VRXTurnBasedInstrumentationEvent.h"

@interface _TtC9SnippetUI16RFComponentShown : VRXTurnBasedInstrumentationEvent {
    ? componentName;
    ? componentType;
    ? componentIndex;
    ? instrumentationClient;
}




-(id)init;
-(void)emitWithTurnIdentifier:(id)arg0 ;


@end


#endif