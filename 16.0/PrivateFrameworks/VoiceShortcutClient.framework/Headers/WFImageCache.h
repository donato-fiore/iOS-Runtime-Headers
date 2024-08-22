// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFIMAGECACHE_H
#define WFIMAGECACHE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface WFImageCache : NSObject

@property (readonly, nonatomic) NSMutableDictionary *backingStore; // ivar: _backingStore
@property (readonly, nonatomic) os_unfair_lock_s lock; // ivar: _lock


-(id)init;
-(struct CGImage *)imageForKey:(id)arg0 ;
-(void)removeAllObjects;
-(void)setImage:(struct CGImage *)arg0 forKey:(id)arg1 ;


@end


#endif