// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CMPHOTOPROCESSMONITOR_H
#define CMPHOTOPROCESSMONITOR_H

@class NSMutableDictionary, RBSDomainAttribute, RBSAssertion, RBSProcessMonitor;
@protocol OS_os_transaction, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CMPhotoProcessMonitor : NSObject {
    os_unfair_lock_s _lock;
}


@property (nonatomic) NSUInteger assertionHeldToTime; // ivar: _assertionHeldToTime
@property (retain, nonatomic) NSMutableDictionary *backgroundNotificationBlocks; // ivar: _backgroundNotificationBlocks
@property (retain, nonatomic) RBSDomainAttribute *domainAttribute; // ivar: _domainAttribute
@property (nonatomic) BOOL gotRBSConnectionError; // ivar: _gotRBSConnectionError
@property (retain, nonatomic) NSMutableDictionary *heldAssertions; // ivar: _heldAssertions
@property (retain, nonatomic) RBSAssertion *latestAssertion; // ivar: _latestAssertion
@property (retain, nonatomic) NSObject<OS_os_transaction> *latestTransaction; // ivar: _latestTransaction
@property (retain, nonatomic) RBSProcessMonitor *processMonitor; // ivar: _processMonitor
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *processMonitorSyncQueue; // ivar: _processMonitorSyncQueue


+(BOOL)isForegroundApp;
+(id)getShared;
-(id)init;
-(int)registerBackgroundNotificationHandlerForContext:(*void)arg0 handler:(id)arg1 ;
-(int)releaseAssertionForContext:(*void)arg0 ;
-(int)takeAssertionUntilTime:(NSUInteger)arg0 forContext:(*void)arg1 ;
-(int)unregisterBackgroundNotificationForContext:(*void)arg0 ;
-(void)_createRBSMonitorIfNeeded;
-(void)_handleBackgroundingNotification;
-(void)_takeOSTransactionForContext:(*void)arg0 ;
-(void)_takeRBSAssertionForContext:(*void)arg0 until:(NSUInteger)arg1 maxLength:(NSUInteger)arg2 ;
-(void)dealloc;
-(void)waitForPendingNotifications;


@end


#endif