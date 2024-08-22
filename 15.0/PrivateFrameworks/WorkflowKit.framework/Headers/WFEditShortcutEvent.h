// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFEDITSHORTCUTEVENT_H
#define WFEDITSHORTCUTEVENT_H

@class NSString;


#import "WFEvent.h"

@interface WFEditShortcutEvent : WFEvent

@property (nonatomic) unsigned int actionCount; // ivar: _actionCount
@property (copy, nonatomic) NSString *addToSiriBundleIdentifier; // ivar: _addToSiriBundleIdentifier
@property (copy, nonatomic) NSString *galleryIdentifier; // ivar: _galleryIdentifier
@property (copy, nonatomic) NSString *key; // ivar: _key
@property (copy, nonatomic) NSString *shortcutSource; // ivar: _shortcutSource


+(Class)codableEventClass;
+(id)serializablePropertyTransformers;


@end


#endif