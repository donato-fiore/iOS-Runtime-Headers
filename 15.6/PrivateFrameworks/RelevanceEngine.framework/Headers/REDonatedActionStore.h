// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef REDONATEDACTIONSTORE_H
#define REDONATEDACTIONSTORE_H

@protocol OS_dispatch_queue;


#import "REObservableSingleton.h"
#import "REUpNextScheduler.h"

@interface REDonatedActionStore : REObservableSingleton {
    BOOL _isMonitoringLockState;
    BOOL _synchronized;
    NSObject<OS_dispatch_queue> *_queue;
    REUpNextScheduler *_donationsScheduler;
    REUpNextScheduler *_deletionsScheduler;
}




-(BOOL)_shouldLimitQueries;
-(id)_init;
-(id)callbackQueue;
-(void)_beginLoadingData;
-(void)_finishLoadingData:(NSUInteger)arg0 ;
-(void)_notified_addDonatedActionsForInstalledApps:(id)arg0 ;
-(void)_notified_distributeRecentDeletedActions:(id)arg0 ;
-(void)_notified_distributeRecentDonatedActions:(id)arg0 ;
-(void)_notified_removeDonatedActionsForUninstalledApps:(id)arg0 ;
-(void)_notified_removeThenDistributeAllActions:(id)arg0 ;
-(void)_queue_distributeAllDonatedActions;
-(void)_queue_distributeAllDonatedActionsWithIdentifier:(id)arg0 ;
-(void)_queue_distributeRecentDeletedActions;
-(void)_queue_distributeRecentDonatedActions;
-(void)_subscribeToNotifications;
-(void)dealloc;
-(void)fetchDonationWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)start;
-(void)synchronizeDonationsIfNecessary;
-(void)triggerDistributeAllDonatedActions:(BOOL)arg0 ;


@end


#endif