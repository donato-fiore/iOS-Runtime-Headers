// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFREADERWRITERCACHE_H
#define HFREADERWRITERCACHE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface HFReaderWriterCache : NSObject {
    _opaque_pthread_rwlock_t _rwlock;
}


@property (readonly, nonatomic) NSMutableDictionary *cachedObjects; // ivar: _cachedObjects


-(id)init;
-(id)objectForKey:(id)arg0 ;
-(id)tryObjectForKey:(id)arg0 ;
-(void)dealloc;
-(void)performBlockWithWriteLock:(id)arg0 ;
-(void)removeObjectForKey:(id)arg0 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;
-(void)setObject:(id)arg0 onlyIfNoObjectForKey:(id)arg1 ;


@end


#endif