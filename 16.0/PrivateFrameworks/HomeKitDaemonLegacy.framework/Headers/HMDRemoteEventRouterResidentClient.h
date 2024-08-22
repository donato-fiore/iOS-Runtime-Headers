// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDREMOTEEVENTROUTERRESIDENTCLIENT_H
#define HMDREMOTEEVENTROUTERRESIDENTCLIENT_H

@class NSUUID;


#import "HMDRemoteEventRouterClient.h"

@interface HMDRemoteEventRouterResidentClient : HMDRemoteEventRouterClient

@property (readonly, copy) NSUUID *homeUUID; // ivar: _homeUUID


-(BOOL)clientIsEnabled:(id)arg0 ;
-(id)accessoryUUID;
-(id)client:(id)arg0 upstreamTopicsForTopic:(id)arg1 ;
-(id)dumpStateDescription;
-(id)forwardingTopicsForTopics:(id)arg0 downstreamRouter:(id)arg1 ;
-(id)initWitAccessoryUUID:(id)arg0 homeUUID:(id)arg1 queue:(id)arg2 dataSource:(id)arg3 messageDispatcher:(id)arg4 notificationCenter:(id)arg5 requestMessageName:(id)arg6 updateMessageName:(id)arg7 storeReadHandle:(id)arg8 storeWriteHandle:(id)arg9 retryIntervalProvider:(id)arg10 logCategory:(char *)arg11 ;
-(void)handlePrimaryResidentConfirmedDeviceIdentifierChangeNotification:(id)arg0 ;


@end


#endif