// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NURENDERNODECACHE_H
#define NURENDERNODECACHE_H

@class NSHashTable;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NURenderNodeCache : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSHashTable *_cache;
}




+(id)sharedInstance;
-(NSUInteger)unhitCacheEntriesCount;
-(id)cachedNodeForNode:(id)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)init;
-(id)retrieveAndCacheNode:(id)arg0 ;
-(void)_addNode:(id)arg0 ;
-(void)addNode:(id)arg0 ;


@end


#endif