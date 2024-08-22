// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFSUSPENDSHORTCUTEVENT_H
#define WFSUSPENDSHORTCUTEVENT_H

@class NSString;


#import "WFEvent.h"

@interface WFSuspendShortcutEvent : WFEvent

@property (copy, nonatomic) NSString *dismissalType; // ivar: _dismissalType
@property (copy, nonatomic) NSString *key; // ivar: _key
@property (copy, nonatomic) NSString *presentationStyle; // ivar: _presentationStyle


+(Class)codableEventClass;


@end


#endif