// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFMESSAGESTOREOBJECTCACHE_H
#define MFMESSAGESTOREOBJECTCACHE_H

@class NSLock, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface MFMessageStoreObjectCache : NSObject {
    NSLock *_lock;
    NSUInteger _capacity;
    NSMutableDictionary *_cache;
}


@property (copy, nonatomic) id *comparator; // ivar: _comparator
@property (copy, nonatomic) id *keyGenerator; // ivar: _keyGenerator


-(id)addObject:(id)arg0 forMessage:(id)arg1 kind:(NSInteger)arg2 ;
-(id)debugDescription;
-(id)description;
-(id)initWithCapacity:(NSUInteger)arg0 ;
-(id)objectForMessage:(id)arg0 kind:(NSInteger)arg1 ;
-(void)_nts_evictObject;
-(void)_nts_setObject:(id)arg0 forKey:(id)arg1 ;
-(void)flush;
-(void)removeObjectForMessage:(id)arg0 kind:(NSInteger)arg1 ;
-(void)setObject:(id)arg0 forMessage:(id)arg1 kind:(NSInteger)arg2 ;


@end


#endif