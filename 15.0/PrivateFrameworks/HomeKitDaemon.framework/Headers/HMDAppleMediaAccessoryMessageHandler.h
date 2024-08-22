// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDAPPLEMEDIAACCESSORYMESSAGEHANDLER_H
#define HMDAPPLEMEDIAACCESSORYMESSAGEHANDLER_H



#import "HMDMessageHandler.h"

@interface HMDAppleMediaAccessoryMessageHandler : HMDMessageHandler



-(id)initWithMessageTargetUUID:(id)arg0 messageDispatcher:(id)arg1 notificationCenter:(id)arg2 ownerPrivateRemoteMessages:(id)arg3 adminPrivateRemoteMessages:(id)arg4 internalMessages:(id)arg5 notifications:(id)arg6 notificationsToObject:(id)arg7 ;
-(void)handleAppleMediaAccessoryDeviceIsReachableNotification:(id)arg0 ;
-(void)handleAppleMediaAccessoryDeviceUpdatedNotification:(id)arg0 ;


@end


#endif