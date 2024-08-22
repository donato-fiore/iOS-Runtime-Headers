// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AFCONNECTIONENTITLEMENTCACHE_H
#define AFCONNECTIONENTITLEMENTCACHE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface AFConnectionEntitlementCache : NSObject {
    NSMutableDictionary *_cache;
    NSMutableDictionary *_bundleIDToPIDMap;
}




+(id)sharedCache;
-(BOOL)hasEntitlement:(id)arg0 forPID:(int)arg1 ;
-(id)init;
-(void)cacheEntitlement:(id)arg0 forPID:(int)arg1 bundleID:(id)arg2 ;


@end


#endif