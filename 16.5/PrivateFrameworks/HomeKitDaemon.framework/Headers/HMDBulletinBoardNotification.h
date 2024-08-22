// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDBULLETINBOARDNOTIFICATION_H
#define HMDBULLETINBOARDNOTIFICATION_H

@class HMFObject, NSPredicate, NSString, NSUUID, HMFMessageDispatcher;
@protocol NSSecureCoding, HMFMessageReceiver, HMFLogging, HMFDumpState, OS_dispatch_queue;


#import "HMDHome.h"
#import "HMDBulletinBoardNotificationServiceGroup.h"
#import "HMDService.h"

@interface HMDBulletinBoardNotification : HMFObject <NSSecureCoding, HMFMessageReceiver, HMFLogging, HMFDumpState>

 {
    os_unfair_lock_s _lock;
}


@property (retain, nonatomic) NSPredicate *condition; // ivar: _condition
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (readonly) NSUInteger hash;
@property (readonly) HMDHome *home;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID; // ivar: _messageTargetUUID
@property (retain) HMFMessageDispatcher *msgDispatcher; // ivar: _msgDispatcher
@property (retain, nonatomic) HMDBulletinBoardNotificationServiceGroup *notificationServiceGroup; // ivar: _notificationServiceGroup
@property (weak, nonatomic) HMDService *service; // ivar: _service
@property (readonly) Class superclass;
@property (retain) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(BOOL)supportsBulletinNotificationGroup:(id)arg0 ;
+(BOOL)supportsSecureCoding;
+(id)logCategory;
-(id)attributeDescriptions;
-(id)dumpState;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithService:(id)arg0 ;
-(id)initWithService:(id)arg0 enabled:(BOOL)arg1 condition:(id)arg2 ;
-(id)logIdentifier;
-(void)_handleBulletinBoardNotificationCommitRequest:(id)arg0 ;
-(void)_updateAccessoryBulletinNotificationManagerWithEnabled:(BOOL)arg0 condition:(id)arg1 completion:(id)arg2 ;
-(void)_updateLocalSettingsWithEnabled:(BOOL)arg0 condition:(id)arg1 forMessage:(id)arg2 ;
-(void)configureBulletinNotification;
-(void)configureWithWorkQueue:(id)arg0 messageDispatcher:(id)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)registerNotificationHandlers;
-(void)updateRegistrations;


@end


#endif