// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFGALLERYSESSIONSTARTEVENT_H
#define WFGALLERYSESSIONSTARTEVENT_H

@class NSString;


#import "WFEvent.h"

@interface WFGallerySessionStartEvent : WFEvent

@property (copy, nonatomic) NSString *key; // ivar: _key
@property (copy, nonatomic) NSString *sessionIdentifier; // ivar: _sessionIdentifier


+(Class)codableEventClass;


@end


#endif