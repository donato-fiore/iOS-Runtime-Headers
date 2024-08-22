// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BCSITEMCACHE_H
#define BCSITEMCACHE_H

@class NSString;
@protocol BCSItemCaching, BCSLinkItemCacheClearing, BCSBatchable, BCSUserDefaultsProviding;

#import <Foundation/Foundation.h>

#import "BCSBusinessItemMemoryCache.h"
#import "BCSLinkItemPersistentStore.h"

@interface BCSItemCache : NSObject <BCSItemCaching, BCSLinkItemCacheClearing, BCSBatchable>

 {
    BCSBusinessItemMemoryCache *_chatSuggestItemStore;
    BCSLinkItemPersistentStore *_linkItemStore;
    id<BCSUserDefaultsProviding> *_userDefaults;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)itemMatching:(id)arg0 ;
-(void)beginBatch;
-(void)deleteExpiredItemsOfType:(NSInteger)arg0 ;
-(void)deleteItemMatching:(id)arg0 ;
-(void)deleteItemsOfType:(NSInteger)arg0 ;
-(void)deleteLinkItemsWithBundleID:(id)arg0 ;
-(void)endBatch;
-(void)updateItem:(id)arg0 withItemIdentifier:(id)arg1 ;


@end


#endif