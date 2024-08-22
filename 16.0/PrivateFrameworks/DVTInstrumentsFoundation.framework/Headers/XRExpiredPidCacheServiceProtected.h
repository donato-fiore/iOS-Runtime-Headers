// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef XREXPIREDPIDCACHESERVICEPROTECTED_H
#define XREXPIREDPIDCACHESERVICEPROTECTED_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_XRExpiredPidCache.h"

@interface XRExpiredPidCacheServiceProtected : NSObject {
    NSObject<OS_dispatch_queue> *_cacheQ;
    _XRExpiredPidCache *_cache;
}




-(id)init;
-(void)_performOnCache:(id)arg0 ;


@end


#endif