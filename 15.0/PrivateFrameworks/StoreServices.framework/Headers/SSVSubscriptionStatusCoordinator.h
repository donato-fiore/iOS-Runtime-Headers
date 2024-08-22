// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSVSUBSCRIPTIONSTATUSCOORDINATOR_H
#define SSVSUBSCRIPTIONSTATUSCOORDINATOR_H

@class NSDate, NSMutableArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SSVSubscriptionStatusRequest.h"
#import "SSVSubscriptionStatus.h"

@interface SSVSubscriptionStatusCoordinator : NSObject {
    SSVSubscriptionStatusRequest *_activeRequest;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    BOOL _didReset;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    SSVSubscriptionStatus *_lastKnownStatus;
    NSDate *_lastStatusDate;
    int _notificationToken;
    NSInteger _subscriptionStatusAccessPolicy;
    NSMutableArray *_statusBlocks;
}


@property (readonly, copy) SSVSubscriptionStatus *lastKnownStatus;


+(id)_changeNotificationSuspensionAccessQueue;
+(id)_existingSharedCoordinator;
+(id)copyStatusFromUserDefaults;
+(id)sharedCoordinator;
+(void)_sendChangeNotification;
+(void)beginSuspendingSubscriptionStatusChangeNotifications;
+(void)endSuspendingSubscriptionStatusChangeNotifications;
+(void)removeUserDefaultsForAccountIdentifier:(id)arg0 ;
+(void)sendChangeNotification;
+(void)updateUserDefaultsWithStatus:(id)arg0 ;
+(void)updateWithResponseDictionary:(id)arg0 accountIdentifier:(id)arg1 ;
-(id)_copyStatusDateFromUserDefaults;
-(id)_copyStatusFromUserDefaults;
-(id)_copyValidStatusForStatus:(id)arg0 ;
-(id)init;
-(void)_accountStoreChangedNotification;
-(void)_deviceStoreFrontChangedNotification;
-(void)_externalChangeNotification;
-(void)_fireStatusBlocksWithStatus:(id)arg0 isFinal:(BOOL)arg1 error:(id)arg2 ;
-(void)_handleRequestResponseWithStatus:(id)arg0 isFinal:(BOOL)arg1 error:(id)arg2 ;
-(void)_invalidateLastKnownStatus;
-(void)_updateSubscriptionStatusAccessPolicyAllowingNotification:(BOOL)arg0 ;
-(void)_validateLastKnownStatus;
-(void)dealloc;
-(void)getStatusWithOptions:(id)arg0 statusBlock:(id)arg1 ;
-(void)modifyLastKnownStatusUsingBlock:(id)arg0 ;
-(void)reset;


@end


#endif