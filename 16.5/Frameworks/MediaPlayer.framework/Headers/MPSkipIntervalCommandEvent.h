// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSKIPINTERVALCOMMANDEVENT_H
#define MPSKIPINTERVALCOMMANDEVENT_H



#import "MPRemoteCommandEvent.h"

@interface MPSkipIntervalCommandEvent : MPRemoteCommandEvent

@property (readonly, nonatomic) CGFloat interval; // ivar: _interval


-(id)initWithCommand:(id)arg0 mediaRemoteType:(unsigned int)arg1 options:(id)arg2 ;


@end


#endif