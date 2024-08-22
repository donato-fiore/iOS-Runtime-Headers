// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCREADINGLIST_H
#define FCREADINGLIST_H

@class NSMutableDictionary;


#import "FCPrivateDataController.h"
#import "FCCloudContext.h"
#import "FCMTWriterLock.h"

@interface FCReadingList : FCPrivateDataController {
    NSMutableDictionary *_entriesByArticleID;
    FCCloudContext *_cloudContext;
    FCMTWriterLock *_itemsLock;
}




+(BOOL)requiresBatchedSync;
+(BOOL)requiresHighPriorityFirstSync;
+(BOOL)requiresPushNotificationSupport;
+(NSInteger)commandQueueUrgency;
+(NSUInteger)localStoreVersion;
+(id)backingRecordIDs;
+(id)backingRecordZoneIDs;
+(id)commandStoreFileName;
+(id)commandsToMergeLocalDataToCloud:(id)arg0 privateDataDirectory:(id)arg1 ;
+(id)desiredKeys;
+(id)localStoreFilename;
-(BOOL)canHelpRestoreZoneName:(id)arg0 ;
-(BOOL)isArticleOnReadingList:(id)arg0 ;
-(BOOL)shouldHideHeadline:(id)arg0 ;
-(NSUInteger)countOfAllArticlesSavedOutsideOfNewsSince:(id)arg0 ;
-(id)allKnownRecordNamesWithinRecordZoneWithID:(id)arg0 ;
-(id)allNonConsumedArticleIDs;
-(id)allNonConsumedArticleIDsIntersectingSet:(id)arg0 ;
-(id)allSortedArticleIDsInReadingList;
-(id)dateArticleWasAdded:(id)arg0 ;
-(id)initWithContext:(id)arg0 pushNotificationCenter:(id)arg1 storeDirectory:(id)arg2 ;
-(id)recordsForRestoringZoneName:(id)arg0 ;
-(void)addArticleToReadingList:(id)arg0 ;
-(void)addArticleToReadingList:(id)arg0 eventInitiationLevel:(NSInteger)arg1 origin:(NSUInteger)arg2 ;
-(void)addObserver:(id)arg0 ;
-(void)handleSyncWithChangedRecords:(id)arg0 deletedRecordNames:(id)arg1 ;
-(void)loadLocalCachesFromStore;
-(void)removeArticleFromReadingList:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif