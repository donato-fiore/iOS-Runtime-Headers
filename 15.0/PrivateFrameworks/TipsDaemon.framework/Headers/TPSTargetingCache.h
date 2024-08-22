// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TPSTARGETINGCACHE_H
#define TPSTARGETINGCACHE_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface TPSTargetingCache : NSObject

@property (retain, nonatomic) NSMutableDictionary *cacheResultDictionary; // ivar: _cacheResultDictionary
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue; // ivar: _syncQueue


-(NSInteger)cacheResultForIdentifier:(id)arg0 ;
-(id)init;
-(void)addCacheResult:(NSInteger)arg0 forIdentifier:(id)arg1 ;
-(void)reset;


@end


#endif