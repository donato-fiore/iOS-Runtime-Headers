// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPPRELOADPLAYBACKSESSIONCOMMANDEVENT_H
#define MPPRELOADPLAYBACKSESSIONCOMMANDEVENT_H

@class NSString, NSDictionary, NSURL;


#import "MPRemoteCommandEvent.h"

@interface MPPreloadPlaybackSessionCommandEvent : MPRemoteCommandEvent

@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSDictionary *metadata; // ivar: _metadata
@property (readonly, nonatomic) NSURL *playbackSessionDataFilePath; // ivar: _playbackSessionDataFilePath
@property (readonly, nonatomic) NSInteger priority; // ivar: _priority
@property (readonly, nonatomic) NSString *revision; // ivar: _revision
@property (readonly, nonatomic) NSString *type; // ivar: _type


-(id)initWithCommand:(id)arg0 mediaRemoteType:(unsigned int)arg1 options:(id)arg2 ;


@end


#endif