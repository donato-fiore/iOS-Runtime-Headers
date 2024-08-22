// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXDISTRIBUTEDNOTIFICATIONHANDLER_H
#define AXDISTRIBUTEDNOTIFICATIONHANDLER_H



#import "VISAXNotificationHandler.h"

@interface AXDistributedNotificationHandler : VISAXNotificationHandler



+(void)postDistributedNotificationWithName:(id)arg0 ;
-(id)_notificationTypeDescription;
-(void)_startObserving;
-(void)_stopObserving;


@end


#endif