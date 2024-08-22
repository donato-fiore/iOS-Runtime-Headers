// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDHOMEPRESENCEBASE_H
#define HMDHOMEPRESENCEBASE_H

@class HMFObject, NSString, NSSet, NSUUID, HMFMessageDispatcher;
@protocol HMFLogging, HMDHomeMessageReceiver, OS_dispatch_queue;


#import "HMDHome.h"
#import "HMDNotificationRegistration.h"

@interface HMDHomePresenceBase : HMFObject <HMFLogging, HMDHomeMessageReceiver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) HMDHome *home; // ivar: _home
@property (retain, nonatomic) NSString *logString; // ivar: _logString
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, copy) NSSet *messageReceiverChildren;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (retain, nonatomic) HMFMessageDispatcher *msgDispatcher; // ivar: _msgDispatcher
@property (readonly, nonatomic) HMDNotificationRegistration *notificationRegistration; // ivar: _notificationRegistration
@property (readonly) Class superclass;
@property (retain, nonatomic) NSUUID *uuid; // ivar: _uuid
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(BOOL)hasMessageReceiverChildren;
+(id)logCategory;
-(id)logIdentifier;
-(void)_initialize:(id)arg0 ;
-(void)_registerForMessages;
-(void)configure:(id)arg0 messageDispatcher:(id)arg1 ;
-(void)handleHomeDataLoadedNotification:(id)arg0 ;
-(void)residentChanged;


@end


#endif