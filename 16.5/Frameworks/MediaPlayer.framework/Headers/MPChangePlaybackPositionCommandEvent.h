// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPCHANGEPLAYBACKPOSITIONCOMMANDEVENT_H
#define MPCHANGEPLAYBACKPOSITIONCOMMANDEVENT_H



#import "MPRemoteCommandEvent.h"

@interface MPChangePlaybackPositionCommandEvent : MPRemoteCommandEvent

@property (readonly, nonatomic) CGFloat positionTime; // ivar: _positionTime


-(id)initWithCommand:(id)arg0 mediaRemoteType:(unsigned int)arg1 options:(id)arg2 ;


@end


#endif