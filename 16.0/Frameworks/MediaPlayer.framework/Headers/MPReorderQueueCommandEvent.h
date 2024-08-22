// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPREORDERQUEUECOMMANDEVENT_H
#define MPREORDERQUEUECOMMANDEVENT_H

@class NSString;


#import "MPRemoteCommandEvent.h"

@interface MPReorderQueueCommandEvent : MPRemoteCommandEvent

@property (readonly, nonatomic) NSInteger destinationOffset; // ivar: _destinationOffset
@property (readonly, nonatomic) NSString *insertAfterContextItemID; // ivar: _insertAfterContextItemID
@property (readonly, nonatomic) NSString *insertBeforeContextItemID; // ivar: _insertBeforeContextItemID


-(id)initWithCommand:(id)arg0 mediaRemoteType:(unsigned int)arg1 options:(id)arg2 ;


@end


#endif