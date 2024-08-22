// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSAPPPURCHASEHISTORYCACHE_H
#define SSAPPPURCHASEHISTORYCACHE_H


#import <Foundation/Foundation.h>

#import "SSAccount.h"
#import "SSDatabaseCache.h"
#import "SSAppPurchaseHistoryDatabase.h"

@interface SSAppPurchaseHistoryCache : NSObject {
    SSAccount *_account;
    SSDatabaseCache *_databaseCache;
    SSAppPurchaseHistoryDatabase *_purchaseHistoryDatabase;
}




-(BOOL)setImageData:(id)arg0 forAdamID:(id)arg1 imageToken:(id)arg2 ;
-(NSUInteger)purge:(NSUInteger)arg0 ;
-(NSUInteger)purgeableSpace;
-(id)allUncachedImages;
-(id)allUncachedImages:(id)arg0 ;
-(id)imageDataForAdamID:(id)arg0 ;
-(id)init;
-(id)initWithAccount:(id)arg0 ;
-(void)clearCacheForAdamID:(id)arg0 ;


@end


#endif