// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SYITEMINDEXINGMANAGER_H
#define SYITEMINDEXINGMANAGER_H


#import <Foundation/Foundation.h>


@interface SYItemIndexingManager : NSObject



+(id)_coreSpotlightIndexBundleID;
+(id)_customKeyForKey:(id)arg0 ;
+(id)_postFilteredItems:(id)arg0 matchingUserActivityInfo:(id)arg1 ;
+(id)_queryStringForMatchingUserActivityInfo:(id)arg0 ;
+(id)searchableItemLinkingContentItem:(id)arg0 toContainerIdentifier:(id)arg1 relatedIdentifier:(id)arg2 domainIdentifier:(id)arg3 ;
+(id)searchableItemLinkingContentItem:(id)arg0 toContainerIdentifier:(id)arg1 uniqueIdentifier:(id)arg2 relatedIdentifier:(id)arg3 domainIdentifier:(id)arg4 ;
+(void)_fetchIndexedActivitiesWithActivityType:(id)arg0 completion:(id)arg1 ;
+(void)_fetchIndexedItemsLinkedToUserActivity:(id)arg0 extraFetchAttributes:(id)arg1 completion:(id)arg2 ;
+(void)fetchActivitiesWithActivityType:(id)arg0 completion:(id)arg1 ;
+(void)fetchIdentifiersLinkedToUserActivity:(id)arg0 completion:(id)arg1 ;
+(void)fetchLinkContextsDataForUserActivity:(id)arg0 completion:(id)arg1 ;
+(void)indexedContentItemsDidChange;
+(void)setUseLocalSearchIndex;


@end


#endif