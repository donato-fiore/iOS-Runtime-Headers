// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSETPLAYBACKSESSIONCOMMANDEVENT_H
#define MPSETPLAYBACKSESSIONCOMMANDEVENT_H

@class NSString, NSData;


#import "MPRemoteCommandEvent.h"

@interface MPSetPlaybackSessionCommandEvent : MPRemoteCommandEvent

@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSData *playbackSessionData; // ivar: _playbackSessionData
@property (readonly, nonatomic) NSString *type; // ivar: _type


-(id)initWithCommand:(id)arg0 mediaRemoteType:(unsigned int)arg1 options:(id)arg2 ;


@end


#endif