// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC9SNIPPETUI21RFVISUALRESPONSESHOWN_H
#define _TTC9SNIPPETUI21RFVISUALRESPONSESHOWN_H



#import "VRXTurnBasedInstrumentationEvent.h"

@interface _TtC9SnippetUI21RFVisualResponseShown : VRXTurnBasedInstrumentationEvent {
    ? response;
    ? patternId;
    ? instrumentationClient;
    ? preferences;
    ? remoteAssetManager;
    ? $__lazy_storage_$_responseJson;
}




-(id)init;
-(void)emitWithTurnIdentifier:(id)arg0 ;


@end


#endif