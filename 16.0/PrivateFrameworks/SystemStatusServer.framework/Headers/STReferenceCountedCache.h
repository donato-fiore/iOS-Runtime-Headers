// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STREFERENCECOUNTEDCACHE_H
#define STREFERENCECOUNTEDCACHE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface STReferenceCountedCache : NSObject {
    NSMutableDictionary *_cache;
    NSMutableDictionary *_referenceCounts;
}




-(id)cachedObjectForKey:(id)arg0 ;
-(id)init;
-(void)cacheObject:(id)arg0 forKey:(id)arg1 ;
-(void)clearObjectForKey:(id)arg0 ;
-(void)decrementReferenceCountForKey:(id)arg0 ;
-(void)incrementReferenceCountForKey:(id)arg0 ;


@end


#endif