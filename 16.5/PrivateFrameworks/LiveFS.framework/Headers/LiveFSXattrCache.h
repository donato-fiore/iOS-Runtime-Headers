// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LIVEFSXATTRCACHE_H
#define LIVEFSXATTRCACHE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface LiveFSXattrCache : NSObject {
    NSMutableDictionary *_cacheEntries;
    NSUInteger _entryCount;
    NSUInteger _maxItems;
    NSUInteger _maxItemSize;
    NSUInteger _entryLifetime;
    BOOL _noXattrsPresent;
    timespec _noXattrsPresentSetTime;
}


@property BOOL noXattrsPresent;


+(id)xattrCacheWithMaxItems:(NSUInteger)arg0 andMaxItemSize:(NSUInteger)arg1 ;
+(id)xattrCacheWithMaxItems:(NSUInteger)arg0 maxItemSize:(NSUInteger)arg1 andEntryLifetimeInSeconds:(NSUInteger)arg2 ;
-(id)dataForName:(id)arg0 wasNegative:(*BOOL)arg1 ;
-(id)initWithMaxItems:(NSUInteger)arg0 andMaxItemSize:(NSUInteger)arg1 ;
-(id)initWithMaxItems:(NSUInteger)arg0 maxItemSize:(NSUInteger)arg1 andEntryLifetimeInSeconds:(NSUInteger)arg2 ;
-(void)dealloc;
-(void)insertEntryForData:(id)arg0 forName:(id)arg1 ;
-(void)invalidate;
-(void)setData:(id)arg0 forName:(id)arg1 ;
-(void)setNegativeForName:(id)arg0 ;


@end


#endif