// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSXPCSTORECONNECTIONINFO_H
#define NSXPCSTORECONNECTIONINFO_H

@class NSDictionary;

#import <Foundation/Foundation.h>

#import "NSXPCStoreServerPerConnectionCache.h"

@interface NSXPCStoreConnectionInfo : NSObject {
    NSDictionary *_entitlements;
    NSXPCStoreServerPerConnectionCache *_cache;
    ? _token;
    id *_userInfo;
    os_unfair_lock_s _lock;
}




-(id)description;
-(id)entitlements;
-(id)initForToken:(struct ? )arg0 entitlementNames:(id)arg1 cache:(id)arg2 ;
-(id)persistentStoreCoordinator;
-(id)userInfo;
-(struct ? )auditToken;
-(void)dealloc;


@end


#endif