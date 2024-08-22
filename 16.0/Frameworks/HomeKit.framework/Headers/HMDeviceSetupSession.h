// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDEVICESETUPSESSION_H
#define HMDEVICESETUPSESSION_H

@class HMFActivity, NSString, NSUUID, NSDictionary;
@protocol HMFLogging, HMFMessageReceiver, HMDeviceSetupSessionDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_HMContext.h"

@interface HMDeviceSetupSession : NSObject <HMFLogging, HMFMessageReceiver>

 {
    os_unfair_lock_s _lock;
    NSInteger _state;
    HMFActivity *_activity;
}


@property (readonly, nonatomic) _HMContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak) NSObject<HMDeviceSetupSessionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUUID *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly) NSInteger role; // ivar: _role
@property (readonly) Class superclass;
@property (readonly, copy) NSDictionary *userInfo; // ivar: _userInfo


+(id)logCategory;
+(id)messageDestinationToOpenSession;
-(BOOL)_moveToState:(NSInteger)arg0 ;
-(BOOL)_needsClosing;
-(id)init;
-(id)initWithRole:(NSInteger)arg0 context:(id)arg1 delegate:(id)arg2 ;
-(id)initWithRole:(NSInteger)arg0 delegate:(id)arg1 ;
-(id)logIdentifier;
-(id)messageDestinationForOpenedSessions;
-(id)responseHandlerForOpenMessage:(SEL)arg0 ;
-(id)responseHandlerForReceiveDataMessageWithCompletionHandler:(SEL)arg0 ;
-(void)_closeWithError:(id)arg0 ;
-(void)_handleDeviceSetupSessionReceiveDataMessage:(id)arg0 ;
-(void)_handleOpenedSession;
-(void)cleanUpSession;
-(void)cleanUpSessionWithError:(id)arg0 ;
-(void)close;
-(void)configure;
-(void)dealloc;
-(void)handleDeviceSetupSessionCloseMessage:(id)arg0 ;
-(void)handleDeviceSetupSessionReceiveDataMessage:(id)arg0 ;
-(void)handleHomeKitDaemonInterruptedNotification:(id)arg0 ;
-(void)open;
-(void)registerForMessages;
-(void)registerForNotifications;
-(void)sendExchangeData:(id)arg0 qualityOfService:(NSInteger)arg1 completionHandler:(id)arg2 ;


@end


#endif