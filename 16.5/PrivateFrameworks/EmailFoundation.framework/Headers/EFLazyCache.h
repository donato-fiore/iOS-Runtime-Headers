// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EFLAZYCACHE_H
#define EFLAZYCACHE_H

@class NSRecursiveLock, NSCache, NSString;
@protocol NSCacheDelegate, EFLazyCacheDelegate;

#import <Foundation/Foundation.h>


@interface EFLazyCache : NSObject <NSCacheDelegate>

 {
    NSRecursiveLock *_lock;
    NSCache *_storage;
    ? _flags;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<EFLazyCacheDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)waiterCountForKey:(id)arg0 ;
-(id)cachedObjectForKey:(id)arg0 ;
-(id)init;
-(id)initWithCountLimit:(NSUInteger)arg0 ;
-(id)objectForKey:(id)arg0 generator:(id)arg1 ;
-(id)storedObjectForKey:(id)arg0 ;
-(void)_exchangeOriginalObject:(id)arg0 forKey:(id)arg1 withObject:(id)arg2 ;
-(void)cache:(id)arg0 willEvictObject:(id)arg1 ;
-(void)dealloc;
-(void)removeAllObjects;
-(void)removeObjectForKey:(id)arg0 ;


@end


#endif