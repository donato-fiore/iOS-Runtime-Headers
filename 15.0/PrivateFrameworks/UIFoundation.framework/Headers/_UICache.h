// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UICACHE_H
#define _UICACHE_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface _UICache : NSObject {
    NSObject<OS_dispatch_queue> *_cacheQueue;
    NSMutableDictionary *_cache;
    NSObject<OS_dispatch_source> *_memoryWarningsSource;
    BOOL _clearsCacheOnLowMemoryWarnings;
    BOOL _clearsCacheOnApplicationBackground;
    id *_noteObserver;
}


@property (nonatomic) BOOL clearsCacheOnApplicationBackground;
@property (nonatomic) BOOL clearsCacheOnLowMemoryWarnings;


-(id)cacheKeys;
-(id)init;
-(id)objectForKey:(id)arg0 ;
-(id)retainedObjectForKey:(id)arg0 ;
-(void)dealloc;
-(void)removeAllObjects;
-(void)removeObjectForKey:(id)arg0 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;


@end


#endif