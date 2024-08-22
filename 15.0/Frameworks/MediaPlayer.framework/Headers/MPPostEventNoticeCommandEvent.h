// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPPOSTEVENTNOTICECOMMANDEVENT_H
#define MPPOSTEVENTNOTICECOMMANDEVENT_H

@class NSString;


#import "MPRemoteCommandEvent.h"

@interface MPPostEventNoticeCommandEvent : MPRemoteCommandEvent

@property (readonly, nonatomic) NSString *eventIdentifier; // ivar: _eventIdentifier
@property (readonly, nonatomic) NSString *eventType; // ivar: _eventType


-(id)initWithCommand:(id)arg0 mediaRemoteType:(unsigned int)arg1 options:(id)arg2 ;


@end


#endif