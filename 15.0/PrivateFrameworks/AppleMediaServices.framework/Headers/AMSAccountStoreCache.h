// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSACCOUNTSTORECACHE_H
#define AMSACCOUNTSTORECACHE_H


#import <Foundation/Foundation.h>


@interface AMSAccountStoreCache : NSObject



+(id)accountStoreForMediaType:(id)arg0 ;
+(id)cache;
+(id)cacheAccessQueue;
+(id)mediaTypeForAccountStore:(id)arg0 ;
+(void)_resetAccountStoreCache;


@end


#endif