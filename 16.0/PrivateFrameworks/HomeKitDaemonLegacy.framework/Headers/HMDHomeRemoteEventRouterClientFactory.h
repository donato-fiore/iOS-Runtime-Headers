// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDHOMEREMOTEEVENTROUTERCLIENTFACTORY_H
#define HMDHOMEREMOTEEVENTROUTERCLIENTFACTORY_H

@class NSString;
@protocol HMDHomeRemoteEventRouterClientFactory;

#import <Foundation/Foundation.h>


@interface HMDHomeRemoteEventRouterClientFactory : NSObject <HMDHomeRemoteEventRouterClientFactory>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)primaryResidentClientWithMessageTargetUUID:(id)arg0 queue:(id)arg1 dataSource:(id)arg2 messageDispatcher:(id)arg3 notificationCenter:(id)arg4 requestMessageName:(id)arg5 updateMessageName:(id)arg6 storeReadHandle:(id)arg7 storeWriteHandle:(id)arg8 ;
-(id)residentClientWithAccessoryUUID:(id)arg0 homeUUID:(id)arg1 queue:(id)arg2 dataSource:(id)arg3 messageDispatcher:(id)arg4 notificationCenter:(id)arg5 requestMessageName:(id)arg6 updateMessageName:(id)arg7 storeReadHandle:(id)arg8 storeWriteHandle:(id)arg9 ;


@end


#endif