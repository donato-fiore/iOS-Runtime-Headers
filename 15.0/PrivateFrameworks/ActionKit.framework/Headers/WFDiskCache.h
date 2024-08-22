// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFDISKCACHE_H
#define WFDISKCACHE_H

@class NSURL;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface WFDiskCache : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, copy, nonatomic) NSURL *cacheURL; // ivar: _cacheURL


+(id)workflowCache;
-(id)actuallyGetObjectForKey:(id)arg0 ;
-(id)fileURLForKey:(id)arg0 ;
-(id)init;
-(id)initWithApplicationGroupIdentifier:(id)arg0 name:(id)arg1 ;
-(id)initWithCacheDirectory:(id)arg0 name:(id)arg1 ;
-(id)initWithCacheURL:(id)arg0 name:(id)arg1 ;
-(id)initWithName:(id)arg0 ;
-(id)objectForKey:(id)arg0 ;
-(id)objectForKeyComponents:(id)arg0 ;
-(void)actuallyRemoveObjectForKey:(id)arg0 ;
-(void)actuallySetObject:(id)arg0 forKey:(id)arg1 ;
-(void)objectForKey:(id)arg0 completion:(id)arg1 ;
-(void)removeObjectForKey:(id)arg0 ;
-(void)removeObjectForKey:(id)arg0 completion:(id)arg1 ;
-(void)removeObjectForKeyComponents:(id)arg0 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 completion:(id)arg2 ;
-(void)setObject:(id)arg0 forKeyComponents:(id)arg1 ;


@end


#endif