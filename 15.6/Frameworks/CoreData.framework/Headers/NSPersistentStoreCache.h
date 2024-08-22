// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSPERSISTENTSTORECACHE_H
#define NSPERSISTENTSTORECACHE_H


#import <Foundation/Foundation.h>


@interface NSPersistentStoreCache : NSObject {
    id *_externalData;
    NSUInteger _capacity;
    *? _externalDataValueCallbacks;
    persistentStoreCacheFlags _persistentStoreCacheFlags;
    os_unfair_lock_s _lock;
}




+(void)initialize;
-(id)init;
-(id)initWithPersistentStore:(id)arg0 ;
-(id)initWithValueCallbacks:(*void)arg0 preserveToManyRelationships:(BOOL)arg1 ;
-(void)dealloc;


@end


#endif