// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PASLRUCACHE_H
#define _PASLRUCACHE_H


#import <Foundation/Foundation.h>

#import "_PASLock.h"

@interface _PASLRUCache : NSObject {
    _PASLock *_lock;
    NSUInteger _countLimit;
}




-(id)initWithCountLimit:(NSUInteger)arg0 ;
-(id)objectForKey:(id)arg0 ;
-(void)enumerateKeysAndObjectsUsingBlock:(id)arg0 ;
-(void)removeAllObjects;
-(void)removeObjectForKey:(id)arg0 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;


@end


#endif