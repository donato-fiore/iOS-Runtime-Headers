// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDHOMEPRIMARYRESIDENTMESSAGINGHANDLER_H
#define HMDHOMEPRIMARYRESIDENTMESSAGINGHANDLER_H

@class HMFMessageDispatcher, NSNotificationCenter, NSMapTable, NSError, HMFFuture, NSString, NSUUID;
@protocol HMFLogging, HMDResidentDeviceManagerDiscoveryRequester, HMDTimerManagerDelegate, HMDRemoteHomeMessageHandling, HMDResidentDeviceManager, HMDTimerManager;

#import <Foundation/Foundation.h>


@interface HMDHomePrimaryResidentMessagingHandler : NSObject <HMFLogging, HMDResidentDeviceManagerDiscoveryRequester, HMDTimerManagerDelegate, HMDRemoteHomeMessageHandling>

 {
    os_unfair_lock_s _lock;
    HMFMessageDispatcher *_messageDispatcher;
    id<HMDResidentDeviceManager> *_residentDeviceManager;
    NSNotificationCenter *_notificationCenter;
    id<HMDTimerManager> *_timerManager;
    NSMapTable *_pendingMessages;
    NSError *_cancelError;
    HMFFuture *_discoveryFuture;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUUID *homeUUID; // ivar: _homeUUID
@property (readonly, nonatomic) NSString *logIdentifier; // ivar: _logIdentifier
@property (readonly) Class superclass;


+(id)logCategory;
-(id)_responseHandlerForRequestMessage:(SEL)arg0 ;
-(id)initWithMessageDispatcher:(id)arg0 homeUUID:(id)arg1 residentDeviceManager:(id)arg2 ;
-(id)initWithMessageDispatcher:(id)arg0 homeUUID:(id)arg1 residentDeviceManager:(id)arg2 dataSource:(id)arg3 ;
-(void)_discoverPrimaryResident;
-(void)_processPendingMessagesWithPrimaryResidentDevice:(id)arg0 ;
-(void)_sendMessage:(id)arg0 toPrimaryResidentDevice:(id)arg1 completionHandler:(id)arg2 ;
-(void)handlePrimaryResidentUpdated:(id)arg0 ;
-(void)handleResidentUpdated:(id)arg0 ;
-(void)residentDeviceManager:(id)arg0 didCompleteDiscoveryWithPrimaryResidentDevice:(id)arg1 error:(id)arg2 ;
-(void)sendMessage:(id)arg0 completionHandler:(id)arg1 ;
-(void)timerManager:(id)arg0 didFireForTimerContext:(id)arg1 ;


@end


#endif