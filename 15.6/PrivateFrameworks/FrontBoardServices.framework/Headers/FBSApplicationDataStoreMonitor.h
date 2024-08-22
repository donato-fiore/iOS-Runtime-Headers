// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FBSAPPLICATIONDATASTOREMONITOR_H
#define FBSAPPLICATIONDATASTOREMONITOR_H

@class NSHashTable, NSString;
@protocol FBSApplicationDataStoreRepositoryClientObserver, FBSApplicationDataStoreRepositoryClient;

#import <Foundation/Foundation.h>


@interface FBSApplicationDataStoreMonitor : NSObject <FBSApplicationDataStoreRepositoryClientObserver>

 {
    id<FBSApplicationDataStoreRepositoryClient> *_client;
    BOOL _clientNeedsCheckin;
    os_unfair_lock_s _lock;
    NSHashTable *_lock_observers;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_hasObserver:(id)arg0 ;
-(id)init;
-(id)initWithClient:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)applicationDataStoreRepositoryClient:(id)arg0 application:(id)arg1 changedObject:(id)arg2 forKey:(id)arg3 ;
-(void)applicationDataStoreRepositoryClient:(id)arg0 storeInvalidatedForApplication:(id)arg1 ;
-(void)dealloc;
-(void)removeObserver:(id)arg0 ;


@end


#endif