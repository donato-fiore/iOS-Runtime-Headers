// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDACCOUNTDATASECURITYOBSERVER_H
#define CKDACCOUNTDATASECURITYOBSERVER_H

@class NSError;
@protocol OS_dispatch_queue, NSObject;

#import <Foundation/Foundation.h>

#import "CKDLogicalDeviceContext.h"

@interface CKDAccountDataSecurityObserver : NSObject

@property (nonatomic) NSInteger cachedWalrusStatusForLoggedInAccount; // ivar: _cachedWalrusStatusForLoggedInAccount
@property (weak, nonatomic) CKDLogicalDeviceContext *deviceContext; // ivar: _deviceContext
@property (copy, nonatomic) NSError *lastCDPErrorForManateeStatus; // ivar: _lastCDPErrorForManateeStatus
@property (copy, nonatomic) NSError *lastCDPErrorForWalrusStatus; // ivar: _lastCDPErrorForWalrusStatus
@property (nonatomic, setter=_lockedSetManateeAvailableForLoggedInAccount:) NSInteger manateeAvailableForLoggedInAccount; // ivar: _manateeAvailableForLoggedInAccount
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *statusQueue; // ivar: _statusQueue
@property (retain, nonatomic) NSObject<NSObject> *walrusStatusChangeObserver; // ivar: _walrusStatusChangeObserver


+(id)sharedWalrusController;
-(BOOL)accountSupportsManatee:(id)arg0 ;
-(BOOL)isManateeAvailableForAccount:(id)arg0 isSecondaryAccount:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)isWalrusEnabledForAccount:(id)arg0 isSecondaryAccount:(BOOL)arg1 error:(*id)arg2 ;
-(NSInteger)_fetchManateeAvailability:(*id)arg0 ;
-(id)initWithDeviceContext:(id)arg0 ;
-(void)_lockedFetchAndUpdateManateeAvailability;
-(void)_lockedSetManateeAvailableForLoggedInAccount:(NSInteger)arg0 ;
-(void)dealloc;
-(void)handleManateeStatusUpdateNotificationWithAvailability:(id)arg0 ;
-(void)handleWalrusStateChanged;
-(void)manateeStatusForAccount:(id)arg0 isSecondaryAccount:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)postClouddWalrusUpdateNotification;
-(void)walrusStatusForAccount:(id)arg0 isSecondaryAccount:(BOOL)arg1 checkCache:(BOOL)arg2 completionHandler:(id)arg3 ;


@end


#endif