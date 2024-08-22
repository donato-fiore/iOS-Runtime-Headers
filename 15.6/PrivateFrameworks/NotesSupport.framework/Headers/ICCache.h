// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICCACHE_H
#define ICCACHE_H

@class NSCache, NSSet, NSMutableSet;
@protocol OS_dispatch_source, OS_dispatch_queue;



@interface ICCache : NSCache

@property (readonly, nonatomic) NSSet *allKeys;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *memoryWarningEventSource; // ivar: _memoryWarningEventSource
@property (retain, nonatomic) NSMutableSet *mutableKeys; // ivar: _mutableKeys
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *mutableKeysAccessQueue; // ivar: _mutableKeysAccessQueue


+(id)cacheCollection;
+(void)purgeAllCaches;
-(id)init;
-(void)dealloc;
-(void)receivedMemoryWarning;
-(void)registerForMemoryWarnings;
-(void)removeAllObjects;
-(void)removeObjectForKey:(id)arg0 ;
-(void)removeObjectsWithKeyContainingString:(id)arg0 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 cost:(NSUInteger)arg2 ;
-(void)unregisterForMemoryWarnings;


@end


#endif