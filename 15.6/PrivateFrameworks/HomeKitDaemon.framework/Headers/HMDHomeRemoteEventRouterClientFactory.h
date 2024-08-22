// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDHOMEREMOTEEVENTROUTERCLIENTFACTORY_H
#define HMDHOMEREMOTEEVENTROUTERCLIENTFACTORY_H

@protocol HMDHomeRemoteEventRouterClientFactory;

#import <Foundation/Foundation.h>


@interface HMDHomeRemoteEventRouterClientFactory : NSObject <HMDHomeRemoteEventRouterClientFactory>





-(id)primaryResidentClientWithMessageTargetUUID:(id)arg0 queue:(id)arg1 dataSource:(id)arg2 messageDispatcher:(id)arg3 notificationCenter:(id)arg4 requestMessageName:(id)arg5 updateMessageName:(id)arg6 storeReadHandle:(id)arg7 storeWriteHandle:(id)arg8 ;
-(id)residentClientWithMessageTargetUUID:(id)arg0 queue:(id)arg1 dataSource:(id)arg2 messageDispatcher:(id)arg3 notificationCenter:(id)arg4 requestMessageName:(id)arg5 updateMessageName:(id)arg6 storeReadHandle:(id)arg7 storeWriteHandle:(id)arg8 ;


@end


#endif