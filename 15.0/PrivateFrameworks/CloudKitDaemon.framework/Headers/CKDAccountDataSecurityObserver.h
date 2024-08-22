// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKDACCOUNTDATASECURITYOBSERVER_H
#define CKDACCOUNTDATASECURITYOBSERVER_H

@class NSError;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CKDLogicalDeviceContext.h"

@interface CKDAccountDataSecurityObserver : NSObject

@property (weak, nonatomic) CKDLogicalDeviceContext *deviceContext; // ivar: _deviceContext
@property (copy, nonatomic) NSError *lastCDPErrorForManateeStatus; // ivar: _lastCDPErrorForManateeStatus
@property (nonatomic, setter=_lockedSetManateeAvailableForLoggedInAccount:) NSInteger manateeAvailableForLoggedInAccount; // ivar: _manateeAvailableForLoggedInAccount
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *statusQueue; // ivar: _statusQueue


-(BOOL)accountSupportsManatee:(id)arg0 ;
-(BOOL)isManateeAvailable:(*id)arg0 ;
-(NSInteger)_fetchManateeAvailability:(*id)arg0 ;
-(id)initWithDeviceContext:(id)arg0 ;
-(void)_lockedFetchAndUpdateManateeAvailability;
-(void)_lockedSetManateeAvailableForLoggedInAccount:(NSInteger)arg0 ;
-(void)dealloc;
-(void)handleManateeStatusUpdateNotificationWithAvailability:(id)arg0 ;
-(void)manateeStatusForCurrentlyLoggedInAccountWithCompletionHandler:(id)arg0 ;


@end


#endif