// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UNSPENDINGNOTIFICATIONREPOSITORY_H
#define UNSPENDINGNOTIFICATIONREPOSITORY_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "UNSKeyedDataStoreRepository.h"
#import "UNSKeyedObservable.h"
#import "UNSBundleLibrarian.h"

@interface UNSPendingNotificationRepository : NSObject {
    UNSKeyedDataStoreRepository *_repository;
    UNSKeyedObservable *_observable;
    NSObject<OS_dispatch_queue> *_queue;
    UNSBundleLibrarian *_librarian;
}




-(NSInteger)_maxObjectsPerKey;
-(id)_queue_pendingNotificationDictionariesForBundleIdentifier:(id)arg0 ;
-(id)_queue_pendingNotificationRecordsForBundleIdentifier:(id)arg0 ;
-(id)allBundleIdentifiers;
-(id)initWithDataStoreRepository:(id)arg0 observable:(id)arg1 librarian:(id)arg2 ;
-(id)initWithDirectory:(id)arg0 librarian:(id)arg1 repositoryProtectionStrategy:(id)arg2 ;
-(id)pendingNotificationRecordsForBundleIdentifier:(id)arg0 ;
-(void)_queue_notificationSourcesDidUninstall:(id)arg0 ;
-(void)_queue_notifyObserversOfChangesFrom:(id)arg0 to:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)_queue_performMigration;
-(void)_queue_performMigrationForBundleIdentifier:(id)arg0 ;
-(void)_queue_setPendingNotificationDictionaries:(id)arg0 forBundleIdentifier:(id)arg1 ;
-(void)_queue_setPendingNotificationRecords:(id)arg0 forBundleIdentifier:(id)arg1 ;
-(void)addObserver:(id)arg0 forBundleIdentifier:(id)arg1 ;
-(void)applicationStateDidRestore;
-(void)contentProtectionStateChangedForFirstUnlock:(BOOL)arg0 ;
-(void)notificationSourcesDidUninstall:(id)arg0 ;
-(void)performMigration;
-(void)removeObserver:(id)arg0 forBundleIdentifier:(id)arg1 ;
-(void)setPendingNotificationRecords:(id)arg0 forBundleIdentifier:(id)arg1 ;


@end


#endif