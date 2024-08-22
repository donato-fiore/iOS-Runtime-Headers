// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMEVENTNOTIFICATIONBROADCASTER_H
#define IMEVENTNOTIFICATIONBROADCASTER_H



#import "IMEventNotificationQueue.h"

@interface IMEventNotificationBroadcaster : IMEventNotificationQueue



-(void)_didProcessQueue;
-(void)_willProcessQueue;
-(void)broadcastEventToListeners:(id)arg0 ;


@end


#endif