// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BBOBJECTCACHE_H
#define BBOBJECTCACHE_H

@class NSHashTable;

#import <Foundation/Foundation.h>


@interface BBObjectCache : NSObject {
    NSHashTable *_cache;
}




-(id)cacheObject:(id)arg0 ;
-(id)init;


@end


#endif