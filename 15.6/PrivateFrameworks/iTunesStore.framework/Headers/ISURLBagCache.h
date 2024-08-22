// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ISURLBAGCACHE_H
#define ISURLBAGCACHE_H

@class SSLRUCache;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ISURLBagCache : NSObject {
    SSLRUCache *_cachedBags;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}




+(id)URLWithBagContext:(id)arg0 ;
+(id)sharedCache;
-(id)URLBagForContext:(id)arg0 ;
-(id)URLBagForContext:(id)arg0 withOptions:(NSInteger)arg1 ;
-(id)_newRequestWithURLBagContext:(id)arg0 ;
-(id)init;
-(void)_storeFrontChangedNotification:(id)arg0 ;
-(void)addURLBag:(id)arg0 ;
-(void)dealloc;
-(void)invalidateAllURLBags;
-(void)invalidateURLBagForContext:(id)arg0 ;


@end


#endif