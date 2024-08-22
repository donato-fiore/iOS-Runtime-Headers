// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDEVICESETUPSESSION_H
#define HMDEVICESETUPSESSION_H

@class HMFUnfairLock, HMFActivity, NSString, NSUUID, NSDictionary;
@protocol HMFLogging, HMFMessageReceiver, HMDeviceSetupSessionDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_HMContext.h"

@interface HMDeviceSetupSession : NSObject <HMFLogging, HMFMessageReceiver>

 {
    HMFUnfairLock *_lock;
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
@property (nonatomic, getter=isOpen) BOOL open; // ivar: _open
@property (readonly) NSInteger role; // ivar: _role
@property (readonly) Class superclass;
@property (readonly, copy) NSDictionary *userInfo; // ivar: _userInfo


+(id)homeManagerDestination;
+(id)logCategory;
-(id)init;
-(id)initWithRole:(NSInteger)arg0 delegate:(id)arg1 ;
-(id)logIdentifier;
-(id)messageDestination;
-(void)__closeWithError:(id)arg0 ;
-(void)__handleClose:(id)arg0 ;
-(void)__handleReceivedExchangeData:(id)arg0 ;
-(void)__registerForMessages;
-(void)_closeWithError:(id)arg0 ;
-(void)_handleDisconnection:(id)arg0 ;
-(void)_handleOpenedSession;
-(void)_reallySendExchangeData:(id)arg0 qualityOfService:(NSInteger)arg1 completionHandler:(id)arg2 ;
-(void)close;
-(void)dealloc;
-(void)open;
-(void)sendExchangeData:(id)arg0 qualityOfService:(NSInteger)arg1 completionHandler:(id)arg2 ;


@end


#endif