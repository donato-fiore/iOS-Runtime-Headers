// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BUUSERACCOUNTMONITOR_H
#define BUUSERACCOUNTMONITOR_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface BUUserAccountMonitor : NSObject {
    os_unfair_lock_s _observersLock;
}


@property (retain, nonatomic) NSMutableDictionary *accountIdentifiers; // ivar: _accountIdentifiers
@property (retain, nonatomic) NSMutableDictionary *notifyBlocks; // ivar: _notifyBlocks
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *notifyQueue; // ivar: _notifyQueue
@property (retain, nonatomic) NSMutableDictionary *observerHashTables; // ivar: _observerHashTables


+(id)sharedInstance;
-(NSInteger)_addObserver:(id)arg0 forAccountType:(NSUInteger)arg1 ;
-(NSInteger)_observerCountForAccountType:(NSUInteger)arg0 ;
-(NSInteger)_removeObserver:(id)arg0 forAccountType:(NSUInteger)arg1 ;
-(NSUInteger)_singleAccountTypeForNotification:(id)arg0 ;
-(id)_observersForAccountType:(NSUInteger)arg0 ;
-(id)init;
-(void)_didReceiveNotification:(id)arg0 ;
-(void)_registerNotificationForAccountType:(NSUInteger)arg0 ;
-(void)_unregisterNotificationForAccountType:(NSUInteger)arg0 ;
-(void)addObserver:(id)arg0 accountTypes:(NSUInteger)arg1 ;
-(void)nq_setupNotificationForAccountType:(NSUInteger)arg0 currentAccountIdentifier:(id)arg1 ;
-(void)nq_teardownNotificationForAccountType:(NSUInteger)arg0 ;
-(void)nq_updateAccountIdentifierAndNotifyObserversForAccountType:(NSUInteger)arg0 ;
-(void)nq_updateiCloudAccountIdentifierAndNotifyObservers;
-(void)nq_updateiTunesAccountIdentifierAndNotifyObservers;
-(void)removeObserver:(id)arg0 accountTypes:(NSUInteger)arg1 ;


@end


#endif