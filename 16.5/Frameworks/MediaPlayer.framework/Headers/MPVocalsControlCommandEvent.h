// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPVOCALSCONTROLCOMMANDEVENT_H
#define MPVOCALSCONTROLCOMMANDEVENT_H

@class NSNumber;


#import "MPRemoteCommandEvent.h"

@interface MPVocalsControlCommandEvent : MPRemoteCommandEvent

@property (readonly, nonatomic) NSNumber *active; // ivar: _active
@property (readonly, nonatomic) NSNumber *level; // ivar: _level


-(id)initWithCommand:(id)arg0 mediaRemoteType:(unsigned int)arg1 options:(id)arg2 ;


@end


#endif