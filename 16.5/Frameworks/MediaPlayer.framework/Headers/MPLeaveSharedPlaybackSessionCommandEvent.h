// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPLEAVESHAREDPLAYBACKSESSIONCOMMANDEVENT_H
#define MPLEAVESHAREDPLAYBACKSESSIONCOMMANDEVENT_H

@class NSString;


#import "MPRemoteCommandEvent.h"

@interface MPLeaveSharedPlaybackSessionCommandEvent : MPRemoteCommandEvent

@property (readonly, nonatomic) NSString *sessionIdentifier; // ivar: _sessionIdentifier


-(id)initWithCommand:(id)arg0 mediaRemoteType:(unsigned int)arg1 options:(id)arg2 ;


@end


#endif