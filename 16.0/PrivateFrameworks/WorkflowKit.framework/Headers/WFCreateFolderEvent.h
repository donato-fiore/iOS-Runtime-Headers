// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFCREATEFOLDEREVENT_H
#define WFCREATEFOLDEREVENT_H

@class NSString;


#import "WFEvent.h"

@interface WFCreateFolderEvent : WFEvent

@property (copy, nonatomic) NSString *folderSource; // ivar: _folderSource
@property (nonatomic) unsigned int icon; // ivar: _icon
@property (copy, nonatomic) NSString *key; // ivar: _key
@property (nonatomic) unsigned int shortcutCount; // ivar: _shortcutCount


+(Class)codableEventClass;


@end


#endif