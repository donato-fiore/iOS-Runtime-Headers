// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMBULLETINBOARDNOTIFICATION_H
#define HMBULLETINBOARDNOTIFICATION_H

@class NSPredicate, NSString, NSUUID;
@protocol NSSecureCoding, HMObjectMerge, HMFMessageReceiver, HMFLogging, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_HMContext.h"
#import "HMBulletinBoardNotificationServiceGroup.h"
#import "HMService.h"

@interface HMBulletinBoardNotification : NSObject <NSSecureCoding, HMObjectMerge, HMFMessageReceiver, HMFLogging>

 {
    os_unfair_lock_s _lock;
}


@property (retain, nonatomic) NSPredicate *condition; // ivar: _condition
@property (retain, nonatomic) _HMContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *logID; // ivar: _logID
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) HMBulletinBoardNotificationServiceGroup *notificationServiceGroup; // ivar: _notificationServiceGroup
@property (readonly, weak, nonatomic) HMService *service; // ivar: _service
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSUUID *targetUUID; // ivar: _targetUUID
@property (readonly, copy, nonatomic) NSUUID *uniqueIdentifier; // ivar: _uniqueIdentifier


+(BOOL)supportsSecureCoding;
+(id)logCategory;
-(BOOL)_mergeWithNewObject:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEnabled:(BOOL)arg0 condition:(id)arg1 ;
-(id)logIdentifier;
-(void)__configureWithContext:(id)arg0 ;
-(void)_callBulletinBoardNotificationUpdatedDelegate;
-(void)_commitWithCompletionHandler:(id)arg0 ;
-(void)_handleBulletinBoardNotificationUpdateNotification:(id)arg0 ;
-(void)_registerNotificationHandlers;
-(void)_unconfigure;
-(void)_unconfigureContext;
-(void)commitWithCompletionHandler:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif