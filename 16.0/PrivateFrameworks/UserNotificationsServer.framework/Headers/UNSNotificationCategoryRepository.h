// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UNSNOTIFICATIONCATEGORYREPOSITORY_H
#define UNSNOTIFICATIONCATEGORYREPOSITORY_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "UNSKeyedDataStoreRepository.h"
#import "UNSKeyedObservable.h"

@interface UNSNotificationCategoryRepository : NSObject {
    UNSKeyedDataStoreRepository *_repository;
    UNSKeyedObservable *_observable;
    NSObject<OS_dispatch_queue> *_queue;
}




-(NSInteger)_maxObjectsPerKey;
-(id)_queue_categoriesForBundleIdentifier:(id)arg0 ;
-(id)allBundleIdentifiers;
-(id)categoriesForBundleIdentifier:(id)arg0 ;
-(id)categoryWithIdentifier:(id)arg0 bundleIdentifier:(id)arg1 ;
-(id)initWithDataStoreRepository:(id)arg0 observable:(id)arg1 ;
-(id)initWithDirectory:(id)arg0 librarian:(id)arg1 repositoryProtectionStrategy:(id)arg2 ;
-(void)_queue_notificationSourcesDidUninstall:(id)arg0 ;
-(void)_queue_performMigration;
-(void)_queue_performMigrationForBundleIdentifier:(id)arg0 ;
-(void)_queue_setCategories:(id)arg0 forBundleIdentifier:(id)arg1 ;
-(void)addObserver:(id)arg0 forBundleIdentifier:(id)arg1 ;
-(void)contentProtectionStateChangedForFirstUnlock:(BOOL)arg0 ;
-(void)notificationSourcesDidUninstall:(id)arg0 ;
-(void)performMigration;
-(void)removeObserver:(id)arg0 forBundleIdentifier:(id)arg1 ;
-(void)setCategories:(id)arg0 forBundleIdentifier:(id)arg1 ;


@end


#endif