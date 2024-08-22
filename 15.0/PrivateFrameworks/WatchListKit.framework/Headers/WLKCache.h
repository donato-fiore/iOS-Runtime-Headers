// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WLKCACHE_H
#define WLKCACHE_H

@class NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface WLKCache : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableArray *_stack;
    NSMutableDictionary *_dictionary;
    NSUInteger _countLimit;
}


@property NSUInteger countLimit;


-(id)init;
-(id)objectForKey:(id)arg0 ;
-(void)_onQueueRemoveObjectForKey:(id)arg0 ;
-(void)removeAllObjects;
-(void)removeObjectForKey:(id)arg0 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;


@end


#endif