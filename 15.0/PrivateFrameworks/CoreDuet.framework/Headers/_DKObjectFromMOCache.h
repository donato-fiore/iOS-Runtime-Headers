// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _DKOBJECTFROMMOCACHE_H
#define _DKOBJECTFROMMOCACHE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface _DKObjectFromMOCache : NSObject {
    NSMutableDictionary *_cache;
    NSMutableDictionary *_cacheEntries;
    NSMutableDictionary *_cacheHits;
    NSMutableDictionary *_cacheMisses;
}




-(id)init;


@end


#endif