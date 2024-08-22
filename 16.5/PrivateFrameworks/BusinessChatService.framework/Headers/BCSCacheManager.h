// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BCSCACHEMANAGER_H
#define BCSCACHEMANAGER_H

@class NSString;
@protocol BCSCacheClearing, BCSConfigCaching, BCSConfigCacheSkipping, BCSShardCacheQueryable, BCSShardCacheSkipping, BCSItemCaching, BCSItemCacheSkipping, BCSBatchable, BCSDomainItemCaching, BCSItemCaching><BCSLinkItemCacheClearing;

#import <Foundation/Foundation.h>


@interface BCSCacheManager : NSObject <BCSCacheClearing, BCSConfigCaching, BCSConfigCacheSkipping, BCSShardCacheQueryable, BCSShardCacheSkipping, BCSItemCaching, BCSItemCacheSkipping, BCSBatchable, BCSDomainItemCaching>

 {
    id<BCSShardCacheQueryable> *_filterShardCache;
    id<BCSDomainItemCaching> *_domainItemCache;
    id<BCSItemCaching><BCSLinkItemCacheClearing> *_itemCache;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)shouldSkipCacheForConfigItemOfType:(NSInteger)arg0 ;
-(BOOL)shouldSkipCacheForItemOfType:(NSInteger)arg0 ;
-(BOOL)shouldSkipCacheForShardItemOfType:(NSInteger)arg0 ;
-(NSInteger)countOfExpiredShardsOfType:(NSInteger)arg0 ;
-(NSInteger)countOfShardsOfType:(NSInteger)arg0 ;
-(id)configItemForType:(NSInteger)arg0 ;
-(id)domainItemMatching:(id)arg0 ;
-(id)initWithBloomFilterShardCache:(id)arg0 domainItemCache:(id)arg1 itemCache:(id)arg2 ;
-(id)itemMatching:(id)arg0 ;
-(id)shardItemMatching:(id)arg0 ;
-(void)beginBatch;
-(void)clearCachesForLinkItemsAssociatedWithBundleID:(id)arg0 completion:(id)arg1 ;
-(void)clearCachesForType:(NSInteger)arg0 completion:(id)arg1 ;
-(void)clearExpiredCachesForType:(NSInteger)arg0 completion:(id)arg1 ;
-(void)deleteAllDomainItems;
-(void)deleteAllExpiredDomainItems;
-(void)deleteConfigItemForType:(NSInteger)arg0 ;
-(void)deleteDomainItemMatching:(id)arg0 ;
-(void)deleteExpiredItemsOfType:(NSInteger)arg0 ;
-(void)deleteExpiredShardItemsOfType:(NSInteger)arg0 ;
-(void)deleteItemMatching:(id)arg0 ;
-(void)deleteItemsOfType:(NSInteger)arg0 ;
-(void)deleteShardItemMatching:(id)arg0 ;
-(void)deleteShardItemsOfType:(NSInteger)arg0 ;
-(void)endBatch;
-(void)updateConfigItem:(id)arg0 withType:(NSInteger)arg1 ;
-(void)updateDomainItem:(id)arg0 withDomainItemIdentifier:(id)arg1 ;
-(void)updateDomainItemsForDomainShard:(id)arg0 ;
-(void)updateItem:(id)arg0 withItemIdentifier:(id)arg1 ;
-(void)updateShardItem:(id)arg0 withShardIdentifier:(id)arg1 ;


@end


#endif