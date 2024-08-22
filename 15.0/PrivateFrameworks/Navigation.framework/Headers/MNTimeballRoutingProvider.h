// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MNTIMEBALLROUTINGPROVIDER_H
#define MNTIMEBALLROUTINGPROVIDER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "MNTimeballCache.h"
#import "MNTimeballNetworkRequester.h"

@interface MNTimeballRoutingProvider : NSObject {
    NSObject<OS_dispatch_queue> *_isolationQueue;
    MNTimeballCache *_cache;
    MNTimeballNetworkRequester *_networkRequester;
}




-(id)initWithCache:(id)arg0 ;
// -(void)_checkCacheForOptions:(NSInteger)arg0 forDestinations:(id)arg1 freshness:(id)arg2 fromOrigin:(id)arg3 callbackBlock:(id)arg4 callbackQueue:(unk)arg5 completionBlock:(id)arg6  ;
// -(void)_gotoNetworkForOptions:(NSInteger)arg0 forDestinations:(id)arg1 fromOrigin:(id)arg2 auditToken:(id)arg3 callbackBlock:(id)arg4 callbackQueue:(unk)arg5  ;
// -(void)requestRoutingOptions:(NSInteger)arg0 forDestinations:(id)arg1 freshness:(id)arg2 fromOrigin:(id)arg3 auditToken:(id)arg4 callbackBlock:(id)arg5 callbackQueue:(unk)arg6  ;
-(void)setNetworkRequester:(id)arg0 ;


@end


#endif