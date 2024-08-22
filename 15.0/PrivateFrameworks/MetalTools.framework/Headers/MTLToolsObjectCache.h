// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTLTOOLSOBJECTCACHE_H
#define MTLTOOLSOBJECTCACHE_H

@class NSMapTable;

#import <Foundation/Foundation.h>


@interface MTLToolsObjectCache : NSObject {
    NSMapTable *_map;
    recursive_mutex _lock;
    vector<id, std::allocator<id>> _keyRemoveList;
    os_unfair_lock_s _listLock;
}




-(id)getCachedObjectForKey:(id)arg0 ;
-(id)getCachedObjectForKey:(id)arg0 onMiss:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)removeKey:(id)arg0 ;


@end


#endif