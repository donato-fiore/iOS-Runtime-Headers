// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFWEAKOBJECTCACHE_H
#define MFWEAKOBJECTCACHE_H

@class NSMutableDictionary, NSLock;

#import <Foundation/Foundation.h>


@interface MFWeakObjectCache : NSObject {
    id *_block;
    NSMutableDictionary *_dictionary;
    NSLock *_lock;
}




-(id)initWithBlock:(id)arg0 ;
-(id)objectForKey:(id)arg0 ;
-(id)objectForKey:(id)arg0 shouldGenerate:(BOOL)arg1 wasCached:(*BOOL)arg2 ;
-(id)objectForKey:(id)arg0 wasCached:(*BOOL)arg1 ;
-(id)weakObjectCacheRefForKey:(id)arg0 ;
-(void)dealloc;
-(void)removeObjectForKey:(id)arg0 ;


@end


#endif