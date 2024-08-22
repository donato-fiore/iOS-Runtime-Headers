// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICTHUMBNAILCACHE_H
#define ICTHUMBNAILCACHE_H

@protocol ICThumbnailCaching;

#import <Foundation/Foundation.h>


@interface ICThumbnailCache : NSObject <ICThumbnailCaching>

 {
    ? cache;
    ? persistedCache;
    ? $__lazy_storage_$_cacheKeyQueueQos;
    ? $__lazy_storage_$_cacheKeyQueue;
    ? $__lazy_storage_$_objectIdentifiersToCacheKeys;
}




+(id)shared;
-(id)creationDateFor:(id)arg0 ;
-(id)init;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(void)invalidateForObjectIdentifiers:(id)arg0 ;
-(void)setObject:(id)arg0 forKeyedSubscript:(id)arg1 ;


@end


#endif