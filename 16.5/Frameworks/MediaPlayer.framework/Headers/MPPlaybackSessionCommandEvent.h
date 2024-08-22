// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPPLAYBACKSESSIONCOMMANDEVENT_H
#define MPPLAYBACKSESSIONCOMMANDEVENT_H

@class NSString;


#import "MPRemoteCommandEvent.h"

@interface MPPlaybackSessionCommandEvent : MPRemoteCommandEvent

@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSInteger priority; // ivar: _priority
@property (readonly, nonatomic) NSString *revision; // ivar: _revision


-(id)initWithCommand:(id)arg0 mediaRemoteType:(unsigned int)arg1 options:(id)arg2 ;


@end


#endif