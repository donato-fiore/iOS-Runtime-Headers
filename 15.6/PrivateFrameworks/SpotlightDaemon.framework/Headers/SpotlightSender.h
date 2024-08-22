// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SPOTLIGHTSENDER_H
#define SPOTLIGHTSENDER_H


#import <Foundation/Foundation.h>


@interface SpotlightSender : NSObject



+(BOOL)enabledForClient:(NSInteger)arg0 ;
+(BOOL)jobForAssets:(NSInteger)arg0 ;
+(BOOL)jobForDuet:(NSInteger)arg0 ;
+(BOOL)jobForImages:(NSInteger)arg0 ;
+(BOOL)jobForSuggestions:(NSInteger)arg0 ;
+(BOOL)jobForTest:(NSInteger)arg0 ;
+(id)clientConnection:(NSInteger)arg0 ;
+(id)clientConnection:(NSInteger)arg0 jobType:(int)arg1 ;
+(id)connectionForClient:(NSInteger)arg0 jobType:(NSInteger)arg1 ;
+(void)addInteraction:(id)arg0 intentClassName:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3 client:(NSInteger)arg4 ;
+(void)addOrUpdateSearchableItems:(id)arg0 itemsContent:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3 client:(NSInteger)arg4 ;
+(void)addUserActions:(id)arg0 bundleID:(id)arg1 protectionClass:(id)arg2 client:(NSInteger)arg3 ;
+(void)deleteAllInteractionsWithBundleID:(id)arg0 protectionClass:(id)arg1 client:(NSInteger)arg2 ;
+(void)deleteAllSearchableItemsWithBundleID:(id)arg0 client:(NSInteger)arg1 ;
+(void)deleteAllUserActivities:(id)arg0 client:(NSInteger)arg1 ;
+(void)deleteInteractionsWithGroupIdentifiers:(id)arg0 bundleID:(id)arg1 protectionClass:(id)arg2 client:(NSInteger)arg3 ;
+(void)deleteInteractionsWithIdentifiers:(id)arg0 bundleID:(id)arg1 protectionClass:(id)arg2 client:(NSInteger)arg3 ;
+(void)deleteSearchableItemsSinceDate:(id)arg0 bundleID:(id)arg1 client:(NSInteger)arg2 ;
+(void)deleteSearchableItemsWithDomainIdentifiers:(id)arg0 bundleID:(id)arg1 client:(NSInteger)arg2 ;
+(void)deleteSearchableItemsWithEncodedIdentifiers:(id)arg0 bundleID:(id)arg1 client:(NSInteger)arg2 ;
+(void)deleteSearchableItemsWithIdentifiers:(id)arg0 bundleID:(id)arg1 contentType:(id)arg2 client:(NSInteger)arg3 ;
+(void)deleteUserActivitiesWithPersistentIdentifiers:(id)arg0 bundleID:(id)arg1 client:(NSInteger)arg2 retainedData:(id)arg3 ;
+(void)dispatchWithOptions:(NSInteger)arg0 block:(id)arg1 ;
+(void)donateRelevantActions:(id)arg0 bundleID:(id)arg1 client:(NSInteger)arg2 ;
+(void)purgeSearchableItemsWithIdentifiers:(id)arg0 bundleID:(id)arg1 client:(NSInteger)arg2 ;
+(void)setup;


@end


#endif