// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPCHANGEQUEUEENDACTIONCOMMANDEVENT_H
#define MPCHANGEQUEUEENDACTIONCOMMANDEVENT_H



#import "MPRemoteCommandEvent.h"

@interface MPChangeQueueEndActionCommandEvent : MPRemoteCommandEvent

@property (readonly, nonatomic) BOOL preservesQueueEndAction; // ivar: _preservesQueueEndAction
@property (readonly, nonatomic) NSInteger queueEndAction; // ivar: _queueEndAction


-(id)initWithCommand:(id)arg0 mediaRemoteType:(unsigned int)arg1 options:(id)arg2 ;


@end


#endif