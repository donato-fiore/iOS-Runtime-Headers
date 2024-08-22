// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPPREPAREFORSETPLAYBACKQUEUECOMMANDEVENT_H
#define MPPREPAREFORSETPLAYBACKQUEUECOMMANDEVENT_H

@class NSString;


#import "MPRemoteCommandEvent.h"

@interface MPPrepareForSetPlaybackQueueCommandEvent : MPRemoteCommandEvent

@property (readonly, nonatomic) BOOL isProactive; // ivar: _isProactive
@property (readonly, copy, nonatomic) NSString *proactiveReason; // ivar: _proactiveReason


-(id)initWithCommand:(id)arg0 mediaRemoteType:(unsigned int)arg1 options:(id)arg2 ;


@end


#endif