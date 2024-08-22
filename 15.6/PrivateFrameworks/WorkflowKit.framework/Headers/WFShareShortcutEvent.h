// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFSHARESHORTCUTEVENT_H
#define WFSHARESHORTCUTEVENT_H

@class NSString;


#import "WFEvent.h"

@interface WFShareShortcutEvent : WFEvent

@property (nonatomic) unsigned int actionCount; // ivar: _actionCount
@property (copy, nonatomic) NSString *addToSiriBundleIdentifier; // ivar: _addToSiriBundleIdentifier
@property (copy, nonatomic) NSString *galleryIdentifier; // ivar: _galleryIdentifier
@property (copy, nonatomic) NSString *key; // ivar: _key
@property (copy, nonatomic) NSString *sharingDestinationBundleIdentifier; // ivar: _sharingDestinationBundleIdentifier
@property (copy, nonatomic) NSString *sharingMode; // ivar: _sharingMode
@property (nonatomic) int source; // ivar: _source


+(Class)codableEventClass;
+(id)serializablePropertyTransformers;


@end


#endif