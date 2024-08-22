// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFSETUPGALLERYSHORTCUTEVENT_H
#define WFSETUPGALLERYSHORTCUTEVENT_H

@class NSString;


#import "WFEvent.h"

@interface WFSetupGalleryShortcutEvent : WFEvent

@property (copy, nonatomic) NSString *addToSiriBundleIdentifier; // ivar: _addToSiriBundleIdentifier
@property (nonatomic) BOOL completed; // ivar: _completed
@property (copy, nonatomic) NSString *galleryCategoryIdentifier; // ivar: _galleryCategoryIdentifier
@property (copy, nonatomic) NSString *galleryIdentifier; // ivar: _galleryIdentifier
@property (copy, nonatomic) NSString *key; // ivar: _key


+(Class)codableEventClass;


@end


#endif