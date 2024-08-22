// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFAUTOSHORTCUTBUTTONEVENT_H
#define WFAUTOSHORTCUTBUTTONEVENT_H

@class NSString;


#import "WFEvent.h"

@interface WFAutoShortcutButtonEvent : WFEvent

@property (copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (copy, nonatomic) NSString *key; // ivar: _key


+(Class)codableEventClass;


@end


#endif