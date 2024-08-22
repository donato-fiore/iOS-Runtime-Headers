// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPMEDIAENTITYCACHE_H
#define MPMEDIAENTITYCACHE_H

@class NSMutableArray;
@protocol MPMediaLibraryDataProviderPrivate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MPMediaEntityCache : NSObject {
    id<MPMediaLibraryDataProviderPrivate> *_mediaLibraryDataProvider;
    BOOL _mediaLibraryDataProviderRespondsToSupportsEntityChangeTrackingMethod;
    _opaque_pthread_rwlock_t _rwlock;
    os_unfair_lock_s _entityCacheMapLock;
    NSObject<OS_dispatch_queue> *_deallocLaterQueue;
    *__CFDictionary _concreteEntitiesByDataProviderEntityClass;
    NSMutableArray *_entityTemporaryReferences;
}




-(*void)_entityMapForDataProviderEntityClass:(Class)arg0 ;
-(id)_entityWithIdentifier:(NSInteger)arg0 mediaEntityType:(NSInteger)arg1 collectionGroupingType:(NSInteger)arg2 loadEntityBlock:(id)arg3 ;
-(id)collectionWithIdentifier:(NSInteger)arg0 grouping:(NSInteger)arg1 loadEntityBlock:(id)arg2 ;
-(id)initWithMediaLibraryDataProvider:(id)arg0 ;
-(id)itemWithIdentifier:(NSInteger)arg0 ;
-(id)itemWithIdentifier:(NSInteger)arg0 loadEntityBlock:(id)arg1 ;
-(void)_clearSomeGlobalEntityTemporaryReferences;
-(void)_performWithExclusiveAccessForDataProviderEntityClass:(Class)arg0 block:(id)arg1 ;
-(void)_performWithSharedAccessForDataProviderEntityClass:(Class)arg0 block:(id)arg1 ;
-(void)removeEntityWithIdentifier:(NSInteger)arg0 dataProviderEntityClass:(Class)arg1 ;
-(void)updatePropertyValuesInEntityWithIdentifier:(NSInteger)arg0 dataProviderEntityClass:(Class)arg1 deleted:(BOOL)arg2 ;


@end


#endif