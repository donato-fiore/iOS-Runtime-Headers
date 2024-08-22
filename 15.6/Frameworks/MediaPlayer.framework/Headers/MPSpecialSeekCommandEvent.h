// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPSPECIALSEEKCOMMANDEVENT_H
#define MPSPECIALSEEKCOMMANDEVENT_H



#import "MPRemoteCommandEvent.h"

@interface MPSpecialSeekCommandEvent : MPRemoteCommandEvent

@property (readonly, nonatomic) NSUInteger type; // ivar: _type


-(id)initWithCommand:(id)arg0 mediaRemoteType:(unsigned int)arg1 options:(id)arg2 ;


@end


#endif