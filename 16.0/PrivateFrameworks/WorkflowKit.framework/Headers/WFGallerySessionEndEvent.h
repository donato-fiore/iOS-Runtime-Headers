// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFGALLERYSESSIONENDEVENT_H
#define WFGALLERYSESSIONENDEVENT_H

@class NSString;


#import "WFEvent.h"

@interface WFGallerySessionEndEvent : WFEvent

@property (nonatomic) unsigned int duration; // ivar: _duration
@property (copy, nonatomic) NSString *key; // ivar: _key
@property (copy, nonatomic) NSString *sessionIdentifier; // ivar: _sessionIdentifier


+(Class)codableEventClass;


@end


#endif