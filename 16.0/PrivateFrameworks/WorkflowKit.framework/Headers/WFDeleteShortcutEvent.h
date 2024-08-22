// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFDELETESHORTCUTEVENT_H
#define WFDELETESHORTCUTEVENT_H

@class NSString;


#import "WFEvent.h"

@interface WFDeleteShortcutEvent : WFEvent

@property (copy, nonatomic) NSString *addToSiriBundleIdentifier; // ivar: _addToSiriBundleIdentifier
@property (copy, nonatomic) NSString *galleryIdentifier; // ivar: _galleryIdentifier
@property (copy, nonatomic) NSString *key; // ivar: _key
@property (copy, nonatomic) NSString *shortcutSource; // ivar: _shortcutSource


+(Class)codableEventClass;


@end


#endif