// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UNSNOTIFICATIONTOPICREPOSITORY_H
#define UNSNOTIFICATIONTOPICREPOSITORY_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "UNSKeyedDataStoreRepository.h"
#import "UNSKeyedObservable.h"

@interface UNSNotificationTopicRepository : NSObject {
    UNSKeyedDataStoreRepository *_repository;
    UNSKeyedObservable *_observable;
    NSObject<OS_dispatch_queue> *_queue;
}




-(NSInteger)_maxObjectsPerKey;
-(id)_queue_topicsForBundleIdentifier:(id)arg0 ;
-(id)allBundleIdentifiers;
-(id)initWithDataStoreRepository:(id)arg0 observable:(id)arg1 ;
-(id)initWithDirectory:(id)arg0 librarian:(id)arg1 repositoryProtectionStrategy:(id)arg2 ;
-(id)topicsForBundleIdentifier:(id)arg0 ;
-(void)_queue_notificationSourcesDidUninstall:(id)arg0 ;
-(void)_queue_setTopics:(id)arg0 forBundleIdentifier:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)addObserver:(id)arg0 forBundleIdentifier:(id)arg1 ;
-(void)contentProtectionStateChangedForFirstUnlock:(BOOL)arg0 ;
-(void)notificationSourcesDidUninstall:(id)arg0 ;
-(void)removeObserver:(id)arg0 forBundleIdentifier:(id)arg1 ;
-(void)setTopics:(id)arg0 forBundleIdentifier:(id)arg1 withCompletionHandler:(id)arg2 ;


@end


#endif