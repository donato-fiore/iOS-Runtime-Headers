// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXAUTOFORWARDINGLOCALNOTIFICATIONHANDLER_H
#define AXAUTOFORWARDINGLOCALNOTIFICATIONHANDLER_H



#import "AXLocalNotificationHandler.h"

@interface AXAutoForwardingLocalNotificationHandler : AXLocalNotificationHandler {
    *SEL _possibleHandlers;
    NSUInteger _possibleHandlersCount;
}




-(BOOL)_handleForwardDistributedNotificationWithName:(id)arg0 object:(*void)arg1 userInfo:(id)arg2 ;
-(id)_forwardDistributedNotificationNameForHandler:(SEL)arg0 ;
-(id)_notificationTypeDescription;
-(id)_prefixForForwardDistributedNotificationName;
// -(id)initWithNotificationName:(id)arg0 target:(id)arg1 dispatcher:(id)arg2 possibleHandlers:(unk)arg3  ;
// -(id)initWithNotificationName:(id)arg0 target:(id)arg1 dispatcher:(id)arg2 startObserving:(unk)arg3  ;
-(id)initWithNotificationName:(id)arg0 target:(id)arg1 handler:(SEL)arg2 ;
-(void)_startObserving;
-(void)_stopObserving;
-(void)dealloc;
-(void)processHandler:(SEL)arg0 ;


@end


#endif