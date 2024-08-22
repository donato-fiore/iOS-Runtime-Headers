// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLTSIMPLECACHE_H
#define BLTSIMPLECACHE_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface BLTSimpleCache : NSObject {
    NSMutableArray *_objects;
    NSUInteger _capacity;
    os_unfair_lock_s _lock;
}




-(id)description;
-(id)initWithCapacity:(NSUInteger)arg0 ;
-(id)objects;
-(void)cacheObject:(id)arg0 ;


@end


#endif