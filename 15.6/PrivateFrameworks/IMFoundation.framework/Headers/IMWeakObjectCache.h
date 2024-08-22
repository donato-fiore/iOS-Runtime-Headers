// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMWEAKOBJECTCACHE_H
#define IMWEAKOBJECTCACHE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface IMWeakObjectCache : NSObject {
    NSMutableDictionary *_weakObjectCache;
    _opaque_pthread_mutex_t _tableLock;
}




+(id)sharedInstance;
-(id)copyObjectForKey:(id)arg0 ;
-(id)copyOrSetObject:(id)arg0 forKey:(id)arg1 ;
-(id)init;
-(id)objectForKey:(id)arg0 ;
-(void)dealloc;
-(void)removeObject:(id)arg0 key:(id)arg1 ;


@end


#endif